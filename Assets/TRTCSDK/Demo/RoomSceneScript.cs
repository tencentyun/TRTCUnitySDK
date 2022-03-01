using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using trtc;
using TRTCCUnityDemo;
# if PLATFORM_ANDROID
using UnityEngine.Android;
# endif

namespace TRTCCUnityDemo
{
    public class RoomSceneScript : MonoBehaviour, ITRTCCloudCallback
    {
        public RectTransform mainCanvas;
        public UserTableView userTableView;

        public GameObject settingPrefab;
        public GameObject customCapturePrefab;
        private SettingScript settingScript = null;
        private CustomCaptureScript customCaptureScript = null;

        private Toggle captureVideoToggle;
        private Toggle captureAudioToggle;
        private Toggle muteLocalVideoToggle;
        private Toggle muteLocalAudioToggle;

        private ITRTCCloud mTRTCCloud;

        void Start()
        {
            
            Toggle toggleSetting = transform.Find("PanelTest/Viewport/Content/ToggleSetting").gameObject.GetComponent<Toggle>();
            toggleSetting.onValueChanged.AddListener(this.OnToggleSetting);

            Toggle toggleSendSEIMsg = transform.Find("PanelTest/Viewport/Content/ToggleSendSEIMsg").gameObject.GetComponent<Toggle>();
            toggleSendSEIMsg.onValueChanged.AddListener(this.OnToggleSendSEIMsg);

            // Toggle toggleStartPublishing = transform.Find("PanelTest/Viewport/Content/ToggleStartPublishing").gameObject.GetComponent<Toggle>();
            // toggleStartPublishing.onValueChanged.AddListener(this.OnTogglePublishing);

            // Toggle toggleCustomCapture = transform.Find("PanelOperate/Viewport/Content/ToggleCustomCapture").gameObject.GetComponent<Toggle>();
            // toggleCustomCapture.onValueChanged.AddListener(this.OnToggleCustomCapture);

            Toggle beautySet = transform.Find("PanelOperate/Viewport/Content/Beauty").gameObject.GetComponent<Toggle>();
            beautySet.onValueChanged.AddListener(this.OnToggleBeauty);

            // Toggle videoMirror = transform.Find("PanelOperate/Viewport/Content/VideoMirror").gameObject.GetComponent<Toggle>();
            // videoMirror.onValueChanged.AddListener(this.OnToggleVideoMirror);

            Toggle screenCapture = transform.Find("PanelOperate/Viewport/Content/ToggleScreenCapture").gameObject.GetComponent<Toggle>();
            screenCapture.onValueChanged.AddListener(this.OnToggleScreenCapture);

            Button leaveRoomButton = transform.Find("PanelTest/Viewport/Content/BtnLeaveRoom").gameObject.GetComponent<Button>();
            leaveRoomButton.onClick.AddListener(this.OnLeaveRoomClick);

            captureAudioToggle = transform.Find("PanelOperate/Viewport/Content/ToggleMic").gameObject.GetComponent<Toggle>();
            captureAudioToggle.onValueChanged.AddListener(this.OnToggleMic);

            // muteLocalAudioToggle = transform.Find("PanelOperate/Viewport/Content/ToggleMuteLocalAudio").gameObject.GetComponent<Toggle>();
            // muteLocalAudioToggle.onValueChanged.AddListener(this.OnToggleMuteLocalAudio);

            Toggle toggleMuteRemoteAudio = transform.Find("PanelOperate/Viewport/Content/ToggleMuteRemoteAudio").gameObject.GetComponent<Toggle>();
            toggleMuteRemoteAudio.onValueChanged.AddListener(this.OnToggleMuteRemoteAudio);

            captureVideoToggle = transform.Find("PanelOperate/Viewport/Content/ToggleCamera").gameObject.GetComponent<Toggle>();
            captureVideoToggle.onValueChanged.AddListener(this.OnToggleCamera);

            muteLocalVideoToggle = transform.Find("PanelOperate/Viewport/Content/ToggleMuteLocalVideo").gameObject.GetComponent<Toggle>();
            muteLocalVideoToggle.onValueChanged.AddListener(this.OnToggleMuteLocalVideo);

            Toggle toggleMuteRemoteVideo = transform.Find("PanelOperate/Viewport/Content/ToggleMuteRemoteVideo").gameObject.GetComponent<Toggle>();
            toggleMuteRemoteVideo.onValueChanged.AddListener(this.OnToggleMuteRemoteVideo);

            Toggle toggleShowConsole = transform.Find("PanelTest/Viewport/Content/ToggleShowConsole").gameObject.GetComponent<Toggle>();
            toggleShowConsole.onValueChanged.AddListener(this.OnToggleShowConsole);

            Toggle toggleShowUserVolume = transform.Find("PanelTest/Viewport/Content/ToggleShowUserVolume").gameObject.GetComponent<Toggle>();
            toggleShowUserVolume.onValueChanged.AddListener(this.OnToggleShowUserVolume);

            Toggle toggleShowStatis = transform.Find("PanelTest/Viewport/Content/ToggleShowStatis").gameObject.GetComponent<Toggle>();
            toggleShowStatis.onValueChanged.AddListener(this.OnToggleShowStatis);

            Toggle toggleSwitchCamera = transform.Find("PanelTest/Viewport/Content/ToggleSwitchCamera").gameObject.GetComponent<Toggle>();
            toggleSwitchCamera.onValueChanged.AddListener(this.OnToggleSwitchCamera);

            Toggle toggleSetMixTranscodingConfig = transform.Find("PanelTest/Viewport/Content/ToggleSetMixTranscodingConfig").gameObject.GetComponent<Toggle>();
            toggleSetMixTranscodingConfig.onValueChanged.AddListener(this.OnToggleSetMixTranscodingConfig);
            
            mTRTCCloud = ITRTCCloud.getTRTCShareInstance();
            mTRTCCloud.addCallback(this);

            string version = mTRTCCloud.getSDKVersion();
            LogManager.Log("trtc sdk version is : " + version);

            TRTCParams trtcParams = new TRTCParams();
            trtcParams.sdkAppId = GenerateTestUserSig.SDKAPPID;
            trtcParams.roomId = uint.Parse(DataManager.GetInstance().GetRoomID());
            trtcParams.strRoomId = trtcParams.roomId.ToString();
            trtcParams.userId = DataManager.GetInstance().GetUserID();
            trtcParams.userSig = GenerateTestUserSig.GetInstance().GenTestUserSig(DataManager.GetInstance().GetUserID());
            
            trtcParams.privateMapKey = "";
            trtcParams.businessInfo = "";
            trtcParams.role = DataManager.GetInstance().roleType;
            TRTCAppScene scene = DataManager.GetInstance().appScene;
            mTRTCCloud.enterRoom(ref trtcParams, scene);
            SetLocalAVStatus();
            TRTCVideoEncParam videoEncParams = DataManager.GetInstance().videoEncParam;
            mTRTCCloud.setVideoEncoderParam(ref videoEncParams);

            TRTCNetworkQosParam qosParams = DataManager.GetInstance().qosParams;      // 网络流控相关参数设置
            mTRTCCloud.setNetworkQosParam(ref qosParams);

            LogManager.Log("Scene:" + scene + ", Role:" + trtcParams.role + ", Qos-Prefer:" + qosParams.preference + ", Qos-CtrlMode:" + qosParams.controlMode);

            userTableView.DoMuteAudio += new UserTableView.MuteAudioHandler(OnMuteRemoteAudio);
            userTableView.DoMuteVideo += new UserTableView.MuteVideoHandler(OnMuteRemoteVideo);
            DataManager.GetInstance().DoRoleChange += new DataManager.ChangeRoleHandler(OnRoleChanged);
            DataManager.GetInstance().DoVideoEncParamChange += new DataManager.ChangeVideoEncParamHandler(OnVideoEncParamChanged);
            DataManager.GetInstance().DoQosParamChange += new DataManager.ChangeQosParamHandler(OnQosParamChanged);

            #if PLATFORM_ANDROID
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
            }
            if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
            {
                Permission.RequestUserPermission(Permission.Camera);
            }
            #endif
        }

        void OnDestroy()
        {
            DataManager.GetInstance().DoRoleChange -= new DataManager.ChangeRoleHandler(OnRoleChanged);
            DataManager.GetInstance().DoVideoEncParamChange -= new DataManager.ChangeVideoEncParamHandler(OnVideoEncParamChanged);
            DataManager.GetInstance().DoQosParamChange -= new DataManager.ChangeQosParamHandler(OnQosParamChanged);
            userTableView.DoMuteAudio -= new UserTableView.MuteAudioHandler(OnMuteRemoteAudio);
            userTableView.DoMuteVideo -= new UserTableView.MuteVideoHandler(OnMuteRemoteVideo);

            mTRTCCloud.removeCallback(this);
            ITRTCCloud.destroyTRTCShareInstance();
            DataManager.GetInstance().ResetLocalAVFlag();
        }

        void OnLeaveRoomClick()
        {
            LogManager.Log("OnLeaveRoomClick");
            mTRTCCloud.exitRoom();
            DataManager.GetInstance().ResetLocalAVFlag();
        }
        void OnToggleBeauty(bool value)
        {
            if(value) {
                mTRTCCloud.setBeautyStyle(TRTCBeautyStyle.TRTCBeautyStyleSmooth, 9, 9, 9);
            } else {
                mTRTCCloud.setBeautyStyle(TRTCBeautyStyle.TRTCBeautyStyleSmooth, 0, 0, 0);
            }
        }

        void OnToggleVideoMirror(bool value)
        {
            if(value) {
                mTRTCCloud.setVideoEncoderMirror(true);
            } else {
                mTRTCCloud.setVideoEncoderMirror(false);
            }
        }


        private void SetLocalAVStatus()
        {
            TRTCRoleType role = DataManager.GetInstance().roleType;
            bool captureVideo = DataManager.GetInstance().captureVideo;
            bool muteLocalVideo = DataManager.GetInstance().muteLocalVideo;
            bool captureAudio = DataManager.GetInstance().captureAudio;
            bool muteLocalAudio = DataManager.GetInstance().muteLocalAudio;
            bool isAudience = (role == TRTCRoleType.TRTCRoleAudience);
            if (isAudience)
            {
                captureVideo = false;
                captureAudio = false;
            }

            if (captureVideo)
            {
                mTRTCCloud.startLocalPreview(true, null);
                userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeBig, true);
            }
            else
            {
                mTRTCCloud.stopLocalPreview();
                userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeBig, false);
            }
            mTRTCCloud.muteLocalVideo(muteLocalVideo);

            if (captureAudio)
            {
                mTRTCCloud.startLocalAudio(TRTCAudioQuality.TRTCAudioQualityDefault);
            }
            else
            {
                mTRTCCloud.stopLocalAudio();
            }
            mTRTCCloud.muteLocalAudio(muteLocalAudio);
            captureVideoToggle.interactable = !isAudience;
            captureVideoToggle.SetIsOnWithoutNotify(captureVideo);
            captureAudioToggle.interactable = !isAudience;
            captureAudioToggle.SetIsOnWithoutNotify(captureAudio);
            muteLocalVideoToggle.interactable = !isAudience;
            muteLocalVideoToggle.SetIsOnWithoutNotify(muteLocalVideo);
            // muteLocalAudioToggle.interactable = !isAudience;
            // muteLocalAudioToggle.SetIsOnWithoutNotify(muteLocalAudio);
        }

        void OnToggleMic(bool value)
        {
            LogManager.Log("OnToggleMic: " + value);
            if (value)
            {
                mTRTCCloud.startLocalAudio(TRTCAudioQuality.TRTCAudioQualityDefault);
            }
            else
            {
                mTRTCCloud.stopLocalAudio();
            }
            DataManager.GetInstance().captureAudio = value;
        }

        void OnToggleMuteLocalAudio(bool value)
        {
            LogManager.Log("OnToggleMuteLocalAudio: " + value);
            mTRTCCloud.muteLocalAudio(value);
            DataManager.GetInstance().muteLocalAudio = value;
        }

        void OnToggleMuteRemoteAudio(bool value)
        {
            LogManager.Log("OnToggleMuteRemoteAudio: " + value);
            mTRTCCloud.muteAllRemoteAudio(value);
        }

        void OnToggleCamera(bool value)
        {
            LogManager.Log("OnToggleCamera: " + value);
            if (value)
            {
                mTRTCCloud.startLocalPreview(true, null);
                userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeBig, true);
            }
            else
            {
                mTRTCCloud.stopLocalPreview();
                userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeBig, false);
            }
            DataManager.GetInstance().captureVideo = value;
        }

        void OnToggleMuteLocalVideo(bool value)
        {
            LogManager.Log("OnToggleMuteLocalVideo: " + value);
            mTRTCCloud.muteLocalVideo(value);
            DataManager.GetInstance().muteLocalVideo = value;
        }

        void OnToggleMuteRemoteVideo(bool value)
        {
            LogManager.Log("OnToggleMuteRemoteVideo: " + value);
            mTRTCCloud.muteAllRemoteVideoStreams(value);
        }

        void OnToggleShowConsole(bool value)
        {
            transform.Find("LogDisplayView").gameObject.SetActive(value);
        }

        void OnToggleShowUserVolume(bool value)
        {
            if (value)
            {
                mTRTCCloud.enableAudioVolumeEvaluation(300);
            }
            else
            {
                mTRTCCloud.enableAudioVolumeEvaluation(0);
            }
            userTableView.UpdateAudioVolumeVisible(value);
        }

        void OnToggleShowStatis(bool value)
        {
            userTableView.UpdateUserStatisVisible(value);
        }

        void OnToggleSwitchCamera(bool value)
        {
            LogManager.Log("OnToggleSwitchCamera: " + value );
            mTRTCCloud.getDeviceManager().switchCamera(!value);
        }

        void OnToggleSetMixTranscodingConfig(bool value)
        {
            TRTCTranscodingConfig transcodingConfig =new TRTCTranscodingConfig();
            transcodingConfig.appId=1252463788;
            transcodingConfig.bizId =3891;
            transcodingConfig.videoWidth =360;
            transcodingConfig.mode = TRTCTranscodingConfigMode.TRTCTranscodingConfigMode_Manual;
            transcodingConfig.videoHeight =640;
            transcodingConfig.videoFramerate =15;
            transcodingConfig.videoGOP = 2;
            transcodingConfig.videoBitrate = 1000;
            transcodingConfig.audioBitrate = 64;
            transcodingConfig.audioSampleRate = 48000;
            transcodingConfig.audioChannels = 2;
            
            transcodingConfig.streamId = "streamIdtest";
            TRTCMixUser[] mixUsersArray = new TRTCMixUser[2];
            mixUsersArray[0].userId = DataManager.GetInstance().GetUserID();
            mixUsersArray[0].zOrder = 4; // zOrder 0 means that the anchor screen is at the bottom
            mixUsersArray[0].streamType = 0;
            mixUsersArray[0].rect.left = 0;
            mixUsersArray[0].rect.top = 0;
            mixUsersArray[0].rect.right = 360;
            mixUsersArray[0].rect.bottom = 640;

            mixUsersArray[1].userId = "110";
            mixUsersArray[1].zOrder = 5;
            mixUsersArray[1].streamType = 0;
            mixUsersArray[1].rect.left = 100; //For reference only
            mixUsersArray[1].rect.top = 100; //For reference only
            mixUsersArray[1].rect.right = 100; //For reference only
            mixUsersArray[1].rect.bottom = 100; //For reference only
            mixUsersArray[1].roomId = DataManager.GetInstance().GetRoomID(); // Local users do not need to fill in roomid, remote users need to

            transcodingConfig.mixUsersArray = mixUsersArray;
            transcodingConfig.mixUsersArraySize = 2;
            if(value)
                mTRTCCloud.setMixTranscodingConfig(transcodingConfig);
            else
                mTRTCCloud.setMixTranscodingConfig(null);
        }

        void OnMuteRemoteAudio(string userId, bool mute)
        {
            LogManager.Log("MuteRemoteAudio: " + userId + "-" + mute);
            mTRTCCloud.muteRemoteAudio(userId, mute);
        }

        void OnMuteRemoteVideo(string userId, bool mute)
        {
            LogManager.Log("MuteRemoteVideo: " + userId + "-" + mute);
            mTRTCCloud.muteRemoteVideoStream(userId, mute);
        }

        void OnToggleSetting(bool value)
        {
            if (value)
            {
                var setting = Instantiate(settingPrefab, new Vector3(0, 0, 0), Quaternion.identity);
                setting.transform.SetParent(mainCanvas.transform, false);
                settingScript = setting.GetComponent<SettingScript>();
            }
            else
            {
                if(settingScript!=null){
                    Transform.Destroy(settingScript.gameObject);
                    settingScript = null;
                }
            }
        }

        void OnToggleSendSEIMsg(bool value)
        {
            if (value)
            {
                // byte[] seiMsg = new byte[] {2, 0, 0, 0, 0, 0,1,1, 0, 0,1,1};
                byte[] seiMsg = new byte[] {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                
                // byte[] seiMsg = m_byteFacialData.ToArray();

                string strInfo = "";
                for (int i = 0; i < seiMsg.Length; i++)
                {
                    strInfo += seiMsg[i].ToString() + ", ";
                }
                LogManager.Log("seiMsg.Length: " + seiMsg.Length);
                LogManager.Log("seiMsg strInfo: " + strInfo);

                var result = mTRTCCloud.sendSEIMsg(seiMsg, seiMsg.Length, 1);
                

                // string seiMsg = "test sei messagetest sei messagetest sei messagetest sei messagetest sei messagetest sei message";
                // int msgSize = System.Text.Encoding.UTF8.GetByteCount(seiMsg);
                // LogManager.Log(String.Format("----> sendSEIMsg seiMsg= {0}, msgSize = {1}", seiMsg, msgSize));
                // mTRTCCloud.sendSEIMsg(System.Text.Encoding.UTF8.GetBytes(seiMsg), msgSize, 30);
            }
        }

        void OnTogglePublishing(bool value)
        {
            // Toggle toggleStartPublishing = transform.Find("PanelTest/Viewport/Content/ToggleStartPublishing").gameObject.GetComponent<Toggle>();
            // if (value)
            // {
            //     mTRTCCloud.startPublishing("test", TRTCVideoStreamType.TRTCVideoStreamTypeBig);
            // }
            // else
            // {
            //     mTRTCCloud.stopPublishing();

            // }
        }

        void OnToggleScreenCapture(bool value)
        {
            if (value)
            {
                TRTCVideoEncParam videoEncParam = new TRTCVideoEncParam()
                {
                    videoResolution = TRTCVideoResolution.TRTCVideoResolution_1280_720,
                    resMode = TRTCVideoResolutionMode.TRTCVideoResolutionModeLandscape,
                    videoFps = 10,
                    videoBitrate = 1600,
                    minVideoBitrate = 1000
                };
                #if UNITY_STANDALONE_WIN
                    TRTCScreenCaptureSourceInfo[] sources = mTRTCCloud.getScreenCaptureSources();
                    if (sources.Length > 0)
                    {
                        mTRTCCloud.selectScreenCaptureTarget(sources[0], new Rect(0, 0, 640, 360), new TRTCScreenCaptureProperty());
                        mTRTCCloud.startScreenCapture(TRTCVideoStreamType.TRTCVideoStreamTypeSub, ref videoEncParam);
                        userTableView.AddUser("", TRTCVideoStreamType.TRTCVideoStreamTypeSub);
                        userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeSub, true);
                    }
                #elif UNITY_ANDROID || UNITY_IOS
                    mTRTCCloud.startScreenCapture(TRTCVideoStreamType.TRTCVideoStreamTypeSub, ref videoEncParam);
                #endif
                #if UNITY_IOS
                    IosExtensionLauncher.TRTCUnityExtensionLauncher();
                #endif
            }
            else
            {
                #if UNITY_STANDALONE_WIN || UNITY_ANDROID || UNITY_IOS
                mTRTCCloud.stopScreenCapture();
                #endif
                #if UNITY_STANDALONE_WIN
                userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeSub, false);
                userTableView.RemoveUser("", TRTCVideoStreamType.TRTCVideoStreamTypeSub);
                #endif
            }
        }

        void OnToggleCustomCapture(bool value)
        {
            if (value)
            {
                var customCapture = Instantiate(customCapturePrefab, new Vector3(0, 0, 0), Quaternion.identity);
                customCapture.transform.SetParent(mainCanvas.transform, false);
                customCaptureScript = customCapture.GetComponent<CustomCaptureScript>();
                customCaptureScript.AudioCallback += new CustomCaptureScript.OnCustomCaptureAudioCallback(CustomCaptureAudioCallback);
                customCaptureScript.VideoCallback += new CustomCaptureScript.OnCustomCaptureVideoCallback(CustomCaptureVideoCallback);
            }
            else
            {
                if (customCaptureScript != null)
                {
                    Transform.Destroy(customCaptureScript.gameObject);
                    customCaptureScript = null;
                }
            }
        }

        void OnRoleChanged()
        {
            SetLocalAVStatus();
            mTRTCCloud.switchRole(DataManager.GetInstance().roleType);
        }

        void OnVideoEncParamChanged()
        {
            TRTCVideoEncParam videoEncParams = DataManager.GetInstance().videoEncParam;
            mTRTCCloud.setVideoEncoderParam(ref videoEncParams);
        }

        void OnQosParamChanged()
        {
            TRTCNetworkQosParam qosParams = DataManager.GetInstance().qosParams;
            mTRTCCloud.setNetworkQosParam(ref qosParams);
        }

        void CustomCaptureAudioCallback(bool stop)
        {
            if (!stop)
            {
                mTRTCCloud.stopLocalAudio();
            }
            else
            {
                Toggle toggleMic = transform.Find("PanelOperate/Viewport/Content/ToggleMic").gameObject.GetComponent<Toggle>();
                if (!toggleMic.isOn)
                {
                    return;
                }
                mTRTCCloud.startLocalAudio(TRTCAudioQuality.TRTCAudioQualityDefault);
                Toggle toggleMuteLocalAudio = transform.Find("PanelOperate/Viewport/Content/ToggleMuteLocalAudio").gameObject.GetComponent<Toggle>();
                if (toggleMuteLocalAudio.isOn)
                {
                    mTRTCCloud.muteLocalAudio(true);
                }
                else
                {
                    mTRTCCloud.muteLocalAudio(false);
                }
            }
        }

        void CustomCaptureVideoCallback(bool stop)
        {
            if (!stop)
            {
                mTRTCCloud.stopLocalPreview();
            }
            else
            {
                Toggle toggelCamera = transform.Find("PanelOperate/Viewport/Content/ToggleCamera").gameObject.GetComponent<Toggle>();
                if (!toggelCamera.isOn)
                {
                    return;
                }

                mTRTCCloud.startLocalPreview(true, null);

                Toggle toggleMuteLocalVideo = transform.Find("PanelOperate/Viewport/Content/ToggleMuteLocalVideo").gameObject.GetComponent<Toggle>();
                if (toggleMuteLocalVideo.isOn)
                {
                    mTRTCCloud.muteLocalVideo(true);
                }
                else
                {
                    mTRTCCloud.muteLocalVideo(false);
                }
            }
        }

#region ITRTCCloudCallback
        public void onError(TXLiteAVError errCode, String errMsg, IntPtr arg)
        {
            LogManager.Log(String.Format("onError {0}, {1}", errCode, errMsg));
        }

        public void onWarning(TXLiteAVWarning warningCode, String warningMsg, IntPtr arg)
        {
            LogManager.Log(String.Format("onWarning {0}, {1}", warningCode, warningMsg));
        }

        public void onEnterRoom(int result)
        {
            LogManager.Log(String.Format("onEnterRoom {0}", result));
            userTableView.AddUser("", TRTCVideoStreamType.TRTCVideoStreamTypeBig);
        }

        public void onExitRoom(int reason)
        {
            LogManager.Log(String.Format("onExitRoom {0}", reason));
            userTableView.RemoveUser("", TRTCVideoStreamType.TRTCVideoStreamTypeBig);

            SceneManager.LoadScene("HomeScene", LoadSceneMode.Single);
        }

        public void onSwitchRole(TXLiteAVError errCode, String errMsg)
        {
            LogManager.Log(String.Format("onSwitchRole {0}, {1}", errCode, errMsg));
        }

        public void onRemoteUserEnterRoom(String userId)
        {
            LogManager.Log(String.Format("onRemoteUserEnterRoom {0}", userId));
        }

        public void onRemoteUserLeaveRoom(String userId, int reason)
        {
            LogManager.Log(String.Format("onRemoteUserLeaveRoom {0}, {1}", userId, reason));
            userTableView.RemoveUser(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig);
        }

        public void onUserVideoAvailable(String userId, bool available)
        {
            LogManager.Log(String.Format("onUserVideoAvailable {0}, {1}", userId, available));
            // Important: startRemoteView is needed for receiving video stream.
            if (available)
            {
                userTableView.AddUser(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig);
                mTRTCCloud.startRemoteView(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig, null);
            }
            else
            {
                mTRTCCloud.stopRemoteView(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig);
            }
            userTableView.UpdateVideoAvailable(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig, available);
        }

        public void onUserSubStreamAvailable(String userId, bool available)
        {
            LogManager.Log(String.Format("onUserSubStreamAvailable {0}, {1}", userId, available));
            // Important: startRemoteView is needed for receiving video stream.
            if (available)
            {
                userTableView.AddUser(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSub);
                userTableView.UpdateVideoAvailable(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSub, available);
                mTRTCCloud.startRemoteView(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSub, null);
            }
            else
            {
                mTRTCCloud.stopRemoteView(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSub);
                userTableView.RemoveUser(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSub);
            }
        }

        public void onUserAudioAvailable(String userId, bool available)
        {
            LogManager.Log(String.Format("onUserAudioAvailable {0}, {1}", userId, available));
            if (available)
            {
                userTableView.AddUser(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig);
            }
            userTableView.UpdateAudioAvailable(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig, available);
        }

        public void onFirstVideoFrame(String userId, TRTCVideoStreamType streamType, int width, int height)
        {
            LogManager.Log(String.Format("onFirstVideoFrame {0}, {1}, {2}, {3}", userId, streamType, width, height));
        }

        public void onFirstAudioFrame(String userId)
        {
            LogManager.Log(String.Format("onFirstAudioFrame {0}", userId));
        }

        public void onSendFirstLocalVideoFrame(TRTCVideoStreamType streamType)
        {
            LogManager.Log(String.Format("onSendFirstLocalVideoFrame {0}", streamType));
        }

        public void onSendFirstLocalAudioFrame()
        {
            LogManager.Log(String.Format("onSendFirstLocalAudioFrame"));
        }

        public void onNetworkQuality(TRTCQualityInfo localQuality, TRTCQualityInfo[] remoteQuality, UInt32 remoteQualityCount)
        {
            // LogManager.Log(String.Format("onNetworkQuality {0}, {1}, {2}", localQuality, remoteQuality, remoteQualityCount));
        }

        public void onStatistics(TRTCStatistics statis)
        {
            // LogManager.Log(String.Format("onStatistics {0}", statis));
            string localStatisText = "";
            foreach (TRTCLocalStatistics local in statis.localStatisticsArray)
            {
                localStatisText = string.Format("width: {0}\r\nheight: {1}\r\nvideoframerate: {2}\r\nvideoBitrate: {3}\r\naudioSampleRate: {4}\r\naudioBitrate:{5}\r\nstreamType:{6}\r\n",
                        local.width, local.height,
                        local.frameRate, local.videoBitrate, local.audioSampleRate, local.audioBitrate, local.streamType);
                userTableView.updateUserStatistics("", local.streamType, localStatisText);
            }
            foreach (TRTCRemoteStatistics remote in statis.remoteStatisticsArray)
            {
                string remoteStatisText = "";
                remoteStatisText = string.Format("finalLoss: {7}\r\njitterBufferDelay: {8}\r\nwidth: {0}\r\nheight: {1}\r\nvideoframerate: {2}\r\nvideoBitrate: {3}\r\naudioSampleRate: {4}\r\naudioBitrate:{5}\r\nstreamType:{6}\r\n",
                        remote.width, remote.height,
                        remote.frameRate, remote.videoBitrate, remote.audioSampleRate, remote.audioBitrate, remote.streamType,
                        remote.finalLoss, remote.jitterBufferDelay);
                userTableView.updateUserStatistics(remote.userId, remote.streamType, remoteStatisText);
            }
        }

        public void onConnectionLost()
        {
            LogManager.Log(String.Format("onConnectionLost"));
        }

        public void onTryToReconnect()
        {
            LogManager.Log(String.Format("onTryToReconnect"));
        }

        public void onConnectionRecovery()
        {
            LogManager.Log(String.Format("onConnectionRecovery"));
        }

        public void onCameraDidReady()
        {
            LogManager.Log(String.Format("onCameraDidReady"));
        }

        public void onMicDidReady()
        {
            LogManager.Log(String.Format("onMicDidReady"));
        }

        public void onUserVoiceVolume(TRTCVolumeInfo[] userVolumes, UInt32 userVolumesCount, UInt32 totalVolume)
        {
            
            foreach (TRTCVolumeInfo userVolume in userVolumes)
            {
                userTableView.UpdateAudioVolume(userVolume.userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig, userVolume.volume);
            }
        }

        public void onDeviceChange(String deviceId, TRTCDeviceType type, TRTCDeviceState state)
        {
            LogManager.Log(String.Format("onSwitchRole {0}, {1}, {2}", deviceId, type, state));
        }
        public void onRecvSEIMsg(String userId, Byte[] message, UInt32 msgSize)
        {
            LogManager.Log("onRecvSEIMsg: " + userId + ", " + msgSize + ", " + msgSize);
            //LogManager.Log("onRecvSEIMsg: " + userId + ", " + msgSize + ", " + m_byteReceivedFacialData.Length);
            string strInfo = "";
            for (int i = 0; i < msgSize; i++)
            {
                strInfo += message[i].ToString() + ", ";
            }
            LogManager.Log("strInfo: " + strInfo);

            // string seiMessage = System.Text.Encoding.UTF8.GetString(message, 0, (int)msgSize);
            // LogManager.Log(String.Format("onRecvSEIMsg {0}, {1}, {2}", userId, seiMessage, msgSize));
        }

        public void onStartPublishing(int err, string errMsg)
        {
            LogManager.Log(String.Format("onStartPublishing {0}, {1}", err, errMsg));
        }

        public void onStopPublishing(int err, string errMsg)
        {
            LogManager.Log(String.Format("onStopPublishing {0}, {1}", err, errMsg));
        }

        public void onScreenCaptureStarted()
        {
            LogManager.Log(String.Format("onScreenCaptureStarted"));
        }

        public void onScreenCapturePaused(int reason)
        {
            LogManager.Log(String.Format("onScreenCapturePaused {0}", reason));
        }

        public void onScreenCaptureResumed(int reason)
        {
            LogManager.Log(String.Format("onScreenCaptureResumed {0}", reason));
        }

        public void onScreenCaptureStoped(int reason)
        {
            LogManager.Log(String.Format("onScreenCaptureStoped {0}", reason));
        }

        public void onStartPublishCDNStream(int err, string errMsg)
        {
            LogManager.Log(String.Format("onStartPublishCDNStream {0}, {1}", err, errMsg));
        }

        public void onStopPublishCDNStream(int err, string errMsg)
        {
            LogManager.Log(String.Format("onStopPublishCDNStream {0}, {1}", err, errMsg));
        }

        public void onConnectOtherRoom(string userId, TXLiteAVError errCode, string errMsg)
        {
            LogManager.Log(String.Format("onConnectOtherRoom {0}, {1}, {2}", userId, errCode , errMsg));
        }

        public void onDisconnectOtherRoom(TXLiteAVError errCode, string errMsg)
        {
            LogManager.Log(String.Format("onDisconnectOtherRoom {0}, {1}",  errCode , errMsg));
        }

        public void onSwitchRoom(TXLiteAVError errCode, string errMsg)
        {
            LogManager.Log(String.Format("onSwitchRoom {0}, {1}",  errCode , errMsg));
        }

        public void onSpeedTest(TRTCSpeedTestResult currentResult, int finishedCount, int totalCount)
        {
            LogManager.Log(String.Format("onSpeedTest {0}, {1} ,{2}",  currentResult.upLostRate , finishedCount , totalCount));
        }

        public void onTestMicVolume(int volume)
        {
            LogManager.Log(String.Format("onTestMicVolume {0}",  volume ));
        }

        public void onTestSpeakerVolume(int volume)
        {
            LogManager.Log(String.Format("onTestSpeakerVolume {0}",  volume ));
        }

        public void onAudioDeviceCaptureVolumeChanged(int volume, bool muted)
        {
            LogManager.Log(String.Format("onAudioDeviceCaptureVolumeChanged {0} , {1}",  volume ,muted));
        }

        public void onAudioDevicePlayoutVolumeChanged(int volume, bool muted)
        {
            LogManager.Log(String.Format("onAudioDevicePlayoutVolumeChanged {0} , {1}",  volume ,muted));
        }
       
        public void onRecvCustomCmdMsg(string userId, int cmdID, int seq, byte[] message, int messageSize)
        {
            string msg = System.Text.Encoding.UTF8.GetString(message, 0, messageSize);
            LogManager.Log(Environment.NewLine + String.Format("onRecvCustomCmdMsg {0}, {1} ,{2}", userId, cmdID, msg));
        }
        public void onMissCustomCmdMsg(string userId, int cmdID, int errCode, int missed)
        {
            LogManager.Log(String.Format("onMissCustomCmdMsg {0}, {1}", userId, cmdID));
        }
        public void onSnapshotComplete(string userId, TRTCVideoStreamType type, byte[] data, int length, int width, int height, TRTCVideoPixelFormat format)
        {
            LogManager.Log(String.Format("onSnapshotComplete {0} , {1}", userId, type));
        }

        public void onSetMixTranscodingConfig(int errCode, String errMsg)
        {
            LogManager.Log(String.Format("onSetMixTranscodingConfig {0} , {1}", errCode, errMsg));
        }
#endregion
    }
}