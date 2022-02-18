using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using trtc;

namespace TRTCCUnityDemo
{
    public class SettingScript : MonoBehaviour
    {
        public Toggle sceneVideoCallToggle;
        public Toggle sceneLiveToggle;

        public Toggle roleAnchorToggle;
        public Toggle roleAudienceToggle;

        public Toggle preferSmoothToggle;
        public Toggle preferClearToggle;

        public Toggle ctrlClientToggle;
        public Toggle ctrlServerToggle;

        public Dropdown resolutionDropDown;
        public Dropdown fpsDropDown;
        public Dropdown directionDropDown;
        public Slider bitrateSlider;
        public Text curBitrateText;

        void Start()
        {
            SetUpScene();
            SetUpRole();
            SetUpNetworkQos();
            SetUpResolution();
            SetUpFps();
            SetUpDirection();
            SetUpBitrate();
        }

        private void SetUpScene()
        {
            if (DataManager.GetInstance().appScene == TRTCAppScene.TRTCAppSceneVideoCall)
            {
                sceneVideoCallToggle.isOn = true;
            }
            else
            {
                sceneLiveToggle.isOn = true;
            }
            sceneVideoCallToggle.onValueChanged.AddListener(this.SceneVideoCallToggleValueChanged);
            sceneLiveToggle.onValueChanged.AddListener(this.SceneLiveToggleValueChanged);
        }

        private void SetUpRole()
        {
            if (DataManager.GetInstance().roleType == TRTCRoleType.TRTCRoleAnchor)
            {
                roleAnchorToggle.isOn = true;
            }
            else
            {
                roleAudienceToggle.isOn = true;
            }
            roleAnchorToggle.onValueChanged.AddListener(this.RoleAnchorToggleValueChanged);
            roleAudienceToggle.onValueChanged.AddListener(this.RoleAudienceToggleValueChanged);

            roleAudienceToggle.interactable = !sceneVideoCallToggle.isOn;
        }

        private void SetUpNetworkQos()
        {
            TRTCNetworkQosParam param = DataManager.GetInstance().qosParams;

            if (param.preference == TRTCVideoQosPreference.TRTCVideoQosPreferenceSmooth)
            {
                preferSmoothToggle.isOn = true;
            }
            else
            {
                preferClearToggle.isOn = true;
            }

            if (param.controlMode == TRTCQosControlMode.TRTCQosControlModeClient)
            {
                ctrlClientToggle.isOn = true;
            }
            else
            {
                ctrlServerToggle.isOn = true;
            }

            preferSmoothToggle.onValueChanged.AddListener(this.PreferSmoothToggleValueChanged);
            preferClearToggle.onValueChanged.AddListener(this.PreferClearToggleValueChanged);
            ctrlClientToggle.onValueChanged.AddListener(this.CtrlClientToggleValueChanged);
            ctrlServerToggle.onValueChanged.AddListener(this.CtrlServerToggleValueChanged);
        }

        private void SetUpResolution()
        {
            List<string> resNames = new List<string>(new string[] {
            "120 x 120",
            "160 x 160",
            "270 x 270",
            "480 x 480",
            "160 x 120",
            "240 x 180",
            "280 x 210",
            "320 x 240",
            "400 x 300",
            "480 x 360",
            "640 x 480",
            "960 x 720",
            "320 x 180",
            "480 x 270",
            "640 x 360",
            "960 x 540",
            "1280 x 720",
            "1920 x 1080"
        });
            TRTCVideoResolution curResolution = DataManager.GetInstance().videoEncParam.videoResolution;
            int curIndex = 0;
            switch (curResolution)
            {
                case TRTCVideoResolution.TRTCVideoResolution_120_120:
                    curIndex = 0;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_160_160:
                    curIndex = 1;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_270_270:
                    curIndex = 2;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_480_480:
                    curIndex = 3;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_160_120:
                    curIndex = 4;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_240_180:
                    curIndex = 5;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_280_210:
                    curIndex = 6;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_320_240:
                    curIndex = 7;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_400_300:
                    curIndex = 8;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_480_360:
                    curIndex = 9;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_640_480:
                    curIndex = 10;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_960_720:
                    curIndex = 11;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_320_180:
                    curIndex = 12;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_480_270:
                    curIndex = 13;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_640_360:
                    curIndex = 14;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_960_540:
                    curIndex = 15;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_1280_720:
                    curIndex = 16;
                    break;
                case TRTCVideoResolution.TRTCVideoResolution_1920_1080:
                    curIndex = 17;
                    break;
            }
            resolutionDropDown.AddOptions(resNames);
            resolutionDropDown.value = curIndex;
            resolutionDropDown.onValueChanged.AddListener(this.ResolutionDropDownValueChanged);
        }

        private void SetUpFps()
        {
            List<string> fpsNames = new List<string>(new string[] {
            "15 fps",
            "20 fps",
            "24 fps"
        });
            fpsDropDown.AddOptions(fpsNames);
            uint fps = DataManager.GetInstance().videoEncParam.videoFps;
            int curIndex = 0;
            switch (fps)
            {
                case 15:
                    curIndex = 0;
                    break;
                case 20:
                    curIndex = 1;
                    break;
                case 24:
                    curIndex = 2;
                    break;
            }
            fpsDropDown.value = curIndex;
            fpsDropDown.onValueChanged.AddListener(this.FpsDropDownValueChanged);
        }

        private void SetUpDirection()
        {
            List<string> directionNames = new List<string>(new string[] { "Horizontal screen mode", "Vertical screen mode" });
            directionDropDown.AddOptions(directionNames);
            int curIndex = 0;
            if (DataManager.GetInstance().videoEncParam.resMode == TRTCVideoResolutionMode.TRTCVideoResolutionModeLandscape)
            {
                curIndex = 0;
            }
            else
            {
                curIndex = 1;
            }
            directionDropDown.value = curIndex;
            directionDropDown.onValueChanged.AddListener(this.DirectionDropDownValueChanged);
        }

        private void SetUpBitrate()
        {
            TRTCVideoEncParam param = DataManager.GetInstance().videoEncParam;
            bitrateSlider.minValue = param.minVideoBitrate;
            bitrateSlider.value = param.videoBitrate;

            DataManager.VideoResBitrateTable bitrateInfo = DataManager.GetInstance().GetBitrateInfo((int)param.videoResolution);
            bitrateSlider.maxValue = bitrateInfo.maxBitrate;

            bitrateSlider.onValueChanged.AddListener(this.BitrateSliderValueChanged);

            curBitrateText.text = param.videoBitrate.ToString() + "kps";
        }

        private void SceneVideoCallToggleValueChanged(bool value)
        {
            if (value)
            {
                DataManager.GetInstance().appScene = TRTCAppScene.TRTCAppSceneVideoCall;
                roleAnchorToggle.isOn = true;
                roleAudienceToggle.interactable = false;
            }
        }

        private void SceneLiveToggleValueChanged(bool value)
        {
            if (value)
            {
                DataManager.GetInstance().appScene = TRTCAppScene.TRTCAppSceneLIVE;
                roleAudienceToggle.interactable = true;
            }
        }

        private void RoleAnchorToggleValueChanged(bool value)
        {
            if (value)
            {
                DataManager.GetInstance().roleType = TRTCRoleType.TRTCRoleAnchor;
            }
        }

        private void RoleAudienceToggleValueChanged(bool value)
        {
            if (value)
            {
                DataManager.GetInstance().roleType = TRTCRoleType.TRTCRoleAudience;
            }
        }

        private void PreferSmoothToggleValueChanged(bool value)
        {
            if (value)
            {
                TRTCNetworkQosParam param = DataManager.GetInstance().qosParams;
                param.preference = TRTCVideoQosPreference.TRTCVideoQosPreferenceSmooth;
                DataManager.GetInstance().qosParams = param;
            }
        }

        private void PreferClearToggleValueChanged(bool value)
        {
            TRTCNetworkQosParam param = DataManager.GetInstance().qosParams;
            param.preference = TRTCVideoQosPreference.TRTCVideoQosPreferenceClear;
            DataManager.GetInstance().qosParams = param;
        }

        private void CtrlClientToggleValueChanged(bool value)
        {
            TRTCNetworkQosParam param = DataManager.GetInstance().qosParams;
            param.controlMode = TRTCQosControlMode.TRTCQosControlModeClient;
            DataManager.GetInstance().qosParams = param;
        }

        private void CtrlServerToggleValueChanged(bool value)
        {
            TRTCNetworkQosParam param = DataManager.GetInstance().qosParams;
            param.controlMode = TRTCQosControlMode.TRTCQosControlModeServer;
            DataManager.GetInstance().qosParams = param;
        }

        private void ResolutionDropDownValueChanged(int value)
        {
            TRTCVideoEncParam param = DataManager.GetInstance().videoEncParam;
            switch (value)
            {
                case 0:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_120_120;
                    break;
                case 1:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_160_160;
                    break;
                case 2:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_270_270;
                    break;
                case 3:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_480_480;
                    break;
                case 4:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_160_120;
                    break;
                case 5:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_240_180;
                    break;
                case 6:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_280_210;
                    break;
                case 7:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_320_240;
                    break;
                case 8:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_400_300;
                    break;
                case 9:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_480_360;
                    break;
                case 10:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_640_480;
                    break;
                case 11:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_960_720;
                    break;
                case 12:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_320_180;
                    break;
                case 13:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_480_270;
                    break;
                case 14:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_640_360;
                    break;
                case 15:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_960_540;
                    break;
                case 16:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_1280_720;
                    break;
                case 17:
                    param.videoResolution = TRTCVideoResolution.TRTCVideoResolution_1920_1080;
                    break;
            }

            DataManager.VideoResBitrateTable bitrateInfo = DataManager.GetInstance().GetBitrateInfo((int)param.videoResolution);
            param.minVideoBitrate = (uint)bitrateInfo.minBitrate;
            if (param.videoBitrate > bitrateInfo.maxBitrate || param.videoBitrate < bitrateInfo.minBitrate)
            {
                param.videoBitrate = (uint)bitrateInfo.defaultBitrate;
                curBitrateText.text = param.videoBitrate.ToString() + "kps";
            }
            bitrateSlider.minValue = bitrateInfo.minBitrate;
            bitrateSlider.maxValue = bitrateInfo.maxBitrate;
            bitrateSlider.value = param.videoBitrate;

            DataManager.GetInstance().videoEncParam = param;
        }

        private void FpsDropDownValueChanged(int value)
        {
            TRTCVideoEncParam param = DataManager.GetInstance().videoEncParam;
            switch (value)
            {
                case 0:
                    param.videoFps = 15;
                    break;
                case 1:
                    param.videoFps = 20;
                    break;
                case 2:
                    param.videoFps = 24;
                    break;
            }

            DataManager.GetInstance().videoEncParam = param;
        }

        private void DirectionDropDownValueChanged(int value)
        {
            TRTCVideoEncParam param = DataManager.GetInstance().videoEncParam;
            switch (value)
            {
                case 0:
                    param.resMode = TRTCVideoResolutionMode.TRTCVideoResolutionModeLandscape;
                    break;
                case 1:
                    param.resMode = TRTCVideoResolutionMode.TRTCVideoResolutionModePortrait;
                    break;
            }

            DataManager.GetInstance().videoEncParam = param;
        }

        private void BitrateSliderValueChanged(float value)
        {
            TRTCVideoEncParam param = DataManager.GetInstance().videoEncParam;
            param.videoBitrate = (uint)value;
            DataManager.GetInstance().videoEncParam = param;

            curBitrateText.text = param.videoBitrate.ToString() + "kps";
        }

        public void OnBackClick()
        {
            Destroy(this.gameObject);
        }
    }
}