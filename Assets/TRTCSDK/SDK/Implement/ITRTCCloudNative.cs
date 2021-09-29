using System;
using System.Runtime.InteropServices;
using System.Text;

namespace trtc
{
    public class ITRTCCloudNative
    {
       #region DllImport
#if UNITY_IPHONE && !UNITY_EDITOR
		public const string MyLibName = "__Internal";
#elif UNITY_ANDROID && !UNITY_EDITOR
        public const string MyLibName = "native-lib";
#elif UNITY_STANDALONE_WIN
    // public const string MyLibName = "liteav";
    public const string MyLibName = "trtc-c-wrapper";
#elif UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
    public const string MyLibName = "macosliteav";
#endif
       #endregion

        #region Delegate
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onErrorHandler(int err_code, string err_msg, IntPtr extra_info);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onWarningHandler(int warning_code, string warningMsg, IntPtr extra_info);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onEnterRoomHandler(int result);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onExitRoomHandler(int reason);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSwitchRoleHandler(int err_code, string err_msg);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onRemoteUserEnterRoomHandler(string user_id);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onRemoteUserLeaveRoomHandler(string user_id, int reason);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onUserVideoAvailableHandler(string user_id, bool available);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onUserSubStreamAvailableHandler(string user_id, bool available);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onUserAudioAvailableHandler(string user_id, bool available);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onFirstVideoFrameHandler(string user_id, int stream_type,
            int width, int height);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onFirstAudioFrameHandler(string user_id);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSendFirstLocalVideoFrameHandler(int stream_type);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSendFirstLocalAudioFrameHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onNetworkQualityHandler(string local_quality,
            string remote_quality, UInt32 remote_quality_count);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onStatisticsHandler(string statis);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onConnectionLostHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onTryToReconnectHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onConnectionRecoveryHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onCameraDidReadyHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onMicDidReadyHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onUserVoiceVolumeHandler(string user_volumes,
            UInt32 user_volumes_count, UInt32 totalVolume);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onDeviceChangeHandler(string device_id, int type, int state);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onRecvSEIMsgHandler(string user_id,
            [MarshalAs(UnmanagedType.LPArray, SizeParamIndex = 2)]byte[] message, UInt32 message_size);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onStartPublishingHandler(int err, string err_msg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onStopPublishingHandler(int err, string err_msg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onScreenCaptureStartedHandler();
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onScreenCapturePausedHandler(int reason);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onScreenCaptureResumedHandler(int reason);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onScreenCaptureStopedHandler(int reason);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onStartPublishCDNStreamHandler(int err, string err_msg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onStopPublishCDNStreamHandler(int err, string err_msg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSetMixTranscodingConfig(int err, string err_msg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onRenderVideoFrameHandler(string user_id, int stream_type,
            int video_format, int buffer_type, IntPtr data, int texture_id, UInt32 length, UInt32 width, UInt32 height, UInt64 timestamp, int rotation);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onLogHandler(string log, int level, string module);

        //
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onConnectOtherRoomHandler(string userId, TXLiteAVError errCode, string errMsg);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onDisconnectOtherRoomHandler(TXLiteAVError errCode, string errMsg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSwitchRoomHandler(TXLiteAVError errCode, string errMsg);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSpeedTestHandler(TRTCSpeedTestResult currentResult, int finishedCount, int totalCount);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onTestMicVolumeHandler(int volume);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onTestSpeakerVolumeHandler(int volume);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onAudioDeviceCaptureVolumeChangedHandler(int volume, bool muted);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onAudioDevicePlayoutVolumeChangedHandler(int volume, bool muted);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onRecvCustomCmdMsgHandler(String userId, int cmdID, int seq, byte[] message, int messageSize);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onMissCustomCmdMsgHandler(String userId, int cmdID, int errCode, int missed);
        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void onSnapshotComplete(string userId, TRTCVideoStreamType type, IntPtr data, int length, int width, int height, TRTCVideoPixelFormat format);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityAddOtherCallback(IntPtr instance,
            onConnectOtherRoomHandler on_connect_other_room,
            onDisconnectOtherRoomHandler on_disconnect_otherRoom,
            onSwitchRoomHandler on_switch_room,
            onSpeedTestHandler on_speed_test,
            onTestMicVolumeHandler on_test_mic_volume,
            onTestSpeakerVolumeHandler on_test_speaker_volume,
            onAudioDeviceCaptureVolumeChangedHandler on_audio_device_capture_volume_changed,
            onAudioDevicePlayoutVolumeChangedHandler on_audio_device_playout_volume_changed,
            onRecvCustomCmdMsgHandler on_recv_custom_cmdmsg_handler,
            onMissCustomCmdMsgHandler on_miss_custom_cmdmsg_handler,
            onStartPublishCDNStreamHandler on_start_publishing_cdn_handler,
            onStopPublishCDNStreamHandler on_stop_publishing_cdn_handler,
            onSetMixTranscodingConfig on_set_mix_transcoding_config_handler
        );

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityAddCallback(IntPtr instance,
            onErrorHandler on_error_handler,
            onWarningHandler on_warning_handler,
            onEnterRoomHandler on_enter_room_handler,
            onExitRoomHandler on_exit_room_handler,
            onSwitchRoleHandler on_switch_role_handler,
            onRemoteUserEnterRoomHandler on_remote_user_enterRoom_handler,
            onRemoteUserLeaveRoomHandler on_remote_user_leave_room_handler,
            onUserVideoAvailableHandler on_user_video_available_handler,
            onUserSubStreamAvailableHandler on_user_sub_stream_available_handler,
            onUserAudioAvailableHandler on_user_audio_available_handler,
            onFirstVideoFrameHandler on_first_video_frame_handler,
            onFirstAudioFrameHandler on_first_audio_frame_handler,
            onSendFirstLocalVideoFrameHandler on_send_first_local_video_frame_handler,
            onSendFirstLocalAudioFrameHandler on_send_first_local_audio_frame_handler,
            onNetworkQualityHandler on_network_quality_handler,
            onStatisticsHandler on_statistics_handler,
            onConnectionLostHandler on_connection_lost_handler,
            onTryToReconnectHandler on_try_to_reconnect_handler,
            onConnectionRecoveryHandler on_connection_recovery_handler,
            onCameraDidReadyHandler on_camera_did_ready_handler,
            onMicDidReadyHandler on_mic_did_ready_handler,
            onUserVoiceVolumeHandler on_user_voice_volume_handler,
            onDeviceChangeHandler on_device_change_handler,
            onRecvSEIMsgHandler on_recv_sei_msg_handler,
            onStartPublishingHandler on_start_publishing_handler,
            onStopPublishingHandler on_stop_publishing_handler
        );
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityAddScreenCaptureCallback(IntPtr instance,
            onScreenCaptureStartedHandler on_screen_capture_started_handler,
            onScreenCapturePausedHandler on_screen_capture_paused_handler,
            onScreenCaptureResumedHandler on_screen_capture_resumed_handler,
            onScreenCaptureStopedHandler screen_capture_stoped_handler
        );

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityRemoveCallback(IntPtr instance);
        #endregion

        #region Native
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]

        #if UNITY_ANDROID
        public static extern IntPtr TRTCUnityGetTRTCInstance(IntPtr context);
        #else
        public static extern IntPtr TRTCUnityGetTRTCInstance();
        #endif
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr TRTCUnityGetDeviceManager(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr TRTCUnityGetAudioEffectManager(IntPtr instance);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityDestroyTRTCInstance(IntPtr instance);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityEnterRoom(IntPtr instance, UInt32 sdk_app_id, string user_id, string user_sig, UInt32 room_id,
            string str_room_id, int role, string stream_id, string user_define_record_id, string private_map_key, string business_info, int scene);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityExitRoom(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySwitchRole(IntPtr instance, int role);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityConnectOtherRoom(IntPtr instance,string jsonParams);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern  void TRTCUnityDisconnectOtherRoom(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern  void TRTCUnitySetDefaultStreamRecvMode(IntPtr instance,bool autoRecvAudio, bool autoRecvVideo);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern  void TRTCUnitySwitchRoom(IntPtr instance,int roomId,string strRoomId,string userSig,string privateMapKey); 

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartPublishing(IntPtr instance, string stream_id, int type);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopPublishing(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartPublishCDNStream(IntPtr instance, UInt32 appId, UInt32 bizId, string url);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopPublishCDNStream(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMixTranscodingConfigNull(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetMixTranscodingConfig(IntPtr instance, TRTCTranscodingConfigMode mode, UInt32 appId, UInt32 bizId, UInt32 videoWidth, UInt32 videoHeight, UInt32 videoBitrate, UInt32 videoFramerate,
         UInt32 videoGOP, UInt32 backgroundColor, string backgroundImage, UInt32 audioSampleRate, UInt32 audioBitrate, UInt32 audioChannels, UInt32 mixUsersArraySize, string streamId, TRTCMixUser[] mixUsersArray);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]

        #if UNITY_IOS || UNITY_ANDROID
        public static extern void TRTCUnityStartLocalPreview(IntPtr instance, bool frontCamera);
        #else
        public static extern void TRTCUnityStartLocalPreview(IntPtr instance);
        #endif
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopLocalPreview(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr TRTCUnityGetVideoRenderData(IntPtr instance,string userId, ref int rotation, ref int width, ref int height,ref int length,bool isNeedDestroy);
        
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityMuteLocalVideo(IntPtr instance, bool mute);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartRemoteView(IntPtr instance, string user_id, int stream_type);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopRemoteView(IntPtr instance, string user_id, int stream_type);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopAllRemoteView(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityMuteRemoteVideoStream(IntPtr instance, string user_id, bool mute);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityMuteAllRemoteVideoStreams(IntPtr instance, bool mute);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVideoEncoderParam(IntPtr instance,
          int video_resolution,
          int res_mode,
          UInt32 video_fps,
          UInt32 video_bitrate,
          UInt32 min_video_bitrate,
          bool enable_adjust_res);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetNetworkQosParam(IntPtr instance,
          int preference,
          int control_mode);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVideoEncoderRotation(IntPtr instance, int rotation);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetVideoEncoderMirror(IntPtr instance, bool mirror);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetRemoteRenderParams(IntPtr instance, string userId, int streamType, int fillMode, int mirrorType, int rotation);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityEnableSmallVideoStream(IntPtr instance, bool enable,ref TRTCVideoEncParam smallVideoParam);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetRemoteVideoStreamType(IntPtr instance, string userId, int type);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetBeautyStyle(IntPtr instance, int style, int beauty, int white, int ruddiness);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetWaterMark(IntPtr instance, int streamType, string srcData, int srcType, int nWidth, int nHeight, float xOffset, float yOffset, float fWidthRatio);


        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartLocalAudio(IntPtr instance, int quality);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopLocalAudio(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityMuteLocalAudio(IntPtr instance, bool mute);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityMuteRemoteAudio(IntPtr instance, string user_id, bool mute);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityMuteAllRemoteAudio(IntPtr instance, bool mute);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityEnableAudioVolumeEvaluation(IntPtr instance, UInt32 interval);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetRemoteAudioVolume(IntPtr instance, string userId, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetAudioPlayoutVolume(IntPtr instance, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityGetAudioPlayoutVolume(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityStartAudioRecording(IntPtr instance, string filePath);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopAudioRecording(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartLocalRecording(IntPtr instance, string filePath, int recordType, int interval);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopLocalRecording(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetAudioCaptureVolume(IntPtr instance, int volume);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityGetAudioCaptureVolume(IntPtr instance);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityEnableCustomVideoCapture(IntPtr instance, bool enable);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySendCustomVideoData(IntPtr instance,
          int video_format,
          int buffer_type,
          byte[] data,
          int texture_id,
          UInt32 length,
          UInt32 width,
          UInt32 height,
          UInt64 timestamp,
          int rotation);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityEnableCustomAudioCapture(IntPtr instance, bool enable);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySendCustomAudioData(IntPtr instance,
          int audio_format,
          byte[] data,
          UInt32 length,
          UInt32 sample_rate,
          UInt32 channel,
          UInt64 timestamp);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySetLocalVideoRenderCallback(IntPtr instance, int pixel_format,
            int buffer_type, onRenderVideoFrameHandler on_render_video_frame_handler);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnitySetRemoteVideoRenderCallback(IntPtr instance, string user_id,
            int pixel_format, int buffer_type, onRenderVideoFrameHandler on_render_video_frame_handler);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool TRTCUnitySendSEIMsg(IntPtr instance, byte[] data, Int32 data_size, Int32 repeat_count);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern bool TRTCUnitySendCustomCmdMsg(IntPtr instance, int cmdId, byte[] data, int dataSize, bool reliable, bool ordered);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityGetSDKVersion(IntPtr instance, StringBuilder data, int size);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetLogLevel(IntPtr instance, int level);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetConsoleEnabled(IntPtr instance, bool enabled);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetLogCompressEnabled(IntPtr instance, bool enabled);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetLogDirPath(IntPtr instance, string path);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityCallExperimentalAPI(IntPtr instance, string json);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStartScreenCapture(IntPtr instance,
          int stream_type,
          int video_resolution,
          int res_mode,
          UInt32 video_fps,
          UInt32 video_bitrate,
          UInt32 min_video_bitrate,
          bool enable_adjust_res);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopScreenCapture(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityPauseScreenCapture(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityResumeScreenCapture(IntPtr instance);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern int TRTCUnityGetScreenCaptureSourceCount(IntPtr instance);
#if UNITY_STANDALONE_WIN
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern IntPtr TRTCUnityGetScreenCaptureSourceInfo(IntPtr instance, int index,
            IntPtr type, StringBuilder source_name, int source_name_size, IntPtr is_main_screen);
#endif
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySelectScreenCaptureTarget(IntPtr instance, int type, IntPtr source_id, string source_name,
            int capture_left, int capture_top, int capture_right, int capture_bottom,
            bool enable_capture_mouse, bool enable_highlight, bool enable_high_performance, int highlight_color, int highlight_Width);

        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnitySetSubStreamEncoderParam(IntPtr instance,
          int video_resolution,
          int res_mode,
          UInt32 video_fps,
          UInt32 video_bitrate,
          UInt32 min_video_bitrate,
          bool enable_adjust_res);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityUpdate();

        
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern  void TRTCUnityStartSpeedTest(IntPtr instance,int sdkAppId, string userId, string userSig);
        [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void TRTCUnityStopSpeedTest(IntPtr instance);

        //弃用接口函数
        // [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        // public static extern  void startCameraDeviceTest(IntPtr rendHwnd);
        // [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        // public static extern  void TRTCUnityStopCameraDeviceTest(IntPtr instance);
        // [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        // public static extern  void TRTCUnityStartMicDeviceTest(IntPtr instance,uint interval);
        // [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        // public static extern  void TRTCUnityStopMicDeviceTest(IntPtr instance);
        // [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        // public static extern  void TRTCUnityStartSpeakerDeviceTest(IntPtr instance,string testAudioFilePath);
        // [DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
        // public static extern  void TRTCUnityStopSpeakerDeviceTest(IntPtr instance);

#endregion
    }
}
