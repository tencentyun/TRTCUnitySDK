using System;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

namespace trtc
{
    public class ITXDeviceManagerImplement : ITXDeviceManager
    {
        private IntPtr mNativeObj = IntPtr.Zero;

        public ITXDeviceManagerImplement(IntPtr mNativeObj)
        {
            this.mNativeObj = mNativeObj;
        }

        ~ITXDeviceManagerImplement()
        {
            this.mNativeObj = IntPtr.Zero;
        }

        public override int enableCameraAutoFocus(bool enabled)
        {
#if UNITY_IPHONE || UNITY_ANDROID
               return ITXDeviceManagerNative.TRTCUnityEnableCameraAutoFocus(mNativeObj, enabled);
#endif
            return -19011;
        }

        public override int enableCameraTorch(bool enabled)
        {
#if UNITY_IPHONE || UNITY_ANDROID

            return ITXDeviceManagerNative.TRTCUnityEnableCameraTorch(mNativeObj, enabled);
#endif
            return -19011;
        }

        public override double getCameraZoomMaxRatio()
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnityGetCameraZoomMaxRatio(mNativeObj);
#endif
            return -19011;
        }

        public override bool isAutoFocusEnabled()
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnityIsAutoFocusEnabled(mNativeObj);
#endif
            return false;
        }
        public override bool isFrontCamera()
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnityIsFrontCamera(mNativeObj);
#endif
            return false;
        }

        public override int setAudioRoute(TXAudioRoute route)
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnitySetAudioRoute(mNativeObj, route);
#endif
            return -19011;
        }

        public override int setCameraFocusPosition(int x, int y)
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnitySetCameraFocusPosition(mNativeObj, x,y);
#endif
            return -19011;
        }

        public override int setCameraZoomRatio(double zoomRatio)
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnitySetCameraZoomRatio(mNativeObj, zoomRatio);
#endif
            return -19011;
        }

        public override int setSystemVolumeType(TXSystemVolumeType type)
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnitySetSystemVolumeType(mNativeObj, type);
#endif
            return -19011;
        }

        public override int switchCamera(bool frontCamera)
        {
#if UNITY_IPHONE || UNITY_ANDROID
            return ITXDeviceManagerNative.TRTCUnitySwitchCamera(mNativeObj, frontCamera);
#endif
            return -19011;
        }
        private struct ITXDeviceInfoArrayInfo
        {
            public ITXDeviceInfo[] deviceInfoArray;
        };

        /// <summary>
        /// 2.1 获取设备列表（仅适用于桌面端）
        /// </summary>
        /// <param name="type">设备类型，指定需要获取哪种设备的列表。详见 TXMediaDeviceType 定义。</param>
        /// <returns></returns>
        public override ITXDeviceInfo[] GetDevicesList(TXMediaDeviceType type)
        {
#if UNITY_STANDALONE_WIN
            StringBuilder rnData = new StringBuilder(1024);
            ITXDeviceManagerNative.TRTCUnityGetDevicesList(mNativeObj, type, rnData, rnData.Capacity);
            Debug.Log("============GetDevicesList==============");
            Debug.Log(rnData.ToString());
            ITXDeviceInfoArrayInfo remoteQualityArray = JsonUtility.FromJson<ITXDeviceInfoArrayInfo>(rnData.ToString());

            return remoteQualityArray.deviceInfoArray;
#else
            return new ITXDeviceInfo[0];
#endif
        }

        /// <summary>
        /// 2.2 设置当前要使用的设备（仅适用于桌面端）
        /// </summary>
        /// <param name="type">设备类型，指定需要获取哪种设备的列表。详见 TXMediaDeviceType 定义。</param>
        /// <param name="deviceId">设备ID，您可以通过接口 {@link getDevicesList} 获得设备 ID。</param>
        /// <returns></returns>
        public override int SetCurrentDevice(TXMediaDeviceType type, String deviceId)
        {
#if UNITY_STANDALONE_WIN
            int isOK = ITXDeviceManagerNative.TRTCUnitySetCurrentDevice(mNativeObj, type, deviceId);
            return isOK;
#else
             return -999;
#endif
        }

        public override ITXDeviceInfo GetCurrentDevice(TXMediaDeviceType type)
        {
#if UNITY_STANDALONE_WIN
            StringBuilder rndata = new StringBuilder(1024);
            int size = 0;
            ITXDeviceManagerNative.TRTCUnityGetCurrentDevice(mNativeObj, type, rndata, rndata.Capacity);
            Debug.Log("============GetCurrentDevice==============");
            Debug.Log(rndata.ToString());
            ITXDeviceInfo tXDeviceInfo = JsonUtility.FromJson<ITXDeviceInfo>(rndata.ToString());
            return tXDeviceInfo;
#else
            return new ITXDeviceInfo();
#endif
        }
    }
}
