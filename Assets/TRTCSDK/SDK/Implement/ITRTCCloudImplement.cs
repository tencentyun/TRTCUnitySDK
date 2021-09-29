using AOT;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;

namespace trtc
{
    public class ITRTCCloudImplement : ITRTCCloud
    {
        private static String localUserId = "";
        private struct TRTCQualityArrayInfo
        {
            public TRTCQualityInfo[] remoteQualityArray;
        };
        private struct TRTCVolumeArrayInfo
        {
            public TRTCVolumeInfo[] userVolumesArray;
        };
        public struct RenderKey
        {
            private string user_id;
            private TRTCVideoStreamType stream_type;

            public RenderKey(string userId, TRTCVideoStreamType streamType) : this()
            {
                this.user_id = userId;
                this.stream_type = streamType;
            }
        }

        #region Interface Call
        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （一）房间相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override void enterRoom(ref TRTCParams param, TRTCAppScene scene)
        {
            #if PLATFORM_ANDROID
                localUserId = param.userId;
            #endif
            ITRTCCloudNative.TRTCUnityEnterRoom(mNativeObj, param.sdkAppId, param.userId, param.userSig, param.roomId, param.strRoomId, (int)param.role,
                param.streamId, param.userDefineRecordId, param.privateMapKey, param.businessInfo, (int)scene);
        }

        public override void exitRoom()
        {
            ITRTCCloudNative.TRTCUnityExitRoom(mNativeObj);
        }

        public override void switchRole(TRTCRoleType role)
        {
            ITRTCCloudNative.TRTCUnitySwitchRole(mNativeObj, (int)role);
        }

        public override void connectOtherRoom(string param)
        {
            ITRTCCloudNative.TRTCUnityConnectOtherRoom(mNativeObj,param);
        }
        public override void disconnectOtherRoom()
        {
            ITRTCCloudNative.TRTCUnityDisconnectOtherRoom(mNativeObj);
        }

        public override void switchRoom(TRTCSwitchRoomConfig config)
        {
            ITRTCCloudNative.TRTCUnitySwitchRoom(mNativeObj,config.roomId,config.strRoomId,config.userSig,config.privateMapKey);
        }
        public override void setDefaultStreamRecvMode(bool autoRecvAudio, bool autoRecvVideo)
        {
            ITRTCCloudNative.TRTCUnitySetDefaultStreamRecvMode(mNativeObj,autoRecvAudio,autoRecvVideo);
        }

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （二）CDN 相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override void startPublishing(string streamId, TRTCVideoStreamType type)
        {
            ITRTCCloudNative.TRTCUnityStartPublishing(mNativeObj, streamId, (int)type);
        }

        public override void stopPublishing()
        {
            ITRTCCloudNative.TRTCUnityStopPublishing(mNativeObj);
        }

        public override void startPublishCDNStream(TRTCPublishCDNParam param)
        {
            ITRTCCloudNative.TRTCUnityStartPublishCDNStream(mNativeObj, param.appId, param.bizId, param.url);
        }

        public override void stopPublishCDNStream()
        {
            ITRTCCloudNative.TRTCUnityStopPublishCDNStream(mNativeObj);
        }

        public override void setMixTranscodingConfig(TRTCTranscodingConfig? lconfig)
        {
            //windows 暂时不支持
            #if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX
            if(lconfig == null) {
                ITRTCCloudNative.TRTCUnitySetMixTranscodingConfigNull(mNativeObj);
            } else {
                TRTCTranscodingConfig config = (TRTCTranscodingConfig)lconfig;
                ITRTCCloudNative.TRTCUnitySetMixTranscodingConfig(mNativeObj, config.mode, config.appId, config.bizId, config.videoWidth, config.videoHeight, config.videoBitrate, config.videoFramerate, config.videoGOP, config.backgroundColor, config.backgroundImage, config.audioSampleRate, config.audioBitrate, config.audioChannels, config.mixUsersArraySize, config.streamId, config.mixUsersArray);
            }
            #endif
        }
        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （三）视频相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override void startLocalPreview(bool frontCamera, System.Object rendObj)
        {
            if (rendObj == null)
            {
#if UNITY_IOS || UNITY_ANDROID
                ITRTCCloudNative.TRTCUnityStartLocalPreview(mNativeObj, frontCamera);
#else
                ITRTCCloudNative.TRTCUnityStartLocalPreview(mNativeObj);
#endif
            }
            else
            {
                Debug.LogWarning("Only support custom video rend, please set rendObj to null");
            }
        }

        public override IntPtr GetVideoRenderData(string userId, ref int rotation, ref int width, ref int height,ref int length,bool isNeedCallBack)
        {
            return ITRTCCloudNative.TRTCUnityGetVideoRenderData(mNativeObj,userId,ref rotation, ref width,ref height,ref length, isNeedCallBack);
        }
        public override void stopLocalPreview()
        {
            ITRTCCloudNative.TRTCUnityStopLocalPreview(mNativeObj);
        }

        public override void muteLocalVideo(bool mute)
        {
            ITRTCCloudNative.TRTCUnityMuteLocalVideo(mNativeObj, mute);
        }

        public override void startRemoteView(string userId, TRTCVideoStreamType streamType, System.Object rendObj)
        {
            if (rendObj == null)
            {
                ITRTCCloudNative.TRTCUnityStartRemoteView(mNativeObj, userId, (int)streamType);
            }
            else
            {
                Debug.LogWarning("Only support custom video rend, please set rendObj to null");
            }
        }

        public override void stopRemoteView(string userId, TRTCVideoStreamType streamType)
        {
            ITRTCCloudNative.TRTCUnityStopRemoteView(mNativeObj, userId, (int)streamType);
        }

        public override void stopAllRemoteView()
        {
            ITRTCCloudNative.TRTCUnityStopAllRemoteView(mNativeObj);
        }

        public override void muteRemoteVideoStream(string userId, bool mute)
        {
            ITRTCCloudNative.TRTCUnityMuteRemoteVideoStream(mNativeObj, userId, mute);
        }

        public override void muteAllRemoteVideoStreams(bool mute)
        {
            ITRTCCloudNative.TRTCUnityMuteAllRemoteVideoStreams(mNativeObj, mute);
        }

        public override void setVideoEncoderParam(ref TRTCVideoEncParam param)
        {
            ITRTCCloudNative.TRTCUnitySetVideoEncoderParam(mNativeObj, (int)param.videoResolution, (int)param.resMode,
                param.videoFps, param.videoBitrate, param.minVideoBitrate, param.enableAdjustRes);
        }

        public override void setNetworkQosParam(ref TRTCNetworkQosParam param)
        {
            ITRTCCloudNative.TRTCUnitySetNetworkQosParam(mNativeObj, (int)param.preference, (int)param.controlMode);
        }

        // public override void setVideoEncoderRotation(TRTCVideoRotation rotation)
        // {
        //     ITRTCCloudNative.TRTCUnitySetVideoEncoderRotation(mNativeObj,(int)rotation);
        // }
        public override void setVideoEncoderMirror(bool mirror)
        {
            //windows 暂时不支持
            #if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX
            ITRTCCloudNative.TRTCUnitySetVideoEncoderMirror(mNativeObj,mirror);
            #endif
        }
        // public override void setRemoteRenderParams(string userId, TRTCVideoStreamType streamType, ref TRTCRenderParams trtcParams)
        // {
        //     ITRTCCloudNative.TRTCUnitySetRemoteRenderParams(mNativeObj,userId, (int)streamType, (int)trtcParams.fillMode, (int)trtcParams.mirrorType, (int)trtcParams.rotation);
        // }
        public override void enableSmallVideoStream(bool enable, ref TRTCVideoEncParam smallVideoParam)
        {
            ITRTCCloudNative.TRTCUnityEnableSmallVideoStream(mNativeObj,enable, ref smallVideoParam);
        }
        public override void setRemoteVideoStreamType(string userId,TRTCVideoStreamType type)
        {
            ITRTCCloudNative.TRTCUnitySetRemoteVideoStreamType(mNativeObj,userId, (int)type);
        }
       

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （四）音频相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        //public override void setAudioQuality(TRTCAudioQuality quality);

        public override void startLocalAudio(TRTCAudioQuality quality)
        {
            ITRTCCloudNative.TRTCUnityStartLocalAudio(mNativeObj, (int)quality);
        }

        public override void stopLocalAudio()
        {
            ITRTCCloudNative.TRTCUnityStopLocalAudio(mNativeObj);
        }

        public override void muteLocalAudio(bool mute)
        {
            ITRTCCloudNative.TRTCUnityMuteLocalAudio(mNativeObj, mute);
        }

        public override void muteRemoteAudio(string userId, bool mute)
        {
            ITRTCCloudNative.TRTCUnityMuteRemoteAudio(mNativeObj, userId, mute);
        }

        public override void muteAllRemoteAudio(bool mute)
        {
            ITRTCCloudNative.TRTCUnityMuteAllRemoteAudio(mNativeObj, mute);
        }

        public override void enableAudioVolumeEvaluation(uint interval)
        {
            ITRTCCloudNative.TRTCUnityEnableAudioVolumeEvaluation(mNativeObj, interval);
        }

        public override void setRemoteAudioVolume(string userId, int volume)
        {
            ITRTCCloudNative.TRTCUnitySetRemoteAudioVolume(mNativeObj, userId, volume);
        }

        public override void setAudioPlayoutVolume(int volume)
        {
            ITRTCCloudNative.TRTCUnitySetAudioPlayoutVolume(mNativeObj, volume);
        }

        public override int getAudioPlayoutVolume()
        {
            return ITRTCCloudNative.TRTCUnityGetAudioPlayoutVolume(mNativeObj);
        }

        public override int startAudioRecording(ref TRTCAudioRecordingParams audioRecordingParams)
        {
            return ITRTCCloudNative.TRTCUnityStartAudioRecording(mNativeObj, audioRecordingParams.filePath);
        }

        public override void stopAudioRecording()
        {
            ITRTCCloudNative.TRTCUnityStopAudioRecording(mNativeObj);
        }

        public override void startLocalRecording(ref TRTCLocalRecordingParams localRecordingParams)
        {
            ITRTCCloudNative.TRTCUnityStartLocalRecording(mNativeObj, localRecordingParams.filePath, (int)localRecordingParams.recordType, localRecordingParams.interval);
        }

        public override void stopLocalRecording()
        {
            ITRTCCloudNative.TRTCUnityStopLocalRecording(mNativeObj);
        }

        public override void setAudioCaptureVolume(int volume)
        {
            ITRTCCloudNative.TRTCUnitySetAudioCaptureVolume(mNativeObj, volume);
        }

        public override int getAudioCaptureVolume()
        {
            return ITRTCCloudNative.TRTCUnityGetAudioCaptureVolume(mNativeObj);
        }


        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （五）摄像头相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////

        // public override ITRTCDeviceCollection getCameraDevicesList();
        // public override void setCurrentCameraDevice(string deviceId);
        // public override ITRTCDeviceInfo getCurrentCameraDevice();
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （六）音频设备相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////

        // public override ITRTCDeviceCollection getMicDevicesList();
        // public override ITRTCDeviceInfo getCurrentMicDevice();
        // public override void setCurrentMicDevice(string micId);

        //public override uint getCurrentMicDeviceVolume();

        //public override void setCurrentMicDeviceVolume(uint volume);
        // public override ITRTCDeviceCollection getSpeakerDevicesList();
        // public override ITRTCDeviceInfo getCurrentSpeakerDevice();
        // public override void setCurrentSpeakerDevice(string speakerId);

        //public override uint getCurrentSpeakerVolume();

        //public override void setCurrentSpeakerVolume(uint volume);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （七）美颜特效和图像水印
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override void setBeautyStyle(TRTCBeautyStyle style, uint beauty, uint white, uint ruddiness)
        {
            //windows 暂时不支持
            #if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX
            ITRTCCloudNative.TRTCUnitySetBeautyStyle(mNativeObj, (int)style,(int) beauty, (int)white, (int)ruddiness);
            #endif
        }
        public override void setWaterMark(TRTCVideoStreamType streamType, string srcData, TRTCWaterMarkSrcType srcType, uint nWidth, uint nHeight, float xOffset, float yOffset, float fWidthRatio)
        {
            ITRTCCloudNative.TRTCUnitySetWaterMark(mNativeObj,(int)streamType, srcData,(int)srcType, (int)nWidth, (int)nHeight, xOffset, yOffset, fWidthRatio);
        }


        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （八）音乐特效和人声特效
        //
        /////////////////////////////////////////////////////////////////////////////////
        // public override ITXAudioEffectManager getAudioEffectManager();

        /// <summary>
        /// 8.2 打开系统声音采集
        /// </summary>
        /// <para>开启后可以采集整个操作系统的播放声音（path 为空）或某一个播放器（path 不为空）的声音，</para>
        /// <para>并将其混入到当前麦克风采集的声音中一起发送到云端。</para>
        /// <param name="path"> path 为空，代表采集整个操作系统的声音。 path 填写 exe 程序（如 QQ音乐）所在的路径，将会启动此程序并只采集此程序的声音，64位 SDK 暂时不支持进程混音能力。</param>
        // public override void startSystemAudioLoopback(string path);

        /// <summary>
        /// 8.3 关闭系统声音采集。
        /// </summary>
        // public override void stopSystemAudioLoopback();

        /// <summary>
        /// 8.4 设置系统声音采集的音量。
        /// </summary>
        /// <param name="volume">音量大小，取值范围为0 - 100。</param>
        // public override void setSystemAudioLoopbackVolume(uint volume);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （九）屏幕分享相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override void startScreenCapture(TRTCVideoStreamType type, ref TRTCVideoEncParam param)
        {
            #if UNITY_STANDALONE_WIN
            ITRTCCloudNative.TRTCUnityStartScreenCapture(mNativeObj, (int)type, (int)param.videoResolution, (int)param.resMode,
                param.videoFps, param.videoBitrate, param.minVideoBitrate, param.enableAdjustRes);
            #endif
        }

        public override void stopScreenCapture()
        {
            #if UNITY_STANDALONE_WIN
            ITRTCCloudNative.TRTCUnityStopScreenCapture(mNativeObj);
            #endif
        }

        public override void pauseScreenCapture()
        {
            #if UNITY_STANDALONE_WIN
            ITRTCCloudNative.TRTCUnityPauseScreenCapture(mNativeObj);
            #endif
        }

        public override void resumeScreenCapture()
        {
            #if UNITY_STANDALONE_WIN
            ITRTCCloudNative.TRTCUnityResumeScreenCapture(mNativeObj);
            #endif
        }

        public override TRTCScreenCaptureSourceInfo[] getScreenCaptureSources()
        {
#if UNITY_STANDALONE_WIN
            int count = ITRTCCloudNative.TRTCUnityGetScreenCaptureSourceCount(mNativeObj);
            TRTCScreenCaptureSourceInfo[] sourceInfoLists = new TRTCScreenCaptureSourceInfo[count];
            for (int i = 0; i < count; ++i)
            {
                IntPtr type = Marshal.AllocHGlobal(4);
                StringBuilder sourceName = new StringBuilder(512);
                IntPtr isMainWnd = Marshal.AllocHGlobal(4);
                sourceInfoLists[i].sourceId = ITRTCCloudNative.TRTCUnityGetScreenCaptureSourceInfo(mNativeObj, i, type, sourceName, sourceName.Capacity, isMainWnd);
                sourceInfoLists[i].type = (TRTCScreenCaptureSourceType)(Marshal.ReadInt32(type));
                sourceInfoLists[i].sourceName = sourceName.ToString();
                sourceInfoLists[i].isMainScreen = Convert.ToBoolean(Marshal.ReadInt32(isMainWnd));
                Marshal.FreeHGlobal(type);
                Marshal.FreeHGlobal(isMainWnd);
            }
            return sourceInfoLists;
#else
            return new TRTCScreenCaptureSourceInfo[0];
            #endif
        }

        public override void selectScreenCaptureTarget(TRTCScreenCaptureSourceInfo source, Rect captureRect, TRTCScreenCaptureProperty property)
        {
            ITRTCCloudNative.TRTCUnitySelectScreenCaptureTarget(mNativeObj, (int)source.type, source.sourceId, source.sourceName,
                    (int)captureRect.xMin, (int)captureRect.yMin, (int)captureRect.xMax, (int)captureRect.yMax,
                    property.enableCaptureMouse, property.enableHighLight, property.enableHighPerformance, property.highLightColor, property.highLightWidth);
        }

        public override void setSubStreamEncoderParam(ref TRTCVideoEncParam param)
        {
            ITRTCCloudNative.TRTCUnitySetSubStreamEncoderParam(mNativeObj, (int)param.videoResolution, (int)param.resMode,
                param.videoFps, param.videoBitrate, param.minVideoBitrate, param.enableAdjustRes);
        }

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十）自定义采集和渲染
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override void enableCustomVideoCapture(bool enable)
        {
            ITRTCCloudNative.TRTCUnityEnableCustomVideoCapture(mNativeObj, enable);
        }

        public override void sendCustomVideoData(TRTCVideoFrame frame)
        {
            ITRTCCloudNative.TRTCUnitySendCustomVideoData(mNativeObj, (int)frame.videoFormat, (int)frame.bufferType,
                frame.data, frame.textureId, frame.length, frame.width, frame.height, frame.timestamp, (int)frame.rotation);
        }

        public override void enableCustomAudioCapture(bool enable)
        {
            ITRTCCloudNative.TRTCUnityEnableCustomAudioCapture(mNativeObj, enable);
        }

        public override void sendCustomAudioData(TRTCAudioFrame frame)
        {
            ITRTCCloudNative.TRTCUnitySendCustomAudioData(mNativeObj, (int)frame.audioFormat, frame.data, frame.length, frame.sampleRate, frame.channel, frame.timestamp);
        }

        public override int setLocalVideoRenderCallback(TRTCVideoStreamType streamType, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback callback)
        {
            RenderKey key = new RenderKey("", streamType);
            lock (mVideoCallbacks)
            {
                if (callback != null)
                {
                    mVideoCallbacks[key] = callback;
                }
                else
                {
                    mVideoCallbacks.Remove(key);
                }
            }
            if (callback != null)
            {
                ITRTCCloudNative.TRTCUnitySetLocalVideoRenderCallback(mNativeObj, (int)pixelFormat, (int)bufferType, onRenderVideoFrameHandler);
            }
            else if (!HasOtherStreamRendering(""))
            {
                ITRTCCloudNative.TRTCUnitySetLocalVideoRenderCallback(mNativeObj, (int)pixelFormat, (int)bufferType, null);
            }
            
            return 0;
        }

        public override int setRemoteVideoRenderCallback(string userId, TRTCVideoStreamType streamType, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback callback)
        {
            RenderKey key = new RenderKey(userId, streamType);
            lock (mVideoCallbacks)
            {
                if (callback != null)
                {
                    mVideoCallbacks[key] = callback;
                }
                else
                {
                    mVideoCallbacks.Remove(key);
                }
            }
            if (callback != null)
            {
                ITRTCCloudNative.TRTCUnitySetRemoteVideoRenderCallback(mNativeObj, userId, (int)pixelFormat, (int)bufferType, onRenderVideoFrameHandler);
            }
            else if (!HasOtherStreamRendering(userId))
            {
                ITRTCCloudNative.TRTCUnitySetRemoteVideoRenderCallback(mNativeObj, userId, (int)pixelFormat, (int)bufferType, null);
            }
            return 0;
        }

        //public override int setAudioFrameCallback(ITRTCAudioFrameCallback callback);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十一）自定义消息发送
        //
        /////////////////////////////////////////////////////////////////////////////////
        //public override bool sendCustomCmdMsg(uint cmdId, byte[] data, uint dataSize, bool reliable, bool ordered);
        public override bool sendSEIMsg(byte[] data, int dataSize, int repeatCount)
        {
            return ITRTCCloudNative.TRTCUnitySendSEIMsg(mNativeObj, data, dataSize, repeatCount);
        }

        public override bool sendCustomCmdMsg(int cmdId, byte[] data, int dataSize, bool reliable, bool ordered)
        {
            return ITRTCCloudNative.TRTCUnitySendCustomCmdMsg(mNativeObj, cmdId,data, dataSize,reliable,ordered);
        }

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十二）设备和网络测试
        //
        /////////////////////////////////////////////////////////////////////////////////

        public override void startSpeedTest(int sdkAppId, string userId, string userSig)
        {
            ITRTCCloudNative.TRTCUnityStartSpeedTest(mNativeObj, sdkAppId, userId, userSig);
        }
        public override void stopSpeedTest()
        {
            ITRTCCloudNative.TRTCUnityStopSpeedTest(mNativeObj);
        }
        // public override void startCameraDeviceTest(IntPtr rendHwnd)
        // {

        // }
        //弃用接口函数
        // public override void stopCameraDeviceTest()
        // {

        // }
        // public override void startMicDeviceTest(uint interval)
        // {

        // }
        // public override void stopMicDeviceTest()
        // {

        // }
        // public override void startSpeakerDeviceTest(string testAudioFilePath)
        // {

        // }
        // public override void stopSpeakerDeviceTest()
        // {

        // }

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十三）LOG 相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        public override string getSDKVersion()
        {
            StringBuilder buffer = new StringBuilder(128);
            ITRTCCloudNative.TRTCUnityGetSDKVersion(mNativeObj, buffer, buffer.Capacity);
            return buffer.ToString();
        }

        public override void setLogLevel(TRTCLogLevel level)
        {
            ITRTCCloudNative.TRTCUnitySetLogLevel(mNativeObj, (int)level);
        }

        public override void setConsoleEnabled(bool enabled)
        {
            ITRTCCloudNative.TRTCUnitySetConsoleEnabled(mNativeObj, enabled);
        }

        public override void setLogCompressEnabled(bool enabled)
        {
            ITRTCCloudNative.TRTCUnitySetLogCompressEnabled(mNativeObj, enabled);
        }

        public override void setLogDirPath(string path)
        {
            ITRTCCloudNative.TRTCUnitySetLogDirPath(mNativeObj, path);
        }

        public override void setLogCallback(ITRTCLogCallback callback)
        {
            // gary to do
        }

        //public override void showDebugView(int showType);

        public override void callExperimentalAPI(string jsonStr)
        {
            ITRTCCloudNative.TRTCUnityCallExperimentalAPI(mNativeObj, jsonStr);
        }

        public override ITXDeviceManager getDeviceManager()
        {
            IntPtr mDeviceManagerNativeObj = IntPtr.Zero;
#if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX || UNITY_STANDALONE_WIN
            mDeviceManagerNativeObj = ITRTCCloudNative.TRTCUnityGetDeviceManager(mNativeObj);
            #endif
            ITXDeviceManager tXDeviceManager = new ITXDeviceManagerImplement(mDeviceManagerNativeObj);
            return tXDeviceManager;
        }

        public override ITXAudioEffectManager getAudioEffectManager()
        {
            IntPtr mAudioEffectManagerNativeObj = IntPtr.Zero;
#if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX || UNITY_STANDALONE_WIN
            mAudioEffectManagerNativeObj = ITRTCCloudNative.TRTCUnityGetAudioEffectManager(mNativeObj);
            #endif
            ITXAudioEffectManager tXAudioEffectManager = new ITXAudioEffectManagerImplement(mAudioEffectManagerNativeObj);
            return tXAudioEffectManager;
        }
#endregion

#region Implement
        public static new ITRTCCloud getTRTCShareInstance()
        {
            if (sInstance == null)
            {
                sInstance = new ITRTCCloudImplement();
            }
            return sInstance;
        }

        public static new void destroyTRTCShareInstance()
        {
            if (sInstance != null)
            {
                sInstance.Destroy();
                sInstance = null;
            }
            GC.Collect();
        }

        public static ITRTCCloud queryTRTCShareInstance()
        {
            return sInstance;
        }

        private ITRTCCloudImplement()
        {
            #if UNITY_ANDROID
            AndroidJavaClass androidJavaClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject androidJavaObject = androidJavaClass.GetStatic<AndroidJavaObject>("currentActivity");
            IntPtr objPtr = androidJavaObject.GetRawObject();
            mNativeObj = ITRTCCloudNative.TRTCUnityGetTRTCInstance(objPtr);
            #else
            mNativeObj = ITRTCCloudNative.TRTCUnityGetTRTCInstance();
            #endif

            ITRTCCloudNative.TRTCUnityAddCallback(mNativeObj, onErrorHandler, onWarningHandler, onEnterRoomHandler, onExitRoomHandler,
                onSwitchRoleHandler, onRemoteUserEnterRoomHandler, onRemoteUserLeaveRoomHandler, onUserVideoAvailableHandler,
                onUserSubStreamAvailableHandler, onUserAudioAvailableHandler, onFirstVideoFrameHandler, onFirstAudioFrameHandler,
                onSendFirstLocalVideoFrameHandler, onSendFirstLocalAudioFrameHandler, onNetworkQualityHandler, onStatisticsHandler,
                onConnectionLostHandler, onTryToReconnectHandler, onConnectionRecoveryHandler, onCameraDidReadyHandler,
                onMicDidReadyHandler, onUserVoiceVolumeHandler, onDeviceChangeHandler, onRecvSEIMsgHandler,
                onStartPublishingHandler, onStopPublishingHandler);
#if UNITY_STANDALONE_WIN
            ITRTCCloudNative.TRTCUnityAddScreenCaptureCallback(mNativeObj,
                onScreenCaptureStartedHandler, onScreenCapturePausedHandler,
                onScreenCaptureResumedHandler, onScreenCaptureStopedHandler);
#endif
#if UNITY_ANDROID || UNITY_IOS || UNITY_STANDALONE_OSX
            ITRTCCloudNative.TRTCUnityAddOtherCallback(mNativeObj,
                onConnectOtherRoomHandler,
                onDisconnectOtherRoomHandler,
                onSwitchRoomHandler,
                onSpeedTestHandler,
                onTestMicVolumeHandler,
                onTestSpeakerVolumeHandler,
                onAudioDeviceCaptureVolumeChangedHandler,
                onAudioDevicePlayoutVolumeChangedHandler,
                onRecvCustomCmdMsgHandler,
                onMissCustomCmdMsgHandler,
                onStartPublishCDNStreamHandler,
                onStopPublishCDNStreamHandler,
                onSetMixTranscodingConfigHandle
            );
#endif
            mGameObjName = TRTCCallbackObj.CreateGameObj();
        }

        private void Destroy()
        {
            if (mNativeObj != IntPtr.Zero)
            {
                ITRTCCloudNative.TRTCUnityRemoveCallback(mNativeObj);
                ITRTCCloudNative.TRTCUnityDestroyTRTCInstance(mNativeObj);
                mNativeObj = IntPtr.Zero;
            }

            if (mGameObjName.Length > 0)
            {
                TRTCCallbackObj.DestroyGameObj(mGameObjName);
                mGameObjName = "";
            }
        }

        ~ITRTCCloudImplement()
        {
            Destroy();
        }

        private static ITRTCCloudImplement sInstance;
        private IntPtr mNativeObj = IntPtr.Zero;
        private string mGameObjName = "";

#endregion

#region Callback
        private List<ITRTCCloudCallback> mCallbacks = new List<ITRTCCloudCallback>();
        private Dictionary<RenderKey, ITRTCVideoRenderCallback> mVideoCallbacks = new Dictionary<RenderKey, ITRTCVideoRenderCallback>();

        private bool HasOtherStreamRendering(string userId)
        {
            lock (mVideoCallbacks)
            {
                if (mVideoCallbacks.ContainsKey(new RenderKey(userId, TRTCVideoStreamType.TRTCVideoStreamTypeBig))
                    || mVideoCallbacks.ContainsKey(new RenderKey(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSmall))
                    || mVideoCallbacks.ContainsKey(new RenderKey(userId, TRTCVideoStreamType.TRTCVideoStreamTypeSub)))
                {
                    return true;
                }
            }
            return false;
        }

        public override void addCallback(ITRTCCloudCallback callback)
        {
            mCallbacks.Add(callback);
        }

        public override void removeCallback(ITRTCCloudCallback callback)
        {
            mCallbacks.Remove(callback);
        }

        private static List<ITRTCCloudCallback> dumplicateCallbacks()
        {
            List<ITRTCCloudCallback> callbacks = new List<ITRTCCloudCallback>();
            if (sInstance == null || sInstance.mCallbacks == null)
                return callbacks;

            foreach (ITRTCCloudCallback callback in sInstance.mCallbacks)
            {
                callbacks.Add(callback);
            }
            return callbacks;
        }
        private static bool isBuffAvailable(UInt32 buffLength, int offset, UInt32 fieldLength)
        {
            return (offset + fieldLength <= buffLength);
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onErrorHandler))]
        public static void onErrorHandler(int errCode, string errMsg, IntPtr extraInfo)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onError((TXLiteAVError)errCode, errMsg, extraInfo);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onWarningHandler))]
        public static void onWarningHandler(int warningCode, string warningMsg, IntPtr extraInfo)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onWarning((TXLiteAVWarning)warningCode, warningMsg, extraInfo);
            }
        }

        
        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onEnterRoomHandler))]
        public static void onEnterRoomHandler(int result)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onEnterRoom(result);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onExitRoomHandler))]
        public static void onExitRoomHandler(int reason)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onExitRoom(reason);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onSwitchRoleHandler))]
        public static void onSwitchRoleHandler(int errCode, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onSwitchRole((TXLiteAVError)errCode, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onRemoteUserEnterRoomHandler))]
        public static void onRemoteUserEnterRoomHandler(string userId)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onRemoteUserEnterRoom(userId);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onRemoteUserLeaveRoomHandler))]
        public static void onRemoteUserLeaveRoomHandler(string userId, int reason)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onRemoteUserLeaveRoom(userId, reason);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onUserVideoAvailableHandler))]
        public static void onUserVideoAvailableHandler(string userId, bool available)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onUserVideoAvailable(userId, available);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onUserVideoAvailableHandler))]
        public static void onUserSubStreamAvailableHandler(string userId, bool available)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onUserSubStreamAvailable(userId, available);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onUserAudioAvailableHandler))]
        public static void onUserAudioAvailableHandler(string userId, bool available)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onUserAudioAvailable(userId, available);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onFirstVideoFrameHandler))]
        public static void onFirstVideoFrameHandler(string userId, int streamType, int width, int height)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onFirstVideoFrame(userId, (TRTCVideoStreamType)streamType, width, height);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onFirstAudioFrameHandler))]
        public static void onFirstAudioFrameHandler(string userId)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onFirstAudioFrame(userId);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onSendFirstLocalVideoFrameHandler))]
        public static void onSendFirstLocalVideoFrameHandler(int streamType)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onSendFirstLocalVideoFrame((TRTCVideoStreamType)streamType);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onSendFirstLocalAudioFrameHandler))]
        public static void onSendFirstLocalAudioFrameHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onSendFirstLocalAudioFrame();
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onNetworkQualityHandler))]
        public static void onNetworkQualityHandler(string strLocalQuality, string strRemoteQuality, UInt32 remoteQualityCount)
        {
            TRTCQualityInfo localQuality = JsonUtility.FromJson<TRTCQualityInfo>(strLocalQuality);
            TRTCQualityArrayInfo remoteQualityArray = JsonUtility.FromJson<TRTCQualityArrayInfo>(strRemoteQuality);
            TRTCQualityInfo[] remoteQuality = remoteQualityArray.remoteQualityArray;
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onNetworkQuality(localQuality, remoteQuality, remoteQualityCount);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onStatisticsHandler))]
        public static void onStatisticsHandler(string strStatis)
        {
            TRTCStatistics trtcStatis = JsonUtility.FromJson<TRTCStatistics>(strStatis);
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onStatistics(trtcStatis);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onConnectionLostHandler))]
        public static void onConnectionLostHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onConnectionLost();
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onTryToReconnectHandler))]
        public static void onTryToReconnectHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onTryToReconnect();
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onConnectionRecoveryHandler))]
        public static void onConnectionRecoveryHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onConnectionRecovery();
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onCameraDidReadyHandler))]
        public static void onCameraDidReadyHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onCameraDidReady();
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onMicDidReadyHandler))]
        public static void onMicDidReadyHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onMicDidReady();
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onUserVoiceVolumeHandler))]
        public static void onUserVoiceVolumeHandler(string strUserVolumes, UInt32 userVolumesCount, UInt32 totalVolume)
        {
            TRTCVolumeArrayInfo userVolumeArray = JsonUtility.FromJson<TRTCVolumeArrayInfo>(strUserVolumes);
            TRTCVolumeInfo[] userVolumeInfo = userVolumeArray.userVolumesArray;
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            // C++接口安卓回调了本地用户id，这里做下兼容
#if PLATFORM_ANDROID
                for(int index = 0; index < userVolumeInfo.Length;index++) {
                    if(localUserId == userVolumeInfo[index].userId) {
                        userVolumeInfo[index].userId = "";
                    }
                }
#endif
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onUserVoiceVolume(userVolumeInfo, userVolumesCount, totalVolume);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onDeviceChangeHandler))]
        public static void onDeviceChangeHandler(string deviceId, int type, int state)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onDeviceChange(deviceId, (TRTCDeviceType)type, (TRTCDeviceState)state);
            }
        }


        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onRecvSEIMsgHandler))]
        public static void onRecvSEIMsgHandler(string userId, byte[] message, UInt32 messageSize)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onRecvSEIMsg(userId, message, messageSize);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onStartPublishingHandler))]
        public static void onStartPublishingHandler(int err, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onStartPublishing(err, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onStopPublishingHandler))]
        public static void onStopPublishingHandler(int err, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onStopPublishing(err, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onScreenCaptureStartedHandler))]
        public static void onScreenCaptureStartedHandler()
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onScreenCaptureStarted();
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onScreenCapturePausedHandler))]
        public static void onScreenCapturePausedHandler(int reason)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onScreenCapturePaused(reason);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onScreenCaptureResumedHandler))]
        public static void onScreenCaptureResumedHandler(int reason)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onScreenCaptureResumed(reason);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onScreenCaptureStopedHandler))]
        public static void onScreenCaptureStopedHandler(int reason)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onScreenCaptureStoped(reason);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onStartPublishCDNStreamHandler))]
        public static void onStartPublishCDNStreamHandler(int err, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onStartPublishCDNStream(err, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onStopPublishCDNStreamHandler))]
        public static void onStopPublishCDNStreamHandler(int err, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onStopPublishCDNStream(err, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onSetMixTranscodingConfig))]
        public static void onSetMixTranscodingConfigHandle(int err, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onSetMixTranscodingConfig(err, errMsg);
            }
        }

        // static int mVideoLogCount = 0;

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onRenderVideoFrameHandler))]
        public static void onRenderVideoFrameHandler(string userId, int streamType, int videoFormat, int bufferType,
            IntPtr data, int textureId, UInt32 length, UInt32 width, UInt32 height, UInt64 timestamp, int rotation)
        {
            TRTCVideoFrame videoFrame = new TRTCVideoFrame();
            videoFrame.videoFormat = (TRTCVideoPixelFormat)videoFormat;
            videoFrame.bufferType = (TRTCVideoBufferType)bufferType;
            videoFrame.data = new byte[length];
            Marshal.Copy(data, videoFrame.data, 0, (int)length);
            videoFrame.length = length;
            videoFrame.width = width;
            videoFrame.height = height;
            videoFrame.timestamp = timestamp;
            videoFrame.rotation = (TRTCVideoRotation)rotation;
            
            /*
            if (mVideoLogCount++ % 100 == 0)
            {
                Debug.LogFormat("onRenderVideoFormat rotation={0}, w={1}, h={2}", videoFrame.rotation, videoFrame.width, videoFrame.height);
                Debug.LogFormat("onRenderData {0} {1} {2} {3} {4} {5} {6} {7} {8} {9} {10} {11} {12} {13} {14} {15} {16} {17} {18} {19}",
                    videoFrame.data[0], videoFrame.data[1], videoFrame.data[2], videoFrame.data[3], videoFrame.data[4],
                    videoFrame.data[5], videoFrame.data[6], videoFrame.data[7], videoFrame.data[8], videoFrame.data[9],
                    videoFrame.data[10], videoFrame.data[11], videoFrame.data[12], videoFrame.data[13], videoFrame.data[14],
                    videoFrame.data[15], videoFrame.data[16], videoFrame.data[17], videoFrame.data[18], videoFrame.data[19]);
            }
            */
#if PLATFORM_ANDROID
                if(localUserId == userId) {
                    userId = "";
                }
#endif
            if (sInstance == null) return;
            lock (sInstance.mVideoCallbacks)
            {
                RenderKey key = new RenderKey(userId, (TRTCVideoStreamType)streamType);
                if (sInstance.mVideoCallbacks.ContainsKey(key))
                {
                    ITRTCVideoRenderCallback callback = sInstance.mVideoCallbacks[key];
                    if (callback != null)
                    {
                        callback.onRenderVideoFrame(userId, (TRTCVideoStreamType)streamType, videoFrame);
                    }
                }
            }
        }

        
        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onConnectOtherRoomHandler))]
        public static void onConnectOtherRoomHandler(string userId, TXLiteAVError errCode, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onConnectOtherRoom(userId,errCode, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onDisconnectOtherRoomHandler))]
        public static void onDisconnectOtherRoomHandler(TXLiteAVError errCode, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onDisconnectOtherRoom(errCode, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onSwitchRoomHandler))]
        public static void onSwitchRoomHandler(TXLiteAVError errCode, string errMsg)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onSwitchRoom(errCode, errMsg);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onSpeedTestHandler))]
        public static void onSpeedTestHandler(TRTCSpeedTestResult currentResult, int finishedCount, int totalCount)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onSpeedTest(currentResult,finishedCount, totalCount);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onTestMicVolumeHandler))]
        public static void onTestMicVolumeHandler(int volume)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onTestMicVolume(volume);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onTestSpeakerVolumeHandler))]
        public static void onTestSpeakerVolumeHandler(int volume)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onTestSpeakerVolume(volume);
            }
        }
        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onAudioDeviceCaptureVolumeChangedHandler))]
        public static void onAudioDeviceCaptureVolumeChangedHandler(int volume, bool muted)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onAudioDeviceCaptureVolumeChanged(volume,muted);
            }
        }
        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onAudioDevicePlayoutVolumeChangedHandler))]
        public static void onAudioDevicePlayoutVolumeChangedHandler(int volume, bool muted)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onAudioDevicePlayoutVolumeChanged(volume,muted);
            }
        }
        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onRecvCustomCmdMsgHandler))]
        public static void onRecvCustomCmdMsgHandler(String userId, int cmdID, int seq, byte[] message, int messageSize)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onRecvCustomCmdMsg(userId, cmdID,seq,message,messageSize);
            }
        }

        [MonoPInvokeCallback(typeof(ITRTCCloudNative.onMissCustomCmdMsgHandler))]
        public static void onMissCustomCmdMsgHandler(String userId, int cmdID, int errCode, int missed)
        {
            List<ITRTCCloudCallback> callbacks = ITRTCCloudImplement.dumplicateCallbacks();
            foreach (ITRTCCloudCallback callback in callbacks)
            {
                callback.onMissCustomCmdMsg(userId, cmdID, errCode,missed);
            }
        }
#endregion
    }
}
