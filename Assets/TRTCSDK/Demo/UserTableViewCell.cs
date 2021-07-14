using System;
using UnityEngine;
using UnityEngine.UI;
using trtc;

namespace TRTCCUnityDemo
{
    public class UserTableViewCell : MonoBehaviour
    {
        public delegate void MuteAudioHandler(string userId, bool mute);
        public delegate void MuteVideoHandler(string userId, bool mute);

        public event MuteAudioHandler DoMuteAudio;
        public event MuteVideoHandler DoMuteVideo;

        public Text TitleText;
        public Text AudioVolumeText;
        public Text StatisText;
        public Button RenderModeBtn;
        public Button AudioBtn;
        public Button VideoBtn;
        public Sprite AudioOnImg;
        public Sprite AudioOffImg;
        public Sprite VideoOnImg;
        public Sprite VideoOffImg;
        public Sprite VideoRenderFillImg;
        public Sprite VideoRenderFitImg;
        public TRTCVideoRender VideoRender;

        private string userIdStr;
        public string UserIdStr
        {
            set
            {
                userIdStr = value;

                if (string.IsNullOrEmpty(userIdStr))
                {
                    TitleText.text = "me";
                    AudioBtn.gameObject.SetActive(false);
                    VideoBtn.gameObject.SetActive(false);
                }
                else
                {
                    TitleText.text = userIdStr;
                    AudioBtn.gameObject.SetActive(true);
                    VideoBtn.gameObject.SetActive(true);
                }
            }
        }

        private TRTCVideoStreamType streamTypeInt;
        public TRTCVideoStreamType StreamTypeInt
        {
            set
            {
                streamTypeInt = value;
            }
        }

        public bool isAudioMute = false;
        public bool IsAudioMute
        {
            set
            {
                isAudioMute = value;
                updateAudioBtn();
            }
        }

        public bool isVideoMute = false;
        public bool IsVideoMute
        {
            set
            {
                isVideoMute = value;
                updateVideoBtn();
            }
        }

        private bool isVideoAvailable = false;
        public bool IsVideoAvailable
        {
            set
            {
                isVideoAvailable = value;
                VideoRender.gameObject.SetActive(isVideoAvailable);
                VideoRender.GetComponent<TRTCVideoRender>().Clear();
                VideoRender.SetForUser(userIdStr, streamTypeInt);
            }
        }

        public UInt32 AudioVolume
        {
            set
            {
                AudioVolumeText.text = string.Format("{0}", value);
            }
        }

        public bool AudioVolumeVisible
        {
            set
            {
                AudioVolumeText.gameObject.SetActive(value);
            }
        }

        public string UserStatisText
        {
            set
            {
                StatisText.text = value;
            }
        }

        public bool UserStatisVisible
        {
            set
            {
                StatisText.gameObject.SetActive(value);
            }
        }

        void Start()
        {

        }

        void Update()
        {

        }

        public void CellSwitchRenderMode()
        {
            TRTCVideoFillMode videoFillMode = VideoRender.GetViewFillMode();
            if (videoFillMode == TRTCVideoFillMode.TRTCVideoFillMode_Fit)
                videoFillMode = TRTCVideoFillMode.TRTCVideoFillMode_Fill;
            else
                videoFillMode = TRTCVideoFillMode.TRTCVideoFillMode_Fit;
            VideoRender.SetViewFillMode(videoFillMode);
            RenderModeBtn.image.sprite = (videoFillMode == TRTCVideoFillMode.TRTCVideoFillMode_Fit ? VideoRenderFillImg : VideoRenderFitImg);
        }

        public void CellMuteAudioAction()
        {
            if (DoMuteAudio != null)
            {
                DoMuteAudio(userIdStr, !isAudioMute);
            }
            isAudioMute = !isAudioMute;
            updateAudioBtn();
        }

        public void CellMuteVideoAction()
        {
            if (DoMuteVideo != null)
            {
                DoMuteVideo(userIdStr, !isVideoMute);
            }
            isVideoMute = !isVideoMute;
            updateVideoBtn();
        }

        private void updateAudioBtn()
        {
            AudioBtn.image.sprite = isAudioMute ? AudioOffImg : AudioOnImg;
        }

        private void updateVideoBtn()
        {
            VideoBtn.image.sprite = isVideoMute ? VideoOffImg : VideoOnImg;
        }
    }
}