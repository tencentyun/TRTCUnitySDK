using System;
using System.Runtime.InteropServices;

namespace trtc
{
    /// <summary>
    /// TRTC callback API class
    /// </summary>
    public interface ITRTCCloudCallback
    {
        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (1) Error and Warning Events
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Error events and warning events
        /// @{

        /// <summary>
        /// 1.1 Callback for error. This callback indicates that the SDK encountered an unrecoverable error. Such errors must be listened for, and UI reminders should be sent to users if necessary.
        /// </summary>
        /// <param name="errCode">Error code</param>
        /// <param name="errMsg">Error message</param>
        /// <param name="arg"> Extended field. Certain error codes may carry extra information for troubleshooting.</param>
        void onError(TXLiteAVError errCode, String errMsg, IntPtr arg);

        /// <summary>
        /// 1.2 Callback for warning. This callback alerts you to non-serious problems such as stutter or recoverable decoding failure.
        /// </summary>
        /// <param name="warningCode">Warning code</param>
        /// <param name="warningMsg">Warning message</param>
        /// <param name="arg"> Extended field. Certain warning codes may carry extra information for troubleshooting.</param>
        void onWarning(TXLiteAVWarning warningCode, String warningMsg, IntPtr arg);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (2) Room Event Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Room event callbacks
        /// @{

        /// <summary>
        /// 2.1 Callback for room entry
        /// 
        /// <para>After calling the `enterRoom()` API in `TRTCCloud` to enter a room, you will receive the `onEnterRoom(result)` callback from the SDK.</para>
        /// <para>- If room entry succeeds, `result` will be a positive integer (`result` &gt; 0), which indicates the time (ms) it takes to enter the room.</para>
        /// <para>- If room entry fails, `result` will be a negative integer (`result` &lt; 0), which represents the error code.</para>
        /// <para>For more information on room entry error codes, please see [Error Codes](https://cloud.tencent.com/document/product/647/32257).</para>
        /// </summary>
        /// <remarks>
        /// In TRTC earlier than v6.6, the `onEnterRoom(result)` callback is returned only if room entry succeeds, and the `onError()` callback is returned if room entry fails.
        /// <para>In TRTC v6.6 and above, `onEnterRoom(result)` is returned for both successful and failed room entry, but `result` is a positive integer if room entry succeeds and a negative integer if it fails. The `onError()` callback is also returned if room entry fails.</para>
        /// </remarks>
        /// <param name="result">If `result` is greater than 0, it indicates the time (ms) it takes to enter the room; if `result` is less than 0, it represents the error code.</param>
        void onEnterRoom(int result);

        /// <summary>
        /// 2.2 Callback for leaving room
        /// <para>
        /// Calling the `exitRoom()` API in `TRTCCloud` will trigger the execution of room exit-related logic, such as releasing resources of audio/video devices and codecs.
        /// When all the resources are released, the SDK will notify you via the `onExitRoom()` callback.
        /// </para>
        /// <para>
        /// If you need to call `enterRoom()` again or switch to another audio/video SDK, please wait until you receive the `onExitRoom()` callback.
        /// Otherwise, you may encounter problems such as the camera or mic being occupied.
        /// </para>
        /// </summary>
        /// <param name="reason">Reason for leaving a room. `0`: the user called `exitRoom` to leave the room; `1`: the user was removed from the room by the server; `2`: the room was closed</param>
        void onExitRoom(int reason);

        /// <summary>
        /// 2.3 Callback for switching roles
        /// <para>
        /// You can call the `switchRole()` API in `TRTCCloud` to switch between “anchor” and “audience”. This is accompanied by a line switching process.
        /// After the switch, the SDK will return the `onSwitchRole()` callback.
        /// </para>
        /// </summary>
        /// <param name="errCode">Error code. `ERR_NULL` indicates a successful switch. For other codes, please see [Error Codes](https://cloud.tencent.com/document/product/647/32257).</param>
        /// <param name="errMsg">Error message</param>
        void onSwitchRole(TXLiteAVError errCode, String errMsg);
        
        /// <summary>
        /// 2.4 Callback for requesting a cross-room call (anchor competition)
        /// <para>
        /// You can call the `connectOtherRoom()` API in `TRTCCloud` to call the anchor of another room. This is the “anchor competition” feature.
        /// The caller will receive the `onConnectOtherRoom()` callback, which can be used to determine whether the cross-room call is successful.
        /// If it is successful, all users in both rooms will receive the `onUserVideoAvailable()` callback.
        /// </para>
        /// </summary>
        /// <param name="userId">`userId` of the anchor to call</param>
        /// <param name="errCode">Error code. `ERR_NULL` indicates the cross-room call is successful. For other codes, please see [Error Codes](https://cloud.tencent.com/document/product/647/32257).</param>
        /// <param name="errMsg">Error message</param>
        void onConnectOtherRoom(string userId, TXLiteAVError errCode, string errMsg);

        ///<summary>
        ///2.5 Callback for ending a cross-room call (anchor competition)
        ///</summary>
        /// <param name="errCode">Error code. `ERR_NULL` indicates the cross-room call is ended successfully. For other codes, please see [Error Codes](https://cloud.tencent.com/document/product/647/32257).</param>
        /// <param name="errMsg">Error message</param>
        void onDisconnectOtherRoom(TXLiteAVError errCode, string errMsg);

        ///<summary>
        /// 2.6 Callback for switching rooms (`switchRoom`)
        /// </summary>
        /// <param name="errCode">Error code. `ERR_NULL` indicates a successful switch. For other codes, please see [Error Codes](https://cloud.tencent.com/document/product/647/32257).</param>
        /// <param name="errMsg">Error message</param>
        void onSwitchRoom(TXLiteAVError errCode, string errMsg);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (3) User Event Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Member event callbacks
        /// @{

        /// <summary>
        /// 3.1 A user entered the room
        /// 
        /// <para>To ensure the performance of the SDK, this callback works differently under call and live streaming scenarios.</para>
        /// <para>- Call (`TRTCAppSceneVideoCall` and `TRTCAppSceneAudioCall`): The concept of roles does not apply, and the callback is triggered when any user enters the room.</para>
        /// <para>- Live streaming (`TRTCAppSceneLIVE` and `TRTCAppSceneVoiceChatRoom`): Given that there is no limit on audience size and frequent callbacks may affect the SDK’s performance, the callback is triggered only when an anchor enters the room.</para>
        /// </summary>
        /// <remarks>
        /// Note: `onRemoteUserEnterRoom` and `onRemoteUserLeaveRoom` are used for maintaining the user list of a room. To play the video of a remote user, please use the `onUserVideoAvailable()` callback.
        /// </remarks>
        /// <param name="userId">User ID</param>
        void onRemoteUserEnterRoom(String userId);

        /// <summary>
        /// 3.2 A user left the room (which pairs with `onRemoteUserEnterRoom`)
        /// 
        /// <para>Like `onRemoteUserEnterRoom`, this callback works differently under call and live streaming scenarios.</para>
        /// <para>- Call (`TRTCAppSceneVideoCall` and `TRTCAppSceneAudioCall`): The concept of roles does not apply, and the callback is triggered when any user leaves the room.</para>
        /// <para>- Live streaming (`TRTCAppSceneLIVE` and `TRTCAppSceneVoiceChatRoom`): The callback is triggered only when an anchor leaves the room.</para>
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="reason"> Reason for leaving a room. `0`: the user left the room voluntarily; `1`: the user left the room due to timeout; `2`: the user was removed from the room</param>
        void onRemoteUserLeaveRoom(String userId, int reason);

        /// <summary>
        /// 3.3 Whether a remote user has a playable primary stream (usually used for camera images)
        ///
        /// <para>The `onUserVideoAvailable(userId, YES)` callback indicates that the user has playable video frames.</para>
        /// <para>You can call `startRemoteView(userId)` to load the user’s video.</para>
        /// <para>You will then receive the `onFirstVideoFrame(userId)` callback, which indicates that the first video frame has been rendered.</para>
        /// <para>
        /// The `onUserVideoAvailable(userId, NO)` callback indicates that the remote user has disabled video.
        /// This may be because the user called `muteLocalVideo()` or `stopLocalPreview()`.
        /// </para>
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="available">Whether video is enabled</param>
        void onUserVideoAvailable(String userId, bool available);

        /// <summary>
        /// 3.4 Whether a user is sharing the screen
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="available">Whether the user is sharing the screen</param>
        void onUserSubStreamAvailable(String userId, bool available);

        /// <summary>
        /// 3.5 Whether a remote user has playable audio data
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="available">Whether the user has enabled audio</param>
        void onUserAudioAvailable(String userId, bool available);

        /// <summary>
        /// 3.6 The first video frame of the local user or a remote user is rendered
        /// 
        /// <para>If `userId` is `null`, the callback indicates that the first video frame captured from the local camera is rendered. It is triggered by the calling of `startLocalPreview`.</para>
        /// <para>If `userId` is not `null`, the callback indicates that the first video frame of the remote user is rendered. It is triggered by the calling of `startRemoteView`.</para>
        /// </summary>
        /// <remarks>
        /// This callback is triggered only after `startLocalPreview()`, `startRemoteView()`, or `startRemoteSubStreamView()` is called.
        /// </remarks>
        /// <param name="userId">User ID. `null` indicates the local user, and other values indicate a remote user.</param>
        /// <param name="streamType">Video stream type, which may be the camera stream and screen sharing stream</param>
        /// <param name="width">Video width</param>
        /// <param name="height">Video height</param>
        void onFirstVideoFrame(String userId, TRTCVideoStreamType streamType, int width, int height);

        /// <summary>
        /// 3.7 The first audio frame of a remote user is played (no callback for the playback of the first local audio frame)
        /// </summary>
        /// <param name="userId">ID of the remote user</param>
        void onFirstAudioFrame(String userId);

        /// <summary>
        /// 3.8 The first local video frame is sent
        /// 
        /// <para>After `enterRoom()` and `startLocalPreview()` are called, the SDK will start capturing video from the camera and will encode the video captured.</para>
        /// <para>This callback is triggered when the SDK successfully sends the first video frame to the cloud.</para>
        /// </summary>
        /// <param name="streamType">Video stream type, which may be the big image, small image, or substream image</param>
        void onSendFirstLocalVideoFrame(TRTCVideoStreamType streamType);

        /// <summary>
        /// 3.9. The first local audio frame is sent
        /// 
        /// <para>After `enterRoom()` and `startLocalAudio()` are called, the SDK will start capturing video from the mic and will encode the audio captured.</para>
        /// <para>This callback is triggered when the SDK successfully sends the first audio frame to the cloud.</para>
        /// </summary>
        void onSendFirstLocalAudioFrame();

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (4) Callbacks of Statistics on Network Quality and Technical Metrics
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Callbacks of statistics on quality and technical metrics
        /// @{

        /// <summary>
        /// 4.1 Callback of statistics on upstream and downstream network quality (triggered every 2 seconds)
        /// </summary>
        /// <remarks>
        /// If `userId` is `null`, the callback returns statistics on the local user’s video quality.
        /// </remarks>
        /// <param name="localQuality">Upstream network quality</param>
        /// <param name="remoteQuality">Downstream network quality (array)</param>
        /// <param name="remoteQualityCount">Number of elements in the downstream network quality array</param>
        void onNetworkQuality(TRTCQualityInfo localQuality, TRTCQualityInfo[] remoteQuality, UInt32 remoteQualityCount);

        /// <summary>
        /// 4.2 Callback of technical metric statistics
        /// 
        /// <para>If you are familiar with the technical metrics of real-time communication, you can use this callback to get statistics on the SDK’s technical metrics.</para>
        /// <para>If you are building a real-time communication project for the first time, you can use the `onNetworkQuality` callback only.</para>
        /// </summary>
        /// <remarks>
        /// The callback is triggered every 2 seconds.
        /// </remarks>
        /// <param name="statis">Statistics for the local user and remote users</param>
        void onStatistics(TRTCStatistics statis);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (5) Server Event Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Server event callbacks
        /// @{

        /// <summary>
        /// 5.1 The SDK is disconnected from the server
        /// </summary>
        void onConnectionLost();

        /// <summary>
        /// 5.2 The SDK is reconnecting to the server
        /// </summary>
        void onTryToReconnect();

        /// <summary>
        /// 5.3 The SDK is reconnected to the server
        /// </summary>
        void onConnectionRecovery();

        /**
        * 5.4 Callback of server speed testing results (The SDK tests the speed of multiple server IP addresses and returns the results via this callback)
        *
        * @param currentResult Result of the current test
        * @param finishedCount Number of servers that have been tested
        * @param totalCoun totalCount Total number of servers to test
        */
        void onSpeedTest(TRTCSpeedTestResult currentResult, int finishedCount, int totalCount);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (6) Hardware Event Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Hardware event callbacks
        /// @{

        /// <summary>
        /// 6.1 The camera is ready
        /// </summary>
        void onCameraDidReady();

        /// <summary>
        /// 6.2 The mic is ready
        /// </summary>
        void onMicDidReady();

        /// <summary>
        /// 6.3 Callback of volume (including the volume of each `userId` and total remote volume)
        ///
        /// <para>You can use the `enableAudioVolumeEvaluation` API in `TRTCCloud` to enable or disable this callback.</para>
        /// <para>After you call `enableAudioVolumeEvaluation` to enable the volume callback, the callback will be triggered at the specified interval regardless of whether there are users speaking in the room.</para>
        /// <para>If no one is speaking, `userVolumes` will be empty, and `totalVolume` will be `0`.</para>
        /// </summary>
        /// <remarks>
        /// If `userId` is `null`, `volume` indicates the local user’s volume. `userVolumes` includes only the volumes of speaking users, i.e., users whose volume is not 0.
        /// </remarks>
        /// <param name="userVolumes"> Volumes of all speaking users in the room. Value range: 0-100</param>
        /// <param name="userVolumesCount">Number of speaking users in the room</param>
        /// <param name="totalVolume">Total remote volume. Value range: 0-100</param>
        void onUserVoiceVolume(TRTCVolumeInfo[] userVolumes, UInt32 userVolumesCount, UInt32 totalVolume);

        /// <summary> 
        /// 6.4 Callback for the connection/disconnection of a local device
        /// </summary>
        /// <param name="deviceId">Device ID</param>
        /// <param name="type">Device type</param>
        /// <param name="state">Event</param>
        void onDeviceChange(String deviceId, TRTCDeviceType type, TRTCDeviceState state);

        /// <summary>
        /// 6.5 Callback of mic testing volume
        ///  <para>This callback is triggered by the mic testing API `startMicDeviceTest`.</para>
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-100</param>
        void onTestMicVolume(int volume);

        ///<summary>
        /// 6.6 Callback of speaker testing volume
        ///<para>
        /// This callback is triggered by the speaker testing API `startSpeakerDeviceTest`.
        ///</para>
        ///</summary>
        /// <param name="volume">Volume. Value range: 0-100</param>
        void onTestSpeakerVolume(int volume);


        /// <summary>
        /// 6.7 Callback for volume change of the audio capturing device
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-100</param>
        /// <param name="muted">Whether the audio capturing device is muted. `true`: muted; `false`: unmuted</param>
        /// <remarks>You can use `enableAudioVolumeEvaluation` to enable (`interval` > 0) or disable (`interval` = 0) this callback.</remarks>
        void onAudioDeviceCaptureVolumeChanged(int volume, bool muted);


        /// <summary>
        /// Callback for volume change of the audio playback device
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-100</param>
        /// <param name="muted">Whether the audio playback device is muted. `true`: muted; `false`: unmuted</param>
        /// <remarks>You can use `enableAudioVolumeEvaluation` to enable (`interval` > 0) or disable (`interval` = 0) this callback.</remarks>
        void onAudioDevicePlayoutVolumeChanged(int volume, bool muted);

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (7) Custom Message Event Callbacks
        //
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Custom message event callbacks


        /// <summary>
        /// 7.1 Callback for receiving a custom message
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="cmdID">Command ID</param>
        /// <param name="seq">Message sequence number</param>
        /// <param name="message">Message data</param>
        /// <param name="messageSize">Message size</param>
        void onRecvCustomCmdMsg(String userId, int cmdID, int seq, byte[] message, int messageSize);

        /// <summary>
        /// 7.2 Callback for losing custom messages
        /// <para>TRTC uses UDP channels. Even if you enable reliable messaging, there is a small chance that you may lose a message. Reliable messaging can meet the requirements of common message sending scenarios.</para>
        /// <para>If you enable reliable messaging, the SDK will notify you through this callback of the number of messages lost during a past period of time (usually 5 seconds).</para>
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="cmdID">Command ID</param>
        /// <param name="errCode">Error code</param>
        /// <param name="missed">Number of messages lost</param>
        /// <remarks>The recipient will receive this callback only if the sender enables reliable messaging.</remarks>
        void onMissCustomCmdMsg(String userId, int cmdID, int errCode, int missed);


        /// <summary>
        /// 7.3 Callback for receiving an SEI message
        ///
        /// <para>When a user in a room uses `sendSEIMsg` to send data, other users in the room can receive the data through the `onRecvSEIMsg` callback.</para>
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="message">Message data</param>
        /// <param name="msgSize">Message size</param>
        void onRecvSEIMsg(String userId, Byte[] message, UInt32 msgSize);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (8) CDN Relayed Push Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name CDN relayed push callbacks
        /// @{
        /// <summary>
        /// 8.1. Callback for starting publishing to Tencent Cloud’s live streaming CDN (triggered by the `startPublishing()` API in `TRTCCloud`)
        /// </summary>
        /// <param name="errCode">`0`: successful; other values: failed</param>
        /// <param name="errMsg">Error message</param>
        /// 
        void onStartPublishing(int errCode, String errMsg);

        /// <summary>
        /// 8.2. Callback for stopping publishing to Tencent Cloud’s live streaming CDN (triggered by the `stopPublishing()` API in `TRTCCloud`)
        /// </summary>
        /// <param name="errCode">`0`: successful; other values: failed</param>
        /// <param name="errMsg">Error message</param>
        void onStopPublishing(int errCode, String errMsg);

        /// @name Callback for starting relaying to CDN
        /// @{
        /// <summary>
        /// 8.3 Callback for starting relaying to CDN (triggered by the `startPublishCDNStream()` API in `TRTCCloud`)
        /// Note: If `0` (successful) is returned, it indicates that Tencent Cloud has been notified of the relaying request, but if an error occurs in the target CDN, relaying may still fail.
        /// </summary>
        /// <param name="errCode">`0`: successful; other values: failed</param>
        /// <param name="errMsg">Error message</param>
        /// 
        void onStartPublishCDNStream(int errCode, String errMsg);

        /// <summary>
        /// 8.4 Callback for stopping relaying to CDN
        /// This callback is triggered by the `stopPublishCDNStream()` API in `TRTCCloud`.
        /// </summary>
        /// <param name="errCode">`0`: successful; other values: failed</param>
        /// <param name="errMsg">Error message</param>
        void onStopPublishCDNStream(int errCode, String errMsg);

        /// <summary>
        /// Callback for setting On-Cloud MixTranscoding parameters (triggered by the `setMixTranscodingConfig()` API in `TRTCCloud`)
        /// </summary>
        /// <param name="errCode">`0`: successful; other values: failed</param>
        /// <param name="errMsg">Error message</param>
        void onSetMixTranscodingConfig(int errCode, String errMsg);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (9) Audio Effect Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Audio effect callbacks
        /// @{
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (10) Screen Sharing Callbacks
        //
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Screen sharing callbacks
        /// @{
        /// <summary>
        /// 10.2 Callback for starting screen sharing
        /// </summary>
        void onScreenCaptureStarted();

        /// <summary>
        /// 10.3 Callback for pausing screen sharing
        /// </summary>
        /// <param name="reason">Reason. `0`: the user paused screen sharing; `1`: screen sharing parameters are being modified; `2`: the shared window was minimized; `3`: the shared window was hidden</param>
        void onScreenCapturePaused(int reason);

        /// <summary>
        /// 10.4 Callback for resuming screen sharing
        /// </summary>
        /// <param name="reason">Reason. `0`: the user resumed screen sharing; `1`: the modification of screen sharing parameters is completed; `2`: the minimized window was restored; `3`: the hidden window was restored</param>
        void onScreenCaptureResumed(int reason);

        /// <summary>
        /// 10.5 Callback for stopping screen sharing
        /// </summary>
        /// <param name="reason">Reason. `0`: the user stopped screen sharing; `1`: the shared window was closed</param>
        void onScreenCaptureStoped(int reason);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (11) Background Music Mixing Callbacks
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Background music mixing callbacks
        /// @{
        /// @}
    }

    /// <summary>
    /// Custom video rendering callbacks
    /// </summary>
    public interface ITRTCVideoRenderCallback
    {
        /// <summary>
        /// 12.1 Callback of video frames for custom rendering
        /// <para>You can use `setLocalVideoRenderCallback` and `setRemoteVideoRenderCallback` to set the custom rendering callback.</para>
        /// </summary>
        /// <param name="userId">User ID</param>
        /// <param name="streamType">Stream type: the camera or screen sharing stream</param>
        /// <param name="frame">Video frames</param>
        void onRenderVideoFrame(string userId, TRTCVideoStreamType streamType, TRTCVideoFrame frame);
    }

    /// <summary>
    /// Log callbacks
    /// </summary>
    public interface ITRTCLogCallback
    {
        /// <summary>
        /// 14.1 Callback for printing logs
        /// </summary>
        /// <param name="log">Logs</param>
        /// <param name="level">Log level. For details, see `TRTCLogLevel`.</param>
        /// <param name="module"> This parameter is not defined yet and has a fixed value of `TXLiteAVSDK` currently.</param>
        void onLog(string log, TRTCLogLevel level, string module);
    }

    /// <summary>
    /// 音频数据的自定义处理回调
    /// </summary>
    public interface ITRTCAudioFrameCallback
    {
        /// <summary>
        /// 本地采集并经过音频模块前处理后的音频数据回调
        /// <para>当您设置完音频数据自定义回调之后，SDK 内部会把刚采集到并经过前处理(ANS、AEC、AGC）之后的数据，以 PCM 格式的形式通过本接口回调给您。</para>
        /// <para>此接口回调出的音频时间帧长固定为0.02s，格式为 PCM 格式。</para>
        /// <para>由时间帧长转化为字节帧长的公式为【采样率 × 时间帧长 × 声道数 × 采样点位宽】。</para>
        /// <para>以 TRTC 默认的音频录制格式48000采样率、单声道、16采样点位宽为例，字节帧长为【48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。</para>
        /// </summary>
        /// <param name="frame"> PCM 格式的音频数据帧 </param>
        /// <remarks>
        /// <para>请不要在此回调函数中做任何耗时操作，由于 SDK 每隔 20ms 就要处理一帧音频数据，如果您的处理时间超过 20ms，就会导致声音异常。</para>
        /// <para>此接口回调出的音频数据是可读写的，也就是说您可以在回调函数中同步修改音频数据，但请保证处理耗时。</para>
        /// <para>此接口回调出的音频数据已经经过了前处理(ANS、AEC、AGC），但** 不包含**背景音、音效、混响等前处理效果，延迟较低。</para>
        /// </remarks>
        void onCapturedRawAudioFrame(TRTCAudioFrame frame);

        /// <summary>
        /// 本地采集并经过音频模块前处理、音效处理和混 BGM 后的音频数据回调
        /// <para>当您设置完音频数据自定义回调之后，SDK 内部会把刚采集到并经过前处理、音效处理和混 BGM 之后的数据，在最终进行网络编码之前，以 PCM 格式的形式通过本接口回调给您。</para>
        /// <para>此接口回调出的音频时间帧长固定为0.02s，格式为 PCM 格式。</para>
        /// <para>由时间帧长转化为字节帧长的公式为【采样率 × 时间帧长 × 声道数 × 采样点位宽】。</para>
        /// <para>以 TRTC 默认的音频录制格式48000采样率、单声道、16采样点位宽为例，字节帧长为【48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。</para>
        /// </summary>
        /// <param name="frame"></param>
        /// <remarks>
        /// <para>您可以通过设置接口中的 TRTCAudioFrame.extraData 字段，达到传输信令的目的。 由于音频帧头部的数据块不能太大，建议您写入 extraData 时，尽量将信令控制在几个字节的大小，如果超过 100 个字节，写入的数据不会被发送。 房间内其他用户可以通过 TRTCAudioFrameDelegate 中的 onRemoteUserAudioFrame 中的 TRTCAudioFrame.extraData 字段回调接收数据。</para>
        /// <para>请不要在此回调函数中做任何耗时操作，由于 SDK 每隔 20ms 就要处理一帧音频数据，如果您的处理时间超过 20ms，就会导致声音异常。</para>
        /// <para>此接口回调出的音频数据是可读写的，也就是说您可以在回调函数中同步修改音频数据，但请保证处理耗时。</para>
        /// <para>此接口回调出的数据已经经过了前处理(ANS、AEC、AGC）、音效和混 BGM 处理，声音的延迟相比于 onCapturedRawAudioFrame 要高一些。</para>
        /// </remarks>
        void onLocalProcessedAudioFrame(TRTCAudioFrame frame);

        /// <summary>
        /// 将各路待播放音频混合之后并在最终提交系统播放之前的数据回调
        /// <para>当您设置完音频数据自定义回调之后，SDK 内部会把各路待播放的音频混合之后的音频数据，在提交系统播放之前，以 PCM 格式的形式通过本接口回调给您。</para>
        /// <para>此接口回调出的音频时间帧长固定为0.02s，格式为 PCM 格式。</para>
        /// <para>由时间帧长转化为字节帧长的公式为【采样率 × 时间帧长 × 声道数 × 采样点位宽】。</para>
        /// <para>以 TRTC 默认的音频录制格式48000采样率、单声道、16采样点位宽为例，字节帧长为【48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。</para>
        /// </summary>
        /// <param name="frame"> PCM 格式的音频数据帧 </param>
        /// <remarks>
        /// <para>请不要在此回调函数中做任何耗时操作，由于 SDK 每隔 20ms 就要处理一帧音频数据，如果您的处理时间超过 20ms，就会导致声音异常。</para>
        /// <para>此接口回调出的音频数据是可读写的，也就是说您可以在回调函数中同步修改音频数据，但请保证处理耗时。</para>
        /// <para>此接口回调出的是对各路待播放音频数据的混合，但其中并不包含耳返的音频数据。</para>
        /// </remarks>
        void onMixedPlayAudioFrame(TRTCAudioFrame frame);

        /// <summary>
        /// 混音前的每一路远程用户的音频数据
        /// <para>当您设置完音频数据自定义回调之后，SDK 内部会把远端的每一路原始数据，在最终混音之前，以 PCM 格式的形式通过本接口回调给您。</para>
        /// <para>此接口回调出的音频时间帧长固定为0.02s，格式为 PCM 格式。</para>
        /// <para>由时间帧长转化为字节帧长的公式为【采样率 × 时间帧长 × 声道数 × 采样点位宽】. </para>
        /// <para>以 TRTC 默认的音频录制格式48000采样率、单声道、16采样点位宽为例，字节帧长为【48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。</para>
        /// </summary>
        /// <param name="frame">PCM 格式的音频数据帧</param>
        /// <param name="userId">用户标识</param>
        /// <remarks>
        /// 此接口回调出的音频数据是只读的，不支持修改
        /// </remarks>
        void onPlayAudioFrame(TRTCAudioFrame frame,string userId);
    }
}