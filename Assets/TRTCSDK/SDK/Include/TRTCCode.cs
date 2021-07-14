namespace trtc {

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                     （一）错误码（严重）
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// <summary>
    /// 错误码（严重）
    /// </summary>
    public enum TXLiteAVError
    {
        /////////////////////////////////////////////////////////////////////////////////
        //
        //       基础错误码
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///无错误
        ///</summary>
        ERR_NULL = 0,

        /////////////////////////////////////////////////////////////////////////////////
        //
        //       进房（enterRoom）相关错误码
        //       NOTE: 通过回调函数 TRTCCloudDelegate##onEnterRoom() 和 TRTCCloudDelegate##OnError() 通知
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///进入房间失败
        ///</summary>
        ERR_ROOM_ENTER_FAIL = -3301,
        ///<summary>
        ///进房参数为空，请检查 enterRoom:appScene: 接口调用是否传入有效的 param
        ///</summary>
        ERR_ENTER_ROOM_PARAM_NULL = -3316, 
        ///<summary>
        ///进房参数 sdkAppId 错误
        ///</summary>
        ERR_SDK_APPID_INVALID = -3317,
        ///<summary>
        ///进房参数 roomId 错误
        ///</summary>
        ERR_ROOM_ID_INVALID = -3318,
        ///<summary>
        ///进房参数 userID 不正确
        ///</summary>
        ERR_USER_ID_INVALID = -3319,
        ///<summary>
        ///进房参数 userSig 不正确
        ///</summary>
        ERR_USER_SIG_INVALID = -3320, 
        ///<summary>
        ///请求进房超时，请检查网络
        ///</summary>
        ERR_ROOM_REQUEST_ENTER_ROOM_TIMEOUT = -3308,
        ///<summary>
        ///服务不可用。请检查：套餐包剩余分钟数是否大于0，腾讯云账号是否欠费
        ///</summary>
        ERR_SERVER_INFO_SERVICE_SUSPENDED = -100013,


        /////////////////////////////////////////////////////////////////////////////////
        //
        //       退房（exitRoom）相关错误码
        //       NOTE: 通过回调函数 TRTCCloudDelegate##OnError() 通知
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///请求退房超时
        ///</summary>
        ERR_ROOM_REQUEST_QUIT_ROOM_TIMEOUT = -3325,


        /////////////////////////////////////////////////////////////////////////////////
        //
        //       设备（摄像头、麦克风、扬声器）相关错误码
        //       NOTE: 通过回调函数 TRTCCloudDelegate##OnError() 通知
        //             区段：-6000 ~ -6999
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// 打开摄像头失败，例如在 Windows 或 Mac 设备，摄像头的配置程序（驱动程序）异常，禁用后重新启用设备，或者重启机器，或者更新配置程序
        /// </summary>
        ERR_CAMERA_START_FAIL = -1301,
        /// <summary>
        /// 摄像头设备未授权，通常在移动设备出现，可能是权限被用户拒绝了
        /// </summary>
        ERR_CAMERA_NOT_AUTHORIZED = -1314,
        /// <summary>
        /// 摄像头参数设置出错（参数不支持或其它）
        /// </summary>
        ERR_CAMERA_SET_PARAM_FAIL = -1315,
        /// <summary>
        /// 摄像头正在被占用中，可尝试打开其他摄像头
        /// </summary>
        ERR_CAMERA_OCCUPY = -1316,
        /// <summary>
        /// 打开麦克风失败，例如在 Windows 或 Mac 设备，麦克风的配置程序（驱动程序）异常，禁用后重新启用设备，或者重启机器，或者更新配置程序
        /// </summary>
        ERR_MIC_START_FAIL = -1302,
        /// <summary>
        /// 麦克风设备未授权，通常在移动设备出现，可能是权限被用户拒绝了
        /// </summary>
        ERR_MIC_NOT_AUTHORIZED = -1317,
        /// <summary>
        /// 麦克风设置参数失败
        /// </summary>
        ERR_MIC_SET_PARAM_FAIL = -1318,
        /// <summary>
        /// 麦克风正在被占用中，例如移动设备正在通话时，打开麦克风会失败
        /// </summary>
        ERR_MIC_OCCUPY = -1319,
        /// <summary>
        /// 停止麦克风失败
        /// </summary>
        ERR_MIC_STOP_FAIL = -1320,
        /// <summary>
        /// 打开扬声器失败，例如在 Windows 或 Mac 设备，扬声器的配置程序（驱动程序）异常，禁用后重新启用设备，或者重启机器，或者更新配置程序
        /// </summary>
        ERR_SPEAKER_START_FAIL = -1321,
        /// <summary>
        /// 扬声器设置参数失败
        /// </summary>
        ERR_SPEAKER_SET_PARAM_FAIL = -1322,
        /// <summary>
        /// 停止扬声器失败
        /// </summary>
        ERR_SPEAKER_STOP_FAIL = -1323,

        /////////////////////////////////////////////////////////////////////////////////
        //
        //       编解码相关错误码
        //       NOTE: 通过回调函数 TRTCCloudDelegate##OnError() 通知
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///视频帧编码失败，例如 iOS 设备切换到其他应用时，硬编码器可能被系统释放，再切换回来时，硬编码器重启前，可能会抛出
        ///</summary>
        ERR_VIDEO_ENCODE_FAIL = -1303,
        ///<summary>
        ///不支持的视频分辨率
        ///</summary>
        ERR_UNSUPPORTED_RESOLUTION = -1305,
        ///<summary>
        ///音频帧编码失败，例如传入自定义音频数据，SDK 无法处理
        ///</summary>
        ERR_AUDIO_ENCODE_FAIL = -1304,
        ///<summary>
        ///不支持的音频采样率
        ///</summary>
        ERR_UNSUPPORTED_SAMPLERATE = -1306,

        /////////////////////////////////////////////////////////////////////////////////
        //
        //       自定义采集相关错误码
        //       NOTE: 通过回调函数 TRTCCloudDelegate##OnError() 通知
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///设置的 pixel format 不支持
        ///</summary>
        ERR_PIXEL_FORMAT_UNSUPPORTED = -1327,
        ///<summary>
        ///设置的 buffer type 不支持
        ///</summary>
        ERR_BUFFER_TYPE_UNSUPPORTED = -1328,

    };

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                     （二）错误码（警告）
    //
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 错误码（警告）
    /// </summary>
    public enum TXLiteAVWarning
    {
        /// <summary>
        /// 硬编码启动失败，采用软编码
        /// </summary>
        WARNING_HW_ENCODER_START_FAIL = 1103,
        /// <summary>
        /// 视频编码器从软编码自动切换到硬编码，一般是由于 CPU 使用率过高触发的
        /// </summary>
        WARNING_VIDEO_ENCODER_SW_TO_HW = 1107,
        /// <summary>
        /// 摄像头采集帧率不足，部分自带美颜算法的 Android 手机上会出现
        /// </summary>
        WARNING_INSUFFICIENT_CAPTURE_FPS = 1108,
        /// <summary>
        /// 软编码启动失败
        /// </summary>
        WARNING_SW_ENCODER_START_FAIL = 1109,
        /// <summary>
        /// 摄像头采集分辨率被降低，以满足当前帧率和性能最优解。
        /// </summary>
        WARNING_REDUCE_CAPTURE_RESOLUTION = 1110,
        /// <summary>
        /// 没有检测到可用的摄像头设备
        /// </summary>
        WARNING_CAMERA_DEVICE_EMPTY = 1111,
        /// <summary>
        /// 用户未授权当前应用使用摄像头
        /// </summary>
        WARNING_CAMERA_NOT_AUTHORIZED = 1112,
        /// <summary>
        /// 没有检测到可用的麦克风设备
        /// </summary>
        WARNING_MICROPHONE_DEVICE_EMPTY = 1201,
        /// <summary>
        /// 没有检测到可用的扬声器设备
        /// </summary>
        WARNING_SPEAKER_DEVICE_EMPTY = 1202,
        /// <summary>
        /// 用户未授权当前应用使用麦克风
        /// </summary>
        WARNING_MICROPHONE_NOT_AUTHORIZED = 1203,
        /// <summary>
        /// 音频采集设备不可用（例如被占用）
        /// </summary>
        WARNING_MICROPHONE_DEVICE_ABNORMAL = 1204,
        /// <summary>
        /// 音频播放设备不可用（例如被占用）
        /// </summary>
        WARNING_SPEAKER_DEVICE_ABNORMAL = 1205,

        /// <summary>
        /// 当前视频帧解码失败
        /// </summary>
        WARNING_VIDEO_FRAME_DECODE_FAIL = 2101,
        /// <summary>
        /// 当前音频帧解码失败
        /// </summary>
        WARNING_AUDIO_FRAME_DECODE_FAIL = 2102,
        /// <summary>
        /// 当前视频播放出现卡顿（用户直观感受）
        /// </summary>
        WARNING_VIDEO_PLAY_LAG = 2105,
        /// <summary>
        /// 硬解启动失败，采用软解码
        /// </summary>
        WARNING_HW_DECODER_START_FAIL = 2106,
        /// <summary>
        /// 当前流硬解第一个 I 帧失败，SDK 自动切软解
        /// </summary>
        WARNING_VIDEO_DECODER_HW_TO_SW = 2108,
        /// <summary>
        /// 软解码器启动失败
        /// </summary>
        WARNING_SW_DECODER_START_FAIL = 2109,
        /// <summary>
        /// 视频渲染失败
        /// </summary>
        WARNING_VIDEO_RENDER_FAIL = 2110,
        ///<summary>
        ///视频采集已开始
        ///</summary>
        WARNING_START_CAPTURE_IGNORED = 4000,
        ///<summary>
        ///音频录制写入文件失败
        ///</summary>
        WARNING_AUDIO_RECORDING_WRITE_FAIL = 7001,
        ///<summary>
        ///网络断开连接
        ///</summary>
        WARNING_ROOM_DISCONNECT = 5101,
        ///<summary>
        ///当前是观众角色，忽略上行音视频数据
        ///</summary>
        WARNING_IGNORE_UPSTREAM_FOR_AUDIENCE = 6001,
    };
}
