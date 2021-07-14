using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using AOT;

namespace trtc
{
    public class ITXAudioEffectManagerImplement : ITXAudioEffectManager
    {
        #region callbaks
        private static List<ITXMusicPlayObserver> mCallbacks = new List<ITXMusicPlayObserver>();


        [MonoPInvokeCallback(typeof(ITXAudioEffectManagerNative.onStartHandler))]
        public static void onStartHandler(int id, int errCode)
        {
            if (mCallbacks == null)
                return;
            foreach (ITXMusicPlayObserver callback in mCallbacks)
            {
                callback.onStart(id, errCode);
            }
        }

        [MonoPInvokeCallback(typeof(ITXAudioEffectManagerNative.onPlayProgressHandler))]
        public static void onPlayProgressHandler(int id, long curPtsMS, long durationMS)
        {
            if (mCallbacks == null)
                return;
            foreach (ITXMusicPlayObserver callback in mCallbacks)
            {
                callback.onPlayProgress(id, curPtsMS, durationMS);
            }
        }

        [MonoPInvokeCallback(typeof(ITXAudioEffectManagerNative.onCompleteHandler))]
        public static void onCompleteHandler(int id, int errCode)
        {
            if (mCallbacks == null)
                return;
            foreach (ITXMusicPlayObserver callback in mCallbacks)
            {
                callback.onComplete(id, errCode);
            }
        }

        #endregion
        private IntPtr mNativeObj = IntPtr.Zero;

        public ITXAudioEffectManagerImplement(IntPtr mNativeObj)
        {
            this.mNativeObj = mNativeObj;
        }

        ~ITXAudioEffectManagerImplement()
        {
            Destroy();
        }

        private void Destroy()
        {
            if (mNativeObj != IntPtr.Zero)
            {
                mCallbacks.Clear();
                mNativeObj = IntPtr.Zero;
            }
        }
        public override void setMusicObserver(int musicId, ITXMusicPlayObserver observer)
        {
            mCallbacks.Add(observer);
            ITXAudioEffectManagerNative.TRTCUnitySetMusicObserver(mNativeObj, musicId, onStartHandler, onPlayProgressHandler, onCompleteHandler);
        }
        // public override void enableVoiceEarMonitor(bool enable)
        // {
        //     ITXAudioEffectManagerNative.TRTCUnityEnableVoiceEarMonitor(mNativeObj,enable);
        // }

        public override int getMusicCurrentPosInMS(int id)
        {
            return ITXAudioEffectManagerNative.TRTCUnityGetMusicCurrentPosInMS(mNativeObj, id);
        }

        public override int getMusicDurationInMS(string path)
        {
            return ITXAudioEffectManagerNative.TRTCUnityGetMusicDurationInMS(mNativeObj, path);
        }

        public override void pausePlayMusic(int id)
        {
            ITXAudioEffectManagerNative.TRTCUnityPausePlayMusic(mNativeObj, id);
        }

        public override void resumePlayMusic(int id)
        {
            ITXAudioEffectManagerNative.TRTCUnityResumePlayMusic(mNativeObj, id);
        }

        public override void seekMusicToPosInMS(int id, int pts)
        {
            ITXAudioEffectManagerNative.TRTCUnitySeekMusicToPosInMS(mNativeObj, id,pts);
        }

        public override void setAllMusicVolume(int volume)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetAllMusicVolume(mNativeObj,volume);
        }

        public override void setMusicPitch(int id, double pitch)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetMusicPitch(mNativeObj, id,pitch);
        }

        public override void setMusicPlayoutVolume(int id, int volume)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetMusicPlayoutVolume(mNativeObj,id,volume);
        }

        public override void setMusicPublishVolume(int id, int volume)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetMusicPublishVolume(mNativeObj,id,volume);
        }

        public override void setMusicSpeedRate(int id, double speedRate)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetMusicSpeedRate(mNativeObj,id,speedRate);
        }

        //public override void setVoiceChangerType(TXVoiceChangeType changerType)
        //{
        //    ITXAudioEffectManagerNative.TRTCUnitySetVoiceChangerType(mNativeObj, changerType);
        //}

        //public override void setVoiceEarMonitorVolume(int volume)
        //{
        //    ITXAudioEffectManagerNative.TRTCUnitySetVoiceEarMonitorVolume(mNativeObj,volume);
        //}

        public override void setVoiceReverbType(TXVoiceReverbType reverbType)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetVoiceReverbType(mNativeObj,reverbType);
        }

        public override void setVoiceCaptureVolume(int volume)
        {
            ITXAudioEffectManagerNative.TRTCUnitySetVoiceCaptureVolume(mNativeObj,volume);
        }

        public override void startPlayMusic(AudioMusicParam musicParam)
        {
            ITXAudioEffectManagerNative.TRTCUnityStartPlayMusic(mNativeObj,musicParam);
        }
        
        public override void stopPlayMusic(int id)
        {
            ITXAudioEffectManagerNative.TRTCUnityStopPlayMusic(mNativeObj,id);
        }
    }
}