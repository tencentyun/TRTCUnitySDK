using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using trtc;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using LitJson;
using System.Runtime.InteropServices;

namespace TRTCCUnityDemo
{
    public class AudioApiTest : MonoBehaviour, ITRTCCloudCallback, ITXMusicPlayObserver, ITRTCVideoRenderCallback
    {
        #region ITRTCCloudCallback
        public void onRecvCustomCmdMsg(string userId, int cmdID, int seq, byte[] message, int messageSize)
        {
            string msg = System.Text.Encoding.UTF8.GetString(message, 0, messageSize);
            lblCallbakLog.text += Environment.NewLine + String.Format("onRecvCustomCmdMsg {0}, {1} ,{2}", userId, cmdID, msg);
        }

        public void onMissCustomCmdMsg(string userId, int cmdID, int errCode, int missed)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onMissCustomCmdMsg {0}, {1}", userId, cmdID);
        }

        public void onStart(int id, int errCode)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("ITXMusicPlayObserver onStart {0}, {1}", id, errCode);
        }

        public void onPlayProgress(int id, long curPtsMS, long durationMS)
        {
            lblCallbakLog.text = Environment.NewLine + String.Format("ITXMusicPlayObserver onPlayProgress {0}, {1} ,{2}", id, durationMS,curPtsMS);
        }

        public void onComplete(int id, int errCode)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("ITXMusicPlayObserver onComplete {0}, {1}", id, errCode);
        }

        public void onError(TXLiteAVError errCode, String errMsg, IntPtr arg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onError {0}, {1}", errCode, errMsg);
        }

        public void onWarning(TXLiteAVWarning warningCode, String warningMsg, IntPtr arg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onWarning {0}, {1}", warningCode, warningMsg);
        }

        public void onEnterRoom(int result)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onEnterRoom {0}", result);
        }

        public void onExitRoom(int reason)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onExitRoom {0}", reason);
        }

        public void onSwitchRole(TXLiteAVError errCode, String errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSwitchRole {0}, {1}", errCode, errMsg);
        }

        public void onRemoteUserEnterRoom(String userId)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onRemoteUserEnterRoom {0}", userId);
        }

        public void onRemoteUserLeaveRoom(String userId, int reason)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onRemoteUserLeaveRoom {0}, {1}", userId, reason);
        }

        public void onUserVideoAvailable(String userId, bool available)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onUserVideoAvailable {0}, {1}", userId, available);
            // Important: startRemoteView is needed for receiving video stream.
            if (available)
            {
                mTRTCCloud.startRemoteView(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig, null);
            }
            else
            {
                mTRTCCloud.stopRemoteView(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig);
            }
        }

        public void onUserSubStreamAvailable(string userId, bool available)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onUserSubStreamAvailable {0}, {1}", userId, available);
        }

        public void onUserAudioAvailable(String userId, bool available)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onUserAudioAvailable {0}, {1}", userId, available);
        }

        public void onFirstVideoFrame(String userId, TRTCVideoStreamType streamType, int width, int height)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onFirstVideoFrame {0}, {1}, {2}, {3}", userId, streamType, width, height);
        }

        public void onFirstAudioFrame(String userId)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onFirstAudioFrame {0}", userId);
        }

        public void onSendFirstLocalVideoFrame(TRTCVideoStreamType streamType)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSendFirstLocalVideoFrame {0}", streamType);
        }

        public void onSendFirstLocalAudioFrame()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSendFirstLocalAudioFrame");
        }

        public void onNetworkQuality(TRTCQualityInfo localQuality, TRTCQualityInfo[] remoteQuality, UInt32 remoteQualityCount)
        {
            // lblCallbakLog.text += Environment.NewLine + String.Format("onNetworkQuality {0}, {1}, {2}", localQuality, remoteQuality, remoteQualityCount);
        }

        public void onStatistics(TRTCStatistics statis)
        {
            // lblCallbakLog.text += Environment.NewLine + String.Format("onStatistics {0}", statis));
            string localStatisText = "";
            foreach (TRTCLocalStatistics local in statis.localStatisticsArray)
            {
                if (local.streamType == TRTCVideoStreamType.TRTCVideoStreamTypeBig)
                {
                    localStatisText = string.Format("width: {0}\r\nheight: {1}\r\nvideoframerate: {2}\r\nvideoBitrate: {3}\r\naudioSampleRate: {4}\r\naudioBitrate:{5}\r\nstreamType:{6}\r\n",
                        local.width, local.height,
                        local.frameRate, local.videoBitrate, local.audioSampleRate, local.audioBitrate, local.streamType);
                }
            }

            foreach (TRTCRemoteStatistics remote in statis.remoteStatisticsArray)
            {
                if (remote.streamType == TRTCVideoStreamType.TRTCVideoStreamTypeBig)
                {
                    string remoteStatisText = "";
                    remoteStatisText = string.Format("finalLoss: {7}\r\njitterBufferDelay: {8}\r\nwidth: {0}\r\nheight: {1}\r\nvideoframerate: {2}\r\nvideoBitrate: {3}\r\naudioSampleRate: {4}\r\naudioBitrate:{5}\r\nstreamType:{6}\r\n",
                        remote.width, remote.height,
                        remote.frameRate, remote.videoBitrate, remote.audioSampleRate, remote.audioBitrate, remote.streamType,
                        remote.finalLoss, remote.jitterBufferDelay);
                }
            }
        }

        public void onConnectionLost()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onConnectionLost");
        }

        public void onTryToReconnect()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onTryToReconnect");
        }

        public void onConnectionRecovery()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onConnectionRecovery");
        }

        public void onCameraDidReady()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onCameraDidReady");
        }

        public void onMicDidReady()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onMicDidReady");
        }

        public void onUserVoiceVolume(TRTCVolumeInfo[] userVolumes, UInt32 userVolumesCount, UInt32 totalVolume)
        {
            foreach (TRTCVolumeInfo userVolume in userVolumes)
            {
            }
            lblCallbakLog.text += Environment.NewLine + String.Format("totalVolume=") + totalVolume.ToString();
        }

        public void onDeviceChange(String deviceId, TRTCDeviceType type, TRTCDeviceState state)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSwitchRole {0}, {1}, {2}", deviceId, type, state);
        }
        public void onRecvSEIMsg(String userId, Byte[] message, UInt32 msgSize)
        {
            string seiMessage = System.Text.Encoding.UTF8.GetString(message, 0, (int)msgSize);
            lblCallbakLog.text += Environment.NewLine + String.Format("onRecvSEIMsg {0}, {1}, {2}", userId, seiMessage, msgSize);
        }

        public void onStartPublishing(int err, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onStartPublishing {0}, {1}", err, errMsg);
        }

        public void onStopPublishing(int err, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onStopPublishing {0}, {1}", err, errMsg);
        }

        public void onStartPublishCDNStream(int err, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onStartPublishCDNStream {0}, {1}", err, errMsg);
        }

        public void onStopPublishCDNStream(int err, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onStopPublishCDNStream {0}, {1}", err, errMsg);
        }

        public void onConnectOtherRoom(string userId, TXLiteAVError errCode, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onConnectOtherRoom {0}, {1}, {2}", userId, errCode , errMsg);
        }

        public void onDisconnectOtherRoom(TXLiteAVError errCode, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onDisconnectOtherRoom {0}, {1}",  errCode , errMsg);
        }

        public void onSwitchRoom(TXLiteAVError errCode, string errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSwitchRoom {0}, {1}",  errCode , errMsg);
        }

        public void onSpeedTest(TRTCSpeedTestResult currentResult, int finishedCount, int totalCount)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSpeedTest {0}, {1} ,{2}",  currentResult.upLostRate , finishedCount , totalCount);
        }

        public void onTestMicVolume(int volume)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onTestMicVolume {0}",  volume );
        }

        public void onTestSpeakerVolume(int volume)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onTestSpeakerVolume {0}",  volume );
        }

        public void onAudioDeviceCaptureVolumeChanged(int volume, bool muted)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onAudioDeviceCaptureVolumeChanged {0} , {1}",  volume ,muted);
        }

        public void onAudioDevicePlayoutVolumeChanged(int volume, bool muted)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onAudioDevicePlayoutVolumeChanged {0} , {1}",  volume ,muted);
        }
        public void onSnapshotComplete(string userId, TRTCVideoStreamType type, byte[] data, int length, int width, int height, TRTCVideoPixelFormat format)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSnapshotComplete {0} , {1}", userId, type);
        }

        public void onSetMixTranscodingConfig(int errCode, String errMsg)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onSetMixTranscodingConfig {0} , {1}", errCode, errMsg);
        }

        public void onScreenCaptureCovered()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onScreenCaptureCovered");
        }

        public void onScreenCaptureStarted()
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onScreenCaptureStarted");
        }

        public void onScreenCapturePaused(int reason)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onScreenCapturePaused {0}", reason);
        }

        public void onScreenCaptureResumed(int reason)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onScreenCaptureResumed {0}", reason);
        }

        public void onScreenCaptureStoped(int reason)
        {
            lblCallbakLog.text += Environment.NewLine + String.Format("onScreenCaptureStoped {0}", reason);
        }
        #endregion

        #region UI
        [SerializeField] private InputField inputRoomID;
        [SerializeField] private InputField InputUserId;
        [SerializeField] private Text lblBtnClickLog;
        [SerializeField] private Text lblCallbakLog;
        //public UserTableView userTableView;
        [SerializeField] private Canvas canvas;
        [SerializeField] private GameObject content;
        [SerializeField] private Font font;
        #endregion

        #region trtc
        private ITRTCCloud mTRTCCloud; 
        private ITXAudioEffectManager mTXAudioEffectManager;
        private ITXDeviceManager mTXDeviceManager;

        private TRTCVideoStreamType _streamType = TRTCVideoStreamType.TRTCVideoStreamTypeBig;
        private bool _enable = true;

        private VideoRenderType _videoRenderType = VideoRenderType.None;
        private TRTCVideoPixelFormat _videoFormat = TRTCVideoPixelFormat.TRTCVideoPixelFormat_BGRA32;
        #endregion
        
        void Start()
        {
            createBtns();
            initTrtc();
        }
        public void Awake()
        {
#if PLATFORM_ANDROID
                _videoFormat = TRTCVideoPixelFormat.TRTCVideoPixelFormat_RGBA32;
#endif
        }
        private void createBtns()
        {
            AudioDemoBtnBuilder builder = new AudioDemoBtnBuilder(content, font, this);
            builder.init(lblBtnClickLog);
            inputRoomID.text = "1901";
            InputUserId.text = "9999";
            Button enterRoomBtn = transform.Find("roomPanel/btnLogin").gameObject.GetComponent<Button>();
            enterRoomBtn.onClick.AddListener(() => 
            {
                DataManager.GetInstance().SetUserID(InputUserId.text);
                DataManager.GetInstance().SetRoomID(inputRoomID.text);
                SceneManager.LoadScene("RoomSceme", LoadSceneMode.Single);
            });
        }

        private void initTrtc()
        {
            mTRTCCloud = ITRTCCloud.getTRTCShareInstance();
            mTRTCCloud.addCallback(this);
            mTXAudioEffectManager = mTRTCCloud.getAudioEffectManager();
            mTXDeviceManager = mTRTCCloud.getDeviceManager();
        }
        IntPtr mNativeTextureData = Marshal.AllocHGlobal(4000 * 3000 * 4);
        bool isVideoRenderDataClick =false;
        // Update is called once per frame
        // void Update()
        // {
        //     // if(isVideoRenderDataClick)
        //     // {
        //     //     int width = 0;
        //     //     int height = 0;
        //     //     int length =0 ;
        //     //     string _userId = "";
        //     //     mTRTCCloud.GetVideoRenderData(_userId, mNativeTextureData,ref width,ref height,ref length,false);
        //     //     lblBtnClickLog.text =  Environment.NewLine + string.Format("width = {0}, height={1}, length={2}，data={3}",width,height,length, mNativeTextureData.ToString());
        //     // }
        // }

        void OnDestroy()
        {
            mTRTCCloud.removeCallback(this);
            ITRTCCloud.destroyTRTCShareInstance();
            DataManager.GetInstance().ResetLocalAVFlag();
            Marshal.FreeHGlobal(mNativeTextureData);
        }
        #region btn click
        public void onRenderVideoFrame(string userId, TRTCVideoStreamType streamType, TRTCVideoFrame frame)
        {
            //lblBtnClickLog.text += Environment.NewLine + "onRenderVideoFrame";
        }
        
        public void GetVideoRenderDataClick()
        {
            int width = 0;
            int height = 0;
            int length =0 ;
            int mTextureRotation = 0;
            string _userId = "";
            isVideoRenderDataClick=true;
            mTRTCCloud.GetVideoRenderData("",ref mTextureRotation, ref width,ref height,ref length,false);
            lblBtnClickLog.text +=  Environment.NewLine + string.Format("width = {0}, height={1}, length={2}，data={3}",width,height,length, mNativeTextureData.ToString());
        }
        public void enterRoomClick()
        {
            TRTCParams trtcParams = new TRTCParams();
            trtcParams.sdkAppId = GenerateTestUserSig.SDKAPPID;
            DataManager.GetInstance().SetRoomID(inputRoomID.text);
            DataManager.GetInstance().SetUserID(InputUserId.text);
            trtcParams.roomId = uint.Parse(DataManager.GetInstance().GetRoomID());
            trtcParams.strRoomId = DataManager.GetInstance().GetRoomID();
            trtcParams.userId = DataManager.GetInstance().GetUserID();
            trtcParams.userSig = GenerateTestUserSig.GetInstance().GenTestUserSig(DataManager.GetInstance().GetUserID());
            // 如果您有进房权限保护的需求，则参考文档{https://cloud.tencent.com/document/product/647/32240}完成该功能。
            // 在有权限进房的用户中的下面字段中添加在服务器获取到的privateMapKey。
            trtcParams.privateMapKey = "";
            trtcParams.businessInfo = "";
            // trtcParams.role = DataManager.GetInstance().roleType;
            trtcParams.role = TRTCRoleType.TRTCRoleAnchor;
            // TRTCAppScene scene = DataManager.GetInstance().appScene;
            TRTCAppScene scene = TRTCAppScene.TRTCAppSceneLIVE;
            mTRTCCloud.enterRoom(ref trtcParams, scene);
            TRTCNetworkQosParam qosParams = DataManager.GetInstance().qosParams;      // 网络流控相关参数设置
            mTRTCCloud.setNetworkQosParam(ref qosParams);
            lblBtnClickLog.text+="Scene:" + scene + ", Role:" + trtcParams.role + ", Qos-Prefer:" + qosParams.preference + ", Qos-CtrlMode:" + qosParams.controlMode;
        }

        public void exitRoomClick()
        {
            mTRTCCloud.exitRoom();
            DataManager.GetInstance().ResetLocalAVFlag();
            TRTCVideoEncParam videoEncParams = DataManager.GetInstance().videoEncParam;
            mTRTCCloud.setVideoEncoderParam(ref videoEncParams);
        }
        public void switchRoleClick()
        {
            mTRTCCloud.switchRole(DataManager.GetInstance().roleType);
        }

        public void switchRoleAudience()
        {
            mTRTCCloud.switchRole(TRTCRoleType.TRTCRoleAudience);
        }
        public void switchRoleArchor()
        {
            mTRTCCloud.switchRole(TRTCRoleType.TRTCRoleAnchor);
        }
        public void ConnectOtherRoomClick()
        {
            JsonData jsonObj =new JsonData();
            jsonObj["roomId"] = 1908;
            jsonObj["userId"] = "345";
            string jsonData = JsonMapper.ToJson(jsonObj);
            mTRTCCloud.connectOtherRoom(jsonData);
        }
        public void disconnectOtherRoomClick()
        {
            mTRTCCloud.disconnectOtherRoom();
        }
        public void sendSEIMsg()
        {
            string seiMsg = "test sei message";
            bool result = mTRTCCloud.sendSEIMsg(System.Text.Encoding.Default.GetBytes(seiMsg), System.Text.Encoding.Default.GetByteCount(seiMsg), 3);
            lblBtnClickLog.text += Environment.NewLine + "sendSEIMsg = "+result.ToString();
        }

        public void sendCustomCmdMsgClick()
        {
            string cmdMsg = "test Custom CMD";
            bool result = mTRTCCloud.sendCustomCmdMsg(01, System.Text.Encoding.Default.GetBytes(cmdMsg), System.Text.Encoding.Default.GetByteCount(cmdMsg), false,false);
            lblBtnClickLog.text += Environment.NewLine + "sendCustomCmdMsg = " + result.ToString();
        }

        public void switchRoomClick()
        {
            TRTCSwitchRoomConfig mConfig =new TRTCSwitchRoomConfig();
            mConfig.roomId =1907;
            mConfig.userSig =GenerateTestUserSig.GetInstance().GenTestUserSig(DataManager.GetInstance().GetUserID());
            //mConfig.privateMapKey = "";
            mTRTCCloud.switchRoom(mConfig);
        }

        public void startPublishCDNStreamClick()
        {
            TRTCPublishCDNParam mConfig = new TRTCPublishCDNParam();
            mConfig.appId = 2333;
            mConfig.bizId = 1999;
            mConfig.url = "http://wwww.baidu.com";
            mTRTCCloud.startPublishCDNStream(mConfig);
        }

        public void stopPublishCDNStreamClick()
        {
            mTRTCCloud.stopPublishCDNStream();
        }

        //音频相关接口函数
        public void startLocalAudioClick()
        {
            mTRTCCloud.muteLocalVideo(false);
            mTRTCCloud.startLocalAudio(TRTCAudioQuality.TRTCAudioQualityDefault);
        }

        public void stopLocalAudioClick()
        {
            mTRTCCloud.stopLocalAudio();
        }

        public void muteLocalAudioClickTrue()
        {
            mTRTCCloud.muteLocalAudio(true);
        }
         public void muteLocalAudioClickFalse()
        {
            mTRTCCloud.muteLocalAudio(false);
        }

        public void muteRemoteAudioClickTrue()
        {
            mTRTCCloud.muteRemoteAudio("345",true);
        }

        public void muteRemoteAudioClickFalse()
        {
            mTRTCCloud.muteRemoteAudio("345",false);
        }
        public void muteAllRemoteAudioClickTrue()
        {
            mTRTCCloud.muteAllRemoteAudio(true);
        }

        public void muteAllRemoteAudioClickFalse()
        {
            mTRTCCloud.muteAllRemoteAudio(false);
        }

        public void setRemoteAudioVolumeClick0()
        {
            mTRTCCloud.setRemoteAudioVolume("345",0);
        }
        public void setRemoteAudioVolumeClick100()
        {
            mTRTCCloud.setRemoteAudioVolume("345",100);
        }

        public void setAudioCaptureVolumeClick()
        {
            mTRTCCloud.setAudioCaptureVolume(95);
        }
        public void getAudioCaptureVolumeClick()
        {
            int volume = mTRTCCloud.getAudioCaptureVolume();
            lblBtnClickLog.text += Environment.NewLine + String.Format("CaptureVolume=") + volume.ToString();
        }
        
         public void setAudioPlayoutVolumeClick()
        {
            mTRTCCloud.setAudioPlayoutVolume(98);
        }
        public void getAudioPlayoutVolumeClick()
        {
            int volume = mTRTCCloud.getAudioPlayoutVolume();
            lblBtnClickLog.text += Environment.NewLine + String.Format("PlayVolume=") + volume.ToString();
        }
        public void enableAudioVolumeEvaluationClick2000()
        {
            mTRTCCloud.enableAudioVolumeEvaluation(2000);
        }
        public void enableAudioVolumeEvaluationClick0()
        {
            mTRTCCloud.enableAudioVolumeEvaluation(0);
        }
        public void startAudioRecordingClick()
        {
            TRTCAudioRecordingParams recordParams = new TRTCAudioRecordingParams();
            recordParams.filePath = Application.persistentDataPath+"/audio.aac";
            int value = mTRTCCloud.startAudioRecording(ref recordParams);
            lblBtnClickLog.text += Environment.NewLine + String.Format("audioRecordig=") + value.ToString();
        }
        public void stopAudioRecordingClick()
        {
            mTRTCCloud.stopAudioRecording();
        }
        
        public void setVoiceReverbTypeClick()
        {
            mTXAudioEffectManager.setVoiceReverbType(TXVoiceReverbType.TXVoiceReverbType_6);
        }
        public void setVoiceReverbTypeClickDc()
        {
            mTXAudioEffectManager.setVoiceReverbType(TXVoiceReverbType.TXVoiceReverbType_4);
        }
        public void setVoiceReverbTypeClickClose()
        {
            mTXAudioEffectManager.setVoiceReverbType(TXVoiceReverbType.TXVoiceReverbType_0);
        }

        public void startPlayMusicClick()
        {
            mTXAudioEffectManager.setMusicObserver(13, this);
            AudioMusicParam musicParam =new AudioMusicParam();
            musicParam.id =13;
            musicParam.publish=true;
            musicParam.path="https://imgcache.qq.com/operation/dianshi/other/daoxiang.72c46ee085f15dc72603b0ba154409879cbeb15e.mp3";
            mTXAudioEffectManager.startPlayMusic(musicParam);
        }
        public void stopPlayMusicClick()
        {
            mTXAudioEffectManager.stopPlayMusic(13);
        }

        public void pausePlayMusicClcik()
        {
            mTXAudioEffectManager.pausePlayMusic(13);   
        }

        public void resumePlayMusicClick()
        {
            mTXAudioEffectManager.resumePlayMusic(13);
        }        

        public void setMusicPublishVolumeClick0()
        {
            mTXAudioEffectManager.setMusicPublishVolume(13,0);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPublishVolume = 0";
        }

        public void setMusicPublishVolumeClick100()
        {
            mTXAudioEffectManager.setMusicPublishVolume(13, 100);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPublishVolume = 100";
        }

        public void setMusicPlayoutVolumeClick()
        {
            mTXAudioEffectManager.setMusicPlayoutVolume(13,88);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPlayoutVolume = 88";
        }

        public void setMusicPlayoutVolumeClick0()
        {
            mTXAudioEffectManager.setMusicPlayoutVolume(13,0);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPlayoutVolume = 0";
        }

        public void setMusicPlayoutVolumeClick100()
        {
            mTXAudioEffectManager.setMusicPlayoutVolume(13, 100);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPlayoutVolume = 100";
        }

        public void setAllMusicVolumeClick0()
        {
            mTXAudioEffectManager.setAllMusicVolume(0);
            lblBtnClickLog.text += Environment.NewLine + "setAllMusicVolume = 0";
        }

        public void setAllMusicVolumeClick100()
        {
            mTXAudioEffectManager.setAllMusicVolume(100);
            lblBtnClickLog.text += Environment.NewLine + "setAllMusicVolume = 100";
        }

        public void setMusicPitchClick()
        {
            mTXAudioEffectManager.setMusicPitch(13, 1);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPitch = 1";
        }

        public void setMusicPitchClickFu()
        {
            mTXAudioEffectManager.setMusicPitch(13, -1);
            lblBtnClickLog.text += Environment.NewLine + "setMusicPitch = -1";
        }

        public void setMusicSpeedRateClick1()
        {
            mTXAudioEffectManager.setMusicSpeedRate(13,0.5);
            lblBtnClickLog.text += Environment.NewLine + "setMusicSpeedRate = 1";
        }

        public void setMusicSpeedRateClick2()
        {
            mTXAudioEffectManager.setMusicSpeedRate(13, 1);
            lblBtnClickLog.text += Environment.NewLine + "setMusicSpeedRate = 1";
        }

        public void getMusicCurrentPosInMSClick()
        {
            int result = mTXAudioEffectManager.getMusicCurrentPosInMS(13);
            lblBtnClickLog.text += Environment.NewLine + "getMusicCurrentPosInMS = "+result.ToString();
        }

        public void seekMusicToPosInMSClick()
        {
            mTXAudioEffectManager.seekMusicToPosInMS(13,500);
            lblBtnClickLog.text += Environment.NewLine + "seekMusicToPosInMS = 500";
        }

        public void getMusicDurationInMSClick()
        {
            String path = "https://imgcache.qq.com/operation/dianshi/other/daoxiang.72c46ee085f15dc72603b0ba154409879cbeb15e.mp3";
            int result = mTXAudioEffectManager.getMusicDurationInMS(path);
            lblBtnClickLog.text += Environment.NewLine + "getMusicDurationInMS = "+result.ToString();
        }
        //设备相关接口函数
        public void isFrontCameraClick()
        {
           bool isFront = mTXDeviceManager.isFrontCamera();
           lblBtnClickLog.text += Environment.NewLine + " isFrontCamera="+isFront.ToString();
        }

        public void switchCameraClick()
        {
            mTXDeviceManager.switchCamera(false);
        }

        public void switchCameraTrueClick()
        {
            mTXDeviceManager.switchCamera(true);
        }

        //public void isCameraZoomSupportedClick()
        //{
        //    bool isCameraZoomSupported = mTXDeviceManager.isCameraZoomSupported();
        //    lblBtnClickLog.text += Environment.NewLine + " isFrontCamera="+isCameraZoomSupported.ToString();
        //}

        public void getCameraZoomMaxRatioClick()
        {
            double ratio = mTXDeviceManager.getCameraZoomMaxRatio();
            lblBtnClickLog.text += Environment.NewLine + " getCameraZoomMaxRatio="+ratio.ToString();
        }

        public void setCameraZoomRatioClick()
        {
            mTXDeviceManager.setCameraZoomRatio(3.6);
            lblBtnClickLog.text += Environment.NewLine + " setCameraZoomRatio = 3.6";
        }

        public void setCameraZoomRatio9Click()
        {
            mTXDeviceManager.setCameraZoomRatio(9);
            lblBtnClickLog.text += Environment.NewLine + " setCameraZoomRatio = 9";
        }

        public void isAutoFocusEnabledClick()
        {
            bool isAutoFocusEnabled = mTXDeviceManager.isAutoFocusEnabled();
            lblBtnClickLog.text += Environment.NewLine + " isAutoFocusEnabled="+isAutoFocusEnabled.ToString();
        }

        public void enableCameraAutoFocusClick()
        {
            int AutoFocus = mTXDeviceManager.enableCameraAutoFocus(true);
            lblBtnClickLog.text += Environment.NewLine + " AutoFocus="+AutoFocus.ToString();
        }

        public void enableCameraAutoFocusFalseClick()
        {
            int AutoFocus = mTXDeviceManager.enableCameraAutoFocus(false);
            lblBtnClickLog.text += Environment.NewLine + " AutoFocus="+AutoFocus.ToString();
        }
        public void setCameraFocusPositionClick()
        {
            int FocusPosition = mTXDeviceManager.setCameraFocusPosition(10,10);
            lblBtnClickLog.text += Environment.NewLine + " FocusPosition="+FocusPosition.ToString();
        }
        public void setCameraFocusPositionClick100()
        {
            int FocusPosition = mTXDeviceManager.setCameraFocusPosition(100,100);
            lblBtnClickLog.text += Environment.NewLine + " FocusPosition="+FocusPosition.ToString();
        }

        public void enableCameraTorchClick()
        {
            int result = mTXDeviceManager.enableCameraTorch(true);
            lblBtnClickLog.text += Environment.NewLine + " enableCameraTorch="+result.ToString();
        }

        public void enableCameraTorchClickFalse()
        {
            int result = mTXDeviceManager.enableCameraTorch(false);
            lblBtnClickLog.text += Environment.NewLine + " enableCameraTorch="+result.ToString();
        }
        public void setSystemVolumeTypeMedia()
        {
            int result = mTXDeviceManager.setSystemVolumeType(TXSystemVolumeType.TXSystemVolumeTypeMedia);
            lblBtnClickLog.text += Environment.NewLine + " setSystemVolumeType TXSystemVolumeTypeMedia result="+result.ToString();
        }

        public void setSystemVolumeTypeVOIP()
        {
            int result = mTXDeviceManager.setSystemVolumeType(TXSystemVolumeType.TXSystemVolumeTypeVOIP);
            lblBtnClickLog.text += Environment.NewLine + " setSystemVolumeType TXSystemVolumeTypeVOIP result="+result.ToString();
        }

        public void setSystemVolumeTypeAuto()
        {
            int result = mTXDeviceManager.setSystemVolumeType(TXSystemVolumeType.TXSystemVolumeTypeAuto);
            lblBtnClickLog.text += Environment.NewLine + " setSystemVolumeType TXSystemVolumeTypeAuto result="+result.ToString();
        }

        public void setAudioRouteSpeakerphone()
        {
            int result = mTXDeviceManager.setAudioRoute(TXAudioRoute.TXAudioRouteSpeakerphone);
            lblBtnClickLog.text += Environment.NewLine + " setAudioRoute TXAudioRouteSpeakerphone="+result.ToString();
        }

        public void setAudioRouteEarpiece()
        {
            int result = mTXDeviceManager.setAudioRoute(TXAudioRoute.TXAudioRouteEarpiece);
            lblBtnClickLog.text += Environment.NewLine + " setAudioRoute TXAudioRouteEarpiece="+result.ToString();
        }

        //视频相关接口函数
        public void startLocalPreviewClick()
        {
            mTRTCCloud.startLocalPreview(false, null);
        }
        public void stopLocalPreviewClick()
        {
            mTRTCCloud.stopLocalPreview();
        }

        public void setBeautyStyleClick9()
        {
            mTRTCCloud.setBeautyStyle(TRTCBeautyStyle.TRTCBeautyStyleSmooth, 9, 9, 9);
        }

        public void setBeautyStyleClick0()
        {
            mTRTCCloud.setBeautyStyle(TRTCBeautyStyle.TRTCBeautyStyleSmooth, 0, 0, 0);
        }

        public void setWaterMarkClick()
        {
            string mTestPath = Application.streamingAssetsPath + "/watermark_img.png";
            mTRTCCloud.setWaterMark(TRTCVideoStreamType.TRTCVideoStreamTypeBig, mTestPath, TRTCWaterMarkSrcType.TRTCWaterMarkSrcTypeFile, 1000, 1000, 0, 0, 0.5f);
        }
        public void setVideoEncoderMirrorClick()
        {
            mTRTCCloud.setVideoEncoderMirror(true);
        }

        public void setVideoEncoderMirrorClickFalse()
        {
            mTRTCCloud.setVideoEncoderMirror(false);
        }

        //设备和网络测试
        public void startSpeedTestClick()
        {
            mTRTCCloud.startSpeedTest(GenerateTestUserSig.SDKAPPID,DataManager.GetInstance().GetUserID(),GenerateTestUserSig.GetInstance().GenTestUserSig(DataManager.GetInstance().GetUserID()));
        }
        public void stopSpeedTestClick()
        {
            mTRTCCloud.stopSpeedTest();
        }
        // other
        public void getSDKVersionClick()
        {
            string version = mTRTCCloud.getSDKVersion();
            lblBtnClickLog.text += Environment.NewLine + String.Format("version=" + version);
        }
        public void clearLogClick()
        {
            lblBtnClickLog.text = "";
            lblCallbakLog.text = "";
        }

        public void setMixTranscodingConfigClick()
        {
            TRTCTranscodingConfig transcodingConfig =new TRTCTranscodingConfig();
            transcodingConfig.appId = 1252463788;
            transcodingConfig.bizId = 3891;
            transcodingConfig.videoWidth =360;
            transcodingConfig.mode = TRTCTranscodingConfigMode.TRTCTranscodingConfigMode_Manual;
            transcodingConfig.videoHeight = 640;
            transcodingConfig.videoFramerate = 15;
            transcodingConfig.videoGOP = 2;
            transcodingConfig.videoBitrate = 1000;
            transcodingConfig.audioBitrate = 64;
            transcodingConfig.audioSampleRate = 48000;
            transcodingConfig.audioChannels = 2;
            //查看
            //http://liteavapp.qcloud.com/live/streamIdtest.flv
            transcodingConfig.streamId = "streamIdtest";
            TRTCMixUser[] mixUsersArray = new TRTCMixUser[2];
            mixUsersArray[0].userId = "9999";
            mixUsersArray[0].zOrder = 1; // zOrder 为0代表主播画面位于最底层
            mixUsersArray[0].streamType = TRTCVideoStreamType.TRTCVideoStreamTypeBig;
            mixUsersArray[0].rect.left = 0;
            mixUsersArray[0].rect.top = 0;
            mixUsersArray[0].rect.right = 1280;
            mixUsersArray[0].rect.bottom = 720;
            mixUsersArray[0].roomId = null; // 本地用户不用填写 roomID，远程需要

            mixUsersArray[1].userId = "110";
            mixUsersArray[1].zOrder = 3;
            mixUsersArray[1].streamType = TRTCVideoStreamType.TRTCVideoStreamTypeBig;
            mixUsersArray[1].rect.left = 10; //仅供参考
            mixUsersArray[1].rect.top = 10; //仅供参考
            mixUsersArray[1].rect.right = 10+280; //仅供参考
            mixUsersArray[1].rect.bottom = 10+220; //仅供参考
            mixUsersArray[1].roomId = "2031"; // 本地用户不用填写 roomID，远程需要


            transcodingConfig.mixUsersArray = mixUsersArray;
            transcodingConfig.mixUsersArraySize = 2;
            mTRTCCloud.setMixTranscodingConfig(transcodingConfig);
        }

        #endregion

    }
}

