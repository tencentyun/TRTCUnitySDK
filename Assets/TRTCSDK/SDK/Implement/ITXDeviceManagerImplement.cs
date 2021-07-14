using System;
using System.Runtime.InteropServices;

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
    }
}
