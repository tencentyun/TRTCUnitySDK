using UnityEngine;
using UnityEngine.UI;
using System;
using System.Threading;
using System.IO;
using System.Collections.Generic;
using trtc;

namespace TRTCCUnityDemo
{
    public class CustomCaptureScript : MonoBehaviour
    {
        public delegate void OnCustomCaptureAudioCallback(bool stop);
        public delegate void OnCustomCaptureVideoCallback(bool stop);

        public event OnCustomCaptureAudioCallback AudioCallback;
        public event OnCustomCaptureVideoCallback VideoCallback;

        public Toggle AudioToggle;
        public Toggle VideoToggle;
        public Dropdown AudioDropDown;
        public Dropdown VideoDropDown;

        private ITRTCCloud mTRTCCloud;

        private string mTestPath = Application.streamingAssetsPath + "/";

        private volatile bool mStartCustomCaptureAudio;
        private volatile bool mStartCustomCaptureVideo;

        private string mAudioFilePath;
        private uint mAudioFileLength;
        private string mVideoFilePath;
        private uint mVideoFileLength;
        private uint mAudioSamplerate;
        private uint mAudioChannel;
        private uint mVideoWidth;
        private uint mVideoHeight;

        private byte[] mAudioBuffer;
        private byte[] mVideoBuffer;
        private uint mOffsetAudioRead = 0;
        private uint mOffsetVideoRead = 0;

        private Thread mAudioCustomThread;
        private Thread mVideoCustomThread;

        void Start()
        {
            mTRTCCloud = ITRTCCloud.getTRTCShareInstance();

            AudioToggle.SetIsOnWithoutNotify(false);
            VideoToggle.SetIsOnWithoutNotify(false);

            List<string> audioNames = new List<string>();
            audioNames.Add("48_1_audio.pcm");
            audioNames.Add("16_1_audio.pcm");
            AudioDropDown.AddOptions(audioNames);

            List<string> videoNames = new List<string>();
            videoNames.Add("320x240_video.yuv");
            VideoDropDown.AddOptions(videoNames);

            AudioDropDown.onValueChanged.AddListener(this.OnAudioDropDownChanged);
            VideoDropDown.onValueChanged.AddListener(this.OnVideoDropDownChanged);
        }

        void OnDestroy()
        {
            mTRTCCloud.enableCustomAudioCapture(false);
            mTRTCCloud.enableCustomVideoCapture(false);
            mStartCustomCaptureAudio = false;
            mStartCustomCaptureVideo = false;
            if (mAudioCustomThread != null)
            {
                mAudioCustomThread.Join();
                mAudioCustomThread = null;
            }
            if (mVideoCustomThread != null)
            {
                mVideoCustomThread.Join();
                mVideoCustomThread = null;
            }
        }

        public void OnToggleCustomAudio()
        {
            UnityEngine.Debug.Log("OnToggleCustomAudio");
            if (this.AudioToggle.isOn)
            {
                // Turn on custom render audio
                if (AudioDropDown.value == 0)
                {
                    StartCustomCaptureAudio(mTestPath + "48_1_audio.pcm", 48000, 1);
                }
                else
                {
                    StartCustomCaptureAudio(mTestPath + "16_1_audio.pcm", 16000, 1);
                }
            }
            else
            {
                // Stop custom rendered audio
                StopCustomCaptureAudio();
            }
        }

        public void OnToggleCustomVideo()
        {
            UnityEngine.Debug.Log("OnToggleCustomVideo");
            if (this.VideoToggle.isOn)
            {
                // Turn on custom rendered video
                StartCustomCaptureVideo(mTestPath + "320x240_video.yuv", 320, 240);
            }
            else
            {
                // Turn off custom rendered video
                StopCustomCaptureVideo();
            }
        }

        private void OnAudioDropDownChanged(int value)
        {
            UnityEngine.Debug.Log("OnAudioDropDownChanged" + value);
            if (this.AudioToggle.isOn)
            {
                StopCustomCaptureAudio();
                if (AudioDropDown.value == 0)
                {
                    StartCustomCaptureAudio(mTestPath + "48_1_audio.pcm", 48000, 1);
                }
                else
                {
                    StartCustomCaptureAudio(mTestPath + "16_1_audio.pcm", 16000, 1);
                }
            }
        }

        private void OnVideoDropDownChanged(int value)
        {
            UnityEngine.Debug.Log("OnVideoDropDownChanged" + value);
        }

        public void CloseWindow()
        {
            UnityEngine.Debug.Log("CloseWindow");
            this.gameObject.transform.localScale = new Vector3(0, 0, 0);
        }

        private void StartCustomCaptureAudio(string path, uint samplerate, uint channel)
        {
            UnityEngine.Debug.Log("StartCustomCaptureAudio " + path);

            mAudioFilePath = path;
            mAudioSamplerate = samplerate;
            mAudioChannel = channel;
            mAudioFileLength = (uint)new FileInfo(path).Length;

            mStartCustomCaptureAudio = true;
            AudioCallback(false);
            mTRTCCloud.enableCustomAudioCapture(true);

            if (mAudioCustomThread == null)
            {
                mAudioCustomThread = new Thread(() =>
                {
                    while (mStartCustomCaptureAudio)
                    {
                        SendCustomAudioFrame();
                        Thread.Sleep(20);
                    }
                })
                { IsBackground = true };
                mAudioCustomThread.Start();
            }

        }

        private void SendCustomAudioFrame()
        {
            if (!mStartCustomCaptureAudio) return;
            try
            {
                using (FileStream fs = File.OpenRead(mAudioFilePath))
                {
                    uint bufSize = (uint)((960 * mAudioSamplerate / 48000) * (mAudioChannel * 16 / 8));
                    if (mAudioBuffer == null)
                        mAudioBuffer = new byte[bufSize];
                    if (mOffsetAudioRead + bufSize > mAudioFileLength)
                        mOffsetAudioRead = 0;
                    fs.Seek(mOffsetAudioRead, SeekOrigin.Begin);
                    fs.Read(mAudioBuffer, 0, (int)bufSize);
                    mOffsetAudioRead += bufSize;

                    TRTCAudioFrame frame = new TRTCAudioFrame();
                    frame.audioFormat = TRTCAudioFrameFormat.TRTCAudioFrameFormatPCM;
                    frame.channel = mAudioChannel;
                    frame.length = bufSize;
                    frame.data = mAudioBuffer;
                    frame.sampleRate = mAudioSamplerate;
                    mTRTCCloud.sendCustomAudioData(frame);
                }
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log(e.Message);
            }
        }

        private void StopCustomCaptureAudio()
        {
            mAudioFilePath = "";
            mAudioFileLength = 0;
            mOffsetAudioRead = 0;
            mAudioBuffer = null;

            mStartCustomCaptureAudio = false;
            mTRTCCloud.enableCustomAudioCapture(false);
            AudioCallback(true);

            if (mAudioCustomThread != null)
            {
                mAudioCustomThread.Join();
                mAudioCustomThread = null;
            }
        }

        private void StartCustomCaptureVideo(string path, uint width, uint height)
        {
            mVideoFilePath = path;
            mVideoWidth = width;
            mVideoHeight = height;
            mVideoFileLength = (uint)new FileInfo(mVideoFilePath).Length;

            mStartCustomCaptureVideo = true;
            VideoCallback(false);
            mTRTCCloud.enableCustomVideoCapture(true);

            if (mVideoCustomThread == null)
            {
                mVideoCustomThread = new Thread(() =>
                {
                    while (mStartCustomCaptureVideo)
                    {
                        SendCustomVideoFrame();
                        Thread.Sleep(66);
                    }
                })
                { IsBackground = true };
                mVideoCustomThread.Start();
            }
        }

        public void SendCustomVideoFrame()
        {
            if (!mStartCustomCaptureVideo) return;
            try
            {
                using (FileStream fs = File.OpenRead(mVideoFilePath))
                {
                    uint bufSize = mVideoWidth * mVideoHeight * 3 / 2;
                    if (mVideoBuffer == null)
                        mVideoBuffer = new byte[bufSize];
                    if (mOffsetVideoRead + bufSize > mVideoFileLength)
                        mOffsetVideoRead = 0;
                    fs.Seek(mOffsetVideoRead, SeekOrigin.Begin);
                    fs.Read(mVideoBuffer, 0, (int)bufSize);
                    mOffsetVideoRead += bufSize;

                    TRTCVideoFrame frame = new TRTCVideoFrame();
                    frame.videoFormat = TRTCVideoPixelFormat.TRTCVideoPixelFormat_I420;
                    frame.data = mVideoBuffer;
                    frame.width = mVideoWidth;
                    frame.height = mVideoHeight;
                    frame.length = bufSize;
                    frame.bufferType = TRTCVideoBufferType.TRTCVideoBufferType_Buffer;
                    mTRTCCloud.sendCustomVideoData(frame);
                }
            }
            catch (Exception e)
            {
                UnityEngine.Debug.Log(e.Message);
            }
        }

        private void StopCustomCaptureVideo()
        {
            mVideoFileLength = 0;
            mVideoFilePath = "";
            mVideoWidth = 0;
            mVideoHeight = 0;
            mOffsetVideoRead = 0;
            mVideoBuffer = null;

            mStartCustomCaptureVideo = false;
            mTRTCCloud.enableCustomVideoCapture(false);
            VideoCallback(true);

            if (mVideoCustomThread != null)
            {
                mVideoCustomThread.Join();
                mVideoCustomThread = null;
            }
        }
    }
}