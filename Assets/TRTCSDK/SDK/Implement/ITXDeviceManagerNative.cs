using System;
using System.Runtime.InteropServices;
using System.Text;

namespace trtc
{
    public class ITXDeviceManagerNative
    {

        private IntPtr mNativeObj = IntPtr.Zero;

        public ITXDeviceManagerNative(IntPtr mNativeObj)
        {
            this.mNativeObj = mNativeObj;
        }

        ~ITXDeviceManagerNative()
        {

        }

        #region DllImport
#if UNITY_IPHONE && !UNITY_EDITOR
		public const string MyLibName = "__Internal";
#elif UNITY_ANDROID && !UNITY_EDITOR
        public const string MyLibName = "native-lib";
#elif UNITY_STANDALONE_WIN
        public const string MyLibName = "liteav";
#else
        public const string MyLibName = "macosliteav";
#endif
        #endregion

        #region Delegate
        #endregion

        #region Native
        #if UNITY_IPHONE || UNITY_ANDROID
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityEnableCameraAutoFocus(IntPtr instance, bool enabled);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityEnableCameraTorch(IntPtr instance, bool enabled);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern double TRTCUnityGetCameraZoomMaxRatio(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool TRTCUnityIsAutoFocusEnabled(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool TRTCUnityIsCameraTorchSupported(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool TRTCUnityIsCameraZoomSupported(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool TRTCUnityIsFrontCamera(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySetAudioRoute(IntPtr instance, TXAudioRoute route);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySetCameraFocusPosition(IntPtr instance, int x, int y);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySetCameraZoomRatio(IntPtr instance, double zoomRatio);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySetSystemVolumeType(IntPtr instance, TXSystemVolumeType type);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySwitchCamera(IntPtr instance, bool frontCamera);
        #endif
        #endregion
    }
}