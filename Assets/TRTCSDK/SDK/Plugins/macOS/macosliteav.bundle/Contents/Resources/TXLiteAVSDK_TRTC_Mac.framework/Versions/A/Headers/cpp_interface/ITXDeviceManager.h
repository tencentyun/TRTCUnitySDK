#ifndef __ITXDEVICEMANAGER_H__
#define __ITXDEVICEMANAGER_H__

#include <stdint.h>
#ifdef __APPLE__
#include <TargetConditionals.h>
#endif

namespace trtc {

class ITRTCVideoRenderCallback;

/// @defgroup ITXDeviceManager_cplusplus ITXDeviceManager
/// 腾讯云视频通话功能的设备管理接口类
/// @{
/**
 * 系统音量类型（仅适用于移动端设备）
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
enum TXSystemVolumeType
{
    /// “麦上通话，麦下媒体”，即主播上麦时使用通话音量，观众不上麦则使用媒体音量，适合在线直播场景。<br>
    /// 如果您在 enterRoom 时选择的场景为 TRTCAppSceneLIVE 或 TRTCAppSceneVoiceChatRoom，SDK 会自动选择该模式。
    TXSystemVolumeTypeAuto             = 0,

    /// 通话全程使用媒体音量，不常用，适合个别有特殊需求（如主播外接声卡）的应用场景。
    TXSystemVolumeTypeMedia            = 1,

    /// 全程使用通话音量，适合多人会议场景。<br>
    /// 如果您在 enterRoom 时选择的场景为 TRTCAppSceneVideoCall 或 TRTCAppSceneAudioCall 会自动选择该模式。
    TXSystemVolumeTypeVOIP             = 2,
};

/**
 * 声音播放路由（仅适用于移动端设备）
 *
 * 一般手机都有两个扬声器，设置音频路由的作用就是要决定声音从哪个扬声器播放出来：
 * - Speakerphone：扬声器，位于手机底部，声音偏大，适合外放音乐。
 * - Earpiece：听筒，位于手机顶部，声音偏小，适合通话。
 */
enum TXAudioRoute {
    TXAudioRouteSpeakerphone  =   0,   ///< 扬声器
    TXAudioRouteEarpiece      =   1,   ///< 听筒
};

/**
 * 设备类型
 */
enum TXMediaDeviceType
{
    TXMediaDeviceTypeUnknown = -1,                         ///< 未知类型
    TXMediaDeviceTypeMic     = 0,                          ///< 麦克风
    TXMediaDeviceTypeSpeaker = 1,                          ///< 扬声器或听筒
    TXMediaDeviceTypeCamera  = 2,                          ///< 摄像头
};

/**
 * 设备列表
 */
class ITXDeviceCollection {
   protected:
    virtual ~ITXDeviceCollection() {
    }

   public:
    /**
     * @return 设备个数
     */
    virtual uint32_t getCount() = 0;

    /**
     * @return 设备名称，字符编码格式是UTF-8
     */
    virtual const char* getDeviceName(uint32_t index) = 0;

    /**
     * @return 设备PID，字符编码格式是UTF-8
     */
    virtual const char* getDevicePID(uint32_t index) = 0;

    /**
     * @brief 遍历完设备后，调用release释放资源。
     */
    virtual void release() = 0;
};

/**
 * 设备 Item 信息
 */
class ITXDeviceInfo {
   protected:
    virtual ~ITXDeviceInfo() {
    }

   public:
    /**
     * @return 设备名称，字符编码格式是UTF-8
     */
    virtual const char* getDeviceName() = 0;

    /**
     * @return 设备PID，字符编码格式是UTF-8
     */
    virtual const char* getDevicePID() = 0;

    /**
     * @brief 获取完设备信息后，调用release释放资源。
     */
    virtual void release() = 0;
};

class ITXDeviceManager {
protected:
    ITXDeviceManager() {}
    virtual ~ITXDeviceManager() {}

public:
    
#if (__APPLE__ && TARGET_OS_MAC && !TARGET_OS_IPHONE) || _WIN32
    /**
     * 获取设备列表
     *
     * @param type  设备类型，指定需要获取哪种设备的列表。详见 TXMediaDeviceType 定义。
     *
     * @note - delete ITXDeviceCollection* 指针会导致编译错误，SDK 维护 ITXDeviceCollection 对象的生命周期
     *       - 使用完毕后请调用 release 方法释放资源
     *       - type 只支持 TXMediaDeviceTypeMic、TXMediaDeviceTypeSpeaker、TXMediaDeviceTypeCamera
     *       - 此接口只支持 Mac 和 Windows 平台
     */
    virtual ITXDeviceCollection* getDevicesList(TXMediaDeviceType type) = 0;

    /**
     * 指定当前设备
     *
     * @param type  设备类型，根据设备类型指定当前设备。详见 TXMediaDeviceType 定义。
     * @param deviceId  从 getDevicesList 中得到的设备 ID
     * @return 0：操作成功 负数：失败
     * @note - type 只支持 TXMediaDeviceTypeMic、TXMediaDeviceTypeSpeaker、TXMediaDeviceTypeCamera
     *       - 此接口只支持 Mac 和 Windows 平台
     */
    virtual int setCurrentDevice(TXMediaDeviceType type, const char* deviceId) = 0;

    /**
     * 获取当前使用的设备
     *
     * @param type  设备类型，根据设备类型获取当前设备信息。详见 TXMediaDeviceType 定义。
     * @return ITRTCDeviceInfo 设备信息，能获取设备 ID 和设备名称
     * @note 此接口只支持 Mac 和 Windows 平台
     */
    virtual ITXDeviceInfo* getCurrentDevice(TXMediaDeviceType type) = 0;

    /**
     * 设置当前设备的音量
     *
     * @param type  设备类型，根据设备类型获取当前设备音量。详见 TXMediaDeviceType 定义。
     * @param volume 音量大小
     * @return 0：操作成功 负数：失败
     * @note - type 只支持 TXMediaDeviceTypeMic、TXMediaDeviceTypeSpeaker
     *       - 此接口只支持 Mac 和 Windows 平台
     */
    virtual int setCurrentDeviceVolume(TXMediaDeviceType type, uint32_t volume) = 0;

    /**
     * 获取当前设备的音量
     *
     * @param type  设备类型，根据设备类型获取当前设备音量。详见 TXMediaDeviceType 定义。
     *
     * @note - type 只支持 TXMediaDeviceTypeMic、TXMediaDeviceTypeSpeaker
     *       - 此接口只支持 Mac 和 Windows 平台
     */
    virtual uint32_t getCurrentDeviceVolume(TXMediaDeviceType type) = 0;

    /**
     * 设置当前设备是否静音
     *
     * @param type  设备类型，根据设备类型设置当前设备状态。详见 TXMediaDeviceType 定义。
     * @param mute 是否静音/禁画
     * @return 0：操作成功 负数：失败
     * @note - type 只支持 TXMediaDeviceTypeMic、TXMediaDeviceTypeSpeaker
     *       - 此接口只支持 Mac 和 Windows 平台
     */
    virtual int setCurrentDeviceMute(TXMediaDeviceType type, bool mute) = 0;

    /**
     * 查询当前设备是否静音
     *
     * @param type  设备类型，根据设备类型获取当前设备状态。详见 TXMediaDeviceType 定义。
     * @return true : 当前设备已静音；false : 当前设备未静音
     * @note type 只支持 TXMediaDeviceTypeMic、TXMediaDeviceTypeSpeaker
     */
    virtual bool getCurrentDeviceMute(TXMediaDeviceType type) = 0;

    /**
     * 开始摄像头测试
     *
     * @param view 预览控件所在的父控件
     * @return 0：操作成功 负数：失败
     * @note - 在测试过程中可以使用 setCurrentCameraDevice 接口切换摄像头。
     *       - 此接口只支持 Mac 和 Windows 平台
     */
    virtual int startCameraDeviceTest(void* view) = 0;

#ifdef _WIN32
    /**
     * 开始进行摄像头测试
     * 会触发 onFirstVideoFrame 回调接口
     *
     * @param callback 摄像头预览自定义渲染画面回调
     * @return 0：操作成功 负数：失败
     * @note - 在测试过程中可以使用 setCurrentCameraDevice 接口切换摄像头。
     *       - 此接口只支持 Windows 平台
     */
    virtual int startCameraDeviceTest(ITRTCVideoRenderCallback* callback) = 0;
#endif

    /**
     * 结束摄像头测试
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Mac 和 Windows 平台
     */
    virtual int stopCameraDeviceTest() = 0;

    /**
     * 开始麦克风测试
     *
     * @param interval 音量回调间隔
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Mac 和 Windows 平台
     */
    virtual int startMicDeviceTest(uint32_t interval) = 0;

    /**
     * 结束麦克风测试
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Mac 和 Windows 平台
     */
    virtual int stopMicDeviceTest() = 0;

    /**
     * 开始扬声器测试
     *
     * 该方法播放指定的音频文件测试播放设备是否能正常工作。如果能听到声音，说明播放设备能正常工作。
     * @param filePath 声音文件的路径
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Mac 和 Windows 平台
     */
    virtual int startSpeakerDeviceTest(const char* filePath) = 0;

    /**
     * 停止扬声器测试
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Mac 和 Windows 平台
     */
    virtual int stopSpeakerDeviceTest() = 0;

#ifdef _WIN32
    /**
     * 设置 Windows 系统音量合成器中当前进程的音量
     *
     * @param volume 音量值，取值范围[0~100]
     * @return 0:成功
     */
    virtual int setApplicationPlayVolume(int volume) = 0;

    /**
     * 获取 Windows 系统音量合成器中当前进程的音量
     *
     * @return 返回音量值，取值范围[0~100]
     */
    virtual int getApplicationPlayVolume() = 0;

    /**
     * 设置 Windows 系统音量合成器中当前进程的静音状态
     *
     * @param bMute 是否设置为静音状态
     * @return 0 设置成功
     */
    virtual int setApplicationMuteState(bool bMute) = 0;

    /**
     * 获取 Windows 系统音量合成器中当前进程的静音状态
     *
     * @return 返回静音状态
     */
    virtual bool getApplicationMuteState() = 0;
#endif
 
#elif __ANDROID__ || (__APPLE__ && TARGET_OS_IOS)
    /**
     * 切换摄像头
     *
     * @param frontCamera YES：切换到前置摄像头 NO：切换到后置摄像头
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int switchCamera(bool frontCamera) = 0;

    /**
     * 当前是否为前置摄像头
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual bool isFrontCamera() = 0;

    /**
     * 获取摄像头最大缩放倍数
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual float getCameraZoomMaxRatio() = 0;

    /**
     * 设置摄像头缩放倍数
     *
     * @param zoomRatio 缩放倍数
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int setCameraZoomRatio(float zoomRatio) = 0;

    /**
     * 设置是否自动识别人脸位置
     *
     * @param enabled YES：开启；NO：关闭，默认值：YES
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int enableCameraAutoFocus (bool enabled) = 0;

    /**
     * 查询是否支持自动识别人脸位置
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual bool isAutoFocusEnabled () = 0;

    /**
     * 设置摄像头焦点
     *
     * @param x 焦点横坐标
     * @param y 焦点纵坐标
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int setCameraFocusPosition (float x, float y) = 0;

    /**
     * 设置是否开启闪光灯
     *
     * @param enabled  YES：开启；NO：关闭，默认值：NO
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int enableCameraTorch (bool enabled) = 0;

    /**
     * 设置通话时使用的系统音量类型
     *
     * @note
     *   1. 需要在调用 startLocalAudio() 之前调用该接口。<br>
     *   2. 如无特殊需求，不推荐您自行设置，您只需通过 enterRoom 设置好适合您的场景，SDK 内部会自动选择相匹配的音量类型。
     *
     * @param type 系统音量类型，如无特殊需求，不推荐您自行设置。
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int setSystemVolumeType (TXSystemVolumeType type) = 0;

    /**
     * 设置设置音频路由
     *
     * 微信和手机 QQ 视频通话功能的免提模式就是基于音频路由实现的。
     * 一般手机都有两个扬声器，一个是位于顶部的听筒扬声器，声音偏小；一个是位于底部的立体声扬声器，声音偏大。
     * 设置音频路由的作用就是决定声音使用哪个扬声器播放。
     *
     * @param route 音频路由，即声音由哪里输出（扬声器、听筒），默认值：TXAudioRouteSpeakerphone
     * @return 0：操作成功 负数：失败
     * @note 此接口只支持 Android 和 iOS 平台
     */
    virtual int setAudioRoute (TXAudioRoute route) = 0;
    
#endif

};
/// @}
}

#endif /* ITXDeviceManager_h */
