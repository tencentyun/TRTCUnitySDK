namespace trtc {

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                     (1) Error Codes (Critical)
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// <summary>
    /// Error codes (critical)
    /// </summary>
    public enum TXLiteAVError
    {
        /////////////////////////////////////////////////////////////////////////////////
        //
        //       Basic error codes
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///No error
        ///</summary>
        ERR_NULL = 0,

        /////////////////////////////////////////////////////////////////////////////////
        //
        //       Error codes for room entry (`enterRoom`)
        //       Note: The errors are notified through the `TRTCCloudDelegate##onEnterRoom()` and `TRTCCloudDelegate##OnError()` callbacks.
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///Failed to enter the room.
        ///</summary>
        ERR_ROOM_ENTER_FAIL = -3301,
        ///<summary>
        ///Empty room entry parameters. Please check whether valid parameters were passed in to the `enterRoom:appScene:` API.
        ///</summary>
        ERR_ENTER_ROOM_PARAM_NULL = -3316, 
        ///<summary>
        ///Invalid `sdkAppId`.
        ///</summary>
        ERR_SDK_APPID_INVALID = -3317,
        ///<summary>
        ///Invalid `roomId`.
        ///</summary>
        ERR_ROOM_ID_INVALID = -3318,
        ///<summary>
        ///Invalid `userID`.
        ///</summary>
        ERR_USER_ID_INVALID = -3319,
        ///<summary>
        ///Invalid `userSig`.
        ///</summary>
        ERR_USER_SIG_INVALID = -3320, 
        ///<summary>
        ///The room entry request timed out. Please check your network.
        ///</summary>
        ERR_ROOM_REQUEST_ENTER_ROOM_TIMEOUT = -3308,
        ///<summary>
        ///The service is unavailable. Check if you have used up your package or whether your Tencent Cloud account has overdue payment.
        ///</summary>
        ERR_SERVER_INFO_SERVICE_SUSPENDED = -100013,


        /////////////////////////////////////////////////////////////////////////////////
        //
        //       Error codes for room exit (`exitRoom`)
        //       Note: The errors are notified through the `TRTCCloudDelegate##OnError()` callback.
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        /// The room exit request timed out.
        ///</summary>
        ERR_ROOM_REQUEST_QUIT_ROOM_TIMEOUT = -3325,


        /////////////////////////////////////////////////////////////////////////////////
        //
        //        Error codes for devices (camera, mic, and speaker)
        //       Note: The errors are notified through the `TRTCCloudDelegate##OnError()` callback.
        //             Range: -6000 to -6999
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// Failed to turn the camera on. This occurs when, for example, there is a problem with the camera configuration program (driver) on Windows or macOS. Turn the camera off and on again, restart the device, or update the configuration program.
        /// </summary>
        ERR_CAMERA_START_FAIL = -1301,
        /// <summary>
        /// No access to the camera. This usually occurs on mobile devices and may be because the user denied the access.
        /// </summary>
        ERR_CAMERA_NOT_AUTHORIZED = -1314,
        /// <summary>
        /// Incorrect camera parameter settings (unsupported values or others).
        /// </summary>
        ERR_CAMERA_SET_PARAM_FAIL = -1315,
        /// <summary>
        /// The camera is being used. Try another camera.
        /// </summary>
        ERR_CAMERA_OCCUPY = -1316,
        /// <summary>
        /// Failed to turn the mic on. This occurs when, for example, there is a problem with the mic configuration program (driver) on Windows or macOS. Turn the mic off and on again, restart the device, or update the configuration program.
        /// </summary>
        ERR_MIC_START_FAIL = -1302,
        /// <summary>
        /// No access to the mic. This usually occurs on mobile devices and may be because the user denied the access.
        /// </summary>
        ERR_MIC_NOT_AUTHORIZED = -1317,
        /// <summary>
        /// Failed to set mic parameters.
        /// </summary>
        ERR_MIC_SET_PARAM_FAIL = -1318,
        /// <summary>
        /// The mic is being used. The mic cannot be turned on when, for example, the user is having a call on the mobile device.
        /// </summary>
        ERR_MIC_OCCUPY = -1319,
        /// <summary>
        /// Failed to turn the mic off.
        /// </summary>
        ERR_MIC_STOP_FAIL = -1320,
        /// <summary>
        /// Failed to turn the speaker on. This occurs when, for example, there is a problem with the speaker configuration program (driver) on Windows or macOS. Turn the speaker off and on again, restart the device, or update the configuration program.
        /// </summary>
        ERR_SPEAKER_START_FAIL = -1321,
        /// <summary>
        /// Failed to set speaker parameters.
        /// </summary>
        ERR_SPEAKER_SET_PARAM_FAIL = -1322,
        /// <summary>
        /// Failed to turn the speaker off.
        /// </summary>
        ERR_SPEAKER_STOP_FAIL = -1323,

        /////////////////////////////////////////////////////////////////////////////////
        //
        //       Error codes for encoding and decoding
        //       Note: The errors are notified through the `TRTCCloudDelegate##OnError()` callback.
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        /// Failed to encode video frames. This occurs when, for example, a user on iOS switches to another app, which may cause the system to release the hardware encoder. When the user switches back, this error may be thrown before the hardware encoder is restarted.
        ///</summary>
        ERR_VIDEO_ENCODE_FAIL = -1303,
        ///<summary>
        ///Unsupported video resolution.
        ///</summary>
        ERR_UNSUPPORTED_RESOLUTION = -1305,
        ///<summary>
        ///Failed to encode audio frames. This occurs when, for example, the SDK could not process the custom audio data passed in.
        ///</summary>
        ERR_AUDIO_ENCODE_FAIL = -1304,
        ///<summary>
        ///Unsupported audio sample rate.
        ///</summary>
        ERR_UNSUPPORTED_SAMPLERATE = -1306,

        /////////////////////////////////////////////////////////////////////////////////
        //
        //       Error codes for custom capturing
        //       Note: The errors are notified through the `TRTCCloudDelegate##OnError()` callback.
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///Unsupported pixel format.
        ///</summary>
        ERR_PIXEL_FORMAT_UNSUPPORTED = -1327,
        ///<summary>
        ///Unsupported buffer type.
        ///</summary>
        ERR_BUFFER_TYPE_UNSUPPORTED = -1328,

    };

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                     (2) Error Codes (Warning)
    //
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// Error codes (warning)
    /// </summary>
    public enum TXLiteAVWarning
    {
        /// <summary>
        /// Failed to start the hardware encoder. The software encoder is used instead.
        /// </summary>
        WARNING_HW_ENCODER_START_FAIL = 1103,
        /// <summary>
        /// The video encoder is automatically switched from software encoder to hardware encoder. This is usually triggered by high CPU usage.
        /// </summary>
        WARNING_VIDEO_ENCODER_SW_TO_HW = 1107,
        /// <summary>
        /// The capturing frame rate of the camera is insufficient. This error occurs on some Android phones with built-in beauty filters.
        /// </summary>
        WARNING_INSUFFICIENT_CAPTURE_FPS = 1108,
        /// <summary>
        /// Failed to start the software encoder.
        /// </summary>
        WARNING_SW_ENCODER_START_FAIL = 1109,
        /// <summary>
        /// The capturing frame rate of the camera was reduced for balance between frame rate and performance.
        /// </summary>
        WARNING_REDUCE_CAPTURE_RESOLUTION = 1110,
        /// <summary>
        /// No available camera detected.
        /// </summary>
        WARNING_CAMERA_DEVICE_EMPTY = 1111,
        /// <summary>
        /// The user didn’t grant the application camera access.
        /// </summary>
        WARNING_CAMERA_NOT_AUTHORIZED = 1112,
        /// <summary>
        /// No available mic detected.
        /// </summary>
        WARNING_MICROPHONE_DEVICE_EMPTY = 1201,
        /// <summary>
        /// No available speaker detected.
        /// </summary>
        WARNING_SPEAKER_DEVICE_EMPTY = 1202,
        /// <summary>
        /// The user didn’t grant the application mic access.
        /// </summary>
        WARNING_MICROPHONE_NOT_AUTHORIZED = 1203,
        /// <summary>
        /// The audio capturing device is unavailable. This error occurs if, for example, the device is occupied.
        /// </summary>
        WARNING_MICROPHONE_DEVICE_ABNORMAL = 1204,
        /// <summary>
        /// The audio playback device is unavailable. This error occurs if, for example, the device is occupied.
        /// </summary>
        WARNING_SPEAKER_DEVICE_ABNORMAL = 1205,

        /// <summary>
        /// Failed to decode the current video frame.
        /// </summary>
        WARNING_VIDEO_FRAME_DECODE_FAIL = 2101,
        /// <summary>
        /// Failed to decode the current audio frame.
        /// </summary>
        WARNING_AUDIO_FRAME_DECODE_FAIL = 2102,
        /// <summary>
        /// Video playback stutter (user experience).
        /// </summary>
        WARNING_VIDEO_PLAY_LAG = 2105,
        /// <summary>
        /// Failed to start the hardware decoder. The software decoder is used instead.
        /// </summary>
        WARNING_HW_DECODER_START_FAIL = 2106,
        /// <summary>
        /// The hardware decoder failed to decode the first I-frame of the current stream. The SDK automatically switched to the software decoder.
        /// </summary>
        WARNING_VIDEO_DECODER_HW_TO_SW = 2108,
        /// <summary>
        /// Failed to start the software decoder.
        /// </summary>
        WARNING_SW_DECODER_START_FAIL = 2109,
        /// <summary>
        /// Failed to render the video.
        /// </summary>
        WARNING_VIDEO_RENDER_FAIL = 2110,
        ///<summary>
        /// Video capturing started.
        ///</summary>
        WARNING_START_CAPTURE_IGNORED = 4000,
        ///<summary>
        /// Failed to write recorded audio into the file.
        ///</summary>
        WARNING_AUDIO_RECORDING_WRITE_FAIL = 7001,
        ///<summary>
        /// The network was disconnected.
        ///</summary>
        WARNING_ROOM_DISCONNECT = 5101,
        ///<summary>
        /// The user is in the role of “audience”. Upstream audio and video are ignored.
        ///</summary>
        WARNING_IGNORE_UPSTREAM_FOR_AUDIENCE = 6001,
    };
}
