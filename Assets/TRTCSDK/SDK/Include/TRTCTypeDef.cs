using System;

namespace trtc
{
    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    【（一）视频相关枚举值定义】
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 1.1 视频分辨率
    /// </summary>
    /// <remarks>
    /// 此处仅定义横屏分辨率，如需使用竖屏分辨率（例如360 × 640），需要同时指定 TRTCVideoResolutionMode 为 Portrait。
    /// </remarks>
    public enum TRTCVideoResolution
    {
        // 宽高比1:1
        /// <summary>
        /// 建议码率80kbps
        /// </summary>
        TRTCVideoResolution_120_120 = 1,
        /// <summary>
        /// 建议码率100kbps
        /// </summary>
        TRTCVideoResolution_160_160 = 3,
        /// <summary>
        /// 建议码率200kbps
        /// </summary>
        TRTCVideoResolution_270_270 = 5,
        /// <summary>
        /// 建议码率350kbps
        /// </summary>
        TRTCVideoResolution_480_480 = 7,

        // 宽高比4:3
        /// <summary>
        /// 建议码率100kbps
        /// </summary>
        TRTCVideoResolution_160_120 = 50,
        /// <summary>
        /// 建议码率150kbps
        /// </summary>
        TRTCVideoResolution_240_180 = 52,
        /// <summary>
        /// 建议码率200kbps
        /// </summary>
        TRTCVideoResolution_280_210 = 54,
        /// <summary>
        /// 建议码率250kbps
        /// </summary>
        TRTCVideoResolution_320_240 = 56,
        /// <summary>
        /// 建议码率300kbps
        /// </summary>
        TRTCVideoResolution_400_300 = 58,
        /// <summary>
        /// 建议码率400kbps
        /// </summary>
        TRTCVideoResolution_480_360 = 60,
        /// <summary>
        /// 建议码率600kbps
        /// </summary>
        TRTCVideoResolution_640_480 = 62,
        /// <summary>
        /// 建议码率1000kbps
        /// </summary>
        TRTCVideoResolution_960_720 = 64,


        // 宽高比16:9
        /// <summary>
        /// 建议码率150kbps
        /// </summary>
        TRTCVideoResolution_160_90 = 100,
        /// <summary>
        /// 建议码率200kbps
        /// </summary>
        TRTCVideoResolution_256_144 = 102,
        /// <summary>
        /// 建议码率250kbps
        /// </summary>
        TRTCVideoResolution_320_180 = 104,
        /// <summary>
        /// 建议码率350kbps
        /// </summary>
        TRTCVideoResolution_480_270 = 106,
        /// <summary>
        /// 建议码率550kbps
        /// </summary>
        TRTCVideoResolution_640_360 = 108,
        /// <summary>
        /// 建议码率850kbps
        /// </summary>
        TRTCVideoResolution_960_540 = 110,
        /// <summary>
        /// 摄像头采集 - 建议码率1200kbps
        /// <para>屏幕分享 - 建议码率 低清：1000kbps 高清：1600kbps</para>
        /// </summary>
        TRTCVideoResolution_1280_720 = 112,
        /// <summary>
        /// 屏幕分享 - 建议码率2000kbps
        /// </summary>
        TRTCVideoResolution_1920_1080 = 114,
    };

    /// <summary>
    /// 1.2 视频分辨率模式
    /// 
    /// <para>- 横屏分辨率：TRTCVideoResolution_640_360 + TRTCVideoResolutionModeLandscape = 640 × 360</para>
    /// <para>- 竖屏分辨率：TRTCVideoResolution_640_360 + TRTCVideoResolutionModePortrait  = 360 × 640</para>
    /// </summary>
    public enum TRTCVideoResolutionMode
    {
        /// <summary>
        /// 横屏分辨率
        /// </summary>
        TRTCVideoResolutionModeLandscape = 0,
        /// <summary>
        /// 竖屏分辨率
        /// </summary>
        TRTCVideoResolutionModePortrait = 1,
    };

    /// <summary>
    /// 1.3 视频流类型
    /// 
    /// <para>TRTC 内部有三种不同的音视频流，分别为：</para>
    /// <para>-主画面：最常用的一条线路，一般用来传输摄像头的视频数据。</para>
    /// <para>-小画面：跟主画面的内容相同，但是分辨率和码率更低。</para>
    /// </summary>
    /// <remarks>
    /// - 如果主播的上行网络和性能比较好，则可以同时送出大小两路画面。
    /// <para>- SDK 不支持单独开启小画面，小画面必须依附于主画面而存在。</para>
    /// </remarks>
    public enum TRTCVideoStreamType
    {
        /// <summary>
        /// 主画面视频流
        /// </summary>
        TRTCVideoStreamTypeBig = 0,
        /// <summary>
        /// 小画面视频流
        /// </summary>
        TRTCVideoStreamTypeSmall = 1,
        /// <summary>
        /// 辅流（屏幕分享）
        /// </summary>
        TRTCVideoStreamTypeSub = 2,
    };

    /// <summary>
    /// 1.4 画质级别
    ///
    /// <para>TRTC SDK 对画质定义了六种不同的级别，Excellent 表示最好，Down 表示不可用。</para>
    /// </summary>
    public enum TRTCQuality
    {
        /// <summary>
        /// 未定义
        /// </summary>
        TRTCQuality_Unknown = 0,
        /// <summary>
        /// 最好
        /// </summary>
        TRTCQuality_Excellent = 1,
        /// <summary>
        /// 好
        /// </summary>
        TRTCQuality_Good = 2,
        /// <summary>
        /// 一般
        /// </summary>
        TRTCQuality_Poor = 3,
        /// <summary>
        /// 差
        /// </summary>
        TRTCQuality_Bad = 4,
        /// <summary>
        /// 很差
        /// </summary>
        TRTCQuality_Vbad = 5,
        /// <summary>
        /// 不可用
        /// </summary>
        TRTCQuality_Down = 6,
    };

    /// <summary>
    /// 1.5 视频画面填充模式
    ///
    /// <para>如果画面的显示分辨率不等于画面的原始分辨率，就需要您设置画面的填充模式:</para>
    /// <para>- TRTCVideoFillMode_Fill，超出显示视窗的视频部分将被裁剪，画面显示可能不完整。</para>
    /// <para>- TRTCVideoFillMode_Fit，图像长边填满屏幕，短边区域会被填充黑色，但画面的内容肯定是完整的。</para>
    /// </summary>
    public enum TRTCVideoFillMode
    {
        /// <summary>
        /// 图像铺满屏幕，超出显示视窗的视频部分将被裁剪
        /// </summary>
        TRTCVideoFillMode_Fill = 0,
        /// <summary>
        /// 图像长边填满屏幕，短边区域会被填充黑色
        /// </summary>
        TRTCVideoFillMode_Fit = 1,
    };

    /// <summary>
    /// 1.6 视频画面旋转方向
    ///
    /// <para>TRTC SDK 提供了对本地和远程画面的旋转角度设置 API，下列的旋转角度都是指顺时针方向的。</para>
    /// </summary>
    public enum TRTCVideoRotation
    {
        /// <summary>
        /// 顺时针旋转0度
        /// </summary>
        TRTCVideoRotation0 = 0,
        /// <summary>
        /// 顺时针旋转90度
        /// </summary>
        TRTCVideoRotation90 = 1,
        /// <summary>
        /// 顺时针旋转180度
        /// </summary>
        TRTCVideoRotation180 = 2,
        /// <summary>
        /// 顺时针旋转270度
        /// </summary>
        TRTCVideoRotation270 = 3,
    };

    /// <summary>
    /// 1.6 美颜（磨皮）算法
    /// </summary>
    /// <remarks>
    /// TRTC SDK 内置多种不同的磨皮算法，您可以选择最适合您产品定位的方案。
    /// </remarks>
    public enum TRTCBeautyStyle
    {
        /// <summary>
        /// 光滑，适用于美女秀场，效果比较明显。
        /// </summary>
        TRTCBeautyStyleSmooth = 0,

        /// <summary>
        /// 自然，磨皮算法更多地保留了面部细节，主观感受上会更加自然。
        /// </summary>
        TRTCBeautyStyleNature = 1,
    };

    /// <summary>
    /// 4.4 水印图片的源类型
    /// </summary>
    public enum TRTCWaterMarkSrcType
    {
        /// <summary>
        /// 图片文件路径，支持 BMP、GIF、JPEG、PNG、TIFF、Exif、WMF 和 EMF 文件格式
        /// </summary>
        TRTCWaterMarkSrcTypeFile = 0,
        /// <summary>
        /// BGRA32格式内存块
        /// </summary>
        TRTCWaterMarkSrcTypeBGRA32 = 1,
        /// <summary>
        /// RGBA32格式内存块
        /// </summary>
        TRTCWaterMarkSrcTypeRGBA32 = 2,
    };

    /// <summary>
    /// 1.8 视频像素格式
    ///
    /// <para>TRTC SDK 提供针对视频的自定义采集和自定义渲染功能，在自定义采集功能中，您可以用下列枚举值描述您采集的视频像素格式。</para>
    /// <para>在自定义渲染功能中，您可以指定您期望 SDK 回调的视频像素格式。</para>
    /// </summary>
    public enum TRTCVideoPixelFormat
    {
        TRTCVideoPixelFormat_Unknown = 0,
        TRTCVideoPixelFormat_I420 = 1,        /// <summary>I420</summary>
        TRTCVideoPixelFormat_Texture_2D = 2,  /// <summary>OpenGL 2D 纹理</summary>
        TRTCVideoPixelFormat_BGRA32 = 3,      /// <summary>BGRA32</summary>
        TRTCVideoPixelFormat_RGBA32 = 5,
    };

    /// <summary>
    /// 1.9 视频数据包装格式
    /// </summary>
    public enum TRTCVideoBufferType
    {
        TRTCVideoBufferType_Unknown = 0,
        /// <summary>
        /// 二进制Buffer类型
        /// </summary>
        TRTCVideoBufferType_Buffer = 1,
        /// <summary>
        /// 纹理类型
        /// </summary>
        TRTCVideoBufferType_Texture = 3,
    };

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    【（二）网络相关枚举值定义】
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 2.1 应用场景
    /// 
    /// <para>TRTC 可用于视频会议和在线直播等多种应用场景，针对不同的应用场景，TRTC SDK 的内部会进行不同的优化配置：</para>
    /// <para>- TRTCAppSceneVideoCall    ：视频通话场景，适合[1对1视频通话]、[300人视频会议]、[在线问诊]、[视频聊天]、[远程面试]等。</para>
    /// <para>- TRTCAppSceneLIVE         ：视频互动直播，适合[视频低延时直播]、[十万人互动课堂]、[视频直播 PK]、[视频相亲房]、[互动课堂]、[远程培训]、[超大型会议]等。</para>
    /// <para>- TRTCAppSceneAudioCall    ：语音通话场景，适合[1对1语音通话]、[300人语音会议]、[语音聊天]、[语音会议]、[在线狼人杀]等。</para>
    /// <para>- TRTCAppSceneVoiceChatRoom：语音互动直播，适合：[语音低延时直播]、[语音直播连麦]、[语聊房]、[K 歌房]、[FM 电台]等。</para>
    /// </summary>
    public enum TRTCAppScene
    {
        /// <summary>
        /// 视频通话场景，支持720P、1080P高清画质，单个房间最多支持300人同时在线，最高支持50人同时发言。
        /// <para>适合：[1对1视频通话]、[300人视频会议]、[在线问诊]、[视频聊天]、[远程面试]等。</para>
        /// </summary>
        TRTCAppSceneVideoCall = 0,
        /// <summary>
        /// 视频互动直播，支持平滑上下麦，切换过程无需等待，主播延时小于300ms；支持十万级别观众同时播放，播放延时低至1000ms。
        /// <para>适合：[视频低延时直播]、[十万人互动课堂]、[视频直播 PK]、[视频相亲房]、[互动课堂]、[远程培训]、[超大型会议]等。<para>
        /// <para>注意：此场景下，您必须通过 TRTCParams 中的 role 字段指定当前用户的角色。<para>
        /// </summary>
        TRTCAppSceneLIVE = 1,
        /// <summary>
        /// 语音通话场景，支持 48kHz，支持双声道。单个房间最多支持300人同时在线，最高支持50人同时发言。
        /// <para>适合：[1对1语音通话]、[300人语音会议]、[语音聊天]、[语音会议]、[在线狼人杀]等。</para>
        /// </summary>
        TRTCAppSceneAudioCall = 2,
        /// <summary>
        /// 语音互动直播，支持平滑上下麦，切换过程无需等待，主播延时小于300ms；支持十万级别观众同时播放，播放延时低至1000ms。
        /// <para>适合：[语音低延时直播]、[语音直播连麦]、[语聊房]、[K 歌房]、[FM 电台]等。</para>
        /// <para>注意：此场景下，您必须通过 TRTCParams 中的 role 字段指定当前用户的角色。</para>
        /// </summary>
        TRTCAppSceneVoiceChatRoom = 3,
    };

    /// <summary>
    /// 2.2 角色，仅适用于直播场景（TRTCAppSceneLIVE 和 TRTCAppSceneVoiceChatRoom）
    ///
    /// <para>在直播场景中，多数用户仅为观众，个别用户是主播，这种角色区分有利于 TRTC 进行更好的定向优化。</para>
    ///
    /// <para>- Anchor：主播，可以上行视频和音频，一个房间里最多支持50个主播同时上行音视频。</para>
    /// <para>- Audience：观众，只能观看，不能上行视频和音频，一个房间里的观众人数没有上限。</para>
    /// </summary>
    public enum TRTCRoleType
    {
        /// <summary>
        /// 主播
        /// </summary>
        TRTCRoleAnchor = 20,
        /// <summary>
        /// 观众
        /// </summary>
        TRTCRoleAudience = 21,
    };

    /// <summary>
    /// 2.3 流控模式
    ///
    /// <para>TRTC SDK 内部需要时刻根据网络情况调整内部的编解码器和网络模块，以便能够对网络的变化做出反应。</para>
    /// <para>为了支持快速算法升级，SDK 内部设置了两种不同的流控模式：</para>
    /// <para>- ModeServer： 云端控制，默认模式，推荐选择。</para>
    /// <para>- ModeClient： 本地控制，用于 SDK 开发内部调试，客户请勿使用。</para>
    /// </summary>
    /// <remarks>
    /// 推荐您使用云端控制，这样每当我们升级 Qos 算法时，您无需升级 SDK 即可体验更好的效果。
    /// </remarks>
    public enum TRTCQosControlMode
    {
        /// <summary>
        /// 客户端控制（用于 SDK 开发内部调试，客户请勿使用）
        /// </summary>
        TRTCQosControlModeClient,
        /// <summary>
        /// 云端控制 （默认）
        /// </summary>
        TRTCQosControlModeServer,
    };

    /// <summary>
    /// 2.4 画质偏好
    ///
    /// <para>指当 TRTC SDK 在遇到弱网络环境时，您期望“保清晰”或“保流畅”：</para>
    /// <para>- Smooth：弱网下保流畅。即在遭遇弱网环境时首先确保声音的流畅和优先发送，画面会变得模糊且会有较多马赛克，但可以保持流畅不卡顿。</para>
    /// <para>- Clear：弱网下保清晰。即在遭遇弱网环境时，画面会尽可能保持清晰，但可能会更容易出现卡顿。</para>
    /// </summary>
    public enum TRTCVideoQosPreference
    {
        /// <summary>
        /// 弱网下保流畅
        /// </summary>
        TRTCVideoQosPreferenceSmooth = 1,
        /// <summary>
        /// 弱网下保清晰
        /// </summary>
        TRTCVideoQosPreferenceClear = 2,
    };


    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    【（三）声音相关枚举值定义】
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// <summary>
    /// 3.1 音频帧的格式
    /// </summary>
    public enum TRTCAudioFrameFormat
    {
        TRTCAudioFrameFormatNone = 0,
        /// <summary>
        /// PCM，每个采样点占16bit数据量。
        /// </summary>
        TRTCAudioFrameFormatPCM,
    };

    /// <summary>
    /// 3.2 声音音质
    /// </summary>
    /// <remarks>
    /// 音频音质用来衡量声音的保真程度，TRTCAudioQualitySpeech 适用于通话场景，TRTCAudioQualityMusic 适用于高音质音乐场景。
    /// </remarks>
    public enum TRTCAudioQuality
    {
        ///<summary>
        /// 流畅音质：采样率：16k；单声道；音频裸码率：16kbps；适合语音通话为主的场景，比如在线会议，语音通话。
        ///</summary>
        TRTCAudioQualitySpeech = 1,
        ///<summary>
        /// 默认音质：采样率：48k；单声道；音频裸码率：50kbps；SDK 默认的音频质量，如无特殊需求推荐选择之。
        ///</summary>
        TRTCAudioQualityDefault = 2,
        ///<summary>
        /// 高音质：采样率：48k；双声道 + 全频带；音频裸码率：128kbps；适合需要高保真传输音乐的场景，比如K歌、音乐直播等。
        ///</summary>
        TRTCAudioQualityMusic = 3,
    };

    /// <summary>
    /// 变声类型
    /// </summary>
    public enum TXVoiceChangeType
    {
        /// <summary>
        /// 关闭变声
        /// </summary>
        TXVoiceChangeType_0 = 0,
        /// <summary>
        /// 熊孩子
        /// </summary>
        TXVoiceChangeType_1 = 1,
        /// <summary>
        /// 萝莉
        /// </summary>
        TXVoiceChangeType_2 = 2,
        /// <summary>
        /// 大叔
        /// </summary>
        TXVoiceChangeType_3 = 3,
        /// <summary>
        /// 重金属
        /// </summary>
        TXVoiceChangeType_4 = 4,
        /// <summary>
        /// 感冒
        /// </summary>
        TXVoiceChangeType_5 = 5,
        /// <summary>
        /// 外国人
        /// </summary>
        TXVoiceChangeType_6 = 6,
        /// <summary>
        /// 困兽
        /// </summary>
        TXVoiceChangeType_7 = 7,
        /// <summary>
        /// 死肥仔
        /// </summary>
        TXVoiceChangeType_8 = 8,
        /// <summary>
        /// 强电流
        /// </summary>
        TXVoiceChangeType_9 = 9,
        /// <summary>
        /// 重机械
        /// </summary>
        TXVoiceChangeType_10 = 10,
        /// <summary>
        /// 空灵
        /// </summary>
        TXVoiceChangeType_11 = 11,
    };
    /// <summary>
    /// 混响类型
    /// </summary>
    public enum TXVoiceReverbType
    {
        /// <summary>关闭混响</summary>
        TXVoiceReverbType_0 = 0,
        /// <summary>KTV</summary>
        TXVoiceReverbType_1 = 1,
        /// <summary>小房间</summary>
        TXVoiceReverbType_2 = 2,
        /// <summary>大会堂</summary>
        TXVoiceReverbType_3 = 3,
        /// <summary>低沉</summary>
        TXVoiceReverbType_4 = 4,
        /// <summary>洪亮</summary>
        TXVoiceReverbType_5 = 5,
        /// <summary>金属声</summary>
        TXVoiceReverbType_6 = 6,
        /// <summary>磁性</summary>
        TXVoiceReverbType_7 = 7,
    };

    /// <summary>
    /// 切换房间配置
    /// </summary>
    public struct TRTCSwitchRoomConfig
    {
        /// <summary>
        /// 【字段含义】房间号码（必填），在同一个房间内的用户可以看到彼此并进行视频通话。
        /// 【推荐取值】您可以自定义设置该参数值，但不可重复。如果您的用户帐号 ID （userId）为数字类型，可直接使用创建者的用户 ID 作为 roomId。
        /// </summary>
        public int roomId;

        /// <summary>
        ///  字段含义】字符串房间号码，在同一个房间里的用户（userId）可以彼此看到对方并进行视频通话。
        /// 【推荐取值】限制长度为64字节。以下为支持的字符集范围（共 89 个字符）。
        /// 【特殊说明】roomId 与 strRoomId 必填一个，若您选用 strRoomId，则 roomId 需要填写为0。若两者都填，将优先选用 roomId。
        /// </summary>
        public string strRoomId;

        /// <summary>
        /// 【字段含义】用户签名（必填），当前 userId 对应的验证签名，相当于登录密码。
        ///【推荐取值】具体计算方法请参见 如何计算UserSig。
        /// </summary>
        public string userSig;
        /// <summary>
        /// 【字段含义】房间签名（非必填），当您希望某个房间只能让特定的 userId 进入时，需要使用 privateMapKey 进行权限保护。
        /// 【推荐取值】仅建议有高级别安全需求的客户使用，更多详情请参见 进房权限保护。
        /// </summary>
        public string privateMapKey;
    };

    /// <summary>
    /// 音乐和人声设置接口参数
    /// </summary>
    public struct AudioMusicParam {
        /// <summary>
        /// 【字段含义】音乐 ID
        /// 【特殊说明】SDK 允许播放多路音乐，因此需要音乐 ID 进行标记，用于控制音乐的开始、停止、音量等
        /// </summary>
        public int id;

        /// <summary>
        /// 【字段含义】音乐文件的绝对路径
        /// </summary>
        public String path;

        /// 【字段含义】音乐循环播放的次数
        /// 【推荐取值】取值范围为0 - 任意正整数，默认值：0。0表示播放音乐一次；1表示播放音乐两次；以此类推
        /// </summary>
        public int loopCount;

        /// <summary>
        /// 【字段含义】是否将音乐传到远端
        /// 【推荐取值】YES：音乐在本地播放的同时，会上行至云端，因此远端用户也能听到该音乐；NO：音乐不会上行至云端，因此只能在本地听到该音乐。默认值：NO
        /// </summary>
        public bool publish;

        /// <summary>
        /// 【字段含义】播放的是否为短音乐文件
        /// 【推荐取值】YES：需要重复播放的短音乐文件；NO：正常的音乐文件。默认值：NO
        /// </summary>
        public bool isShortFile;
        /// <summary>
        /// 【字段含义】音乐开始播放时间点，单位毫秒
        /// </summary>
        public int startTimeMS;
        /// <summary>
        /// 【字段含义】音乐结束播放时间点，单位毫秒，0或者-1表示播放至文件结尾。
        /// </summary>
        public int endTimeMS;
    };


    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    【（四）继承 TXLiteAVBase 的定义】
    //
    /////////////////////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                    【（五）更多枚举值定义】
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 5.1 Log 级别
    /// </summary>
    public enum TRTCLogLevel
    {
        /// <summary>
        /// 输出所有级别的 Log
        /// </summary>
        TRTCLogLevelVerbose = 0,
        /// <summary>
        /// 输出 DEBUG，INFO，WARNING，ERROR 和 FATAL 级别的 Log
        /// </summary>
        TRTCLogLevelDebug = 1,
        /// <summary>
        /// 输出 INFO，WARNING，ERROR 和 FATAL 级别的 Log
        /// </summary>
        TRTCLogLevelInfo = 2,
        /// <summary>
        /// 只输出 WARNING，ERROR 和 FATAL 级别的 Log
        /// </summary>
        TRTCLogLevelWarn = 3,
        /// <summary>
        /// 只输出ERROR 和 FATAL 级别的 Log
        /// </summary>
        TRTCLogLevelError = 4,
        /// <summary>
        /// 只输出 FATAL 级别的 Log
        /// </summary>
        TRTCLogLevelFatal = 5,
        /// <summary>
        /// 不输出任何 SDK Log
        /// </summary>
        TRTCLogLevelNone = 6,
    };

    /// <summary>
    /// 5.2 设备操作
    /// </summary>
    public enum TRTCDeviceState
    {
        /// <summary>
        /// 添加设备
        /// </summary>
        TRTCDeviceStateAdd = 0,
        /// <summary>
        /// 移除设备
        /// </summary>
        TRTCDeviceStateRemove = 1,
        /// <summary>
        /// 设备已启用
        /// </summary>
        TRTCDeviceStateActive = 2,
    };

    /// <summary>
    /// 5.3 设备类型
    /// </summary>
    public enum TRTCDeviceType
    {
        /// <summary>
        /// 设备已启用
        /// </summary>
        TRTCDeviceTypeUnknow = -1,
        /// <summary>
        /// 麦克风
        /// </summary>
        TRTCDeviceTypeMic = 0,
        /// <summary>
        /// 扬声器
        /// </summary>
        TRTCDeviceTypeSpeaker = 1,
        /// <summary>
        /// 摄像头
        /// </summary>
        TRTCDeviceTypeCamera = 2,
    };

    /// <summary>
    /// 系统音量类型（仅适用于移动端设备）
    ///
    /// 智能手机一般具备两种系统音量类型，即通话音量类型和媒体音量类型。
    /// - 通话音量：手机专门为通话场景设计的音量类型，使用手机自带的回声抵消功能，音质相比媒体音量类型较差，
    ///             无法通过音量按键将音量调成零，但是支持蓝牙耳机上的麦克风。
    ///
    /// - 媒体音量：手机专门为音乐场景设计的音量类型，音质相比于通话音量类型要好，通过通过音量按键可以将音量调成零。
    ///             使用媒体音量类型时，如果要开启回声抵消（AEC）功能，SDK 会开启内置的声学处理算法对声音进行二次处理。
    ///             在媒体音量模式下，蓝牙耳机无法使用自带的麦克风采集声音，只能使用手机上的麦克风进行声音采集。
    ///
    /// SDK 目前提供了三种系统音量类型的控制模式，分别为：
    /// - Auto：“麦上通话，麦下媒体”，即主播上麦时使用通话音量，观众不上麦则使用媒体音量，适合在线直播场景。
    ///         如果您在 enterRoom 时选择的场景为 TRTCAppSceneLIVE 或 TRTCAppSceneVoiceChatRoom，SDK 会自动选择该模式。
    ///
    /// - VOIP：全程使用通话音量，适合多人会议场景。
    ///         如果您在 enterRoom 时选择的场景为 TRTCAppSceneVideoCall 或 TRTCAppSceneAudioCall，SDK 会自动选择该模式。
    ///
    /// - Media：通话全程使用媒体音量，不常用，适合个别有特殊需求（如主播外接声卡）的应用场景。
    ///
    /// </summary>
    public enum TXSystemVolumeType
    {
        /// <summary>
        /// “麦上通话，麦下媒体”，即主播上麦时使用通话音量，观众不上麦则使用媒体音量，适合在线直播场景。
        /// 如果您在 enterRoom 时选择的场景为 TRTCAppSceneLIVE 或 TRTCAppSceneVoiceChatRoom，SDK 会自动选择该模式。
        /// </summary>
        TXSystemVolumeTypeAuto = 0,
        /// <summary>
        /// 通话全程使用媒体音量，不常用，适合个别有特殊需求（如主播外接声卡）的应用场景。
        /// </summary>
        TXSystemVolumeTypeMedia = 1,
        /// <summary>
        /// 全程使用通话音量，适合多人会议场景。
        /// 如果您在 enterRoom 时选择的场景为 TRTCAppSceneVideoCall 或 TRTCAppSceneAudioCall 会自动选择该模式。
        /// </summary>
        TXSystemVolumeTypeVOIP = 2,
    };

    /// <summary>
    /// 声音播放路由（仅适用于移动端设备）
    ///
    /// 一般手机都有两个扬声器，设置音频路由的作用就是要决定声音从哪个扬声器播放出来：
    /// - Speakerphone：扬声器，位于手机底部，声音偏大，适合外放音乐。
    /// - Earpiece：听筒，位于手机顶部，声音偏小，适合通话。
    /// </summary>
    public enum TXAudioRoute {
        TXAudioRouteSpeakerphone = 0,   /// <summary>扬声器</summary>
        TXAudioRouteEarpiece = 1,   /// <summary>听筒</summary>
    };


    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      【（六）TRTC 核心类型定义】
    //                   
    /////////////////////////////////////////////////////////////////////////////////

    /// <summary>
    /// 6.1 进房相关参数
    /// 
    /// <para>只有该参数填写正确，才能顺利调用 enterRoom 进入 roomId 所指定的音视频房间。</para>
    /// </summary>
    public struct TRTCParams
    {
        /// <summary>
        ///【字段含义】应用标识 [必填]，腾讯视频云基于 sdkAppId 进行计费统计。
        /// <para>在 [实时音视频控制台](https://console.cloud.tencent.com/trtc/) 创建应用后可在帐号信息页面中得到该 ID。</para>
        /// </summary>
        public UInt32 sdkAppId;
        /// <summary>
        ///【字段含义】用户标识 [必填]，当前用户的 userId，相当于用户名，使用 UTF-8 编码。
        /// <para>【推荐取值】如果一个用户在您的帐号系统中的 ID 为“abc”，则 userId 即可设置为“abc”。</para>
        /// </summary>
        public String userId;
        /// <summary>
        ///【字段含义】用户签名 [必填]，当前 userId 对应的验证签名，相当于登录密码。
        /// <para>【推荐取值】具体计算方法请参见 [如何计算UserSig](https://cloud.tencent.com/document/product/647/17275)。</para>
        /// </summary>
        public String userSig;
        /// <summary>
        ///【字段含义】房间号码 [必填]，在同一个房间内的用户可以看到彼此并进行视频通话。
        /// <para>【推荐取值】您可以自定义设置该参数值，但不可重复。如果您的用户帐号 ID （userId）为数字类型，可直接使用创建者的用户 ID 作为 roomId。</para>
        /// </summary>
        public UInt32 roomId;
        /// <summary>
        ///【字段含义】字符串房间号码，在同一个房间里的用户（userId）可以彼此看到对方并进行视频通话。
        /// <para>【推荐取值】限制长度为64字节。以下为支持的字符集范围（共 89 个字符）:</para>
        /// <para>  -大小写英文字母（a-zA-Z）；</para>
        /// <para>  -数字（0-9）；</para>
        /// <para>  -空格、"!"、"#"、"$"、"%"、"&"、"("、")"、"+"、"-"、":"、";"、"<"、"="、"."、">"、"?"、"@"、"["、"]"、"^"、"_"、" {"、"}"、"|"、"~"、","。</para>
        /// <para>【特殊说明】roomId 与 strRoomId 必填一个，若您选用 strRoomId，则 roomId 需要填写为0。若两者都填，将优先选用 roomId。</para>
        /// </summary>
        public String strRoomId;
        /// <summary>
        ///【字段含义】直播场景下的角色，仅适用于直播场景（TRTCAppSceneLIVE），视频通话场景下指定无效。
        /// <para>【推荐取值】默认值：主播（TRTCRoleAnchor）</para>
        /// </summary>
        public TRTCRoleType role;
        /// <summary>
        ///【字段含义】绑定腾讯云直播 CDN 流 ID[非必填]，设置之后，您就可以在腾讯云直播 CDN 上通过标准直播方案（FLV或HLS）播放该用户的音视频流。
        /// <para>【推荐取值】限制长度为64字节，可以不填写，一种推荐的方案是使用 “sdkappid_roomid_userid_main” 作为 streamid，这样比较好辨认且不会在您的多个应用中发生冲突。</para>
        /// <para>【特殊说明】要使用腾讯云直播 CDN，您需要先在[控制台](https://console.cloud.tencent.com/trtc/) 中的功能配置页开启“启用旁路推流”开关。</para>
        /// <para>【参考文档】[CDN 旁路直播](https://cloud.tencent.com/document/product/647/16826)。</para>
        /// </summary>
        public String streamId;
        /// <summary>
        ///【字段含义】设置云端录制完成后的回调消息中的 "userdefinerecordid"  字段内容，便于您更方便的识别录制回调。
        /// <para>【推荐取值】限制长度为64字节，只允许包含大小写英文字母（a-zA-Z）、数字（0-9）及下划线和连词符。</para>
        /// <para>【参考文档】[云端录制](https://cloud.tencent.com/document/product/647/16823)。</para>
        /// </summary>
        public String userDefineRecordId;
        /// <summary>
        ///【字段含义】房间签名 [非必填]，当您希望某个房间只能让特定的 userId 进入时，需要使用 privateMapKey 进行权限保护。
        /// <para>【推荐取值】仅建议有高级别安全需求的客户使用，更多详情请参见 [进房权限保护](https://cloud.tencent.com/document/product/647/32240)。</para>
        /// </summary>
        public String privateMapKey;
        /// <summary>
        ///【字段含义】业务数据 [非必填]，部分高级特性才需要使用该字段。
        /// <para>【推荐取值】不建议使用</para>
        /// </summary>
        public String businessInfo;
    };

    /// <summary>
    /// 6.2 视频编码参数
    ///
    /// <para>该设置决定了远端用户看到的画面质量（同时也是云端录制出的视频文件的画面质量）。</para>
    /// </summary>
    public struct TRTCVideoEncParam
    {
        /// <summary>
        ///【字段含义】 视频分辨率
        /// <para>【推荐取值】</para>
        /// <para>  - 视频通话建议选择360 × 640及以下分辨率，resMode 选择 Portrait。</para>
        /// <para>  - 手机直播建议选择540 × 960，resMode 选择 Portrait。</para>
        /// <para>  - Window 和 iMac 建议选择640 × 360 及以上分辨率，resMode 选择 Landscape。</para>
        /// <para>【特别说明】 TRTCVideoResolution 默认只有横屏模式的分辨率，例如640 × 360。</para>
        /// <para>            如需使用竖屏分辨率，请指定 resMode 为 Portrait，例如640 × 360结合 Portrait 则为360 × 640。</para>
        /// </summary>
        public TRTCVideoResolution videoResolution;
        /// <summary>
        ///【字段含义】分辨率模式（横屏分辨率 - 竖屏分辨率）
        /// <para>【推荐取值】手机直播建议选择 Portrait，Window 和 Mac 建议选择 Landscape。</para>
        /// <para>【特别说明】如果 videoResolution 指定分辨率 640 × 360，resMode 指定模式为 Portrait，则最终编码出的分辨率为360 × 640。</para>
        /// </summary>
        public TRTCVideoResolutionMode resMode;
        /// <summary>
        ///【字段含义】视频采集帧率
        /// <para>【推荐取值】15fps 或 20fps。5fps以下，卡顿感明显。10fps以下，会有轻微卡顿感。20fps以上，则过于浪费（电影的帧率为24fps）。</para>
        /// <para>【特别说明】很多 Android 手机的前置摄像头并不支持15fps以上的采集帧率，部分过于突出美颜功能的 Android 手机前置摄像头的采集帧率可能低于10fps。</para>
        /// </summary>
        public UInt32 videoFps;
        /// <summary>
        ///【字段含义】目标视频码率，SDK 会按照目标码率进行编码，只有在网络不佳的情况下才会主动降低视频码率。
        /// <para>【推荐取值】请参考本 TRTCVideoResolution 在各档位注释的最佳码率，也可以在此基础上适当调高。</para>
        /// <para>            比如 TRTCVideoResolution_1280_720 对应 1200kbps 的目标码率，您也可以设置为 1500kbps 用来获得更好的清晰度观感。</para>
        /// <para>【特别说明】SDK 会努力按照 videoBitrate 指定的码率进行编码，只有在网络不佳的情况下才会主动降低视频码率，最低会降至 minVideoBitrate 所设定的数值。</para>
        /// <para>            如果您追求“允许卡顿但要保持清晰”的效果，可以设置 minVideoBitrate 为 videoBitrate 的 60%；</para>
        /// <para>            如果您追求“允许模糊但要保持流畅”的效果，可以设置 minVideoBitrate 为 200kbps；</para>
        /// <para>            如果您将 videoBitrate 和 minVideoBitrate 设置为同一个值，等价于关闭 SDK 的自适应调节能力。</para>
        /// </summary>
        public UInt32 videoBitrate;
        /// <summary>
        ///【字段含义】最低视频码率，SDK 会在网络不佳的情况下主动降低视频码率，最低会降至 minVideoBitrate 所设定的数值。
        /// <para>【推荐取值】</para>
        /// <para>     - 如果您追求“允许卡顿但要保持清晰”的效果，可以设置 minVideoBitrate 为 videoBitrate 的 60%；</para>
        /// <para>     - 如果您追求“允许模糊但要保持流畅”的效果，可以设置 minVideoBitrate 为 200kbps；</para>
        /// <para>     - 如果您将 videoBitrate 和 minVideoBitrate 设置为同一个值，等价于关闭 SDK 的自适应调节能力；</para>
        /// <para>     - 默认值：0，此时最低码率由 SDK 根据分辨率情况，自动设置合适的数值。</para>
        /// <para>【特别说明】</para>
        /// <para>     - 当您把分辨率设置的比较高时，minVideoBitrate 不适合设置的太低，否则会出现画面模糊和大范围的马赛克宏块。</para>
        /// <para>       比如把分辨率设置为 720p，把码率设置为 200kbps，那么编码出的画面将会出现大范围区域性马赛克。</para>
        /// </summary>
        public UInt32 minVideoBitrate;
        /// <summary>
        ///【字段含义】是否允许调整分辨率
        /// <para>【推荐取值】</para>
        /// <para>   - 手机直播建议选择 NO。</para>
        /// <para>   - 视频通话模式，若更关注流畅性，建议选择 YES，此时若遇到带宽有限的弱网，SDK 会自动降低分辨率以保障更好的流畅度（仅针对 TRTCVideoStreamTypeBig 生效）。</para>
        /// <para>   - 默认值：NO。</para>
        /// <para>【特别说明】若有录制需求，选择 YES 时，请确保通话过程中，调整分辨率不会影响您的录制效果。</para>
        /// </summary>
        public bool enableAdjustRes;
    };
    /// <summary>
    /// 录音参数
    ///
    /// 【字段含义】文件路径（必填），录音文件的保存路径。该路径需要用户自行指定，请确保路径存在且可写。
    ///
    /// 【特别说明】该路径需精确到文件名及格式后缀，格式后缀决定录音文件的格式，目前支持的格式有 PCM、WAV 和 AAC。 例如，指定路径为 path/to/audio.aac，则会生成一个 AAC 格式的文件。 请指定一个有读写权限的合法路径，否则录音文件无法生成。
    /// </summary>
    public struct TRTCAudioRecordingParams
    {
        /// <summary>
        /// 字段含义】文件路径（必填），录音文件的保存路径。该路径需要用户自行指定，请确保路径存在且可写。
        /// 【特别说明】该路径需精确到文件名及格式后缀，格式后缀决定录音文件的格式，目前支持的格式有 PCM、WAV 和 AAC。 例如，指定路径为 path/to/audio.aac，则会生成一个 AAC 格式的文件。 请指定一个有读写权限的合法路径，否则录音文件无法生成。
        /// </summary>
        public String filePath;
    }

    /// <summary>
    /// 本地录制参数
    /// </summary>
    public enum TRTCLocalRecordType
    {
        /// <summary>
        /// 仅录制音频
        /// </summary>
        TRTCLocalRecordType_Audio = 0,

        /// <summary>
        /// 仅录制视频
        /// </summary>
        TRTCLocalRecordType_Video = 1,

        /// <summary>
        /// 同时录制音频、视频
        /// </summary>
        TRTCLocalRecordType_Both = 2,
    }

    /// <summary>
    /// 录制参数
    /// </summary>
    public struct TRTCLocalRecordingParams
    {
        /// <summary>
        /// 【字段含义】文件路径（必填），录制的文件地址，请自行指定，确保路径有读写权限且合法，否则录制文件无法生成。
        ///【特别说明】该路径需精确到文件名及格式后缀，格式后缀决定录制文件的格式，目前支持的格式只有 mp4。 Windows建议在应用的私有数据目录中指定存放路径。
        ///【示例代码】在 appdata%\test 目录下录制 example.mp4 文件 std::string filePath; std::wstring path; wchar_t fullPath[MAX_PATH] = { 0 }; SHGetFolderPathW(NULL, CSIDL_APPDATA, NULL, 0, fullPath); path=fullPath; path += L"\\test\\example.mp4"; filePath = txf_wstr2utf8(path);
        /// </summary>
        public String filePath;

        /// <summary>
        /// 【字段含义】媒体录制类型，默认为同时录制音频和视频。
        /// </summary>
        public TRTCLocalRecordType recordType;

        /// <summary>
        /// interval 录制中事件（onLocalRecordDoing）的回调频率，单位毫秒，有效范围：1000-10000，默认为-1表示不回调
        /// </summary>
        public int interval;
    }

    /// <summary>
    /// 6.3 网络流控相关参数
    ///
    /// <para>网络流控相关参数，该设置决定了SDK在各种网络环境下的调控方向（例如弱网下是“保清晰”或“保流畅”）</para>
    /// </summary>
    public struct TRTCNetworkQosParam
    {
        /// <summary>
        ///【字段含义】弱网下是“保清晰”或“保流畅”
        /// <para>【特别说明】</para>
        /// <para>   - 弱网下保流畅：在遭遇弱网环境时，画面会变得模糊，且出现较多马赛克，但可以保持流畅不卡顿</para>
        /// <para>   - 弱网下保清晰：在遭遇弱网环境时，画面会尽可能保持清晰，但可能容易出现卡顿</para>
        /// </summary>
        public TRTCVideoQosPreference preference;
        /// <summary>
        ///【字段含义】视频分辨率（云端控制 - 客户端控制）
        /// <para>【推荐取值】云端控制</para>
        /// <para>【特别说明】</para>
        /// <para>   - Server 模式（默认）：云端控制模式，若无特殊原因，请直接使用该模式</para>
        /// <para>   - Client 模式：客户端控制模式，用于 SDK 开发内部调试，客户请勿使用</para>
        /// </summary>
        public TRTCQosControlMode controlMode;
    };

    /// <summary>
    /// 5.3 画面渲染参数
    /// </summary>
    /// <remarks>
    /// 您可以通过设置此参数来控制画面的旋转、填充、镜像模式
    /// </remarks>
    public struct TRTCRenderParams
    {
        /// <summary>
        /// 视频画面旋转方向，默认值为 TRTCVideoRotation0
        /// </summary>
        public TRTCVideoRotation rotation;
        /// <summary>
        /// 视频画面填充模式，默认值为 TRTCVideoFillMode_Fit
        /// </summary>
        public TRTCVideoFillMode fillMode;
        /// <summary>
        /// 视频画面镜像模式，默认值为 TRTCVideoMirrorType_Disable
        /// </summary>
        public TRTCVideoMirrorType mirrorType;
    };

    /// <summary>
    /// 1.9 画面渲染镜像类型
    /// </summary>
    /// <remarks>TRTC 的画面镜像提供下列设置模式</remarks>
    public enum TRTCVideoMirrorType
    {
        /// <summary>
        /// 只适用于移动端，本地预览时，前置摄像头镜像，后置摄像头不镜像
        /// </summary>
        TRTCVideoMirrorType_Auto = 0,
        /// <summary>
        /// 所有画面均镜像
        /// </summary>
        TRTCVideoMirrorType_Enable = 1,
        /// <summary>
        /// 所有画面均不镜像
        /// </summary>
        TRTCVideoMirrorType_Disable = 2,
    }

    /// <summary>
    ///  1.10 视频截图来源
    /// </summary>
    public enum TRTCSnapshotSourceType
    {
        /// <summary>
        /// 从视频流上截取视频画面
        /// </summary>
        TRTCSnapshotSourceTypeStream = 0,
        /// <summary>
        /// 从渲染 View 上截取视频画面
        /// </summary>
        TRTCSnapshotSourceTypeView = 1,
    };

    /// <summary>
    /// 6.4 视频质量
    /// 
    /// <para>表示视频质量的好坏，通过这个数值，您可以在 UI 界面上用图标表征 userId 的通话线路质量</para>
    /// </summary>
    [Serializable]
    public struct TRTCQualityInfo
    {
        /// <summary>
        /// 用户标识
        /// </summary>
        public String userId;
        /// <summary>
        /// 视频质量
        /// </summary>
        public TRTCQuality quality;
    };

    /// <summary>
    /// 6.5 音量大小
    /// 
    /// <para>表示语音音量的评估大小，通过这个数值，您可以在 UI 界面上用图标表征 userId 是否有在说话。</para>
    /// </summary>
    [Serializable]
    public struct TRTCVolumeInfo
    {
        /// <summary>
        /// 说话者的 userId，字符编码格式为 UTF-8
        /// </summary>
        public String userId;
        /// <summary>
        /// 说话者的音量， 取值范围0 - 100              
        /// </summary>
        public UInt32 volume;
    };

    /// <summary>
    /// 6.6 视频帧数据
    /// </summary>
    public struct TRTCVideoFrame
    {
        /// <summary>
        /// 视频帧的格式
        /// </summary>
        public TRTCVideoPixelFormat videoFormat;
        /// <summary>
        /// 视频数据结构类型
        /// </summary>
        public TRTCVideoBufferType bufferType;
        /// <summary>
        /// 视频数据，字段bufferType是LiteAVVideoBufferType_Buffer时生效
        /// </summary>
        public byte[] data;
        /// <summary>
        /// 视频纹理ID，字段bufferType是LiteAVVideoBufferType_Texture时生效
        /// </summary>
        public int textureId;
        /// <summary>
        /// 视频数据的长度，单位是字节，对于i420而言， length = width * height * 3 / 2，对于BGRA32而言， length = width * height * 4
        /// </summary>
        public UInt32 length;
        /// <summary>
        /// 画面的宽度
        /// </summary>
        public UInt32 width;
        /// <summary>
        /// 画面的高度
        /// </summary>
        public UInt32 height;
        /// <summary>
        /// 时间戳，单位ms
        /// </summary>
        public UInt64 timestamp;
        /// <summary>
        /// 画面旋转角度
        /// </summary>
        public TRTCVideoRotation rotation;
    };

    /// <summary>
    /// 6.7 音频帧数据
    /// </summary>
    public struct TRTCAudioFrame
    {
        /// <summary>
        /// 音频帧的格式
        /// </summary>
        public TRTCAudioFrameFormat audioFormat;
        /// <summary>
        /// 音频数据
        /// </summary>
        public byte[] data;
        /// <summary>
        /// 音频数据的长度
        /// </summary>
        public UInt32 length;
        /// <summary>
        /// 采样率
        /// </summary>
        public UInt32 sampleRate;
        /// <summary>
        /// 声道数
        /// </summary>
        public UInt32 channel;
        /// <summary>
        /// 时间戳，单位ms
        /// </summary>
        public UInt64 timestamp;
    };

    /// <summary>
    /// 6.8 网络测速结果
    /// <para>
    /// 您可以在用户进入房间前通过 TRTCCloud 的 startSpeedTest 接口进行测速 （注意：请不要在通话中调用），
    /// 测速结果会每2 - 3秒钟返回一次，每次返回一个 IP 地址的测试结果。
    /// </para>
    /// </summary>
    /// <remarks>
    /// - quality 是内部通过评估算法测算出的网络质量，loss 越低，rtt 越小，得分便越高。
    /// <para>- upLostRate 是指上行丢包率。例如，0.3表示每向服务器发送10个数据包可能会在中途丢失3个。</para>
    /// <para>- downLostRate 是指下行丢包率。例如，0.2表示每从服务器收取10个数据包可能会在中途丢失2个。</para>
    /// <para>- rtt 是指当前设备到腾讯云服务器的一次网络往返时间，该值越小越好，正常数值范围是10ms - 100ms。</para>
    /// </remarks>
    public struct TRTCSpeedTestResult
    {
        /// <summary>
        /// 服务器 IP 地址
        /// </summary>
        public String ip;
        /// <summary>
        /// 网络质量，内部通过评估算法测算出的网络质量，loss 越低，rtt 越小，得分便越高
        /// </summary>
        public TRTCQuality quality;
        /// <summary>
        /// 上行丢包率，范围是0 - 1.0，例如，0.3表示每向服务器发送10个数据包可能会在中途丢失3个。
        /// </summary>
        public float upLostRate;
        /// <summary>
        /// 下行丢包率，范围是0 - 1.0，例如，0.2表示每从服务器收取10个数据包可能会在中途丢失2个。
        /// </summary>
        public float downLostRate;
        /// <summary>
        /// 延迟（毫秒），指当前设备到腾讯云服务器的一次网络往返时间，该值越小越好，正常数值范围是10ms - 100ms
        /// </summary>
        public int rtt;
    };

    /// <summary>
    /// 5.13 CDN 旁路推流参数
    /// </summary>
    public struct TRTCPublishCDNParam
    {
        /// <summary>
        /// 腾讯云 AppID，请在 实时音视频控制台 [应用管理] 选择已经创建的应用,单击【应用信息】,在旁路直播信息中获取
        /// </summary>
        public UInt32 appId;

        /// <summary>
        /// 腾讯云 bizid，请在 实时音视频控制台 [应用管理] 选择已经创建的应用,单击【应用信息】,在旁路直播信息中获取
        /// </summary>
        public UInt32 bizId;

        /// <summary>
        /// 旁路转推的 URL
        /// </summary>
        public String url;

    }

    /// <summary>
    /// 5.11 混流参数配置模式
    /// </summary>
    public enum TRTCTranscodingConfigMode
    {
        /// <summary>
        /// 非法值
        /// </summary>
        TRTCTranscodingConfigMode_Unknown = 0,

        /// <summary>
        /// 全手动模式，灵活性最高，可以自由组合出各种混流方案，但易用性最差。
        /// 此模式下，您需要填写 TRTCTranscodingConfig 中的所有参数，并需要监听 TRTCCloudDelegate 中的 onUserVideoAvailable() 和 onUserAudioAvailable() 回调，
        /// 以便根据当前房间中各个上麦用户的音视频状态不断地调整 mixUsers 参数，否则会导致混流失败。
        /// </summary>
        TRTCTranscodingConfigMode_Manual = 1,

        /// <summary>
        /// 纯音频模式，适用于语音通话（AudioCall）和语音聊天室（VoiceChatRoom）等纯音频场景。
        /// 只需要在进房后通过 setMixTranscodingConfig() 接口设置一次，之后 SDK 就会自动把房间内所有上麦用户的声音混流到当前用户的直播流上。
        /// 此模式下，您无需设置 TRTCTranscodingConfig 中的 mixUsers 参数，只需设置 audioSampleRate、audioBitrate 和 audioChannels 等参数。
        /// </summary>
        TRTCTranscodingConfigMode_Template_PureAudio = 2,

        /// <summary>
        /// 预排版模式，通过占位符提前对各路画面进行排布
        /// 此模式下，您依然需要设置 mixUsers 参数，但可以将 userId 设置为占位符，可选的占位符有：
        /// - "$PLACE_HOLDER_REMOTE$"     :  指代远程用户的画面，可以设置多个。
        /// - "$PLACE_HOLDER_LOCAL_MAIN$" ： 指代本地摄像头画面，只允许设置一个。
        /// - "$PLACE_HOLDER_LOCAL_SUB$"  :  指代本地屏幕分享画面，只允许设置一个。
        /// 但是您可以不需要监听 TRTCCloudDelegate 中的 onUserVideoAvailable() 和 onUserAudioAvailable() 回调进行实时调整，
        /// 只需要在进房成功后调用一次 setMixTranscodingConfig() 即可，之后 SDK 会自动将真实的 userId 补位到您设置的占位符上。
        /// </summary>
        TRTCTranscodingConfigMode_Template_PresetLayout = 3,

        /// <summary>
        /// 屏幕分享模式，适用于在线教育场景等以屏幕分享为主的应用场景，仅支持 Windows 和 Mac 两个平台的 SDK。
        /// SDK 会先根据您（通过 videoWidth 和 videoHeight 参数）设置的目标分辨率构建一张画布，
        /// 当老师未开启屏幕分享时，SDK 会将摄像头画面等比例拉伸绘制到该画布上；当老师开启屏幕分享之后，SDK 会将屏幕分享画面绘制到同样的画布上。
        /// 这样操作的目的是为了确保混流模块的输出分辨率一致，避免课程回放和网页观看的花屏问题（网页播放器不支持可变分辨率）。
        /// 由于教学模式下的视频内容以屏幕分享为主，因此同时传输摄像头画面和屏幕分享画面是非常浪费带宽的。
        /// 推荐的做法是直接将摄像头画面通过 setLocalVideoRenderCallback 接口自定义绘制到当前屏幕上。
        /// 在该模式下，您无需设置 TRTCTranscodingConfig 中的 mixUsers 参数，SDK 不会混合学生的画面，以免干扰屏幕分享的效果。
        /// 您可以将 TRTCTranscodingConfig 中的 width × height 设为 0px × 0px，SDK 会自动根据用户当前屏幕的宽高比计算出一个合适的分辨率：
        /// - 如果老师当前屏幕宽度 <= 1920px，SDK 会使用老师当前屏幕的实际分辨率。
        /// - 如果老师当前屏幕宽度 > 1920px，SDK 会根据当前屏幕宽高比，选择 1920x1080(16:9)、1920x1200(16:10)、1920x1440(4:3) 三种分辨率中的一种。
        /// </summary>
        TRTCTranscodingConfigMode_Template_ScreenSharing = 4,
    }

    /// <summary>
    /// 图层位置坐标以及大小，左上角为坐标原点(0,0) （绝对像素值）
    /// </summary>
    public struct RECT
    {
        /// <summary>
        /// 矩形左上角x坐标轴
        /// </summary>
        public int left;
        /// <summary>
        ///  矩形左上角y坐标轴
        /// </summary>
        public int top;
        /// <summary>
        /// 矩形右下角x坐标轴
        /// </summary>
         public int right;
        /// <summary>
        /// 矩形右下角y坐标轴
        /// </summary>
        public int bottom;
    };

    /// <summary>
    /// 2.6 混流输入类型
    /// </summary>
    public enum TRTCMixInputType
    {

        /// <summary>
        ///  不指定，根据pureAudio值决定混流类型
        /// </summary>
        TRTCMixInputTypeUndefined = 0,

        /// <summary>
        /// 混入音视频
        /// </summary>
        TRTCMixInputTypeAudioVideo = 1,

        /// <summary>
        /// 只混入视频
        /// </summary>
        TRTCMixInputTypePureVideo = 2,

        /// <summary>
        /// 只混入音频
        /// </summary>
        TRTCMixInputTypePureAudio = 3,
    };

    /// <summary>
    ///  设备类型（仅适用于桌面平台）
    ///  该枚举值用于定义三种类型的音视频设备，即摄像头、麦克风和扬声器，以便让一套设备管理接口可以操控三种不同类型的设备。
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
    /// 5.10 云端混流中每一路子画面的位置信息
    /// <para>
    /// TRTCMixUser 用于指定每一路（即每一个 userId）视频画面的具体摆放位置
    /// </para>
    /// </summary>
    public struct TRTCMixUser
    {
        /// <summary>
        ///【字段含义】参与混流的 userId
        ///</summary>
        public string userId;

        /// <summary>
        ///【字段含义】参与混流的 roomId，跨房流传入的实际 roomId，当前房间流传入 roomId = nullptr
        ///</summary>
        public string roomId;

        /// <summary>
        ///【字段含义】图层位置坐标以及大小，左上角为坐标原点(0,0) （绝对像素值）
        ///</summary>
        public trtc.RECT rect;

        /// <summary>
        ///【字段含义】图层层次（1 - 15）不可重复
        ///</summary>
        public int zOrder;

        /// <summary>
        ///【字段含义】该用户是不是只开启了音频
        ///【推荐取值】默认值：NO
        ///【特别说明】废弃，推荐使用 inputType
        ///</summary>
        public bool pureAudio;

        /// <summary>
        ///【字段含义】参与混合的是主路画面（TRTCVideoStreamTypeBig）或屏幕分享（TRTCVideoStreamTypeSub）画面
        ///</summary>
        public TRTCVideoStreamType streamType;

        /// <summary>
        /// 【字段含义】该用户的输入流类型（该字段是对 pureAudio 字段的升级）
        /// 【推荐取值】
        ///     - 默认值：TRTCMixInputTypeUndefined
        ///     - 如果您没有对 pureAudio 字段进行设置，您可以根据实际需要设置该字段
        ///     - 如果您已经设置了 pureAudio 为 YES，请设置该字段为 TRTCMixInputTypeUndefined
        /// </summary>
        public TRTCMixInputType inputType;
    }

    /// <summary>
    /// 5.12 云端混流（转码）配置
    /// <para>包括最终编码质量和各路画面的摆放位置</para>
    /// </summary>
    public struct TRTCTranscodingConfig
    {
        /// <summary>
        ///【字段含义】转码 config 模式
        ///</summary>
        public TRTCTranscodingConfigMode mode;

        /// <summary>
        ///【字段含义】腾讯云直播 AppID
        ///【推荐取值】请在 [实时音视频控制台](https://console.cloud.tencent.com/rav) 选择已经创建的应用，单击【帐号信息】后，在“直播信息”中获取
        public UInt32 appId;

        /// <summary>
        ///【字段含义】腾讯云直播 bizid
        ///【推荐取值】请在 [实时音视频控制台](https://console.cloud.tencent.com/rav) 选择已经创建的应用，单击【帐号信息】后，在“直播信息”中获取
        /// </summary>
        public UInt32 bizId;

        /// <summary>
        ///【字段含义】最终转码后的视频分辨率的宽度。
        ///【推荐取值】推荐值：360px ，如果你是纯音频推流，请将 width × height 设为 0px × 0px，否则混流后会携带一条画布背景的视频流。
        ///</summary>
        public UInt32 videoWidth;
        /// <summary>
        ///【字段含义】最终转码后的视频分辨率的高度。
        ///【推荐取值】推荐值：640px ，如果你是纯音频推流，请将 width × height 设为 0px × 0px，否则混流后会携带一条画布背景的视频流。
        ///</summary>
        public UInt32 videoHeight;

        /// <summary>
        ///【字段含义】最终转码后的视频分辨率的码率（kbps）。
        ///【推荐取值】如果填0，后台会根据videoWidth和videoHeight来估算码率，您也可以参考枚举定义TRTCVideoResolution_640_480的注释。
        ///</summary>
        public UInt32 videoBitrate;

        /// <summary>
        ///【字段含义】最终转码后的视频分辨率的帧率（FPS）。
        ///【推荐取值】默认值：15fps，取值范围是 (0,30]。
        ///</summary>
        public UInt32 videoFramerate;

        /// <summary>
        ///【字段含义】最终转码后的视频分辨率的关键帧间隔（又称为 GOP）。
        ///【推荐取值】默认值：2，单位为秒，取值范围是 [1,8]。
        /// </summary>
        public UInt32 videoGOP;

        /// <summary>
        ///【字段含义】混合后画面的底色颜色，默认为黑色，格式为十六进制数字，比如：“0x61B9F1” 代表 RGB 分别为(97,158,241)。
        ///【推荐取值】默认值：0x000000，黑色
        ///</summary>
        public UInt32 backgroundColor;

        /// <summary>
        ///【字段含义】混合后画面的背景图。
        ///【推荐取值】默认值：null，即不设置背景图
        ///【特别说明】背景图需要您事先在 “[控制台](https://console.cloud.tencent.com/trtc) => 应用管理 => 功能配置 => 素材管理” 中上传，
        ///            上传成功后可以获得对应的“图片ID”，然后将“图片ID”转换成字符串类型并设置到 backgroundImage 里即可。 
        ///            例如：假设“图片ID” 为 63，可以设置 backgroundImage = "63"; 
        ///</summary>          
        public string backgroundImage;

        /// <summary>
        ///【字段含义】最终转码后的音频采样率。
        ///【推荐取值】默认值：48000Hz。支持12000HZ、16000HZ、22050HZ、24000HZ、32000HZ、44100HZ、48000HZ。
        ///</summary>
        public UInt32 audioSampleRate;

        /// <summary>
        ///【字段含义】最终转码后的音频码率。
        ///【推荐取值】默认值：64kbps，取值范围是 [32，192]。
        ///</summary>
        public UInt32 audioBitrate;

        /// <summary>
        ///【字段含义】最终转码后的音频声道数
        ///【推荐取值】默认值：1。取值范围为 [1,2] 中的整型。
        ///</summary>
        public UInt32 audioChannels;

        /// <summary>
        ///【字段含义】每一路子画面的位置信息
        ///</summary>
        public TRTCMixUser[] mixUsersArray;

        /// <summary>
        ///【字段含义】 数组 mixUsersArray 的大小
        /// </summary>
        public UInt32 mixUsersArraySize;

        /// <summary>
        ///【字段含义】输出到 CDN 上的直播流 ID
        ///          如不设置该参数，SDK 会执行默认逻辑，即房间里的多路流会混合到该接口调用者的视频流上，也就是 A+B =>A；
        ///          如果设置该参数，SDK 会将房间里的多路流混合到您指定的直播流 ID 上，也就是 A+B =>C。
        ///【推荐取值】默认值：null，即房间里的多路流会混合到该接口调用者的视频流上。
        ///</summary>
        public string streamId;

       
    };

    /// <summary>
    /// 自己本地的音视频统计信息
    /// </summary>
    [Serializable]
    public struct TRTCLocalStatistics
    {
        /// <summary>
        /// 视频宽度
        /// </summary>
        public UInt32 width;
        /// <summary>
        /// 视频高度
        /// </summary>
        public UInt32 height;
        /// <summary>
        /// 帧率（fps）
        /// </summary>
        public UInt32 frameRate;
        /// <summary>
        /// 视频发送码率（Kbps）
        /// </summary>
        public UInt32 videoBitrate;
        /// <summary>
        /// 音频采样率（Hz）
        /// </summary>
        public UInt32 audioSampleRate;
        /// <summary>
        /// 音频发送码率（Kbps）
        /// </summary>
        public UInt32 audioBitrate;
        /// <summary>
        /// 流类型（大画面 | 小画面 | 辅路画面）
        /// </summary>
        public TRTCVideoStreamType streamType;
    };

    /// <summary>
    /// 远端成员的音视频统计信息
    /// </summary>
    [Serializable]
    public struct TRTCRemoteStatistics
    {
        /// <summary>
        /// 用户 ID，指定是哪个用户的视频流
        /// </summary>
        public String userId;
        /// <summary>
        /// 该线路的总丢包率（％）
        /// 
        /// <para>这个值越小越好，例如，丢包率为0表示网络很好。</para>
        /// <para>丢包率是该线路的 userId 从上行到服务器再到下行的总丢包率。</para>
        /// <para>如果 downLoss 为0，但是 finalLoss 不为0，说明该 userId 上行时出现了无法恢复的丢包。</para>
        /// </summary>
        public UInt32 finalLoss;
        /// <summary>
        /// 视频宽度
        /// </summary>
        public UInt32 width;
        /// <summary>
        /// 视频高度
        /// </summary>
        public UInt32 height;
        /// <summary>
        /// 接收帧率（fps）
        /// </summary>
        public UInt32 frameRate;
        /// <summary>
        /// 视频码率（Kbps）
        /// </summary>
        public UInt32 videoBitrate;
        /// <summary>
        /// 音频采样率（Hz）
        /// </summary>
        public UInt32 audioSampleRate;
        /// <summary>
        /// 音频码率（Kbps）
        /// </summary>
        public UInt32 audioBitrate;
        /// <summary>
        /// 播放时延（ms）
        /// </summary>
        public UInt32 jitterBufferDelay;
        /// <summary>
        /// 流类型（大画面 | 小画面 | 辅路画面）
        /// </summary>
        public TRTCVideoStreamType streamType;
    };

    /// <summary>
    /// 统计数据
    /// </summary>
    public struct TRTCStatistics
    {
        /// <summary>
        /// C -> S 上行丢包率（％），
        /// <para>
        /// 该值越小越好，例如，丢包率为0表示网络很好，
        /// 丢包率为30@%则意味着 SDK 向服务器发送的数据包中会有30@%丢失在上行传输中。
        /// </para>
        /// </summary>
        public UInt32 upLoss;
        /// <summary>
        /// S -> C 下行丢包率（％），
        /// 该值越小越好，例如，丢包率为0表示网络很好，
        /// 丢包率为30@%则意味着 SDK 向服务器发送的数据包中会有30@%丢失在下行传输中。
        /// </summary>
        public UInt32 downLoss;
        /// <summary>
        /// 当前 App 的 CPU 使用率（％）
        /// </summary>
        public UInt32 appCpu;
        /// <summary>
        /// 当前系统的 CPU 使用率（％）
        /// </summary>
        public UInt32 systemCpu;
        /// <summary>
        /// 延迟（毫秒），指 SDK 到腾讯云服务器的一次网络往返时间，该值越小越好。
        /// <para>一般低于50ms的 rtt 相对理想，而高于100ms的 rtt 会引入较大的通话延时。</para>
        /// <para>由于数据上下行共享一条网络连接，所以 local 和 remote 的 rtt 相同。</para>
        /// </summary>
        public UInt32 rtt;
        /// <summary>
        /// 总接收字节数（包含信令和音视频）
        /// </summary>
        public UInt32 receivedBytes;
        /// <summary>
        /// 总发送字节总数（包含信令和音视频）
        /// </summary>
        public UInt32 sentBytes;
        /// <summary>
        /// 本地的音视频统计信息，可能有主画面、小画面以及辅路画面等多路的情况，因此是一个数组
        /// </summary>
        public TRTCLocalStatistics[] localStatisticsArray;
        /// <summary>
        /// 数组 localStatisticsArray 的大小
        /// </summary>
        public UInt32 localStatisticsArraySize;
        /// <summary>
        /// 远端成员的音视频统计信息，可能有主画面、小画面以及辅路画面等多路的情况，因此是一个数组
        /// </summary>
        public TRTCRemoteStatistics[] remoteStatisticsArray;
        /// <summary>
        /// 数组 remoteStatisticsArray 的大小
        /// </summary>
        public UInt32 remoteStatisticsArraySize;
    };

    /// <summary>
    /// 采集源类型
    /// 
    /// <para>您可以通过 getScreenCaptureSources() 枚举可共享的屏幕列表信息</para>
    /// </summary>
    public enum TRTCScreenCaptureSourceType
    {
        TRTCScreenCaptureSourceTypeUnknown = -1,
        /// <summary>
        /// 该分享目标是整个 Windows 桌面
        /// </summary>
        TRTCScreenCaptureSourceTypeScreen = 1,
    };

    /// <summary>
    /// 屏幕采集信息
    /// </summary>
    public struct TRTCScreenCaptureSourceInfo
    {
        /// <summary>
        /// 采集源类型；unity 目前仅支持屏幕分享
        /// </summary>
        public TRTCScreenCaptureSourceType type;
        /// <summary>
        /// 采集源ID；对于屏幕，该字段指示屏幕ID
        /// </summary>
        public IntPtr sourceId;
        /// <summary>
        /// 采集源名称，UTF8编码
        /// </summary>
        public String sourceName;
        /// <summary>
        /// 是否为主屏，仅采集源类型为 TRTCScreenCaptureSourceTypeScreen 时才可用
        /// </summary>
        public bool isMainScreen;
    };

    /// <summary>
    /// 音视频设备的相关信息（仅适用于桌面平台）
    /// 该结构体用于描述一个音视频设备的关键信息，比如设备ID、设备名称等等，以便用户能够在用户界面上选择自己期望使用的音视频设备。
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
    /// 屏幕采集属性
    /// </summary>
    public class TRTCScreenCaptureProperty
    {
        /// <summary>
        /// 是否采集目标内容时顺带采集鼠标，默认为 true
        /// </summary>
        public bool enableCaptureMouse = true;
        /// <summary>
        /// 是否高亮正在共享的窗口，默认为 true
        /// </summary>
        public bool enableHighLight = true;
        /// <summary>
        /// 是否开启高性能模式（只会在分享屏幕时会生效），开启后屏幕采集性能最佳，但无法过滤远端的高亮边框，默认为 true
        /// </summary>
        public bool enableHighPerformance = true;
        /// <summary>
        /// 指定高亮边框颜色，RGB格式，传入0时采用默认颜色，默认颜色为 #8CBF26
        /// </summary>
        public int highLightColor;
        /// <summary>
        /// 指定高亮边框的宽度，传入 0 时采用默认描边宽度，默认宽度为 5，最大值为 50
        /// </summary>
        public int highLightWidth;
    };
    /// @}
}