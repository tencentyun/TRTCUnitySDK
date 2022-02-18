using System;
using UnityEngine;

namespace trtc
{
    /// <summary>
    /// Module:   ITRTCCloud @ TXLiteAVSDK
    ///
    /// <para>Function: TRTC main API classes</para>
    /// <para>Nouns[1]: primary stream - The channel for camera video is the primary stream.</para>
    /// <para>Nouns[2]: substream - The channel for screen sharing or VOD play is the substream.</para>
    /// <para>Nouns[3]: vodplay - TRTC for Windows allows the streaming of a local video file. This feature is known as VOD play.</para>
    /// </summary>
    /// <example>
    /// Sample code for creating/using/terminating an `ITRTCCloud` object:
    /// <code>
    /// ITRTCCloud trtcCloud = ITRTCCloud.getTRTCShareInstance();
    /// if (trtcCloud != null)
    /// {
    ///string version = trtcCloud->getSDKVersion();
    /// }
    /// </code>
    /// Release an `ITRTCCloud` singleton object after the process is closed or if the object is no longer needed
    /// <code>
    /// ITRTCCloud.destroyTRTCShareInstance();
    /// trtcCloud = NULL;
    /// </code>
    /// </example>
    public abstract class ITRTCCloud
    {
        /// <summary>
        /// Get an `ITRTCCloud` singleton object
        /// </summary>
        /// <returns>Return an `ITRTCCloud` singleton object</returns>
        public static ITRTCCloud getTRTCShareInstance() { return ITRTCCloudImplement.getTRTCShareInstance(); }

        /// <summary>
        /// Release an `ITRTCCloud` singleton object
        /// </summary>
        public static void destroyTRTCShareInstance() { ITRTCCloudImplement.destroyTRTCShareInstance(); }

        
        /////////////////////////////////////////////////////////////////////////////////
        //
        //                       Setting `ITRTCCloudCallback`
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        /// Set `ITRTCCloudCallback`
        /// <para>You can use `ITRTCCloudCallback` to receive different status notifications from the SDK. For details, please see the definitions in `TRTCCloudCallback.cs`.</para>
        /// </summary>
        /// <param name="callback">Event callback</param>
        public abstract void addCallback(ITRTCCloudCallback callback);

        /// <summary>
        /// Remove event callbacks
        /// </summary>
        /// <param name="callback">Event callback</param>
        public abstract void removeCallback(ITRTCCloudCallback callback);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (1) Room APIs
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        ///  1.1 Enter a room
        /// <para>You will receive the `onEnterRoom(result)` callback in `ITRTCCloudCallback`:</para>
        /// <para>- If room entry succeeds, `result` will be a positive integer (`result` &gt; 0), which indicates the time (ms) it takes to enter the room.</para>
        /// <para>- If room entry fails, `result` will be a negative integer (`result` &lt; 0), which represents the error code.</para>
        /// <para>For more information on room entry error codes, please see [Error Codes](https://cloud.tencent.com/document/product/647/32257).</para>
        /// <para> TRTCAppSceneVideoCall:</para>
        /// <para>          Video calls support 720p and 1080p HD video. Each room allows up to 300 concurrent users, and up to 50 of them can speak simultaneously.</para>
        /// <para>          Use cases: [one-to-one video call], [video conferencing with up to 300 participants], [online medical consultation], [video chat], [video interview], etc.</para>
        /// <para> TRTCAppSceneAudioCall:</para>
        /// <para>          Audio calls support 48 kHz stereo audio. Each room allows up to 300 concurrent users, and up to 50 of them can speak simultaneously.</para>
        /// <para>          Use cases: [one-to-one audio call], [audio conferencing with up to 300 participants], [online Werewolf playing], [audio chat room], etc.</para>
        /// <para>  TRTCAppSceneLIVE:</para>
        /// <para>          Interactive video streaming allows smooth mic on/off without waiting. Anchor latency is lower than 300 ms and playback latency lower than 1,000 ms. Up to 100,000 users can play the anchor’s video at the same time.</para>
        /// <para>          Use cases: [interactive classroom], [interactive live streaming], [video dating], [remote training], [large-scale conferencing], etc.</para>
        /// <para>  TRTCAppSceneVoiceChatRoom:</para>
        /// <para>          Interactive audio streaming allows smooth mic on/off without waiting. Anchor latency is lower than 300 ms and playback latency lower than 1,000 ms. Up to 100,000 users can play the anchor’s audio at the same time.</para>
        /// <para>         Use cases: [audio chat room], [karaoke], [FM radio], etc.</para>
        /// </summary>
        /// <remarks>
        /// 1. If `scene` is set to `TRTCAppSceneLIVE` or `TRTCAppSceneVoiceChatRoom`, you must select a role for the current user by specifying the `role` field in `TRTCParams`.
        /// 2. After you call `enterRoom`, regardless of whether room entry succeeds, you must call `exitRoom` before calling `enterRoom` again; otherwise, an unexpected error will occur.
        /// </remarks>
        /// <param name="params">Room entry parameters. For details, please see `TRTCParams`.</param>
        /// <param name="scene">Application scenario. TRTC supports four scenarios currently: video call (`VideoCall`), live streaming (`Live`), audio call (`AudioCall`), and audio chat room (`VoiceChatRoom`).</param>
        public abstract void enterRoom(ref TRTCParams param, TRTCAppScene scene);

        /// <summary>
        /// 1.2 Leave a room
        ///
        /// <para>Calling `exitRoom()` will trigger the execution of room exit-related logic, including releasing resources such as audio/video devices and codecs.</para>
        /// <para>After all the resources are released, the SDK will send you the `onExitRoom()` callback in `ITRTCCloudCallback`.</para>
        /// 
        /// <para>If you need to call `enterRoom()` again or switch to another audio/video SDK, please wait until you receive the `onExitRoom()` callback.</para>
        /// <para>Otherwise, you may encounter problems such as the camera or mic being occupied.</para>
        /// </summary>
        public abstract void exitRoom();

        /// <summary>
        /// 1.3 Switch roles. This API works only in live streaming scenarios (`TRTCAppSceneLIVE` and `TRTCAppSceneVoiceChatRoom`).
        /// 
        /// <para>In live streaming scenarios, a user may need to switch between the “anchor” and “audience” roles.</para>
        /// <para>You can set the role during room entry by specifying `role` in `TRTCParams`. You can also call `switchRole` to switch the role after room entry.</para>
        /// </summary>
        /// <param name="role">Role, which is “anchor” by default:
        /// - {@link TRTCRoleAnchor} Anchor, who can send audio and video. Up to 50 users are allowed to send audio and video at the same time in a room.
        /// - {@link TRTCRoleAudience} Audience, who can play but cannot send audio or video. There is no upper limit on the audience size in a room.
        /// </param>
        public abstract void switchRole(TRTCRoleType role);

        /// <summary>
        /// Request a cross-room call (anchor competition)
        /// <para>The cross-room call feature allows two anchors from different rooms to call and compete with each other without having to exit their own rooms.</para>
        /// </summary>
        /// <example>
        /// <code>
        ///     For example, after anchor A in room 001 uses `connectOtherRoom()` to successfully call anchor B in room 002, all users in room 001 will receive the `onUserEnter(B)` and `onUserVideoAvailable(B,true)` callbacks, and all users in room 002 will receive the `onUserEnter(A)` and `onUserVideoAvailable(A,true)` callbacks.
        ///     In essence, a cross-room call is sharing the audio and video of two anchors in different rooms to each other so that the audiences in both rooms can see two anchors.
        ///                         Room 001                     Room 002
        ///               -------------               ------------
        ///    Before cross-room call:| Anchor A      |             | Anchor B     |
        ///              | Audience U, V, and W  |             | Audience X, Y, and Z |
        ///               -------------               ------------
        ///                 Room 001                     Room 002
        ///               -------------               ------------
        ///    After cross-room call: | Anchors A and B    |             | Anchors B and A   |
        ///              | Audience U, V, and W  |             | Audience X, Y, and Z |
        ///               -------------               ------------
        /// To ensure the compatibility of extended parameters for the cross-room call API, the JSON format is used for the parameters, which must contain at least two fields:
        /// `roomId`: If anchor A in room 001 wants to call anchor B in room 002, he or she must set `roomId` to `002` when calling `connectOtherRoom()`.
        /// `userId`: If anchor A in room 001 wants to call anchor B in room 002, he or she must set `userId` to the user ID of anchor B when calling `connectOtherRoom()`.
        /// The result is returned through the `onConnectOtherRoom()` callback in `ITRTCCloudCallback`.
        /// </code>
        /// </example>
        /// <param name="jsonParams"> JSON-string parameters, in which `roomId` is the room ID of the anchor to call and `userId` the user ID of the anchor to call</param>
        /// <remarks>
        /// The JsonCpp library is used to format JSON strings.
        /// JsonData jsonObj =new JsonData();
        /// jsonObj["roomId"] = 1908;
        /// jsonObj["userId"] = "345";
        /// string jsonData = JsonMapper.ToJson(jsonObj);
        /// mTRTCCloud.connectOtherRoom(jsonData);
        /// </remarks>
        public abstract void connectOtherRoom(string jsonParams);


        ///<summary>
        /// End a cross-room call
        ///<para> The result is returned through the `onDisconnectOtherRoom()` callback in `ITRTCCloudCallback`.</para>
        ///</summary>
        public abstract void disconnectOtherRoom();

        ///<summary>
        /// Switch rooms
        ///<para> After calling this API, the user will leave the current room and immediately enter the room specified in `TRTCSwitchRoomConfig`. This API is easier to use than `exitRoom` + `enterRoom`.</para>
        ///<para> It does not stop the user’s video capturing or preview. The result is returned through the `onSwitchRoom(errCode, errMsg)` callback in `ITRTCCloudCallback`.</para>
        ///</summary>
        ///<param name="config">Room switching parameters. For details, please see `TRTCSwitchRoomConfig`.</param>
        public abstract void switchRoom(TRTCSwitchRoomConfig config);

        ///<summary>
        /// Set the audio/video data receiving mode
        ///<para>It must be set before room entry to take effect.</para>
        ///</summary>
        ///<param name="autoRecvAudio">`true` (default): receive audio data automatically; `false`: call `muteRemoteAudio` to receive or stop receiving audio data</param>
        ///<param name="autoRecvVideo">`true` (default): receive video data automatically; `false`: call `startRemoteView`/`stopRemoteView` to receive or stop receiving video data</param>
        ///<remarks>
        /// To ensure instant streaming, the SDK automatically receives audio/video upon successful room entry. This means you will receive the audio and video data of all remote users right after you enter a room. If you do not call `startRemoteView`, video data will be automatically canceled after the timeout period elapses. If your application scenario involves only audio (e.g., audio chat), you can use this API to disable the automatic receiving mode for video to reduce your costs.
        ///</remarks>
        public abstract void setDefaultStreamRecvMode(bool autoRecvAudio, bool autoRecvVideo);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (2) CDN APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name CDN APIs
        /// @{
        /// <summary>
        /// 2.1 Start publishing to Tencent Cloud’s live streaming CDN
        /// 
        /// <para>When calling this API, you need to specify a `StreamId` for the current user in Tencent Cloud’s CDN, which is used to splice the CDN playback address of the user.</para>
        /// 
        /// <para>For example, if you use the code below to set the `StreamId` of the current user's primary stream to `user_stream_001`, the CDN playback address of the user’s primary stream will be:</para>
        /// <para>"http://yourdomain/live/user_stream_001.flv", where `yourdomain` is the domain name you use for playback.</para>
        /// <para>You can configure your playback domain name in the [CSS console](https://console.cloud.tencent.com/live). Tencent Cloud doesn't provide a default playback domain name.</para>
        /// <para>You can also specify `streamId` in `TRTCParams` when calling `enterRoom`. This method is recommended.</para>
        /// </summary>
        /// <example>
        /// <code>
        /// ITRTCCloud trtcCloud = ITRTCCloud.getTRTCShareInstance();
        /// trtcCloud.enterRoom(params, TRTCAppScene.TRTCAppSceneLIVE);
        /// trtcCloud.startLocalPreview(System.Object);
        /// trtcCloud.startLocalAudio();
        /// trtcCloud.startPublishing("user_stream_001", TRTCVideoStreamType.TRTCVideoStreamTypeBig);
        /// </code>
        /// </example>
        /// <remarks>
        /// To play streams via CDNs, you need to enable relayed push on the "Function Configuration" page of the [TRTC console](https://console.cloud.tencent.com/trtc).
        /// - If you select "Specified stream for relayed push", you can use this API to publish a stream to Tencent Cloud’s CDN and specify a stream ID for it.
        /// - If you select "Global auto-relayed push", you can use this API to change the default stream ID.
        /// </remarks>
        /// <param name="streamId">Custom stream ID</param>
        /// <param name="type">Only `TRTCVideoStreamTypeBig` and `TRTCVideoStreamTypeSub` are supported.</param>
        public abstract void startPublishing(string streamId, TRTCVideoStreamType type);

        /// <summary>
        /// 2.2 Stop publishing to Tencent Cloud’s live streaming CDN
        /// </summary>
        public abstract void stopPublishing();

        /// <summary>
        /// 2.3 Start publishing to the live streaming CDN of a non-Tencent Cloud vendor (not supported on Windows)
        /// The `startPublishCDNStream()` API is similar to `startPublishing()`, but it supports relaying to the live streaming CDN of a non-Tencent Cloud vendor.
        /// </summary>
        public abstract void startPublishCDNStream(TRTCPublishCDNParam param);
        
        /// <summary>
        /// 2.4 Stop publishing to the live streaming CDN of a non-Tencent Cloud vendor (not supported on Windows)
        /// </summary>
        public abstract void stopPublishCDNStream();

        /// <summary>
        /// Set On-Cloud MixTranscoding parameters (not supported on Windows)
        /// </summary>
        /// <example>
        /// <para>
        /// If you enable relayed push on the "Function Configuration" page of the TRTC console, each stream in a room will have a default CDN playback address.
        /// </para>
        /// <para>
        /// There may be multiple anchors in a room, each sending their own video and audio, but CDN audience needs only one live stream. Therefore, you need to mix multiple audio/video streams into one standard live stream, which requires mixtranscoding.
        /// </para>
        /// <para>
        /// When you call the `setMixTranscodingConfig()` API, the SDK will send a command to the Tencent Cloud transcoding server to mix multiple audio/video streams in the room into one stream. You can use the `mixUsers` parameter to set the position of each channel of image and specify whether to mix only audio. You can also set the encoding parameters of the mixed stream, including `videoWidth`, `videoHeight`, and `videoBitrate`.
        /// </para>
        /// <code>
        /// **Image 1** => decoding ====> \
        ///                        \
        ///**Image 2**=> decoding =>  image mixing => encoding => **mixed image**
        ///                        /
        ///**Image 3** => decoding ====> /
        ///**Audio 1** => decoding ====> \
        ///                        \
        ///**Audio 2** => decoding => audio mixing => encoding => **mixed audio**
        ///                        /
        ///**Audio 3** => decoding ====> /
        /// </code>
        /// </example>
        /// <remarks>
        /// Notes:
        ///        On-Cloud MixTranscoding will increase the delay of CDN live streaming by about 1-2 seconds.
        ///         If you call this API, the streams of co-anchors will be mixed into your stream or the stream whose `streamId` is specified in `config`.
        ///         If you are still in the room but do not need to mix streams any more, make sure that you pass in `nullptr` to cancel On-Cloud MixTranscoding. The On-Cloud MixTranscoding module starts working the moment you enable On-Cloud MixTranscoding. You may incur additional costs if you do not cancel it in a timely manner.
        ///         When you leave the room, mixing will be canceled automatically.
        /// </remarks>
        /// <param name="config">For more information, please see the description of `TRTCTranscodingConfig` in `TRTCTypeDef.h`. If `nullptr` is passed in, On-Cloud MixTranscoding will be canceled.</param>
        public abstract void setMixTranscodingConfig(TRTCTranscodingConfig? config);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (3) Video APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name  Video APIs
        /// @{

        /// <summary>
        /// 3.1 Enable local video preview
        /// </summary>
        /// <remarks>
        /// Only custom video rendering is supported currently. You need to call `setLocalVideoRenderCallback` first and then `startLocalPreview` to publish the local stream. The video frames will be returned via the `onRenderFrame` callback.
        /// <para>Rendering method: new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// For more information, refer to `Demo/TRTCVideoRender.cs`.
        /// </remarks>
        /// <remarks>
        /// This API will turn the default camera on.
        /// <para>When the SDK starts rendering the first frame of the camera video, you will receive the `onFirstVideoFrame(null)` callback in `ITRTCCloudCallback`.</para>
        /// </remarks>
        /// <param name="rendObj">Only custom rendering is supported currently. Set this parameter to `null`.</param>
        /// <param name="frontCamera">`true`: front camera; `false`: rear camera. This parameter takes effect only on Android and iOS. The front camera is used by default on Windows.</param>
        public abstract void startLocalPreview(bool frontCamera, System.Object rendObj);
        
        public abstract IntPtr GetVideoRenderData(string userId, ref int rotation, ref int width, ref int height,ref int length,bool isNeedDestroy);
        
        /// <summary>
        /// 3.2 Stop local video capturing and preview
        /// </summary>
        public abstract void stopLocalPreview();

        /// <summary>
        /// 3.3 Pause/Resume publishing local video
        /// 
        /// <para>After a user pauses publishing local video, other users in the room will receive the `onUserVideoAvailable(userId, false)` callback.</para>
		/// <para>After a user resumes publishing local video, other users in the room will receive the `onUserVideoAvailable(userId, true)` callback.</para>
        /// </summary>
        /// <param name="mute">`true`: pause; `false` (default): resume</param>
        public abstract void muteLocalVideo(bool mute);

        /// <summary>
        /// 3.4 Start playing the video of a remote user
        /// <para>
        /// The `onUserVideoAvailable(userId, true)` callback indicates that a remote user has enabled video.
        /// After receiving this callback, call `startRemoteView(userId)` to load the user’s video. You can use a loading animation to improve user experience during the waiting period.
        /// When the first video frame of the remote user is rendered, you will receive the `onFirstVideoFrame(userId)` callback.
        /// </para>
        /// </summary>
        /// <remarks>
        /// Only custom video rendering is supported currently. You need to call `setRemoteVideoRenderCallback` first and then `startRemoteView` to pull the remote stream. The video frames will be returned via the `onRenderFrame` callback.
        /// <para>Rendering method: new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// For more information, refer to `Demo/TRTCVideoRender.cs`.
        /// </remarks>
        /// <param name="userId">User ID of the remote user</param>
        /// <param name="streamType">Type of the remote user’s stream to play:
        /// - HD big image: {@link TRTCVideoStreamTypeBig}
        /// - Smooth small image: {@link TRTCVideoStreamTypeSmall}
        /// </param>
        /// <param name="rendObj">Only custom rendering is supported currently. Set this parameter to `null`.</param>
        public abstract void startRemoteView(string userId, TRTCVideoStreamType streamType, System.Object rendObj);

        /// <summary>
        /// 3.5 Stop playing and pulling the video of a remote user
        /// 
        /// <para>After this API is called, the SDK will stop receiving the video of the specified user and release the resources used to display the video.</para>
        /// </summary>
        /// <param name="userId">User ID of the remote user</param>
        /// <param name="streamType">Type of the remote user’s stream to stop playing:
        /// - HD big image: {@link TRTCVideoStreamTypeBig}
        /// - Smooth small image: {@link TRTCVideoStreamTypeSmall}
        /// </param>
        public abstract void stopRemoteView(string userId, TRTCVideoStreamType streamType);

        /// <summary>
        /// Stop playing and pulling the videos of all remote users
        /// </summary>
        /// <remarks>
        /// The playing and pulling of the screen sharing stream, if any, will stop too.
        /// </remarks>
        public abstract void stopAllRemoteView();

        /// <summary>
        /// Pause/Resume receiving the video of a remote user
        /// 
        /// <para>This API will pause/resume receiving the video of the specified remote user, but will not release the resources used to display the video. After pause, the last frame of video before the pause will be displayed.</para>
        /// </summary>
        /// <param name="userId">User ID of the remote user</param>
        /// <param name="mute">Whether to pause receiving video</param>
        public abstract void muteRemoteVideoStream(string userId, bool mute);

        /// <summary>
        /// Pause/Resume receiving the videos of all remote users
        /// </summary>
		/// <para>This API will pause/resume receiving the videos of all remote users, but will not release the resources used to display the videos. After pause, the last video frames before the pause will be displayed.</para>
        /// <param name="mute">Whether to pause receiving video</param>
        public abstract void muteAllRemoteVideoStreams(bool mute);

        /// <summary>
        /// 3.9 Set video encoder parameters (not supported on Android and iOS)
        ///
        /// <para>Encoder parameters determine the quality of video watched by remote users and recorded in the cloud.</para>
        /// </summary>
        /// <param name="params">Video encoder parameters. For more information, please see the definition of `TRTCVideoEncParam` in `TRTCCloudDef.h`.</param>
        public abstract void setVideoEncoderParam(ref TRTCVideoEncParam param);

        /// <summary>
        /// Set QoS parameters
        /// 
        /// <para>The setting determines the SDK’s QoS policy under different network conditions, for example, whether to prioritize clarity or smoothness under poor network conditions.</para>
        /// </summary>
        /// <param name="params">QoS parameters. For more information, please see the definition of `TRTCNetworkQosParam` in `TRTCCloudDef.h`.</param>
        public abstract void setNetworkQosParam(ref TRTCNetworkQosParam param);

        /// <summary>
        /// Set the mirror mode of encoded video (not supported on Windows)
        /// </summary>
        /// <remarks>
        /// This API does not change the mirror mode of local video preview, but affects the video presented to remote users and recorded by the server.
        /// </remarks>
        /// <param name="mirror">Whether to mirror video for remote users. `true`: mirror; `false` (default): do not mirror</param>
        public abstract void setVideoEncoderMirror(bool mirror);

        /// <summary>
        /// Enable/Disable dual-channel (big and small images) encoding
        /// </summary>
        /// <remarks>
        /// <code>
        /// You can enable the dual-channel encoding mode for users in the major role (such as anchor, teacher, or host) and using PC or Mac. In this mode, a user will output one audio stream and two video streams: an **HD** stream and a **smooth** stream. This mode consumes more bandwidth and CPU computing resources.
        /// For the audience in the room:
        ///     Select the **HD** stream to watch if the user’s downstream network conditions are good.
        ///     Select the **smooth** stream to watch if the user’s downstream network conditions are poor.
        /// </code>
        /// </remarks>
        /// <param name="enable">Whether to enable dual-channel encoding. Default value: `false`</param>
        /// <param name="smallVideoParam">Parameters of the small image</param>
        public abstract void enableSmallVideoStream(bool enable, ref TRTCVideoEncParam smallVideoParam);

        /// <summary>
        /// Specify whether to play a remote user’s big or small image
        /// </summary>
        /// <remarks>
        /// For this API to work, the remote user must first call `enableEncSmallVideoStream` to enable dual-channel encoding.
        /// </remarks>
        /// <param name="userId">ID of the remote user</param>
        /// <param name="type">Type of the remote user’s video stream (big or small image) to play. Default value: `TRTCVideoStreamTypeBig`</param>
        public abstract void setRemoteVideoStreamType(string userId, TRTCVideoStreamType type);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (4) Audio APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Audio APIs
        /// @{
        /// <summary>
        /// 4.2 Enable local audio capturing and publishing
        /// 
        /// <para>This API will start mic capturing and send audio data to other users in the room.</para>
        /// <para>The SDK does not publish local audio automatically, so if you do not call this API, other users in the room will not hear your audio.</para>
        /// </summary>
        /// <remarks>
        /// The TRTC SDK does not enable local mic capturing automatically.
        /// </remarks>
		/// <param name="quality">Audio quality. For details, please see `TRTCAudioQuality`.</param>
        public abstract void startLocalAudio(TRTCAudioQuality quality);

        /// <summary>
        /// 4.3 Disable local audio capturing and publishing
        ///
        /// <para>After local audio capturing and publishing are disabled, other users in the room will receive the `onUserAudioAvailable(false)` callback.</para>
        /// </summary>
        public abstract void stopLocalAudio();

        /// <summary>
        /// 4.4 Mute/Unmute local audio
        ///
        /// <para>After local audio is muted, other users in the room will receive the `onUserAudioAvailable(userId, false)` callback.</para>
		/// <para>After local audio is unmuted, other users in the room will receive the `onUserAudioAvailable(userId, true)` callback.</para>
        /// <para>Different from `stopLocalAudio`, `muteLocalAudio(true)` does not stop the sending of audio or video data. Data packets continue to be sent, although without audio and at extremely low bitrate.</para>
        /// <para>As MP4 and other video formats have high requirements on audio continuity, `stopLocalAudio` may make an MP4 recording file fail to be played smoothly.</para>
        /// <para>`muteLocalAudio` has less impact on the compatibility of MP4 recording files. Therefore, you are advised to use `muteLocalAudio` in scenarios with high requirements on recording quality.</para>
        /// </summary>
        /// <param name="mute">`true`: mute; `false` (default): unmute</param>
        public abstract void muteLocalAudio(bool mute);

        /// <summary>
        /// 4.5 Mute/Unmute a remote user's audio
        /// </summary>
        /// <param name="userId">ID of the remote user</param>
        /// <param name="mute">`true`: mute; `false`: unmute</param>
		/// <remarks>
        /// If `mute` is `true`, the SDK will stop receiving and playing the remote user’s audio; if `mute` is `false`, it will start receiving and playing the remote user’s audio.
        /// </remarks>
        public abstract void muteRemoteAudio(string userId, bool mute);

        /// <summary>
        /// 4.6 Mute/Unmute all users' audio
        /// </summary>
        /// <param name="mute">`true`: mute; `false`: unmute</param>
		/// <remarks>
        /// If `mute` is `true`, the SDK will stop receiving and playing all remote users’ audio; if `mute` is `false`, it will start receiving and playing all remote users’ audio.
        /// </remarks>
        public abstract void muteAllRemoteAudio(bool mute);

        /// <summary>
        /// Set the playback volume of a remote user
        /// This API controls the volume of audio delivered to the system for playback. It affects the volume of local recording files, but not the volume of in-ear monitoring.
        /// If you want to set the volume to a value greater than `100`, please contact technical support.
        /// </summary>
        /// <param name="userId">ID of the remote user</param>
        /// <param name="volume">Volume. Value range: 0-100</param>
        public abstract void setRemoteAudioVolume(string userId,int volume);

        /// <summary>
        /// Set the playback volume of the SDK
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-150; default: `100`</param>
        public abstract void setAudioPlayoutVolume(int volume);

        /// <summary>
        /// Get the playback volume of the SDK
        /// </summary>
        /// <returns></returns>
        public abstract int getAudioPlayoutVolume();

        /// <summary>
        /// Start audio recording
        /// After this API is called, the SDK will record all audio of a call, including local audio, remote audio, and background music, into a file. This API works regardless of whether the user is in the room. When `exitRoom` is called, audio recording will stop automatically.
        /// </summary>
        /// <param name="audioRecordingParams">Audio recording parameters. For details, please see `TRTCAudioRecordingParams`.</param>
        /// <returns>`0`: recording successful; `-1`: recording has started; `-2`: failed to create the file or directory; `-3`: unsupported audio format</returns>
        public abstract int startAudioRecording(ref TRTCAudioRecordingParams audioRecordingParams);

        /// <summary>
        /// Stop audio recording
        /// When `exitRoom` is called, audio recording will stop automatically.
        /// </summary>
        public abstract void stopAudioRecording();
        

        /// <summary>
        /// Start local recording
        /// This API records the audio and video data during live streaming into a file and saves it locally. Use cases:
        ///     1. If no streams are published, you can record local audio and video into a file after calling `startLocalPreview`.
        ///     2. If streams are published, you can record the entire live streaming session into a file and save it locally.
        /// </summary>
        /// <param name="localRecordingParams">Recording parameters. For details, please see `TRTCLocalRecordingParams`.</param>
        // This API works only on Windows.
        public abstract void startLocalRecording(ref TRTCLocalRecordingParams localRecordingParams);

        /// <summary>
        /// Stop local recording
        /// When `exitRoom` is called, recording will stop automatically.
        /// </summary>
        public abstract void stopLocalRecording();

        /// <summary>
        /// Set the capturing volume of the SDK
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-100</param>
        public abstract void setAudioCaptureVolume(int volume);

        /// <summary>
        /// Get the capturing volume of the SDK
        /// </summary>
        public abstract int getAudioCaptureVolume();

        /// <summary>
        /// Enable/Disable the volume reminder
        ///
        /// <para>After this feature is enabled, the SDK will return its evaluation of the volume of each stream via `onUserVoiceVolume()`.</para>
        /// <para>The volume bar in our demo is implemented using this API.</para>
        /// <para>To enable the volume reminder, please call this API before `startLocalAudio()`.</para>
        /// </summary>
        /// <param name="interval">Set the interval (ms) for triggering the `onUserVoiceVolume` callback. The minimum interval allowed is 100 ms. 300 ms is recommended. If the value is `0` or smaller, the callback will be disabled.</param>
        public abstract void enableAudioVolumeEvaluation(uint interval);

        /// <summary>
        /// 设置音频数据自定义回调
        /// 设置该回调之后，SDK 内部会把音频数据（PCM 格式）回调出来，包括：
        /// </summary>
        /// <param name="callback">
        /// onCapturedRawAudioFrame：本地麦克风采集到的原始音频数据回调
        ///  onLocalProcessedAudioFrame：本地采集并经过音频模块前处理后的音频数据回调
        ///  onRemoteUserAudioFrame：混音前的每一路远程用户的音频数据
        ///  onMixedPlayAudioFrame：将各路音频混合之后并最终要由系统播放出的音频数据回调
        /// </param>
        /// <returns></returns>
        /// <remarks>设置回调为空即代表停止自定义音频回调，反之，设置回调不为空则代表启动自定义音频回调。</remarks>
        public abstract int setAudioFrameCallback(ITRTCAudioFrameCallback callback);

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (5) Camera APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Camera APIs
        /// @{
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (6) Audio device APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        /// Get the device management module (supported on Android and iOS)
        ///</summary>
        ///<returns>Device management class</returns>
        public abstract ITXDeviceManager getDeviceManager();

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (7) Beauty filter and watermark APIs
        //
        /////////////////////////////////////////////////////////////////////////////////

        ///<summary>
        /// Set the strength of the beauty, skin brightening, and rosy skin filters (not supported on Windows)
        ///The SDK has two built-in skin smoothing algorithms. One is "smooth", which features more obvious smoothing effect and is designed for showrooms. The other is "natural", which retains more facial details and is more natural.
        ///</summary>
        /// <param name="style">Beauty style, which may be smooth or natural. The former features more obvious skin smoothing effect and is suitable for entertainment scenarios.</param>
        /// <param name="beautyLevel">Strength of the beauty filter. Value range: 0-9. `0` indicates that the filter is disabled. The larger the value, the more obvious the effect.</param>
        /// <param name="whitenessLevel">Strength of the skin brightening filter. Value range: 0-9. `0` indicates that the filter is disabled. The larger the value, the more obvious the effect.</param>
        /// <param name="ruddinessLevel">Strength of the rosy skin filter. Value range: 0-9. `0` indicates that the filter is disabled. The larger the value, the more obvious the effect. This parameter is unavailable currently.</param>
        public abstract void setBeautyStyle(TRTCBeautyStyle style, uint beauty, uint white, uint ruddiness);

        ///<summary>
        /// Set a watermark (not supported on Android and Windows)
        ///</summary>
        /// <param name="streamType">Type of stream to watermark. Valid values: `TRTCVideoStreamTypeBig, `TRTCVideoStreamTypeSub`</param>
        /// <param name="srcData">Source of the watermark image. `null` means to remove the watermark.</param>
        /// <param name="srcType">Data type of the watermark source</param>
        /// <param name="nWidth">Pixel width of the watermark. This parameter is ignored if the watermark source is a file path.</param>
        /// <param name="nHeight">Pixel height of the watermark. This parameter is ignored if the watermark source is a file path.</param>
        /// <param name="xOffset">X-axis offset of the top-left corner of the watermark image. Value range: 0-1 (floating point number)</param>
        /// <param name="yOffset">Y-axis offset of the top-left corner of the watermark image. Value range: 0-1 (floating point number)</param>
        /// <param name="fWidthRatio">Ratio of the width of the watermark image to that of the video (the watermark image will be scaled by this ratio). Value range: 0-1 (floating point number)</param>
        public abstract void setWaterMark(TRTCVideoStreamType streamType, string srcData, TRTCWaterMarkSrcType srcType, uint nWidth, uint nHeight, float xOffset, float yOffset, float fWidthRatio);


        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (8) Music and audio effect APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        /// Get the audio effect management class (supported on Android, iOS, and macOS)
        ///</summary>
        ///<returns>Audio effect management class</returns>
        ///<remarks>
        ///This is the SDK’s audio effect management module. It supports the following features:
        ///In-ear monitoring: play the audio captured by the mic through headphones in real time
        ///Reverb effect: add reverb effects such as karaoke, room, hall, deep, and resonant
        ///Voice changing effect: add voice changing effects such as little girl, middle-aged man, metal, and punk
        ///Background music: play online or local music (support speed and pitch adjustment, playback with and without vocals, as well as looping)
        ///Short audio effect: add short audio effects such as applause and laughter. For files shorter than 10 seconds, set the `isShortFile` parameter to `YES`.
        ///</remarks>
        public abstract ITXAudioEffectManager getAudioEffectManager();

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (9) Screen sharing APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Screen sharing APIs
        /// @{

        /// <summary>
        /// 9.1 Start screen sharing
        /// </summary>
        /// <remarks>
        /// A user can publish at most one primary stream (`TRTCVideoStreamTypeBig`) and one substream (`TRTCVideoStreamTypeSub`) at the same time.
        /// By default, the screen is shared via the substream. If you use the primary stream, we recommend that you stop camera capturing (`stopLocalPreview`) to avoid conflicts.
        ///</remarks>
        /// <param name="type">Type of stream to use for screen sharing. Valid values: `TRTCVideoStreamTypeBig`: primary stream; `TRTCVideoStreamTypeSub` (default): substream</param>
        /// <param name="param">Encoding parameters for screen sharing images</param>
        public abstract void startScreenCapture(TRTCVideoStreamType type, ref TRTCVideoEncParam param);

        /// <summary>
        /// 9.2 Stop screen sharing
        /// </summary>
        public abstract void stopScreenCapture();

        /// <summary>
        /// 9.3 Pause screen sharing
        /// </summary>
        public abstract void pauseScreenCapture();

        /// <summary>
        /// 9.4 Resume screen sharing
        /// </summary>
        public abstract void resumeScreenCapture();

        /// <summary>
        /// 9.5 Enumerate shareable sources (preferably called before `startScreenCapture`)
        /// 
        /// <para>You can use this API to get the ID, type, and name of sharable sources.</para>
        /// </summary>
        /// <remarks>
        /// Information of shareable sources
        /// </remarks>
        /// <returns>Only screen-type sources are returned currently.</returns>
        public abstract TRTCScreenCaptureSourceInfo[] getScreenCaptureSources();

        /// <summary>
        /// 9.6 Set screen sharing parameters (can be called during screen sharing)
        ///
        /// <para>During screen sharing, you can call this API to switch the screen to share. You don’t need to start screen sharing again.</para>
        ///
        /// <para>You can:</para>
        /// <para>-Share an entire screen: select a source whose `type` is `Screen` from `sourceInfoList` and set `captureRect` to `{0, 0, 0, 0}`</para>
        /// <para>-Share a portion of a screen: select a source whose `type` is `Screen` from `sourceInfoList` and set `captureRect` to a non-null value, e.g., {100, 100, 300, 300}</para>
        /// </summary>
        /// <param name="source">The source to share</param>
        /// <param name="captureRect">The portion of the screen to share</param>
        /// <param name="property"> Screen sharing properties, such as whether to enable mouse cursor capturing or show a bright border around the shared content. For details, please see the definition of `TRTCScreenCaptureProperty`.</param>
        public abstract void selectScreenCaptureTarget(TRTCScreenCaptureSourceInfo source, Rect captureRect, TRTCScreenCaptureProperty property);

        /// <summary>
        /// 9.7 Set encoding parameters for screen sharing
        /// </summary>
        /// <para>- `setVideoEncoderParam()` is used to set encoding parameters for the primary stream (`TRTCVideoStreamTypeBig`, usually used for camera images).</para>
        /// <para>- `setSubStreamEncoderParam()` is used to set encoding parameters for the substream (`TRTCVideoStreamTypeSub`, usually used for screen sharing images).</para>
        /// <para>The settings determine the quality of video watched by remote users and recorded in the cloud.</para>
        /// <remarks>You need to use the API to set encoding parameters for screen sharing even if you use the primary stream for screen sharing (by setting `type` to `TRTCVideoStreamTypeBig` when calling `startScreenCapture`).</remarks>
        /// <param name="param">Substream encoding parameters. For details, please see the definition of `TRTCVideoEncParam` in `TRTCCloudDef.h`.</param>
        public abstract void setSubStreamEncoderParam(ref TRTCVideoEncParam param);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (10) Custom capturing and rendering APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Custom capturing and rendering APIs
        /// @{

        /// <summary>
        /// Enable/Disable custom video capturing
        ///
        /// <para>After custom video capturing is enabled, the SDK will skip video capturing but will continue to encode and send video data.</para>
        /// <para>You need to keep feeding custom video data to the SDK using `sendCustomVideoData()`.</para>
        /// </summary>
        /// <param name="enable">Whether to enable custom video capturing. Default value: `false`</param>
        public abstract void enableCustomVideoCapture(bool enable);

        /// <summary>
        /// Send custom video data to the SDK
        ///
        /// <para>We recommend the following settings for the parameters of `TRTCVideoFrame` (other parameters can be left empty).</para>
        /// <para>-pixelFormat: only `LiteAVVideoPixelFormat_I420` is supported.</para>
        /// <para>-bufferType: only `LiteAVVideoBufferType_Buffer` is supported.</para>
        /// <para>-data: video frame buffer</para>
        /// <para>-length: video frame size, whose value in I420 format is `width × height × 3/2`</para>
        /// <para>-width: video width</para>
        /// <para>-height: video height</para>
        /// <para>-timestamp: Separate timestamps equally; otherwise, an audio-to-video sync error will occur and the quality of MP4 recording files will be severely compromised.</para>
        ///
        /// <para>For more information, please see [Custom Capturing and Rendering](https://cloud.tencent.com/document/product/647/34066).</para>
        /// </summary>
        /// <remarks>
        /// - The SDK has an internal frame rate control logic. It drops frames if the frame rate is higher than the target specified in `setVideoEncoderParam` and inserts frames if the frame rate is lower than the target.
        /// <para>- You can leave the setting of timestamps to the SDK by setting `timestamp` to `0`, but to avoid unstable frame rate, make sure that you call `sendCustomVideoData` at regular intervals.</para>
        /// </remarks>
        /// <param name="frame">Video data in I420 format</param>
        public abstract void sendCustomVideoData(TRTCVideoFrame frame);

        /// <summary>
        /// Enable/Disable custom audio capturing (not supported on Android)
        ///
        /// <para>After custom audio capturing is enabled, the SDK will skip audio capturing but will continue to encode and send audio data.</para>
        /// <para>You need to keep feeding custom audio data to the SDK using `sendCustomAudioData()`.</para>
        /// </summary>
        /// <param name="enable">Whether to enable custom audio capturing. Default value: `false`</param>
        public abstract void enableCustomAudioCapture(bool enable);

        /// <summary>
        /// Send custom audio data to the SDK (not supported on Android)
        /// <para>We recommend the following settings for the parameters of `TRTCAudioFrame` (other parameters can be left empty).</para>
        /// <para>-audioFormat: only `LiteAVAudioFrameFormatPCM` is supported.</para>
        /// <para>-data: audio frame buffer</para>
        /// <para>-length: audio frame size. We recommend a frame duration of 20 ms. **Assume that the PCM format is used, the sample rate is 48000 Hz, and the audio mono. The size of an audio frame would be 48000 × 0.02s × 1 × 16 bits = 15360 bits = 1920 bytes.</para>
        /// <para>-sampleRate: sample rate, which can only be `48000`</para>
        /// <para>-channel: number of sound channels. Valid values: `1`: mono-channel; `2`: dual-channel. If dual channels are used, data will be interleaved.</para>
        /// <para>-timestamp: Separate timestamps equally; otherwise, an audio-to-video sync error will occur and the quality of MP4 recording files will be severely compromised.</para>
        ///
        /// <para>For more information, please see [Custom Capturing and Rendering](https://cloud.tencent.com/document/product/647/34066).</para>
        /// </summary>
        /// <remarks>
        /// You can leave the setting of timestamps to the SDK by setting `timestamp` to `0`, but to avoid choppy audio, make sure that you call `sendCustomAudioData` at regular intervals.
        /// </remarks>
        /// <param name="frame"> Audio frame. Currently, only mono audio, 48 kHz sample rate, and the `LiteAVAudioFrameFormatPCM` format are supported.</param>
        public abstract void sendCustomAudioData(TRTCAudioFrame frame);

        /// <summary>
        /// Configure the custom rendering of local video
        /// </summary>
        /// <remarks>
        /// After this API is called, the SDK will return the video data captured via a callback, which is then rendered by Unity’s `Texture2D`.
        /// <para>Call `setLocalVideoRenderCallback(TRTCVideoPixelFormat_Unknown, TRTCVideoBufferType_Unknown, null)` to disable the callback.</para>
        /// <para>iOS, macOS, and Windows support only video frames in the pixel format of `TRTCVideoPixelFormat_BGRA32`. Unity can render data in BGRA32 format. Method: new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// <para>Android supports only video frames in the pixel format of `TRTCVideoPixelFormat_RGBA32`. Unity can render data in RGBA32 format. Method: new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.RGBA32, false);</para>
        /// </remarks>
        /// <param name="streamType">Stream type</param>
        /// <param name="pixelFormat">Pixel format of the data returned</param>
        /// <param name="bufferType">Buffer type of the data returned</param>
        /// <param name="callback">Custom rendering callback</param>
        /// <returns>`0`: successful; &lt; 0: error</returns>
        public abstract int setLocalVideoRenderCallback(TRTCVideoStreamType streamType, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback callback);

        /// <summary>
        /// Configure the custom rendering of remote video
        ///
        /// <para>This API is similar to `setLocalVideoRenderDelegate`, but it sets the callback of remote video rather than local video.</para>
        /// </summary>
        /// <remarks>
        /// After this API is called, the SDK will return decoded remote video data via a callback, which is then rendered by Unity’s `Texture2D`.
        /// <para>Call `setRemoteVideoRenderCallback(userId, TRTCVideoPixelFormat_Unknown, TRTCVideoBufferType_Unknown, nullptr)` to disable the callback.</para>
        /// <para>iOS, macOS, and Windows support only video frames in the pixel format of `TRTCVideoPixelFormat_BGRA32`. Unity can render data in BGRA32 format. Method: new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// <para>Android supports only video frames in the pixel format of `TRTCVideoPixelFormat_RGBA32`. Unity can render data in RGBA32 format. Method: new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.RGBA32, false);</para>
        /// </remarks>
        /// <param name="userId">User ID</param>
        /// <param name="streamType">Stream type</param>
        /// <param name="pixelFormat">Pixel format of the data returned</param>
        /// <param name="bufferType">Buffer type of the data returned</param>
        /// <param name="callback">Custom rendering callback</param>
        /// <returns>`0`: successful; &lt; 0: error</returns>
        public abstract int setRemoteVideoRenderCallback(string userId, TRTCVideoStreamType streamType, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback callback);

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (11) Custom message sending APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Custom message sending APIs
        /// @{
        /// <summary>
        /// Insert small-volume custom data into video frames
        /// <para>
        /// Unlike `sendCustomCmdMsg`, `sendSEIMsg` inserts data directly into the header of video data. As a result, the data is retained even after the video frames are relayed to live streaming CDNs.
        /// However, the size of inserted data should be kept small, preferably several bytes.
        /// </para>
        /// <para>The most common practice is using `sendSEIMsg` to insert custom timestamps into video frames, which can ensure that the messages and video images are in sync.</para>
        /// </summary>
        /// <remarks>
        /// This API has the following limitations:
        /// <para>    -The data is not sent the moment the API is called, but inserted into the next video frame.</para>
        /// <para>    -You can send at most 30 messages per second to all users in the room. This limit also applies to `sendCustomCmdMsg`.</para>
        /// <para>    -A data packet must not exceed 1 KB. Data packets too large may reduce video quality or cause video stutter. This limit also applies to `sendCustomCmdMsg`.</para>
        /// <para>    -Each client can send up to 8 KB of data per second. This limit also applies to `sendCustomCmdMsg`.</para>
        /// <para>    -If you send a message multiple times (`repeatCount` > 1), the data will be inserted into multiple subsequent frames (whose number equals `repeatCount`). This will drive up the video bitrate.</para>
        /// <para>    -If `repeatCount` is greater than 1, the same message may be returned via the `onRecvSEIMsg` callback multiple times, making deduplication necessary.</para>
        /// </remarks>
        /// <param name="data">Data to send, which cannot exceed 1 KB</param>
        /// <param name="dataSize">Size of the data to send</param>
        /// <param name="repeatCount">Number of times to send the data</param>
        /// <returns>`true`: the message meets the requirements and will be inserted into subsequent video frames; `false`: the message does not meet the requirements</returns>
        public abstract bool sendSEIMsg(byte[] data, int dataSize, int repeatCount);

        /// <summary>
        /// Send a custom message to all users in the room
        /// <para>This API allows you to broadcast custom data to other users in the room through the audio/video data channel. Due to the use of this channel, it’s important that you control the message sending frequency and message size to avoid affecting the quality control logic of audio/video data.</para>
        /// </summary>
        /// <param name="cmdId">Message ID. Value range: 1-10</param>
        /// <param name="data">Message to send, which cannot exceed 1 KB</param>
        /// <param name="dataSize">Size of the data to send</param>
        /// <param name="reliable">Whether to enable reliable messaging, which may cause latency as the recipient needs to retain the data for a while in case resending is required.</param>
        /// <param name="ordered">Whether to enable ordered messaging, i.e., whether to require that data arrive in the same order as it is sent. This may cause latency as the recipient needs to retain the data for a while to sort it.</param>
        /// <returns>`true`: the message is sent successfully; `false`: failed to send the message</returns>
        /// <remarks>
        /// This API has the following limitations:
        ///     You can send at most 30 messages to all users in the room (not supported on web and WeChat Mini Program).
        ///     A data packet must not exceed 1 KB, or it may be dropped by an intermediate router or the server.
        ///     Each client can send up to 8 KB of data per second.
        ///     You must set both `reliable` and `ordered` to `true` or `false`.
        ///     We strongly recommend that you use different `cmdID` for messages of different types. This can reduce message latency when ordered messaging is enabled.
        /// </remarks>
        public abstract bool sendCustomCmdMsg(int cmdId,byte[] data,int dataSize,bool reliable,bool ordered);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (12) Device and network testing APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Device and network testing APIs
        /// @{

        /// <summary>
        /// Start network speed testing (which should be avoided during video calls to ensure call quality)
        /// <para>The test result can be used to optimize the SDK's server selection policy, so you are advised to run the test before the first call, which will help the SDK select the optimal server.</para>
        /// <para>In addition, if the test result is not satisfactory, you can show a UI message asking users to change to a better network.</para>
        /// </summary>
        /// <param name="sdkAppId">Application ID</param>
        /// <param name="userId">User ID</param>
        /// <param name="userSig">User signature</param>
        public abstract void startSpeedTest(int sdkAppId, string userId, string userSig);

        /// <summary>
        /// Stop network speed testing
        /// </summary>
        public abstract void stopSpeedTest();

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (13) Log APIs
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name Log APIs
        /// @{

        /// <summary>
        /// Get the SDK version
        /// </summary>
        /// <returns>UTF-8-encoded version number</returns>
        public abstract string getSDKVersion();

        /// <summary>
        /// Set the log output level
        /// </summary>
        /// <param name="level">Log output level. For details, please see `TRTCLogLevel`. Default value: `TRTCLogLevelNone`</param>
        public abstract void setLogLevel(TRTCLogLevel level);

        /// <summary>
        /// Enable/Disable console log printing
        /// </summary>
        /// <param name="enabled">Whether to enable console log printing. It is disabled by default.</param>
        public abstract void setConsoleEnabled(bool enabled);

        /// <summary>
        /// Enable/Disable local log compression
        ///
        /// <para>Compression can significantly reduce log size, but compressed logs can be read only after being decompressed by the Python script provided by Tencent Cloud.</para>
        /// <para>If compression is disabled, logs will be stored in plaintext and will take up more storage space, but they can be read directly in Notepad.</para>
        /// </summary>
        /// <param name="enabled">Whether to enable local log compression. It is disabled by default.</param>
        public abstract void setLogCompressEnabled(bool enabled);

        /// <summary>
        /// Set the path to save logs
        /// </summary>
        /// <remarks>
        /// Log files are stored in "C:/Users/[system username]/AppData/Roaming/Tencent/liteav/log" ("%appdata%/Tencent/liteav/log") by default. To change the path, you need to call this API before calling other APIs.
        /// </remarks>
        /// <param name="path">Path to save log files, e.g., "D:\\Log", which must be converted to UTF-8</param>
        public abstract void setLogDirPath(string path);

        /// <summary>
        /// Set the log callback
        /// </summary>
        /// <param name="callback">Log callback</param>
        public abstract void setLogCallback(ITRTCLogCallback callback);

        /// <summary>
        /// Call experimental APIs
        /// </summary>
        /// <remarks>
        /// This API is used to call experimental APIs.
        /// </remarks>
        /// <param name="jsonStr">JSON-string API name and parameter description</param>
        public abstract void callExperimentalAPI(string jsonStr);
        /// @}
    };
}
