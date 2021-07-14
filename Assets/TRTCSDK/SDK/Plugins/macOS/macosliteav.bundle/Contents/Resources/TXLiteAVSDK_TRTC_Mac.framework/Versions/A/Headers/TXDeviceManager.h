/*
* Module: TXDeviceManager 设备管理类
*
* Function: 用于管理 iOS / Mac 的硬件设备
*
*/

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#if TARGET_OS_IPHONE

/// 系统音量类型
typedef NS_ENUM(NSInteger, TXSystemVolumeType);
/// 声音播放模式（音频路由）
typedef NS_ENUM(NSInteger, TXAudioRoute);

#elif TARGET_OS_MAC

/// 设备类型
typedef NS_ENUM(NSInteger, TXMediaDeviceType);
/// 设备描述
@class TXMediaDeviceInfo;

#endif


@interface TXDeviceManager : NSObject

- (instancetype)init NS_UNAVAILABLE;

#if TARGET_OS_IPHONE

/**
 * 判断当前是否为前置摄像头
 */
- (BOOL)isFrontCamera;

/**
 * 切换摄像头
 */
- (NSInteger)switchCamera:(BOOL)frontCamera;

/**
 * 查询当前摄像头是否支持缩放
 */
- (BOOL)isCameraZoomSupported;

/**
 * 查询当前摄像头支持的最大缩放比例
 */
- (CGFloat)getCameraZoomMaxRatio;

/**
 * 设置当前摄像头的缩放比例
 *
 * @param zoomRatio 取值范围1 - 5，取值为1表示最远视角（正常镜头），取值为5表示最近视角（放大镜头）。
 * 最大值推荐为5，若超过5，视频数据会变得模糊不清。默认值为1。
 */
- (NSInteger)setCameraZoomRatio:(CGFloat)zoomRatio;

/**
 * 查询是否支持自动识别人脸位置
 */
- (BOOL)isAutoFocusEnabled;

/**
 * 设置人脸自动识别
 *
 * @param enabled YES: 开启；NO：关闭，默认值：YES
 */
- (NSInteger)enableCameraAutoFocus:(BOOL)enabled;

/**
 * 设置摄像头焦点
 *
 * @param position 对焦位置
 */
- (NSInteger)setCameraFocusPosition:(CGPoint)position;

/**
 * 查询是否支持开关闪光灯（手电筒模式）
 */
- (BOOL)isCameraTorchSupported;

/**
 * 开关闪光灯
 *
 * enabled YES：开启；NO：关闭，默认值：NO
 */
- (NSInteger)enableCameraTorch:(BOOL)enabled;

/**
 * 设置通话时使用的系统音量类型
 *
 * @note
 *   1. 需要在调用 startLocalAudio() 之前调用该接口。
 *   2. 如无特殊需求，不推荐您自行设置，您只需通过 enterRoom 设置好适合您的场景，SDK 内部会自动选择相匹配的音量类型。
 *
 * @param type 系统音量类型，参见 TXSystemVolumeType 说明。如无特殊需求，不推荐您自行设置。
 */
- (NSInteger)setSystemVolumeType:(TXSystemVolumeType)type;

/**
 * 设置音频路由
 *
 * 微信和手机 QQ 视频通话功能的免提模式就是基于音频路由实现的。
 * 一般手机都有两个扬声器，一个是位于顶部的听筒扬声器，声音偏小；一个是位于底部的立体声扬声器，声音偏大。
 * 设置音频路由的作用就是决定声音使用哪个扬声器播放。
 *
 * @param route 音频路由，即声音由哪里输出（扬声器、听筒），默认值：TXAudioRouteSpeakerphone
 */
- (NSInteger)setAudioRoute:(TXAudioRoute)route;

#elif TARGET_OS_MAC

/**
 * 获取设备列表
 *
 * @param type 设备类型
 */
- (NSArray<TXMediaDeviceInfo *> * _Nullable)getDevicesList:(TXMediaDeviceType)type;

/**
 * 设置要使用的设备
 *
 * @param type 设备类型
 * @param deviceId 从 getDevicesList 中得到的设备 ID
 */
- (NSInteger)setCurrentDevice:(TXMediaDeviceType)type deviceId:(NSString *)deviceId;

/**
 * 获取当前的设备信息
 *
 * @param type 设备类型
 */
- (TXMediaDeviceInfo * _Nullable)getCurrentDevice:(TXMediaDeviceType)type;

/**
 * 设置当前设备的音量
 *
 * @param volume 音量值，范围0 - 100
 * @param type 设备类型，仅支持 AudioInput 和 AudioOutput 类型。
 */
- (NSInteger)setCurrentDeviceVolume:(NSInteger)volume deviceType:(TXMediaDeviceType)type;

/**
 * 获取当前设备的音量
 *
 * @param type 设备类型，仅支持 AudioInput 和 AudioOutput 类型。
 */
- (NSInteger)getCurrentDeviceVolume:(TXMediaDeviceType)type;

/**
 * 设置当前设备的静音状态
 *
 * @param mute 设置为 YES 时，麦克风设备静音
 * @param type 设备类型，仅支持 AudioInput 和 AudioOutput 类型。
 */
- (NSInteger)setCurrentDeviceMute:(BOOL)mute deviceType:(TXMediaDeviceType)type;

/**
 * 获取当前设备的静音状态
 *
 * @param type 设备类型，仅支持 AudioInput 和 AudioOutput 类型。
 */
- (BOOL)getCurrentDeviceMute:(TXMediaDeviceType)type;

/**
 * 开始摄像头测试
 *
 * @note 在测试过程中可以使用 setCurrentCameraDevice 接口切换摄像头。
 * @param view 预览画面所在的父控件
 */
- (NSInteger)startCameraDeviceTest:(NSView *)view;

/**
 * 结束摄像头测试
 */
- (NSInteger)stopCameraDeviceTest;

/**
 * 开始麦克风测试
 *
 * 该方法测试麦克风是否能正常工作，volume 的取值范围为0 - 100。
 */
- (NSInteger)startMicDeviceTest:(NSInteger)interval testEcho:(void (^)(NSInteger volume))testEcho;

/**
 * 结束麦克风测试
 */
- (NSInteger)stopMicDeviceTest;

/**
 * 开始扬声器测试
 *
 * 该方法播放指定的音频文件测试播放设备是否能正常工作。如果能听到声音，说明播放设备能正常工作。
 */
- (NSInteger)startSpeakerDeviceTest:(NSString *)audioFilePath onVolumeChanged:(void (^)(NSInteger volume, BOOL isLastFrame))volumeBlock;

/**
 * 结束扬声器测试
 */
- (NSInteger)stopSpeakerDeviceTest;

#endif

@end

#if TARGET_OS_IPHONE
/**
 * 系统音量类型
 *
 * 智能手机一般具备两种系统音量类型，即通话音量类型和媒体音量类型。
 * - 通话音量：手机专门为通话场景设计的音量类型，使用手机自带的回声抵消功能，音质相比媒体音量类型较差，
 *             无法通过音量按键将音量调成零，但是支持蓝牙耳机上的麦克风。
 *
 * - 媒体音量：手机专门为音乐场景设计的音量类型，音质相比于通话音量类型要好，通过通过音量按键可以将音量调成零。
 *             使用媒体音量类型时，如果要开启回声抵消（AEC）功能，SDK 会开启内置的声学处理算法对声音进行二次处理。
 *             在媒体音量模式下，蓝牙耳机无法使用自带的麦克风采集声音，只能使用手机上的麦克风进行声音采集。
 *
 * SDK 目前提供了三种系统音量类型的控制模式，分别为：
 * - Auto：“麦上通话，麦下媒体”，即主播上麦时使用通话音量，观众不上麦则使用媒体音量，适合在线直播场景。
 *         如果您在 enterRoom 时选择的场景为 TRTCAppSceneLIVE 或 TRTCAppSceneVoiceChatRoom，SDK 会自动选择该模式。
 *
 * - VOIP：全程使用通话音量，适合多人会议场景。
 *         如果您在 enterRoom 时选择的场景为 TRTCAppSceneVideoCall 或 TRTCAppSceneAudioCall，SDK 会自动选择该模式。
 *
 * - Media：通话全程使用媒体音量，不常用，适合个别有特殊需求（如主播外接声卡）的应用场景。
 *
 */
typedef NS_ENUM(NSInteger, TXSystemVolumeType) {
    TXSystemVolumeTypeAuto = 0,
    TXSystemVolumeTypeMedia = 1,
    TXSystemVolumeTypeVOIP = 2,
};


/**
 * 声音播放模式（音频路由）
 *
 * 微信和手机 QQ 里的视频通话功能，都有一个免提模式，开启后就不用把手机贴在耳朵上，这个功能就是基于音频路由实现的。
 * 一般手机都有两个扬声器，设置音频路由的作用就是要决定声音从哪个扬声器播放出来：
 * - Speakerphone：扬声器，位于手机底部，声音偏大，适合外放音乐。
 * - Earpiece：听筒，位于手机顶部，声音偏小，适合通话。
 */
typedef NS_ENUM(NSInteger, TXAudioRoute) {
    TXAudioRouteSpeakerphone = 0,   ///< 扬声器
    TXAudioRouteEarpiece = 1,   ///< 听筒
};


#elif TARGET_OS_MAC
/**
 * 设备类型（仅 Mac）
 *
 * 在 Mac 上，每一种类型的设备都可能有多个，TRTC SDK 的 Mac 版本提供了一系列函数用来操作这些设备。
 */
typedef NS_ENUM(NSInteger, TXMediaDeviceType) {
    TXMediaDeviceTypeUnknown = -1,  ///< 未定义
    TXMediaDeviceTypeAudioInput = 0,  ///< 麦克风
    TXMediaDeviceTypeAudioOutput = 1,  ///< 扬声器或听筒
    TXMediaDeviceTypeVideoCamera = 2,  ///< 摄像头
};

/**
 * 设备描述
 *
 * 在 Mac 上，每一种类型的设备都可能有多个，TRTC SDK 的 Mac 版本提供了一系列函数用来操作这些设备。
 */
@interface TXMediaDeviceInfo : NSObject
/// 设备类型
@property (assign, nonatomic) TXMediaDeviceType type;
/// 设备ID
@property (copy, nonatomic, nullable) NSString *deviceId;
/// 设备名称
@property (copy, nonatomic, nullable) NSString *deviceName;
@end

#endif

NS_ASSUME_NONNULL_END
