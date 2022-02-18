using System;

namespace trtc
{
    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    **(1) Definitions of Video Enumerated Values**
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 1.1 Video resolution
    /// </summary>
    /// <remarks>
    /// Only landscape resolutions are defined below. To use portrait resolutions (e.g., 360 × 640), set `TRTCVideoResolutionMode` to `Portrait`.
    /// </remarks>
    public enum TRTCVideoResolution
    {
        // Aspect ratio: 1:1
        /// <summary>
        /// Recommended bitrate: 80 Kbps
        /// </summary>
        TRTCVideoResolution_120_120 = 1,
        /// <summary>
        /// Recommended bitrate: 100 Kbps
        /// </summary>
        TRTCVideoResolution_160_160 = 3,
        /// <summary>
        /// Recommended bitrate: 200 Kbps
        /// </summary>
        TRTCVideoResolution_270_270 = 5,
        /// <summary>
        /// Recommended bitrate: 350 Kbps
        /// </summary>
        TRTCVideoResolution_480_480 = 7,

        // Aspect ratio: 4:3
        /// <summary>
        /// Recommended bitrate: 100 Kbps
        /// </summary>
        TRTCVideoResolution_160_120 = 50,
        /// <summary>
        /// Recommended bitrate: 150 Kbps
        /// </summary>
        TRTCVideoResolution_240_180 = 52,
        /// <summary>
        /// Recommended bitrate: 200 Kbps
        /// </summary>
        TRTCVideoResolution_280_210 = 54,
        /// <summary>
        /// Recommended bitrate: 250 Kbps
        /// </summary>
        TRTCVideoResolution_320_240 = 56,
        /// <summary>
        /// Recommended bitrate: 300 Kbps
        /// </summary>
        TRTCVideoResolution_400_300 = 58,
        /// <summary>
        /// Recommended bitrate: 400 Kbps
        /// </summary>
        TRTCVideoResolution_480_360 = 60,
        /// <summary>
        /// Recommended bitrate: 600 Kbps
        /// </summary>
        TRTCVideoResolution_640_480 = 62,
        /// <summary>
        /// Recommended bitrate: 1000 Kbps
        /// </summary>
        TRTCVideoResolution_960_720 = 64,


        // Aspect ratio: 16:9
        /// <summary>
        /// Recommended bitrate: 150 Kbps
        /// </summary>
        TRTCVideoResolution_160_90 = 100,
        /// <summary>
        /// Recommended bitrate: 200 Kbps
        /// </summary>
        TRTCVideoResolution_256_144 = 102,
        /// <summary>
        /// Recommended bitrate: 250 Kbps
        /// </summary>
        TRTCVideoResolution_320_180 = 104,
        /// <summary>
        /// Recommended bitrate: 350 Kbps
        /// </summary>
        TRTCVideoResolution_480_270 = 106,
        /// <summary>
        /// Recommended bitrate: 550 Kbps
        /// </summary>
        TRTCVideoResolution_640_360 = 108,
        /// <summary>
        /// Recommended bitrate: 850 Kbps
        /// </summary>
        TRTCVideoResolution_960_540 = 110,
        /// <summary>
        /// Camera capturing. Recommended bitrate: 1200 Kbps
        /// <para>Screen sharing. Recommended bitrate: 1000 Kbps for smooth quality and 1600 Kbps for HD quality</para>
        /// </summary>
        TRTCVideoResolution_1280_720 = 112,
        /// <summary>
        /// Screen sharing. Recommended bitrate: 2000 Kbps
        /// </summary>
        TRTCVideoResolution_1920_1080 = 114,
    };

    /// <summary>
    /// 1.2 Resolution mode
    /// 
    /// <para>- Landscape resolution: TRTCVideoResolution_640_360 + TRTCVideoResolutionModeLandscape = 640 × 360</para>
    /// <para>- Portrait resolution: TRTCVideoResolution_640_360 + TRTCVideoResolutionModePortrait = 360 × 640</para>
    /// </summary>
    public enum TRTCVideoResolutionMode
    {
        /// <summary>
        /// Landscape resolution
        /// </summary>
        TRTCVideoResolutionModeLandscape = 0,
        /// <summary>
        /// Portrait resolution
        /// </summary>
        TRTCVideoResolutionModePortrait = 1,
    };

    /// <summary>
    /// 1.3 Video stream type
    /// 
    /// <para>There are three types of streams in TRTC, namely:</para>
    /// <para>-Big-image stream: It is the most used stream type, which usually transfers video data captured by the camera.</para>
    /// <para>-Small-image stream: It transfers the same data as the big-image stream, but at lower resolution and bitrate.</para>
    /// </summary>
    /// <remarks>
    /// - In case of good upstream network conditions, an anchor can send both the big and small images.
    /// <para>- The small image depends on the big image. You cannot enable only the small image.</para>
    /// </remarks>
    public enum TRTCVideoStreamType
    {
        /// <summary>
        // Big-image stream
        /// </summary>
        TRTCVideoStreamTypeBig = 0,
        /// <summary>
        /// Small-image stream
        /// </summary>
        TRTCVideoStreamTypeSmall = 1,
        /// <summary>
        /// Substream (screen sharing)
        /// </summary>
        TRTCVideoStreamTypeSub   = 2,
    };

    /// <summary>
    /// 1.4 Video quality
    ///
    /// <para>The TRTC SDK has defined 6 video quality standards. `Excellent` indicates the highest quality standard, and `Down` means the video is unavailable.</para>
    /// </summary>
    public enum TRTCQuality
    {
        /// <summary>
        /// Unknown
        /// </summary>
        TRTCQuality_Unknown = 0,
        /// <summary>
        /// Excellent
        /// </summary>
        TRTCQuality_Excellent = 1,
        /// <summary>
        /// Good
        /// </summary>
        TRTCQuality_Good = 2,
        /// <summary>
        /// Average
        /// </summary>
        TRTCQuality_Poor = 3,
        /// <summary>
        /// Bad
        /// </summary>
        TRTCQuality_Bad = 4,
        /// <summary>
        /// Very bad
        /// </summary>
        TRTCQuality_Vbad = 5,
        /// <summary>
        /// Unavailable
        /// </summary>
        TRTCQuality_Down = 6,
    };

    /// <summary>
    /// 1.5 Image fill mode
    ///
    /// <para>If the target resolution does not match the original resolution of a video, you need to specify the image fill mode.</para>
    /// <para>- TRTCVideoFillMode_Fill: The excess parts are cropped, and the image may not be displayed in whole.</para>
    /// <para>- TRTCVideoFillMode_Fit: The long side of the image is stretched to fit the screen, and the blank area is filled with black bars. The image is displayed in whole.</para>
    /// </summary>
    public enum TRTCVideoFillMode
    {
        /// <summary>
        /// The image is scaled to fill the entire screen, and the excess parts are cropped.
        /// </summary>
        TRTCVideoFillMode_Fill   = 0,
        /// <summary>
        /// The long side of the image is stretched to fit the screen, and the blank area is filled with black bars.
        /// </summary>
        TRTCVideoFillMode_Fit   = 1,
    };

    /// <summary>
    /// 1.6 Image rotation
    ///
    /// <para>The TRTC SDK provides APIs for setting the rotation of local and remote videos.</para>
    /// </summary>
    public enum TRTCVideoRotation
    {
        /// <summary>
        /// Do not rotate
        /// </summary>
        TRTCVideoRotation0   = 0,
        /// <summary>
        /// Rotate 90 degrees clockwise
        /// </summary>
        TRTCVideoRotation90   = 1,
        /// <summary>
        /// Rotate 180 degrees clockwise
        /// </summary>
        TRTCVideoRotation180   = 2,
        /// <summary>
        /// Rotate 270 degrees clockwise
        /// </summary>
        TRTCVideoRotation270   = 3,
    };

    /// <summary>
    /// 1.6 Beauty filter (skin smoothing) algorithm
    /// </summary>
    /// <remarks>
    /// The TRTC SDK has two built-in skin smoothing algorithms. Choose the one that best fits your product positioning.
    /// </remarks>
    public enum TRTCBeautyStyle
    {
        /// <summary>
        /// Smooth, which features more obvious skin smoothing effect and is suitable for showrooms
        /// </summary>
        TRTCBeautyStyleSmooth   = 0,

        /// <summary>
        /// Natural, which retains more facial details and is more natural
        /// </summary>
        TRTCBeautyStyleNature   = 1,
    };

    /// <summary>
    //// 4.4 Watermark source type
    /// </summary>
    public enum TRTCWaterMarkSrcType
    {
        /// <summary>
        /// Path to the image file, which can be in BMP, GIF, JPEG, PNG, TIFF, Exif, WMF, or EMF format
        /// </summary>
        TRTCWaterMarkSrcTypeFile   = 0,
        /// <summary>
        /// Memory block in BGRA32 format
        /// </summary>
        TRTCWaterMarkSrcTypeBGRA32 = 1,
        /// <summary>
        /// Memory block in RGBA32 format
        /// </summary>
        TRTCWaterMarkSrcTypeRGBA32 = 2,
    };

    /// <summary>
    /// 1.8 Video pixel format
    ///
    /// <para>The TRTC SDK allows custom video capturing and rendering. In custom video capturing, you can use the enumerated values below to specify the pixel format of the video you capture.</para>
    /// <para>In custom video rendering, you can specify the pixel format of video data returned via the custom rendering callback.</para>
    /// </summary>
    public enum TRTCVideoPixelFormat
    {
        TRTCVideoPixelFormat_Unknown = 0,
        TRTCVideoPixelFormat_I420 = 1,        /// <summary>I420</summary>
        TRTCVideoPixelFormat_Texture_2D = 2,  /// <summary>OpenGL 2D texture</summary>
        TRTCVideoPixelFormat_BGRA32 = 3,      /// <summary>BGRA32</summary>
        TRTCVideoPixelFormat_RGBA32 = 5,
    };

    /// <summary>
    /// 1.9 Video data container format
    /// </summary>
    public enum TRTCVideoBufferType
    {
        TRTCVideoBufferType_Unknown = 0,
        /// <summary>
        /// Binary buffer
        /// </summary>
        TRTCVideoBufferType_Buffer = 1,
        /// <summary>
        /// Texture
        /// </summary>
        TRTCVideoBufferType_Texture   = 3,
    };

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    **(2) Definitions of Network Enumerated Values**
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    //// 2.1 Application scenario
    /// 
    /// <para>The TRTC SDK is optimized for different application scenarios such as video conferencing and live streaming.</para>
    /// <para>- TRTCAppSceneVideoCall: video call, whose use cases include [one-to-one video call], [video conferencing with up to 300 participants], [online medical consultation], [video chat], [remote interview], etc.</para>
    /// <para>- TRTCAppSceneLIVE: interactive live video streaming, whose use cases include [low-latency live video streaming], [interactive classroom for up to 100,000 participants], [live video competition], [video dating], [remote training], [large-scale conferencing], etc.</para>
    /// <para>- TRTCAppSceneAudioCall: audio call, whose use cases include [one-to-one audio call], [audio conferencing with up to 300 participants], [audio chat], [online Werewolf playing], etc.</para>
    /// <para>- TRTCAppSceneVoiceChatRoom: interactive live audio streaming, whose use cases include [low-latency live audio streaming], [audio co-anchoring], [audio chat room], [karaoke], [FM radio], etc.</para>
    /// </summary>
    public enum TRTCAppScene
    {
        /// <summary>
        /// Video calls support 720p and 1080p HD video. Each room allows up to 300 concurrent users, and up to 50 of them can speak simultaneously.
        /// <para>Use cases: [one-to-one video call], [video conferencing with up to 300 participants], [online medical consultation], [video chat], [video interview], etc.</para>
        /// </summary>
        TRTCAppSceneVideoCall      = 0,
        /// <summary>
        /// Interactive video streaming allows smooth mic on/off without waiting. Anchor latency is lower than 300 ms and playback latency lower than 1,000 ms. Up to 100,000 users can play the anchor’s video at the same time.
        /// <para>Use cases: [low-latency live video streaming], [interactive classroom for up to 100,000 participants], [live video competition], [video dating room], [remote training], [large-scale conferencing], etc.<para>
        /// <para>Note: In this scenario, you must specify a role for the user via the `role` parameter in `TRTCParams`.<para>
        /// </summary>
        TRTCAppSceneLIVE           = 1,
        /// <summary>
        /// Audio calls support 48 kHz stereo audio. Each room allows up to 300 concurrent users, and up to 50 of them can speak simultaneously.
        /// <para>Use cases: [one-to-one audio call], [audio conferencing with up to 300 participants], [audio chat], [online Werewolf playing], etc.</para>
        /// </summary>
        TRTCAppSceneAudioCall      = 2,
        /// <summary>
        /// Interactive live audio streaming allows smooth mic on/off without waiting. Anchor latency is lower than 300 ms and playback latency lower than 1,000 ms. Up to 100,000 users can play the anchor’s audio at the same time.
        /// <para>Use cases: [low-latency live audio streaming], [live audio co-anchoring], [audio chat room], [karaoke room], [FM radio], etc.</para>
        /// <para>Note: In this scenario, you must specify a role for the user via the `role` parameter in `TRTCParams`.<para>
        /// </summary>
        TRTCAppSceneVoiceChatRoom  = 3,
    };

    /// <summary>
    /// 2.2 Role (available only if `TRTCAppScene` is set to `TRTCAppSceneLIVE` or `TRTCAppSceneVoiceChatRoom`)
    ///
    /// <para>ln live streaming scenarios, the majority of users are audience and only a small number publish streams. Distinguishing them by giving each user a role allows TRTC to better optimize its features based on different roles.</para>
    ///
    /// <para>- Anchor: Anchors can publish audio and video. Up to 50 users in a room can publish audio and video at the same time.</para>
    /// <para>- Audience: Audience can play but cannot publish audio or video. There is no upper limit on the audience size in a room.</para>
    /// </summary>
    public enum TRTCRoleType
    {
        /// <summary>
        /// Anchor
        /// </summary>
        TRTCRoleAnchor = 20,
        /// <summary>
        /// Audience
        /// </summary>
        TRTCRoleAudience = 21,
    };

    /// <summary>
    /// 2.3 QoS control mode
    ///
    /// <para>The TRTC SDK adjusts the codec and network module constantly to adapt to changing network conditions.</para>
    /// <para>To support quick algorithm upgrade, the SDK provides two QoS control modes:</para>
    /// <para>- ModeServer: cloud control, which is the default and recommended mode</para>
    /// <para>- ModeClient: local control, which is for internal debugging of the SDK and is not recommended</para>
    /// </summary>
    /// <remarks>
    /// You are advised to use the cloud control mode so that when we upgrade the QoS algorithm, you don’t need to update the SDK to get better QoS control results.
    /// </remarks>
    public enum TRTCQosControlMode
    {
        /// <summary>
        /// Local control, which is for internal debugging of the SDK and is not recommended
        /// </summary>
        TRTCQosControlModeClient,
        /// <summary>
        /// Cloud control (default)
        /// </summary>
        TRTCQosControlModeServer,
    };

    /// <summary>
    /// 2.4 Video quality preference
    ///
    /// <para>You can specify whether to prioritize clarity or smoothness under poor network conditions.</para>
    /// <para>- Smooth: prioritize smoothness under poor network conditions. The publishing and smooth playback of audio are prioritized. Video may be blurry and pixelated, but does not stutter.</para>
    /// <para>- Clear: prioritize clarity under poor network conditions. Video is clear, but may stutter.</para>
    /// </summary>
    public enum TRTCVideoQosPreference
    {
        /// <summary>
        /// Prioritize smoothness under poor network conditions
        /// </summary>
        TRTCVideoQosPreferenceSmooth = 1,
        /// <summary>
        /// Prioritize clarity under poor network conditions
        /// </summary>
        TRTCVideoQosPreferenceClear = 2,
    };


    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    **(3) Definitions of Audio Enumerated Values**
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// <summary>
    /// 3.1 Audio frame format
    /// </summary>
    public enum TRTCAudioFrameFormat
    {
        TRTCAudioFrameFormatNone = 0,
        /// <summary>
        /// PCM, 16 bits per sample
        /// </summary>
        TRTCAudioFrameFormatPCM,
    };

    /// <summary>
    /// 3.2 Audio quality
    /// </summary>
    /// <remarks>
    /// Audio quality is used to indicate the fidelity of audio. `TRTCAudioQualitySpeech` is suitable for calls and `TRTCAudioQualityMusic` for music scenarios with high requirements on audio quality.
    /// </remarks>
    public enum TRTCAudioQuality
    {
        ///<summary>
        /// Speech: mono audio with a sample rate of 16 kHz and a bitrate of 16 Kbps, suitable for online conferencing, audio calls, etc.
        ///</summary>
        TRTCAudioQualitySpeech = 1,
        ///<summary>
        /// Default: mono audio with a sample rate of 48 kHz and a bitrate of 50 Kbps. This is the default audio quality used by the SDK and is recommended.
        ///</summary>
        TRTCAudioQualityDefault = 2,
        ///<summary>
        /// Music: stereo and fullband audio with a sample rate of 48 kHz and a bitrate of 128 Kbps, suitable for music scenarios with high requirements on fidelity, such as karaoke and live music streaming
        ///</summary>
        TRTCAudioQualityMusic = 3,
    };

    /// <summary>
    /// Voice changing effect
    /// </summary>
    public enum TXVoiceChangeType
    {
        /// <summary>
        /// Original
        /// </summary>
        TXVoiceChangeType_0 = 0,
        /// <summary>
        /// Child
        /// </summary>
        TXVoiceChangeType_1 = 1,
        /// <summary>
        /// Little girl
        /// </summary>
        TXVoiceChangeType_2 = 2,
        /// <summary>
        /// Middle-aged man
        /// </summary>
        TXVoiceChangeType_3 = 3,
        /// <summary>
        /// Metal
        /// </summary>
        TXVoiceChangeType_4 = 4,
        /// <summary>
        /// Nasal
        /// </summary>
        TXVoiceChangeType_5 = 5,
        /// <summary>
        /// Punk
        /// </summary>
        TXVoiceChangeType_6 = 6,
        /// <summary>
        /// Beast
        /// </summary>
        TXVoiceChangeType_7 = 7,
        /// <summary>
        /// Fat boy
        /// </summary>
        TXVoiceChangeType_8 = 8,
        /// <summary>
        /// Electric
        /// </summary>
        TXVoiceChangeType_9 = 9,
        /// <summary>
        /// Robot
        /// </summary>
        TXVoiceChangeType_10 = 10,
        /// <summary>
        /// Ethereal
        /// </summary>
        TXVoiceChangeType_11 = 11,
    };
    /// <summary>
    /// Reverb effect
    /// </summary>
    public enum TXVoiceReverbType
    {
        /// <summary>Original</summary>
        TXVoiceReverbType_0 = 0,
        /// <summary>Karaoke</summary>
        TXVoiceReverbType_1 = 1,
        /// <summary>Room</summary>
        TXVoiceReverbType_2 = 2,
        /// <summary>Hall</summary>
        TXVoiceReverbType_3 = 3,
        /// <summary>Deep</summary>
        TXVoiceReverbType_4 = 4,
        /// <summary>Resonant</summary>
        TXVoiceReverbType_5 = 5,
        /// <summary>Metal</summary>
        TXVoiceReverbType_6 = 6,
        /// <summary>Husky</summary>
        TXVoiceReverbType_7 = 7,
    };

    /// <summary>
    /// Room switching parameters
    /// </summary>
    public struct TRTCSwitchRoomConfig
    {
        /// <summary>
        /// **Description:** numeric room ID (required). Users in the same room can see one another and have a video call.
        /// **Value:** a custom value, which must be unique. You can use the user ID of the room creator – if it is numeric – as the room ID.
        /// </summary>
        public int roomId;

        /// <summary>
        /// **Description:** string-type room ID. Users in the same room can see one another and make a video call.
        /// **Value:** 64 bytes or shorter; support the following character set (89 characters)
        /// **Note:** You must specify either `roomId` or `strRoomId`. If you use string-type room IDs, set `roomId` to `0`. If both parameters are set, `roomId` will be used.
        /// </summary>
        public string strRoomId;

        /// <summary>
        /// **Description:** user signature of the current user (required), which functions as the login password
        ///**Value:** For how to calculate user signatures, please see [UserSig](https://cloud.tencent.com/document/product/647/17275).
        /// </summary>
        public string userSig;
        /// <summary>
        /// **Description:** room signature (optional). You can use this parameter to allow only specified users (`userId`) to enter a room.
        /// **Value:** Use this parameter only if you have high security requirements. For more information, please see [Enabling Advanced Permission Control](https://cloud.tencent.com/document/product/647/32240).
        /// </summary>
        public string privateMapKey;
    };

    /// <summary>
    /// Music and audio effect API parameters
    /// </summary>
    public struct AudioMusicParam {
        /// <summary>
        /// **Description:** music ID
        /// **Note:** The SDK allows you to play multiple music tracks. You use music ID to identify a music track and control its playback, volume, etc.
        /// </summary>
        public int id;

        /// <summary>
        /// **Description:** absolute path of a music file
        /// </summary>
        public String path;

        /// **Description:** music loop times
        /// **Value:** a positive integer. `0` (default value) indicates that the music file will be played once; `1` indicates that it will be played twice, and so on.
        /// </summary>
        public int loopCount;

        /// <summary>
        /// **Description:** whether to send the music to remote users
        /// **Value:** `YES`: publish the music played locally to the cloud so that remote users can hear it; `NO` (default): play the music locally only and do not publish it
        /// </summary>
        public bool publish;

        /// <summary>
        /// **Description:** whether to play a short music file
        /// **Value:** `YES`: short music file, which will be looped; `NO` (default): normal-length music file
        /// </summary>
        public bool isShortFile;
        /// <summary>
        /// **Description:** start time (ms) for music playback
        /// </summary>
        public int startTimeMS;
        /// <summary>
        /// **Description:** end time (ms) for music playback. `0` or `-1` means to play the music to the end.
        /// </summary>
        public int endTimeMS;
    };


    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    **(4) Definitions Inherited from TXLiteAVBase**
    //
    /////////////////////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    **(5) Definitions of Other Enumerated Values**
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 5.1 Log output level
    /// </summary>
    public enum TRTCLogLevel
    {
        /// <summary>
        /// All
        /// </summary>
        TRTCLogLevelVerbose   = 0,
        /// <summary>
        /// DEBUG, INFO, WARNING, ERROR, and FATAL
        /// </summary>
        TRTCLogLevelDebug   = 1,
        /// <summary>
        /// INFO, WARNING, ERROR, and FATAL
        /// </summary>
        TRTCLogLevelInfo   = 2,
        /// <summary>
        /// WARNING, ERROR, and FATAL
        /// </summary>
        TRTCLogLevelWarn   = 3,
        /// <summary>
        /// ERROR and FATAL
        /// </summary>
        TRTCLogLevelError   = 4,
        /// <summary>
        /// FATAL
        /// </summary>
        TRTCLogLevelFatal   = 5,
        /// <summary>
        /// Off
        /// </summary>
        TRTCLogLevelNone   = 6,
    };

    /// <summary>
    /// 5.2 Device operation
    /// </summary>
    public enum TRTCDeviceState
    {
        /// <summary>
        /// Device added
        /// </summary>
        TRTCDeviceStateAdd = 0,
        /// <summary>
        /// Device removed
        /// </summary>
        TRTCDeviceStateRemove = 1,
        /// <summary>
        /// Device started
        /// </summary>
        TRTCDeviceStateActive = 2,
    };

    /// <summary>
    /// 5.3 Device type
    /// </summary>
    public enum TRTCDeviceType
    {
        /// <summary>
        /// Unknown device
        /// </summary>
        TRTCDeviceTypeUnknow = -1,
        /// <summary>
        /// Mic
        /// </summary>
        TRTCDeviceTypeMic = 0,
        /// <summary>
        /// Speaker
        /// </summary>
        TRTCDeviceTypeSpeaker = 1,
        /// <summary>
        /// Camera
        /// </summary>
        TRTCDeviceTypeCamera = 2,
    };

    /// <summary>
    /// 5.4 System volume type (for mobile devices only)
    ///
    /// Most smartphones have two system volume types: call volume and media volume.
    /// - Call volume is designed for call scenarios. It uses phones’ built-in acoustic echo cancellation (AEC) technique and delivers lower audio quality than media volume.
    ///             In the call volume mode, you cannot turn the volume to 0 using the volume buttons, but can use Bluetooth earphones for audio capturing.
    ///
    /// - Media volume is designed for music scenarios. It delivers better audio quality than call volume.
    ///             In the media volume mode, if you enable AEC, the SDK will use its built-in algorithm to process audio.
    ///             You can only use the phone’s mic, not Bluetooth earphones, for audio capturing.
    ///
    /// The SDK provides three control modes for system volume types, including:
    /// - Auto: Call volume is used for anchors and co-anchoring users, and media volume for users not co-anchoring. This mode is suitable for live streaming scenarios.
    ///         If you set the scenario to `TRTCAppSceneLIVE` or `TRTCAppSceneVoiceChatRoom` when calling `enterRoom`, the SDK will use this mode by default.
    ///
    /// - VOIP: Call volume is used throughout a call. This is suitable for conferencing scenarios.
    ///         If you set the scenario to `TRTCAppSceneVideoCall` or `TRTCAppSceneAudioCall` when calling `enterRoom`, the SDK will use this mode by default.
    ///
    /// - Media: Media volume is used throughout a call. This mode is not used often, only under special circumstances such as when the anchor uses an external sound card.
    ///
    /// </summary>
    public enum TXSystemVolumeType
    {
        /// <summary>
        /// Call volume is used for anchors and co-anchoring users, and media volume for users not co-anchoring. This mode is suitable for live streaming scenarios.
        /// If you set the scenario to `TRTCAppSceneLIVE` or `TRTCAppSceneVoiceChatRoom` when calling `enterRoom`, the SDK will use this mode by default.
        /// </summary>
        TXSystemVolumeTypeAuto  = 0,
        /// <summary>
        /// Media volume is used throughout a call. This mode is not used often, only under special circumstances such as when the anchor uses an external sound card.
        /// </summary>
        TXSystemVolumeTypeMedia = 1,
        /// <summary>
        /// Call volume is used throughout a call. This is suitable for conferencing scenarios.
        /// If you set the scenario to `TRTCAppSceneVideoCall` or `TRTCAppSceneAudioCall` when calling `enterRoom`, the SDK will use this mode by default.
        /// </summary>
        TXSystemVolumeTypeVOIP  = 2,
    };

    /// <summary>
    /// Audio route (for mobile devices only)
    ///
    /// A mobile phone usually has two speakers. The audio route determines the speaker via which audio is played.
    /// - Speakerphone: speaker at the bottom of a phone, which plays audio at high volume and is used to play music out loud
    /// - Earpiece: receiver at the top of a phone, which plays audio at low volume and is suitable for calls
    /// </summary>
    public enum TXAudioRoute {
        TXAudioRouteSpeakerphone = 0,   /// <summary>Speaker</summary>
        TXAudioRouteEarpiece = 1,   /// <summary>Receiver</summary>
    };


    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      **(6) Definitions of Main TRTC Types**
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 6.1. Room entry parameters
    /// 
    /// <para>You can call `enterRoom` to enter the specified room successfully only if you set the parameters as required.</para>
    /// </summary>
    public struct TRTCParams
    {
        /// <summary>
        /// **Description:** application ID (required). Tencent Video Cloud bills by `sdkAppId`.
        /// <para> After creating an application, you can view its `sdkAppId` on the **Application Info** page of the [TRTC console](https://console.cloud.tencent.com/trtc/).</para>
        /// </summary>
        public UInt32 sdkAppId;
        /// <summary>
        /// **Description**: UTF-8-encoded user ID (required)
        /// <para>**Value:** If a user’s ID in your account system is `abc`, you can set `userId` to `abc`.</para>
        /// </summary>
        public String userId;
        /// <summary>
        /// **Description:** user signature of the current user (required), which functions as the login password
        /// <para>**Value:** For how to calculate user signatures, please see [UserSig](https://cloud.tencent.com/document/product/647/17275).</para>
        /// </summary>
        public String userSig;
        /// <summary>
        /// **Description:** numeric room ID (required). Users in the same room can see one another and have a video call.
        /// <para>**Value:** a custom value, which must be unique. You can use the user ID of the room creator – if it is numeric – as the room ID.</para>
        /// </summary>
        public UInt32 roomId;
        /// <summary>
        /// **Description:** string-type room ID. Users in the same room can see one another and make a video call.
        /// <para>**Value:** 64 bytes or shorter; support the following character set (89 characters):</para>
        /// <para>  -Letters (a-z and A-Z)</para>
        /// <para>  -Digits (0-9)</para>
        /// <para>  -Space, "!", "#", "$", "%", "&", "(", ")", "+", "-", ":", ";", "<", "=", ".", ">", "?", "@", "[", "]", "^", "_", "{", "}", "|", "~", ","</para>
        /// <para>**Note:** You must specify either `roomId` or `strRoomId`. If you use string-type room IDs, set `roomId` to `0`. If both parameters are set, `roomId` will be used.</para>
        /// </summary>
        public String strRoomId;
        /// <summary>
        /// **Description**: role in live streaming scenarios (`TRTCAppSceneLIVE`). This parameter is not available in call scenarios.
        /// <para>**Value:** default value: `TRTCRoleAnchor` (anchor)</para>
        /// </summary>
        public TRTCRoleType role;
        /// <summary>
        ///**Description:** stream ID bound to Tencent Cloud’s live streaming CDN (optional). If this parameter is specified, audience will be able to play the user’s stream via Tencent Cloud’s CDN using a standard streaming protocol (FLV or HLS).
        /// <para>**Value:** 64 bytes or shorter (optional). To make it easier to distinguish between different stream IDs and avoid application conflicts, we recommend that you set this parameter to `sdkappid_roomid_userid_main`.</para>
        /// <para>**Note:** To use Tencent Cloud’s live streaming CDN, you need to enable relayed push on the **Function Configuration** page of the [console](https://console.cloud.tencent.com/trtc/).</para>
        /// <para>**Reference:** [CDN Relayed Live Streaming](https://cloud.tencent.com/document/product/647/16826)</para>
        /// </summary>
        public String streamId;
        /// <summary>
        ///**Description:** recording ID in the callback for on-cloud recording
        /// <para>**Value:** 64 bytes or shorter; support letters (a-z and A-Z), digits (0-9), underscores, and hyphens</para>
        /// <para>**Reference:** [On-Cloud Recording and Playback](https://cloud.tencent.com/document/product/647/16823)</para>
        /// </summary>
        public String userDefineRecordId;
        /// <summary>
        /// **Description:** room signature (optional). You can use this parameter to allow only specified users (`userId`) to enter a room.
        /// <para>**Value:** Use this parameter only if you have high security requirements. For more information, please see [Enabling Advanced Permission Control](https://cloud.tencent.com/document/product/647/32240)./para>
        /// </summary>
        public String privateMapKey;
        /// <summary>
        /// **Description:** business information (optional). This parameter is needed only for some advanced features.
        /// <para>**Value:** This parameter is not recommended.</para>
        /// </summary>
        public String businessInfo;
    };

    /// <summary>
    /// 6.2 Video encoding parameters
    ///
    /// <para>Encoding parameters determine the quality of video watched by remote users and recorded in the cloud.</para>
    /// </summary>
    public struct TRTCVideoEncParam
    {
        /// <summary>
        /// **Description:** video resolution
        /// <para>**Value:**</para>
        /// <para>  - For video calls, we recommend a resolution of 360 × 640 or lower and `Portrait` for `resMode`.</para>
        /// <para>  - For mobile live streaming, we recommend a resolution of 540 × 960 and `Portrait` for `resMode`.</para>
        /// <para>  - On Windows and macOS, we recommend a resolution of 640 × 360 or above and `Landscape` for `resMode`.</para>
        /// <para>**Note:** `TRTCVideoResolution` supports only landscape resolutions by default, such as 640 × 360.</para>
        /// <para>            To use portrait resolutions, set `resMode` to `Portrait`. For example, if `videoResolution` is `640 × 360` and `resMode` is set to `Portrait`, the resolution 360 × 640 will be used.</para>
        /// </summary>
        public TRTCVideoResolution videoResolution;
        /// <summary>
        /// **Description:** resolution mode (landscape/portrait)
        /// **Value:** `Portrait` is recommended for mobile live streaming and `Landscape` for live streaming on Windows or macOS.</para>
        /// <para>**Note:** If `videoResolution` is set to `640 × 360` and `resMode` to `Portrait`, the encoding resolution will be 360 × 640.</para>
        /// </summary>
        public TRTCVideoResolutionMode resMode;
        /// <summary>
        /// **Description:** video capturing frame rate
        /// <para>**Value:** 15 or 20 fps. Video will stutter severely if the frame rate is lower than 5 fps and slightly if it is lower than 10 fps. Setting the frame rate to higher than 20 fps would be a waste of resources (the frame rate of films is 24 fps).</para>
        /// <para>**Note:** On many Android phones, the front camera does not support a capturing frame rate of higher than 15 fps. For some that emphasize beauty filters, the frame rate may be lower than 10 fps.</para>
        /// </summary>
        public UInt32 videoFps;
        /// <summary>
        /// **Description:** target video bitrate. The SDK encodes streams at the target video bitrate, but will reduce the bitrate under poor network conditions.
        /// <para>**Value:** Please refer to the recommended bitrates for different `TRTCVideoResolution` values. You may increase the value moderately.</para>
        /// <para>            For example, the recommended bitrate for `TRTCVideoResolution_1280_720` is 1200 Kbps, but you can set the target bitrate to 1500 Kbps for higher video quality.</para>
        /// <para>**Note:** Normally, the SDK encodes streams at the bitrate specified by `videoBitrate`, but under poor network conditions, it will reduce the bitrate, whose minimum allowed value is determined by `minVideoBitrate`.</para>
        /// <para>            If you are tolerant of stutter but have high requirements on clarity, you can set `minVideoBitrate` to 60% of `videoBitrate`.</para>
        /// <para>            If you prioritize smoothness over clarity, you can set `minVideoBitrate` to 200 Kbps.</para>
        /// <para>            Setting `videoBitrate` and `minVideoBitrate` to the same value will disable the SDK’s automatic bitrate control feature.</para>
        /// </summary>
        public UInt32 videoBitrate;
        /// <summary>
        /// **Description:** the minimum value the SDK is allowed to reduce the bitrate to under poor network conditions
        /// <para>**Value:**</para>
        /// <para>     - If you are tolerant of stutter but have high requirements on clarity, you can set `minVideoBitrate` to 60% of `videoBitrate`.</para>
        /// <para>     - If you prioritize smoothness over clarity, you can set `minVideoBitrate` to 200 Kbps.</para>
        /// <para>     - Setting `videoBitrate` and `minVideoBitrate` to the same value will disable the SDK’s automatic bitrate control feature.</para>
        /// <para>     - If this parameter is `0` (default value), the SDK will determine the lowest bitrate according to the resolution.</para>
        /// <para>**Note:**</para>
        /// <para>     - To avoid blurry or pixelated video, you are not advised to set `minVideoBitrate` too low if the target resolution is high.</para>
        /// <para>      For example, if the resolution is set to 720p and the bitrate to 200 Kbps, the encoded video will be heavily pixelated.</para>
        /// </summary>
        public UInt32 minVideoBitrate;
        /// <summary>
        /// **Description:** whether to allow resolution adjustment
        /// <para>**Value:**</para>
        /// <para>   - For mobile live streaming, set this parameter to `NO`.</para>
        ///     - For video calls, if you prioritize smoothness, set it to `true`, and the SDK will reduce the resolution (for `TRTCVideoStreamTypeBig` only) if the bandwidth is limited.</para>
        /// <para>   - Default value: `NO`</para>
        /// <para>**Note:** If you need to record a call, before setting this parameter to `YES`, make sure that resolution adjustment won’t affect the recording quality.</para>
        /// </summary>
        public bool enableAdjustRes;
    };
    /// <summary>
    /// Audio recording parameters
    ///
    /// **Description:** the path you want to store the recording file in (required). You need to specify this parameter yourself and make sure that the path exits and is writable.
    ///
    /// **Note:** The path must contain the filename and extension. The extension determines the format of the recording file. Supported formats include PCM, WAV, and AAC. For example, if you set this parameter to `path/to/audio.aac`, the recording file will be in AAC format. Please use a valid path that is readable and writable so that the recording file can be generated successfully.
    /// </summary>
    public struct TRTCAudioRecordingParams
    {
        /// <summary>
        /// **Description:** the path to store the recording file in (required). You need to specify this parameter yourself and make sure that the path exits and is writable.
        /// **Note:** The path must contain the filename and extension. The extension determines the format of the recording file. Supported formats include PCM, WAV, and AAC. For example, if you set this parameter to `path/to/audio.aac`, the recording file will be in AAC format. Please use a valid path that is readable and writable so that the recording file can be generated successfully.
        /// </summary>
        public String filePath;
    }

    /// <summary>
    /// Local recording parameters
    /// </summary>
    public enum TRTCLocalRecordType
    {
        /// <summary>
        // Record audio only
        /// </summary>
        TRTCLocalRecordType_Audio = 0,

        /// <summary>
        /// Record video only
        /// </summary>
        TRTCLocalRecordType_Video = 1,

        /// <summary>
        /// Record audio and video
        /// </summary>
        TRTCLocalRecordType_Both = 2,
    }

    /// <summary>
    /// Recording parameters
    /// </summary>
    public struct TRTCLocalRecordingParams
    {
        /// <summary>
        /// **Description:** the path to store recording files in (required). Please specify this parameter yourself and make sure that the path is valid, readable, and writable; otherwise, the SDK will fail to generate recording files.
        /// **Note:** The path must contain the filename and extension. The extension determines the format of recording files. Currently, only MP4 is supported. On Windows, we recommend that you use a path in your application’s private data directory.
        /// **Sample code:** Recording data into a file named `example.mp4` in `appdata%\test`: std::string filePath; std::wstring path; wchar_t fullPath[MAX_PATH] = { 0 }; SHGetFolderPathW(NULL, CSIDL_APPDATA, NULL, 0, fullPath); path=fullPath; path += L"\\test\\example.mp4"; filePath = txf_wstr2utf8(path);
        /// </summary>
        public String filePath;

        /// <summary>
        /// **Description:** type of media to record. Both audio and video are recorded by default.
        /// </summary>
        public TRTCLocalRecordType recordType;

        /// <summary>
        /// The interval (ms) for triggering the recording callback `onLocalRecordDoing`. Value range: 1000-10000. Default value: `-1`, which means to disable the callback
        /// </summary>
        public int interval;
    }

    /// <summary>
    /// 6.3 QoS control parameters
    ///
    /// <para>QoS control parameters, which determine the SDK’s QoS policy under different network conditions, for example, whether to prioritize smoothness or clarity under poor network conditions</para>
    /// </summary>
    public struct TRTCNetworkQosParam
    {
        /// <summary>
        /// **Description:** whether to prioritize clarity or smoothness under poor network conditions
        /// <para>**Note:**</para>
        /// <para>   - Prioritize smoothness under poor network conditions. The video may be blurry and pixelated, but playback is smooth without stutter.</para>
        /// <para>   - Prioritize clarity under poor network conditions. The video is clear, but playback may stutter.</para>
        /// </summary>
        public TRTCVideoQosPreference preference;
        /// <summary>
        /// **Description:** QoS control mode (cloud control/local control)
        /// <para>**Value:** Cloud control is recommended.</para>
        /// <para>**Note:**</para>
        /// <para>   - Server mode (default): cloud control, which is the recommended mode</para>
        /// <para>   - Client mode: local control, which is for internal debugging of the SDK and is not recommended</para>
        /// </summary>
        public TRTCQosControlMode controlMode;
    };

    /// <summary>
    /// 5.3 Video rendering parameters
    /// </summary>
    /// <remarks>
    /// You can use these parameters to set the rotation, fill mode, and mirror mode of video images.
    /// </remarks>
    public struct TRTCRenderParams
    {
        /// <summary>
        /// Rotation. Default value: `TRTCVideoRotation0`
        /// </summary>
        public TRTCVideoRotation rotation;
        /// <summary>
        /// Fill mode. Default value: `TRTCVideoFillMode_Fit`
        /// </summary>
        public TRTCVideoFillMode fillMode;
        /// <summary>
        /// Mirror mode. Default value: `TRTCVideoMirrorType_Disable`
        /// </summary>
        public TRTCVideoMirrorType mirrorType;
    };

    /// <summary>
    /// 1.9 Video mirror types
    /// </summary>
    /// <remarks>TRTC supports the following mirror modes.</remarks>
    public enum TRTCVideoMirrorType
    {
        /// <summary>
        /// Mirror only the front camera for local preview (on mobile devices only)
        /// </summary>
        TRTCVideoMirrorType_Auto = 0,
        /// <summary>
        /// Mirror all images
        /// </summary>
        TRTCVideoMirrorType_Enable = 1,
        /// <summary>
        /// Mirror none
        /// </summary>
        TRTCVideoMirrorType_Disable = 2,
    }

    /// <summary>
    /// 1.10 Video screenshot source
    /// </summary>
    public enum TRTCSnapshotSourceType
    {
        /// <summary>
        /// Take a screenshot from the video stream
        /// </summary>
        TRTCSnapshotSourceTypeStream = 0,
        /// <summary>
        /// Take a screenshot from the rendering view
        /// </summary>
        TRTCSnapshotSourceTypeView = 1,
    };

    /// <summary>
    /// 6.4 Video quality
    /// 
    /// <para>You can use this parameter to display an icon on the UI that indicates the line quality of a user in a call.</para>
    /// </summary>
    [Serializable]
    public struct TRTCQualityInfo
    {
        /// <summary>
        /// User ID
        /// </summary>
        public String userId;
        /// <summary>
        /// Video quality
        /// </summary>
        public TRTCQuality quality;
    };

    /// <summary>
    /// 6.5 Volume
    /// 
    /// <para>You can use this parameter to display an icon on the UI that indicates whether a user is speaking.</para>
    /// </summary>
    [Serializable]
    public struct TRTCVolumeInfo
    {
        /// <summary>
        /// UTF-8-encoded user ID of the speaker
        /// </summary>
        public String userId;
        /// <summary>
        /// Volume of the speaker. Value range: 0-100              
        /// </summary>
        public UInt32 volume;
    };

    /// <summary>
    /// 6.6 Video frame data
    /// </summary>
    public struct TRTCVideoFrame
    {
        /// <summary>
        /// Format of video frames
        /// </summary>
        public TRTCVideoPixelFormat videoFormat;
        /// <summary>
        /// Buffer type of video data
        /// </summary>
        public TRTCVideoBufferType bufferType;
        /// <summary>
        /// Video data. This parameter is valid if `bufferType` is set to `LiteAVVideoBufferType_Buffer`.
        /// </summary>
        public byte[]       data;
        /// <summary>
        /// Video texture ID. This parameter is valid if `bufferType` is set to `LiteAVVideoBufferType_Texture`.
        /// </summary>
        public int textureId;
        /// <summary>
        /// Video frame size, whose value is `width × height × 3/2` in I420 format and `width × height × 4` in BGRA32 format
        /// </summary>
        public UInt32 length;
        /// <summary>
        /// Video width
        /// </summary>
        public UInt32 width;
        /// <summary>
        /// Video height
        /// </summary>
        public UInt32 height;
        /// <summary>
        /// Timestamp (ms)
        /// </summary>
        public UInt64 timestamp;
        /// <summary>
        /// Rotation
        /// </summary>
        public TRTCVideoRotation rotation;
    };

    /// <summary>
    /// 6.7 Audio frame data
    /// </summary>
    public struct TRTCAudioFrame
    {
        /// <summary>
        /// Format of audio frames
        /// </summary>
        public TRTCAudioFrameFormat audioFormat;
        /// <summary>
        /// Audio data
        /// </summary>
        public byte[] data;
        /// <summary>
        /// Audio frame size
        /// </summary>
        public UInt32 length;
        /// <summary>
        /// Sample rate
        /// </summary>
        public UInt32 sampleRate;
        /// <summary>
        /// Number of sound channels
        /// </summary>
        public UInt32 channel;
        /// <summary>
        /// Timestamp (ms)
        /// </summary>
        public UInt64 timestamp;
    };

    /// <summary>
    /// 6.8 Network speed testing result
    /// <para>
    /// Before room entry, you can use the `startSpeedTest` of `TRTCCloud` to test the network speed (do not call the API during a call).
    /// The result will be returned every 2-3 seconds, for one IP address at a time.
    /// </para>
    /// </summary>
    /// <remarks>
    /// `quality` is the network quality measured by the SDK. Lower packet loss and shorter RTT mean higher network quality.
    /// <para>- `upLostRate` is the upstream packet loss rate. For example, `0.3` indicates that for every 10 data packets sent to the server, 3 may be lost.</para>
    /// <para>- `downLostRate` is the downstream packet loss rate. For example, `0.2` indicates that for every 10 data packets received from the server, 2 may be lost.</para>
    /// <para>- `rtt` is the time it takes for data to travel from the current device to the Tencent Cloud server and back again. The normal range of RTT is 10-100 ms. The shorter, the better.</para>
    /// </remarks>
    public struct TRTCSpeedTestResult
    {
        /// <summary>
        /// Server IP address
        /// </summary>
        public String ip;
        /// <summary>
        /// Network quality measured by the SDK. Lower packet loss and shorter RTT mean higher network quality.
        /// </summary>
        public TRTCQuality quality;
        /// <summary>
        /// Upstream packet loss rate. Value range: 0-1.0. For example, `0.3` indicates that for every 10 data packets sent to the server, 3 may be lost.
        /// </summary>
        public float upLostRate;
        /// <summary>
        /// Downstream packet loss rate. Value range: 0-1.0. For example, `0.2` indicates that for every 10 data packets received from the server, 2 may be lost.
        /// </summary>
        public float downLostRate;
        /// <summary>
        /// The time (ms) it takes for data to travel from the current device to the Tencent Cloud server and back again. The normal range of RTT is 10-100 ms. The shorter, the better.
        /// </summary>
        public int rtt;
    };

    /// <summary>
    /// 5.13 CDN relayed push parameters
    /// </summary>
    public struct TRTCPublishCDNParam
    {
        /// <summary>
        /// Tencent Cloud `AppID`. In the TRTC console, select **Application Management**, find the application created, and click **Application Info** to view the `AppID` in the **Relayed Live Streaming Info** section.
        /// </summary>
        public UInt32 appId;

        /// <summary>
        /// Tencent Cloud `bizid`. In the TRTC console, select **Application Management**, find the application created, and click **Application Info** to view the `bizid` in the **Relayed Live Streaming Info** section.
        /// </summary>
        public UInt32 bizId;

        /// <summary>
        /// Relayed push URL
        /// </summary>
        public String url;

    }

    /// <summary>
    /// 5.11 Mixtranscoding configuration mode
    /// </summary>
    public enum TRTCTranscodingConfigMode
    {
        /// <summary>
        /// Invalid value
        /// </summary>
        TRTCTranscodingConfigMode_Unknown = 0,

        /// <summary>
        /// Manual mode. This mode is the most flexible, allowing you to mix streams as needed, but it is the most difficult to use.
        /// In this mode, you need to specify all the parameters in `TRTCTranscodingConfig` and listen for the `onUserVideoAvailable()` and `onUserAudioAvailable()` callbacks in `TRTCCloudDelegate`.
        /// The callbacks keep you up to date about the users who are sending audio and video in the room so that you can modify the `mixUsers` parameter accordingly. Otherwise, mixtranscoding will fail.
        /// </summary>
        TRTCTranscodingConfigMode_Manual = 1,

        /// <summary>
        /// Audio-only mode, which is suitable for audio-only scenarios such as audio call (`AudioCall`) and audio chat room (`VoiceChatRoom`)
        /// You only need to set the mode once through the `setMixTranscodingConfig()` API after room entry, and the SDK will automatically mix the audios of all mic-on users in the room into the current user's stream.
        /// In this mode, you only need to set `audioSampleRate`, `audioBitrate`, and `audioChannels` in `TRTCTranscodingConfig`, not `mixUsers`.
        /// </summary>
        TRTCTranscodingConfigMode_Template_PureAudio = 2,

        /// <summary>
        /// Preset layout mode, which determines the layout of images in advance through placeholders
        /// In this mode, you need to set the `mixUsers` parameter, but can use the following placeholders for `userId`.
        /// - `$PLACE_HOLDER_REMOTE$`: the image of a remote user. You can set multiple `userId` to this value.
        /// - `$PLACE_HOLDER_LOCAL_MAIN$`: the local camera image. You can set only one `userId` to this value.
        /// - `$PLACE_HOLDER_LOCAL_SUB$`: the local screen sharing image. You can set only one `userId` to this value.
        /// You don't need to listen for the `onUserVideoAvailable()` or `onUserAudioAvailable()` callback in `TRTCCloudDelegate`.
        /// Just call `setMixTranscodingConfig()` once after successful room entry, and the SDK will automatically replace the placeholders with actual `userId` values.
        /// </summary>
        TRTCTranscodingConfigMode_Template_PresetLayout = 3,

        /// <summary>
        /// Screen sharing mode, which is suitable for scenarios such as online education. This mode is supported only by the SDK for Windows and macOS.
        /// The SDK will first build a canvas according to the target resolution you set (through the `videoWidth` and `videoHeight` parameters).
        /// When the teacher is not sharing his or her screen, the SDK stretches the teacher’s camera image to fit the canvas. After the teacher enables screen sharing, the SDK does the same to the screen sharing image.
        /// This ensures consistency in the resolution of mixed streams and prevents screen corruption during replay and live playback (webpage players cannot play videos with changing resolution).
        /// Given that screen sharing images are the main content in education scenarios, publishing both the camera and screen sharing images would be a waste of bandwidth.
        /// We recommend that you use `setLocalVideoRenderCallback()` to draw the camera image onto the shared screen.
        /// In this mode, you don't need to set the `mixUsers` parameter in `TRTCTranscodingConfig`, and the SDK will not mix students' images so as not to interfere with the screen sharing effect.
        /// You can set both `width` and `height` in `TRTCTranscodingConfig` to `0`, and the SDK will work out an appropriate resolution based on the user’s screen size.
        /// - If the teacher's current screen width is less than or equal to 1920 px, the SDK will use the actual resolution of the teacher's current screen.
        /// - If the teacher's screen width is greater than 1920 px, the SDK will use the resolution 1920 × 1080 (16:9), 1920 × 1200 (16:10), or 1920 × 1440 (4:3).
        /// </summary>
        TRTCTranscodingConfigMode_Template_ScreenSharing = 4,
    }

    /// <summary>
    /// Coordinates and size of the image. The coordinates (absolute pixel value) of the image’s top-left corner is (0,0).
    /// </summary>
    public struct RECT
    {
        /// <summary>
        /// Left margin
        /// </summary>
        public int left;
        /// <summary>
        /// Top margin
        /// </summary>
        public int top;
        /// <summary>
        /// Right margin
        /// </summary>
        public int right;
        /// <summary>
        /// Bottom margin
        /// </summary>
        public int bottom;
    };

    /// <summary>
    /// 2.6 Type of streams to mix
    /// </summary>
    public enum TRTCMixInputType
    {

        /// <summary>
        /// Not specified. The type of streams to mix is determined by the value of `pureAudio`.
        /// </summary>
        TRTCMixInputTypeUndefined = 0,

        /// <summary>
        /// Mix audio and video
        /// </summary>
        TRTCMixInputTypeAudioVideo = 1,

        /// <summary>
        /// Mix video only
        /// </summary>
        TRTCMixInputTypePureVideo = 2,

        /// <summary>
        /// Mix audio only
        /// </summary>
        TRTCMixInputTypePureAudio = 3,
    };

    /// <summary>
    ///  Device type (desktop platform only)
    ///  This enumeration value is used to define three types of audio and video devices, namely camera, microphone and speaker, so that a set of device management interface can operate three different types of devices.
    /// </summary>
    public enum TXMediaDeviceType
    {
        /// <summary>
        /// undefined device type
        /// </summary>
        TXMediaDeviceTypeUnknown = -1,
        /// <summary>
        /// < microphone
        /// </summary>
        TXMediaDeviceTypeMic = 0,
        /// <summary>
        /// < speaker or earpiece
        /// </summary>
        TXMediaDeviceTypeSpeaker = 1,
        /// <summary>
        /// < camera
        /// </summary>
        TXMediaDeviceTypeCamera = 2,
    };

    /// <summary>
    /// 5.10 Position of each image in On-Cloud MixTranscoding
    /// <para>
    /// You can use `TRTCMixUser` to specify the position of the video image of each stream (`userId`).
    /// </para>
    /// </summary>
    public struct TRTCMixUser
    {
        /// <summary>
        /// **Description:** `userId` of the user whose stream is mixed
        ///</summary>
        public string userId;

        /// <summary>
        /// **Description:** `roomId` of the stream to mix. In case of cross-room stream mixing, set this parameter to the `roomId` of the to-be-mixed stream. For same-room stream mixing, set this parameter to `nullptr`.
        ///</summary>
        public string roomId;

        /// <summary>
        /// **Description:** Coordinates and size of the image. The coordinates (absolute pixel value) of the image’s top-left corner is (0,0).
        ///</summary>
        public trtc.RECT rect;

        /// <summary>
        ///**Description:** image layer (1-15), which must be unique
        ///</summary>
        public int zOrder;

        /// <summary>
        ///**Description:** whether the user has enabled audio only
        ///**Value:** default value: `NO`
        ///**Note:** This parameter has been disused. Please use `inputType` instead.
        ///</summary>
        public bool pureAudio;

        /// <summary>
        ///**Description:** whether the mixed stream is the primary stream (`TRTCVideoStreamTypeBig`) or screen sharing stream (`TRTCVideoStreamTypeSub`)
        ///</summary>
        public TRTCVideoStreamType streamType;

        /// <summary>
        /// **Description:** type of the user’s input stream. This is an upgrade of the `pureAudio` parameter.
        /// **Value:**
        ///     - Default value: `TRTCMixInputTypeUndefined`
        ///     - You can use this parameter if you haven’t specified `pureAudio`.
        ///     - If you have set `pureAudio` to `YES`, set this parameter to `TRTCMixInputTypeUndefined`.
        /// </summary>
        public TRTCMixInputType inputType;
    }

    /// <summary>
    /// 5.12 On-Cloud MixTranscoding parameters
    /// <para>The parameters determine the quality of encoded audio/video, the position of each image, etc.</para>
    /// </summary>
    public struct TRTCTranscodingConfig
    {
        /// <summary>
        /// **Description:** On-Cloud MixTranscoding configuration mode
        ///</summary>
        public TRTCTranscodingConfigMode mode;

        /// <summary>
        /// **Description:** Tencent Cloud `AppID`
        ///**Value:** In the [TRTC console](https://console.cloud.tencent.com/rav), find the application created, and click **Application Info** to view the `AppID` in the **Relayed Live Streaming Info** section.
        public UInt32 appId;

        /// <summary>
        ///**Description:** Tencent Cloud `bizid`
        ///**Value:** In the [TRTC console](https://console.cloud.tencent.com/rav), find the application created, and click **Application Info** to view the `bizid` in the **Relayed Live Streaming Info** section.
        /// </summary>
        public UInt32 bizId;

        /// <summary>
        ///**Description:** width (px) of transcoded video
        ///**Value:** recommended value: `360`. If audio-only streams are mixed, the mixing result will carry a video stream that shows a canvas background. To avoid this, set both the width and height to 0 px.
        ///</summary>
        public UInt32 videoWidth;
        /// <summary>
        /// **Description:** height (px) of transcoded video
        /// **Value:** recommended value: `640`. If audio-only streams are mixed, the mixing result will carry a video stream that shows a canvas background. To avoid this, set both the width and height to 0 px.
        ///</summary>
        public UInt32 videoHeight;

        /// <summary>
        /// **Description:** bitrate (Kbps) of transcoded video
        /// **Value:** If you set this parameter to `0`, the backend will work out a bitrate based on `videoWidth` and `videoHeight`. You can refer to the comment for the enumerated value `TRTCVideoResolution_640_480`.
        ///</summary>
        public UInt32 videoBitrate;

        /// <summary>
        /// **Description:** frame rate (fps) of transcoded video
        /// **Value:** default value: `15`. Value range: (0,30]
        ///</summary>
        public UInt32 videoFramerate;

        /// <summary>
        /// **Description:** keyframe interval (GOP) of transcoded video in seconds
        /// **Value:** default value: `2`. Value range: [1,8]
        /// </summary>
        public UInt32 videoGOP;

        /// <summary>
        /// **Description:** background color of the mixing result. The default color is black, and the value is a hex number. For example: `0x61B9F1` represents the RGB color (97,158,241).
        /// **Value:** default value: `0x000000` (black)
        ///</summary>
        public UInt32 backgroundColor;

        /// <summary>
        /// **Description:** background image of the mixing result
        ///**Value:** default value: `null`, which means that no background images are set
        ///**Note:** you need to first upload the image in **Application Management** > **Function Configuration** > **Material Management** in the [console](https://console.cloud.tencent.com/trtc).
        ///            You will get an image ID for the image uploaded, which you need to convert to a string before using it as the value of `backgroundImage`. 
        ///            For example, if the image ID is `63`, you should set `backgroundImage` to `63`. 
        ///</summary>          
        public string backgroundImage;

        /// <summary>
        /// **Description:** sample rate (Hz) of transcoded audio
        /// **Value:** Valid values: `12000`, `16000`, `22050`, `24000`, `32000`, `44100`, `48000` (default)
        ///</summary>
        public UInt32 audioSampleRate;

        /// <summary>
        /// **Description:** bitrate (Kbps) of transcoded audio
        /// **Value:** default value: `64`. Value range: [32,192]
        ///</summary>
        public UInt32 audioBitrate;

        /// <summary>
        /// **Description:** number of sound channels of transcoded audio
        /// **Value:** Valid values: `1` (default), `2`
        ///</summary>
        public UInt32 audioChannels;

        /// <summary>
        ///**Description:** position of each image
        ///</summary>
        public TRTCMixUser[] mixUsersArray;

        /// <summary>
        ///**Description:** number of elements in `mixUsersArray`
        /// </summary>
        public UInt32 mixUsersArraySize;

        /// <summary>
        /// **Description:** ID of the live stream relayed to CDN
        ///          If you do not set this parameter, the SDK will execute the default logic, that is, it will mix multiple streams in the room into the video stream of the API caller, i.e., A + B => A.
        ///          If you set this parameter, the SDK will mix multiple streams in the room into a stream whose ID you specify, i.e., A + B => C.
        /// **Value:** default value: `null`, which indicates that multiple streams in the room are mixed into the video stream of the API caller
        ///</summary>
        public string streamId;

       
    };

    /// <summary>
    /// Local audio/video statistics
    /// </summary>
    [Serializable]
    public struct TRTCLocalStatistics
    {
        /// <summary>
        /// Video width
        /// </summary>
        public UInt32 width;
        /// <summary>
        /// Video height
        /// </summary>
        public UInt32 height;
        /// <summary>
        /// Frame rate (fps)
        /// </summary>
        public UInt32 frameRate;
        /// <summary>
        /// Video send bitrate (Kbps)
        /// </summary>
        public UInt32 videoBitrate;
        /// <summary>
        /// Audio sample rate (Hz)
        /// </summary>
        public UInt32 audioSampleRate;
        /// <summary>
        /// Audio send bitrate (Kbps)
        /// </summary>
        public UInt32 audioBitrate;
        /// <summary>
        /// Stream type (big image | small image | substream image)
        /// </summary>
        public TRTCVideoStreamType streamType;
    };

    /// <summary>
    /// Audio/Video statistics of a remote user
    /// </summary>
    [Serializable]
    public struct TRTCRemoteStatistics
    {
        /// <summary>
        /// User ID of the remote user
        /// </summary>
        public String userId;
        /// <summary>
        /// Total packet loss rate (%)
        /// 
        /// <para>The lower the value, the better. `0` indicates excellent network conditions.</para>
        /// <para>Total packet loss rate is the percentage of packets lost during upstream and downstream data transfer between the user and the server.</para>
        /// <para>If `downLoss` is `0` but `finalLoss` not `0`, it indicates unrecoverable packet loss during upstream data transfer.</para>
        /// </summary>
        public UInt32 finalLoss;
        /// <summary>
        /// Video width
        /// </summary>
        public UInt32 width;
        /// <summary>
        /// Video height
        /// </summary>
        public UInt32 height;
        /// <summary>
        /// Receive frame rate (fps)
        /// </summary>
        public UInt32 frameRate;
        /// <summary>
        /// Video bitrate (Kbps)
        /// </summary>
        public UInt32 videoBitrate;
        /// <summary>
        /// Audio sample rate (Hz)
        /// </summary>
        public UInt32 audioSampleRate;
        /// <summary>
        /// Audio bitrate (Kbps)
        /// </summary>
        public UInt32 audioBitrate;
        /// <summary>
        /// Playback latency (ms)
        /// </summary>
        public UInt32 jitterBufferDelay;
        /// <summary>
        /// Stream type (big image | small image | substream image)
        /// </summary>
        public TRTCVideoStreamType streamType;
    };

    /// <summary>
    /// Statistics
    /// </summary>
    public struct TRTCStatistics
    {
        /// <summary>
        /// Upstream (client-to-sever) packet loss rate (%)
        /// <para>
        /// The lower the value, the better. `0` indicates excellent network conditions.
        /// If the value is `30`, it indicates that 30% of data packets are lost during upstream data transfer.
        /// </para>
        /// </summary>
        public UInt32 upLoss;
        /// <summary>
        /// Downstream (server-to-client) packet loss rate
        /// The lower the value, the better. `0` indicates excellent network conditions.
        /// If the value is `30`, it indicates that 30% of data packets are lost during downstream data transfer.
        /// </summary>
        public UInt32 downLoss;
        /// <summary>
        /// CPU usage (%) of the current application
        /// </summary>
        public UInt32 appCpu;
        /// <summary>
        /// CPU usage (%) of the system
        /// </summary>
        public UInt32 systemCpu;
        /// <summary>
        /// RTT (ms), which is the time it takes for data to travel from the SDK to the Tencent Cloud server and back again. The lower the value, the better.
        /// <para>Generally, an RTT shorter than 50 ms is acceptable. RTT longer than 100 ms means significant call latency.</para>
        /// <para>As upstream and downstream data transfer use the same network link, RTT is the same for the local user and remote users.</para>
        /// </summary>
        public UInt32 rtt;
        /// <summary>
        /// Total number of bytes received (including signaling and audio/video data)
        /// </summary>
        public UInt32 receivedBytes;
        /// <summary>
        /// Total number of bytes sent (including signaling and audio/video data)
        /// </summary>
        public UInt32 sentBytes;
        /// <summary>
        /// Local audio/video statistics. This parameter is an array that may contain statistics of multiple streams, including the big image, small image, and substream image.
        /// </summary>
        public TRTCLocalStatistics[] localStatisticsArray;
        /// <summary>
        /// Number of elements in `localStatisticsArray`
        /// </summary>
        public UInt32 localStatisticsArraySize;
        /// <summary>
        /// Remote audio/video statistics. This parameter is an array that may contain statistics of multiple streams, including the big image, small image, and substream image.
        /// </summary>
        public TRTCRemoteStatistics[] remoteStatisticsArray;
        /// <summary>
        /// Number of elements in `remoteStatisticsArray`
        /// </summary>
        public UInt32 remoteStatisticsArraySize;
    };

    /// <summary>
    /// Type of the screen sharing source
    /// 
    /// <para>You can call `getScreenCaptureSources()` to enumerate the shareable sources.</para>
    /// </summary>
    public enum TRTCScreenCaptureSourceType
    {
        TRTCScreenCaptureSourceTypeUnknown = -1,
        /// <summary>
        /// The entire desktop (on Windows) is shared.
        /// </summary>
        TRTCScreenCaptureSourceTypeScreen = 1,
    };

    /// <summary>
    /// Screen sharing information
    /// </summary>
    public struct TRTCScreenCaptureSourceInfo
    {
        /// <summary>
        /// Type of the screen sharing source. Unity supports only the sharing of screens currently.
        /// </summary>
        public TRTCScreenCaptureSourceType type;
        /// <summary>
        /// Screen sharing source ID. If a screen is shared, this parameter is the ID of the shared screen.
        /// </summary>
        public IntPtr sourceId;
        /// <summary>
        /// UTF-8-encoded name of the screen sharing source
        /// </summary>
        public String sourceName;
        /// <summary>
        /// Whether the main screen is shared. This parameter is available only if the type of the screen sharing source is screen (`TRTCScreenCaptureSourceTypeScreen`).
        /// </summary>
        public bool isMainScreen;
    };

    /// <summary>
    /// Information about audio and video devices (desktop platform only)
    /// The structure is used to describe the key information of an audio and video device, such as device ID, device name, etc., so that users can select the audio and video device they want to use on the user interface.
    /// </summary>
    [Serializable]
    public class ITXDeviceInfo
    {
        //{"DeviceName":"Integrated Camera","DevicePID":"\\\\?\\usb#vid_5986&pid_2115&mi_00#6&35187073&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\\global"}
        /// <summary>
        ///  device PID (UTF-8)
        /// </summary>
        public String DevicePID;
        /// <summary>
        /// device name (UTF-8)
        /// </summary>
        public String DeviceName;
    }

    /// <summary>
    /// Screen sharing properties
    /// </summary>
    public class TRTCScreenCaptureProperty
    {
        /// <summary>
        /// Whether to include the mouse cursor in the shared content. Default value: `true`
        /// </summary>
        public bool enableCaptureMouse = true;
        /// <summary>
        /// Whether to show a bright border around the shared content. Default value: `true`
        /// </summary>
        public bool enableHighLight = true;
        /// <summary>
        // Whether to enable the high performance mode (which takes effect only during screen sharing). The mode is optimized for screen sharing, but in this mode, remote users will also see a bright border around the shared content. Default value: `true`
        /// </summary>
        public bool enableHighPerformance = true;
        /// <summary>
        /// Color of the bright border in RGB format. If `0` is passed in, the default color (#8CBF26) will be used.
        /// </summary>
        public int highLightColor;
        /// <summary>
        /// Width of the bright border. If `0` is passed in, the default width (5) will be used. The maximum allowed value is `50`.
        /// </summary>
        public int highLightWidth;
    };
    /// @}
}