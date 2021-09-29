using System;
using System.Runtime.InteropServices;
using System.Text;

namespace trtc
{
    public class ITXAudioEffectManagerNative
    {
        #region DllImport
#if UNITY_IPHONE && !UNITY_EDITOR
		public const string MyLibName = "__Internal";
#elif UNITY_ANDROID && !UNITY_EDITOR
        public const string MyLibName = "native-lib";
#elif UNITY_STANDALONE_WIN
        // public const string MyLibName = "liteav";
        public const string MyLibName = "trtc-c-wrapper";
#else
        public const string MyLibName = "macosliteav";
#endif
        #endregion

        #region Delegate
        #endregion

        #region Native
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityEnableVoiceEarMonitor(IntPtr instance, bool enable);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityGetMusicCurrentPosInMS(IntPtr instance, int id);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityGetMusicDurationInMS(IntPtr instance, string path);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityPausePlayMusic(IntPtr instance, int id);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityResumePlayMusic(IntPtr instance, int id);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySeekMusicToPosInMS(IntPtr instance, int id, int pts);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetAllMusicVolume(IntPtr instance, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMusicPitch(IntPtr instance, int id, double pitch);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMusicPlayoutVolume(IntPtr instance, int id, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMusicPublishVolume(IntPtr instance, int id, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMusicSpeedRate(IntPtr instance, int id, double speedRate);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVoiceChangerType(IntPtr instance, TXVoiceChangeType changerType);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVoiceEarMonitorVolume(IntPtr instance, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVoiceReverbType(IntPtr instance, TXVoiceReverbType reverbType);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVoiceCaptureVolume(IntPtr instance, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartPlayMusic(IntPtr instance, AudioMusicParam musicParam);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopPlayMusic(IntPtr instance, int id);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onStartHandler(int id, int errCode);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onPlayProgressHandler(int id, long curPtsMS, long durationMS);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onCompleteHandler(int id, int errCode);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMusicObserver(IntPtr instance, int musicId, onStartHandler onStart, onPlayProgressHandler onPlayProgress, onCompleteHandler onComplete);
        #endregion

    }
}