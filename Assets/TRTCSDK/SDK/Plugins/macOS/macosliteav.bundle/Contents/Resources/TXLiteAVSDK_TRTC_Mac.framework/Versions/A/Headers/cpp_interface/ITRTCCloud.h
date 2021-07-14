#ifndef __ITRTCCLOUD_H__
#define __ITRTCCLOUD_H__
/*
 * Module:   ITRTCCloud @ TXLiteAVSDK
 *
 * SDK VERSION 8.6.10096
 *
 * Function: 腾讯云视频通话功能的主要接口类
 *
 * 创建/使用/销毁 ITRTCCloud 对象的示例代码：
 * <pre>
 *     ITRTCCloud *trtcCloud = getTRTCShareInstance();
 *     if(trtcCloud) {
 *         std::string version(trtcCloud->getSDKVersion());
 *     }
 *     //
 *     //
 *     destroyTRTCShareInstance();
 *     trtcCloud = nullptr;
 * </pre>
 */

#include "TRTCCloudCallback.h"
#include "TRTCTypeDef.h"
#include "ITXAudioEffectManager.h"
#include "ITXDeviceManager.h"
#ifdef _WIN32
#include "IDeprecatedTRTCCloud.h"
#include "TXLiteAVBase.h"
#endif  // _WIN32


namespace trtc {
class ITRTCCloud;
}

/// @defgroup ITRTCCloud_cplusplus ITRTCCloud
/// 腾讯云视频通话功能的主要接口类
/// @{
extern "C" {
    /// @name 创建与销毁 ITRTCCloud 单例
    /// @{

#ifdef __ANDROID__
    /**
     * @brief 用于动态加载 dll 时，获取 ITRTCCloud 对象指针。
     *
     * @return 返回 ITRTCCloud 单例对象的指针，注意：delete ITRTCCloud* 会编译错误，需要调用 destroyTRTCCloud 释放单例指针对象。
     * @param context Android 上下文，内部会转为 ApplicationContext 用于系统 API 调用，如果传入的 context 为空，内部会自动获取当前进程的 ApplicationContext
     * @note 本接口仅适用于 Android 平台
     */
    TRTC_API trtc::ITRTCCloud* getTRTCShareInstance(void *context);
#else
    /**
     * @brief 用于动态加载 dll 时，获取 ITRTCCloud 对象指针。
     *
     * @return 返回 ITRTCCloud 单例对象的指针，注意：delete ITRTCCloud* 会编译错误，需要调用 destroyTRTCCloud 释放单例指针对象。
     * @note 本接口适用于 Windows、Mac、iOS 平台
     */
    TRTC_API trtc::ITRTCCloud* getTRTCShareInstance();
#endif
    /**
     * @brief 释放 ITRTCCloud 单例对象。
     */
    TRTC_API void destroyTRTCShareInstance();
    /// @}
}

namespace trtc {

class ITRTCCloud
#ifdef _WIN32
    : public IDeprecatedTRTCCloud
#endif  // _WIN32
{
   protected:
    virtual ~ITRTCCloud(){};

public:
    /////////////////////////////////////////////////////////////////////////////////
    //

    //                       设置 TRTCCloudCallback 回调
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 设置 ITRTCCloudCallback 回调
    /// @{
    /**
     * 设置回调接口 ITRTCCloudCallback
     *
     * 您可以通过 ITRTCCloudCallback 获得来自 SDK 的各种状态通知，详见 ITRTCCloudCallback.h 中的定义
     *
     * @param callback 事件回调指针
     */
    virtual void addCallback(ITRTCCloudCallback* callback) = 0;

    /**
     * 移除事件回调
     *
     * @param callback 事件回调指针
     */
    virtual void removeCallback(ITRTCCloudCallback* callback) = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （一）房间相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 房间相关接口函数
    /// @{
    /**
     * 1.1 进入房间
     *
     * 调用接口后，您会收到来自 ITRTCCloudCallback 中的 onEnterRoom(result) 回调:
     * - 如果加入成功，result 会是一个正数（result > 0），表示加入房间的时间消耗，单位是毫秒（ms）。
     * - 如果加入失败，result 会是一个负数（result < 0），表示进房失败的错误码。
     *
     * 进房失败的错误码含义请参见[错误码](https://cloud.tencent.com/document/product/647/32257)。
     *
     *  - {@link TRTCAppSceneVideoCall}：<br>
     *           视频通话场景，支持720P、1080P高清画质，单个房间最多支持300人同时在线，最高支持50人同时发言。<br>
     *           适合：[1对1视频通话]、[300人视频会议]、[在线问诊]、[远程面试]等。<br>
     *  - {@link TRTCAppSceneAudioCall}：<br>
     *           语音通话场景，支持 48kHz，支持双声道。单个房间最多支持300人同时在线，最高支持50人同时发言。<br>
     *           适合：[1对1语音通话]、[300人语音会议]、[在线狼人杀]、[语音聊天室]等。<br>
     *  - {@link TRTCAppSceneLIVE}：<br>
     *           视频互动直播，支持平滑上下麦，切换过程无需等待，主播延时小于300ms；支持十万级别观众同时播放，播放延时低至1000ms。<br>
     *           适合：[在线互动课堂]、[互动直播]、[视频相亲]、[远程培训]、[超大型会议]等。<br>
     *  - {@link TRTCAppSceneVoiceChatRoom}：<br>
     *           语音互动直播，支持平滑上下麦，切换过程无需等待，主播延时小于300ms；支持十万级别观众同时播放，播放延时低至1000ms。<br>
     *           适合：[语聊房]、[K 歌房]、[FM 电台]等。<br>
     *
     * @param param 进房参数，请参考 trtc::TRTCParams
     * @param scene 应用场景，目前支持视频通话（VideoCall）、在线直播（Live）、语音通话（AudioCall）、语音聊天室（VoiceChatRoom）四种场景。
     *
     * @note
     *  1. 当 scene 选择为 TRTCAppSceneLIVE 或 TRTCAppSceneVoiceChatRoom 时，您必须通过 TRTCParams 中的 role 字段指定当前用户的角色。<br>
     *  2. 不管进房是否成功，enterRoom 都必须与 exitRoom 配对使用，在调用 exitRoom 前再次调用 enterRoom 函数会导致不可预期的错误问题。
     */
    virtual void enterRoom(const TRTCParams& params, TRTCAppScene scene) = 0;

    /**
     * 1.2 离开房间
     *
     * 调用 exitRoom() 接口会执行退出房间的相关逻辑，例如释放音视频设备资源和编解码器资源等。
     * 待资源释放完毕，SDK 会通过 ITRTCCloudCallback 中的 onExitRoom() 回调通知您。
     *
     * 如果您要再次调用 enterRoom() 或者切换到其他的音视频 SDK，请等待 onExitRoom() 回调到来后再执行相关操作。
     * 否则可能会遇到如摄像头、麦克风设备被强占等各种异常问题。
     */
    virtual void exitRoom() = 0;

    /**
     * 1.3 切换角色，仅适用于直播场景（TRTCAppSceneLIVE 和 TRTCAppSceneVoiceChatRoom）
     *
     * 在直播场景下，一个用户可能需要在“观众”和“主播”之间来回切换。
     * 您可以在进房前通过 TRTCParams 中的 role 字段确定角色，也可以通过 switchRole 在进房后切换角色。
     *
     * @param role 目标角色，默认为主播：
     *  - {@link TRTCRoleAnchor} 主播，可以上行视频和音频，一个房间里最多支持50个主播同时上行音视频。
     *  - {@link TRTCRoleAudience} 观众，只能观看，不能上行视频和音频，一个房间里的观众人数没有上限。
     */
    virtual void switchRole(TRTCRoleType role) = 0;

    /**
     * 1.4 请求跨房通话（主播 PK）
     *
     * TRTC 中两个不同音视频房间中的主播，可以通过“跨房通话”功能拉通连麦通话功能。使用此功能时，
     * 两个主播无需退出各自原来的直播间即可进行“连麦 PK”。
     *
     * 例如：当房间“001”中的主播 A 通过 connectOtherRoom() 跟房间“002”中的主播 B 拉通跨房通话后，
     * 房间“001”中的用户都会收到主播 B 的 onUserEnter(B) 回调和 onUserVideoAvailable(B,true) 回调。
     * 房间“002”中的用户都会收到主播 A 的 onUserEnter(A) 回调和 onUserVideoAvailable(A,true) 回调。
     *
     * 简言之，跨房通话的本质，就是把两个不同房间中的主播相互分享，让每个房间里的观众都能看到两个主播。
     *
     * <pre>
     *                 房间 001                     房间 002
     *               -------------               ------------
     *  跨房通话前：| 主播 A      |             | 主播 B     |
     *              | 观众 U V W  |             | 观众 X Y Z |
     *               -------------               ------------
     *
     *                 房间 001                     房间 002
     *               -------------               ------------
     *  跨房通话后：| 主播 A B    |             | 主播 B A   |
     *              | 观众 U V W  |             | 观众 X Y Z |
     *               -------------               ------------
     * </pre>
     *
     * 跨房通话的参数考虑到后续扩展字段的兼容性问题，暂时采用了 JSON 格式的参数，要求至少包含两个字段：
     * - roomId：房间“001”中的主播 A 要跟房间“002”中的主播 B 连麦，主播 A 调用 connectOtherRoom() 时 roomId 应指定为“002”。
     * - userId：房间“001”中的主播 A 要跟房间“002”中的主播 B 连麦，主播 A 调用 connectOtherRoom() 时 userId 应指定为 B 的 userId。
     *
     * 跨房通话的请求结果会通过 ITRTCCloudCallback 中的 onConnectOtherRoom() 回调通知给您。
     *
     * <pre>
     *   //此处用到 jsoncpp 库来格式化 JSON 字符串
     *   Json::Value jsonObj;
     *   jsonObj["roomId"] = 002;
     *   jsonObj["userId"] = "userB";
     *   Json::FastWriter writer;
     *   std::string params = writer.write(jsonObj);
     *   trtc.ConnectOtherRoom(params.c_str());
     * </pre>
     *
     * @note 如果进房时，使用的是字符串房间号码，上面的 roomId 也需要相应改为 strRoomId。
     * <pre>
     *   //此处用到 jsoncpp 库来格式化 JSON 字符串
     *   Json::Value jsonObj;
     *   jsonObj["strRoomId"] = "002";
     *   jsonObj["userId"] = "userB";
     *   Json::FastWriter writer;
     *   std::string params = writer.write(jsonObj);
     *   trtc.ConnectOtherRoom(params.c_str());
     * </pre>
     *
     * @param params JSON 字符串连麦参数，roomId 代表目标房间号，userId 代表目标用户 ID。
     *
     */
    virtual void connectOtherRoom(const char* params) = 0;

    /**
     * 1.5 关闭跨房连麦
     *
     * 跨房通话的退出结果会通过 ITRTCCloudCallback 中的 onDisconnectOtherRoom() 回调通知给您。
     */
    virtual void disconnectOtherRoom() = 0;

    /**
     * 1.6 设置音视频数据接收模式，需要在进房前设置才能生效
     *
     * 为实现进房秒开的绝佳体验，SDK 默认进房后自动接收音视频。即在您进房成功的同时，您将立刻收到远端所有用户的音视频数据。
     * 若您没有调用 startRemoteView，视频数据将自动超时取消。
     * 若您主要用于语音聊天等没有自动接收视频数据需求的场景，您可以根据实际需求选择接收模式，以免产生预期之外的视频时长费用。
     *
     * @param  autoRecvAudio true：自动接收音频数据；false：需要调用 muteRemoteAudio 进行请求或取消。默认值：true
     * @param  autoRecvVideo true：自动接收视频数据；false：需要调用 startRemoteView/stopRemoteView 进行请求或取消。默认值：true
     *
     * @note 需要在进房前设置才能生效。
     */
    virtual void setDefaultStreamRecvMode(bool autoRecvAudio, bool autoRecvVideo) = 0;

#if _WIN32||__APPLE__
    /**
     * 1.7 创建子 TRTCCloud 实例
     *
     * 子 TRTCCloud 实例用于进入其他房间，观看其他房间主播的音视频流，还可以在不同的房间之间切换推送音视频流。
     *
     * 此接口主要应用于类似超级小班课这种需要进入多个房间推拉流的场景。
     *
     * <pre>
     *   ITRTCCloud *mainCloud = getTRTCShareInstance();
     *   // 1、mainCloud 进房并开始推送音视频流。
     *   // 2、创建子 TRTCCloud 实例并进入其他房间。
     *   ITRTCCloud *subCloud = mainCloud->createSubCloud();
     *   subCloud->enterRoom(params, scene);
     *
     *   // 3、切换房间推送音视频流。
     *   // 3.1、mainCloud 停止推送音视频流。
     *   mainCloud->switchRole(TRTCRoleAudience);
     *   mainCloud->muteLocalVideo(true);
     *   mainCloud->muteLocalAudio(true);
     *   // 3.2、subCLoud 推送音视频流。
     *   subCloud->switchRole(TRTCRoleAnchor);
     *   subCloud->muteLocalVideo(false);
     *   subCloud->muteLocalAudio(false);
     *
     *   // 4、subCLoud 退房。
     *   subCloud->exitRoom();
     *
     *   // 5、销毁 subCLoud。
     *   mainCloud->destroySubCloud(subCloud);
     * </pre>
     *
     * @return 子 TRTCCloud 实例
     * @note
     *  - 此方法目前仅支持 Windows、iOS、Mac 平台
     *  - 同一个用户，可以使用同一个 userId 进入多个不同 roomId 的房间。
     *  - 两台手机不可以同时使用同一个 userId 进入同一个 roomId 的房间。
     *  - 通过 createSubCloud 接口创建出来的子房间 TRTCCloud 实例有一个能力限制：不能调用子实例中与本地音视频
     *    相关的接口（除了 switchRole、muteLocalVideo 和 muteLocalAudio 之外）， 设置美颜等接口请使用
     *    原 TRTCCloud 实例对象。
     *  - 同一个用户，同时只能在一个 TRTCCloud 实例中推流，在不同房间同时推流会引发云端的状态混乱，导致各种 bug。
     */
    virtual ITRTCCloud* createSubCloud() = 0;

    /**
     * 1.8 销毁子 TRTCCloud 实例
     *
     * @note 此方法目前仅支持 Windows、iOS、Mac 平台
     */
    virtual void destroySubCloud(ITRTCCloud *cloud) = 0;
#endif
    
    /**
     * 1.9 切换房间
     *
     * 调用该接口后，用户会先退出原来的房间并快速进入 TRTCSwitchRoomConfig 中指定的新房间:
     * 相比于直接调用 exitRoom + enterRoom 的方式，switchRoom 接口对主播更加友好，因为 switchRoom
     * 不会停止主播端视频的采集和预览。
     * 接口调用结果会通过 ITRTCCloudCallback 中的 onSwitchRoom(errCode, errMsg) 回调通知给您。
     *
     * @param config 房间切换参数，请参考 {@link TRTCSwitchRoomConfig}
     */
    virtual void switchRoom(const TRTCSwitchRoomConfig& config) = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （二）CDN 相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name CDN 相关接口函数
    /// @{
    /**
     * 2.1 开始向腾讯云的直播 CDN 推流
     *
     * 该接口会指定当前用户的音视频流在腾讯云 CDN 所对应的 StreamId，进而可以指定当前用户的 CDN 播放地址。
     *
     * 例如：如果我们采用如下代码设置当前用户的主画面 StreamId 为 user_stream_001，那么该用户主画面对应的 CDN 播放地址为：
     * “http://yourdomain/live/user_stream_001.flv”，其中 yourdomain 为您自己备案的播放域名，
     * 您可以在直播[控制台](https://console.cloud.tencent.com/live) 配置您的播放域名，腾讯云不提供默认的播放域名。
     *
     * <pre>
     *  ITRTCCloud *trtcCloud = getTRTCShareInstance();
     *  trtcCloud->enterRoom(params, TRTCAppSceneLIVE);
     *  trtcCloud->startLocalPreview(TXView);
     *  trtcCloud->startLocalAudio(TRTCAudioQuality);
     *  trtcCloud->startPublishing("user_stream_001", TRTCVideoStreamTypeBig);
     * </pre>
     *
     * 您也可以在设置 enterRoom 的参数 TRTCParams 时指定 streamId, 而且我们更推荐您采用这种方案。
     *
     * @param streamId 自定义流 ID。
     * @param type 仅支持 TRTCVideoStreamTypeBig 和 TRTCVideoStreamTypeSub。
     * @note 您需要先在实时音视频 [控制台](https://console.cloud.tencent.com/rav/) 中的功能配置页开启“启用旁路推流”才能生效。
     *  - 若您选择“指定流旁路”，则您可以通过该接口将对应音视频流推送到腾讯云 CDN 且指定为填写的流 ID。
     *  - 若您选择“全局自动旁路”，则您可以通过该接口调整默认的流 ID。
     */
    virtual void startPublishing(const char* streamId, TRTCVideoStreamType type) = 0;

    /**
     * 2.2 停止向腾讯云的直播 CDN 推流
     */
    virtual void stopPublishing() = 0;

    /**
     * 2.3 开始向友商云的直播 CDN 转推
     *
     * 该接口跟 startPublishing() 类似，但 startPublishCDNStream() 支持向非腾讯云的直播 CDN 转推。
     * @param param CDN 转推参数，请参考 TRTCTypeDef.h 中关于 TRTCPublishCDNParam 的介绍。
     * @note 使用 startPublishing() 绑定腾讯云直播 CDN 不收取额外的费用，但使用 startPublishCDNStream() 绑定非腾讯云直播 CDN 需要收取转推费用。
     */
    virtual void startPublishCDNStream(const TRTCPublishCDNParam& param) = 0;

    /**
     * 2.4 停止向非腾讯云地址转推
    */
    virtual void stopPublishCDNStream() = 0;

    /**
     * 2.5 设置云端的混流转码参数
     *
     * 如果您在实时音视频 [控制台](https://console.cloud.tencent.com/trtc/) 中的功能配置页开启了“启动自动旁路直播”功能，
     * 房间里的每一路画面都会有一个默认的直播 [CDN 地址](https://cloud.tencent.com/document/product/647/16826)。
     *
     * 一个直播间中可能有不止一位主播，而且每个主播都有自己的画面和声音，但对于 CDN 观众来说，他们只需要一路直播流，
     * 所以您需要将多路音视频流混成一路标准的直播流，这就需要混流转码。
     *
     * 当您调用 setMixTranscodingConfig() 接口时，SDK 会向腾讯云的转码服务器发送一条指令，目的是将房间里的多路音视频流混合为一路,
     * 您可以通过 mixUsers 参数来调整每一路画面的位置，以及是否只混合声音，也可以通过 videoWidth、videoHeight、videoBitrate 等参数控制混合音视频流的编码参数。
     *
     * <pre>
     * 【画面1】=> 解码 ====> \
     *                         \
     * 【画面2】=> 解码 =>  画面混合 => 编码 => 【混合后的画面】
     *                         /
     * 【画面3】=> 解码 ====> /
     *
     * 【声音1】=> 解码 ====> \
     *                         \
     * 【声音2】=> 解码 =>  声音混合 => 编码 => 【混合后的声音】
     *                         /
     * 【声音3】=> 解码 ====> /
     * </pre>
     *
     * 参考文档：[云端混流转码](https://cloud.tencent.com/document/product/647/16827)。
     *
     * @param config 请参考 TRTCTypeDef.h 中关于 TRTCTranscodingConfig 的介绍。如果传入 nullptr 则取消云端混流转码。
     * @note 关于云端混流的注意事项：
     *  - 云端转码会引入一定的 CDN 观看延时，大概会增加1 - 2秒。
     *  - 调用该函数的用户，会将连麦中的多路画面混合到自己当前这路画面或者 config 中指定的 streamId 上。
     *  - 请注意，若您还在房间中且不再需要混流，请务必传入 nullptr 进行取消，因为当您发起混流后，云端混流模块就会开始工作，不及时取消混流可能会引起不必要的计费损失。
     *  - 请放心，您退房时会自动取消混流状态。
     */
    virtual void setMixTranscodingConfig(TRTCTranscodingConfig* config) = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （三）视频相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name  视频相关接口函数
    /// @{
#if TARGET_PLATFORM_DESKTOP
    /**
     * 3.1 开启本地视频的预览画面(Windows、 Mac版本)
     *
     * 这个接口会启动默认的摄像头，可以通过 ITXDeviceManager::setCurrentDevice 接口选用其他摄像头
     * 当开始渲染首帧摄像头画面时，您会收到 ITRTCCloudCallback 中的 onFirstVideoFrame(nullptr) 回调。
     *
     * @param rendView 承载预览画面的控件
     */
    virtual void startLocalPreview(TXView rendView) = 0;
#elif TARGET_PLATFORM_PHONE
    /**
     * 3.2 开启本地视频的预览画面 (iOS、 Android版本)
     * 在 enterRoom 之前调用此函数，SDK 只会开启摄像头，并一直等到您调用 enterRoom 之后才开始推流。
     * 在 enterRoom 之后调用此函数，SDK 会开启摄像头并自动开始视频推流。
     * 当开始渲染首帧摄像头画面时，您会收到 ITRTCCloudCallback 中的 onFirstVideoFrame(null) 回调。
     *
     * @note 如果希望开播前预览摄像头画面并调节美颜参数，您可以：
     *   - 方案一：在调用 enterRoom 之前调用 startLocalPreview
     *   - 方案二：在调用 enterRoom 之后调用 startLocalPreview + muteLocalVideo(true)
     * @param frontCamera YES：前置摄像头；NO：后置摄像头。
     * @param rendView 承载视频画面的控件
     */
    virtual void startLocalPreview(bool frontCamera, TXView rendView) = 0;
#endif

    /**
     * 3.3 更新本地视频预览画面的窗口
     *
     * @param rendView 承载预览画面的控件
     */
    virtual void updateLocalView(TXView rendView) = 0;

    /**
     * 3.4 停止本地视频采集及预览
     */
    virtual void stopLocalPreview() = 0;

    /**
     * 3.5 暂停/恢复推送本地的视频数据
     *
     * 当暂停推送本地视频后，房间里的其它成员将会收到 onUserVideoAvailable(userId, false) 回调通知
     * 当恢复推送本地视频后，房间里的其它成员将会收到 onUserVideoAvailable(userId, true) 回调通知
     *
     * @param mute true：暂停；false：恢复
     */
    virtual void muteLocalVideo(bool mute) = 0;

    /**
     * 3.6 开始拉取并显示指定用户的远端画面
     *
     * 该函数会拉取指定 userid 的视频流显示在您指定的 view 控件上，您可以通过 setRemoteRenderParams 设置显示模式。
     * - 如果您提前知道房间中某个 userid 正在推流，可以直接调用 startRemoteView 显示该用户的远端画面。
     * - 如果您不知道房间中有哪些用户开启了视频，可以在 enterRoom 后等待来自 SDK 的 onUserVideoAvailable(userId, true) 回调通知。
     * 调用 startRemoteView 只是启动拉取，此时画面还需要加载，当加载完毕后 ITRTCCloudCallback 会通过 onFirstVideoFrame(userId) 通知您。
     *
     * @param userId 指定远端用户的 userId
     * @param streamType 指定要观看 userId 的视频流类型：
     *     - 高清大画面：({@link  TRTCVideoStreamTypeBig})
     *     - 低清大画面：({@link  TRTCVideoStreamTypeSmall})
     *     - 辅流（屏幕分享）：({@link  TRTCVideoStreamTypeSub})
     * @param rendView 承载视频画面的控件
     *
     * @note 注意几点规则需要您关注：<br>
     *   1. SDK 支持同时观看某 userid 的大画面和辅路，或者小画面和辅路，但不支持同时观看大画面和小画面。<br>
     *   2. 只有当指定的 userid 通过 enableEncSmallVideoStream 开启双路编码后，才能观看该用户的小画面。<br>
     *   3. 如果该用户的小画面不存在，则默认切换到大画面。
     */
    virtual void startRemoteView(const char* userId, TRTCVideoStreamType streamType, TXView rendView) = 0;

    /**
     * 3.7 更新远端视频渲染的窗口
     *
     * @param userId     对方的用户标识
     * @param streamType 要设置预览窗口的流类型(TRTCVideoStreamTypeBig、TRTCVideoStreamTypeSub)
     * @param rendView   承载预览画面的控件
     */
    virtual void updateRemoteView(const char* userId, TRTCVideoStreamType streamType, TXView rendView) = 0;

    /**
     * 3.8 停止显示远端视频画面，同时不再拉取该远端用户的视频数据流
     *
     * 调用此接口后，SDK 会停止接收该用户的远程视频流，同时会清理相关的视频显示资源。
     *
     * @param userId 指定远端用户的 userId
     * @param streamType 指定要停止观看的 userId 的视频流类型：
     *     - 高清大画面：({@link  TRTCVideoStreamTypeBig})
     *     - 低清大画面：({@link  TRTCVideoStreamTypeSmall})
     *     - 辅流（屏幕分享）：({@link  TRTCVideoStreamTypeSub})
     */
    virtual void stopRemoteView(const char* userId, TRTCVideoStreamType streamType) = 0;

    /**
     * 3.9 停止显示所有远端视频画面，同时不再拉取远端用户的视频数据流
     *
     * @note 如果有屏幕分享的画面在显示，则屏幕分享的画面也会一并被关闭。
     */
    virtual void stopAllRemoteView() = 0;

    /**
     * 3.10 暂停/恢复接收指定的远端视频流
     *
     * 该接口仅暂停/恢复接收指定的远端用户的视频流，但并不释放显示资源，所以如果暂停，视频画面会冻屏在 mute 前的最后一帧。
     *
     * @param userId 对方的用户标识
     * @param mute  是否暂停接收
     * @note 您在 enterRoom 之前或之后调用此 API 均能生效，在您调用 exitRoom 之后会被重置为 false。
     */
    virtual void muteRemoteVideoStream(const char* userId, bool mute) = 0;

    /**
     * 3.11 暂停/恢复接收所有远端视频流
     *
     * 该接口仅暂停/恢复接收所有远端用户的视频流，但并不释放显示资源，所以如果暂停，视频画面会冻屏在 mute 前的最后一帧。
     *
     * @param mute 是否暂停接收
     * @note 您在 enterRoom 之前或之后调用此 API 均能生效，在您调用 exitRoom 之后会被重置为 false。
     */
    virtual void muteAllRemoteVideoStreams(bool mute) = 0;

    /**
     * 3.12 设置视频编码器相关参数
     *
     * 该设置决定了远端用户看到的画面质量（同时也是云端录制出的视频文件的画面质量）
     *
     * @param params 视频编码参数，详情请参考 TRTCTypeDef.h 中的 TRTCVideoEncParam 定义
     */
    virtual void setVideoEncoderParam(const TRTCVideoEncParam& params) = 0;

    /**
     * 3.13 设置网络流控相关参数
     *
     * 该设置决定了 SDK 在各种网络环境下的调控策略（例如弱网下是“保清晰”还是“保流畅”）
     *
     * @param params 网络流控参数，详情请参考 TRTCTypeDef.h 中的 TRTCNetworkQosParam 定义
     */
    virtual void setNetworkQosParam(const TRTCNetworkQosParam& params) = 0;

    /**
     * 3.14 设置本地图像（主流）的渲染参数
     *
     * @param params 本地图像的参数，详情请参考 TRTCTypeDef.h 中的 TRTCRenderParams 定义
     */
    virtual void setLocalRenderParams(const TRTCRenderParams &params) = 0;

    /**
     * 3.15 设置视频编码输出的画面方向，即设置远端用户观看到的和服务器录制的画面方向
     *
     * @param rotation 目前支持 TRTCVideoRotation0 和 TRTCVideoRotation180 旋转角度，默认值：TRTCVideoRotation0
     */
    virtual void setVideoEncoderRotation(TRTCVideoRotation rotation) = 0;

    /**
     * 3.16 设置编码器输出的画面镜像模式
     *
     * 该接口不改变本地摄像头的预览画面，但会改变另一端用户看到的（以及服务器录制的）画面效果。
     *
     * @param mirror 是否开启远端镜像, true：远端画面镜像；false：远端画面非镜像。默认值：false
     */
    virtual void setVideoEncoderMirror(bool mirror) = 0;

    /**
     * 3.17 设置远端图像的渲染模式
     *
     * @param userId 对应的远端视频流用户ID
     * @param streamType 远端图像的视频流类型，详见 TRTCVideoStreamType 定义
     * @param param 远端图像的参数，详情请参考 TRTCTypeDef.h 中的 TRTCRenderParams 定义
     */
    virtual void setRemoteRenderParams(const char* userId, TRTCVideoStreamType streamType, const TRTCRenderParams &params) = 0;

    /**
     * 3.18 开启大小画面双路编码模式
     *
     * 如果当前用户是房间中的主要角色（例如主播、老师、主持人等），并且使用 PC 或者 Mac 环境，可以开启该模式。
     * 开启该模式后，当前用户会同时输出【高清】和【低清】两路视频流（但只有一路音频流）。
     * 对于开启该模式的当前用户，会占用更多的网络带宽，并且会更加消耗 CPU 计算资源。
     *
     * 对于同一房间的远程观众而言：
     * - 如果用户的下行网络很好，可以选择观看【高清】画面
     * - 如果用户的下行网络较差，可以选择观看【低清】画面
     *
     * @param enable 是否开启小画面编码，默认值：false
     * @param smallVideoParam 小流的视频参数
     */
    virtual void enableSmallVideoStream(bool enable, const TRTCVideoEncParam& smallVideoParam) = 0;

    /**
     * 3.19 选定观看指定 userId 的大画面还是小画面
     *
     * 此功能需要该 userId 通过 enableEncSmallVideoStream 提前开启双路编码模式。
     * 如果该 userId 没有开启双路编码模式，则此操作无效。
     *
     * @param userId 用户 ID
     * @param type 视频流类型，即选择看大画面还是小画面，默认为 TRTCVideoStreamTypeBig
     */
    virtual void setRemoteVideoStreamType(const char* userId, TRTCVideoStreamType type) = 0;

#if _WIN32 || __APPLE__
    /**
     * 3.20 视频画面截图
     *
     * 截取本地主路、本地辅路、远程主路和远端辅流的视频画面，并通过 ITRTCCloudCallback 的 onSnapshotComplete 回调返回截图画面的数据给您。
     *
     * @param userId 用户 ID，空字符串表示截取本地画面
     * @param streamType 视频流类型，支持摄像头画面（{@link TRTCVideoStreamTypeBig}）和屏幕分享画面（{@link TRTCVideoStreamTypeSub}）
     * @param sourceType 视频截图来源类型，Windows 端只支持 {@link TRTCSnapshotSourceTypeStream}
     */
    virtual void snapshotVideo(const char* userId, TRTCVideoStreamType streamType, TRTCSnapshotSourceType sourceType) = 0;
#endif
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （四）音频相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 音频相关接口函数
    /// @{
    /**
     * 4.1 开启本地音频的采集和上行
     *
     * 该函数会启动麦克风采集，并将音频数据传输给房间里的其他用户。
     * SDK 并不会默认开启本地的音频上行，也就说，如果您不调用这个函数，房间里的其他用户就听不到您的声音。
     * @param quality 声音质量，参见 TRTCAudioQuality
     * @note TRTC SDK 并不会默认打开本地的麦克风采集。
     */
    virtual void startLocalAudio(TRTCAudioQuality quality) = 0;

    /**
     * 4.2 关闭本地音频的采集和上行
     *
     * 当关闭本地音频的采集和上行，房间里的其它成员会收到 onUserAudioAvailable(false) 回调通知。
     */
    virtual void stopLocalAudio() = 0;

    /**
     * 4.3 静音/取消静音本地的音频
     *
     * 当静音本地音频后，房间里的其它成员会收到 onUserAudioAvailable(userId, false) 回调通知。
     * 当取消静音本地音频后，房间里的其它成员会收到 onUserAudioAvailable(userId, true) 回调通知。
     *
     * 与 stopLocalAudio 不同之处在于，muteLocalAudio(true) 并不会停止发送音视频数据，而是继续发送码率极低的静音包。
     * 由于 MP4 等视频文件格式，对于音频的连续性是要求很高的，使用 stopLocalAudio 会导致录制出的 MP4 不易播放。
     * 因此在对录制质量要求很高的场景中，建议选择 muteLocalAudio，从而录制出兼容性更好的 MP4 文件。
     *
     * @param mute true：静音；false：取消静音
     */
    virtual void muteLocalAudio(bool mute) = 0;

    /**
     * 4.4 静音/取消静音指定的远端用户的声音
     *
     * @param userId 用户 ID
     * @param mute true：静音；false：取消静音
     *
     * @note
     * - 静音时会停止接收该用户的远端音频流并停止播放，取消静音时会自动拉取该用户的远端音频流并进行播放。
     * - 您在 enterRoom 之前或之后调用此 API 均能生效，在您调用 exitRoom 之后会被重置为 false。
     */
    virtual void muteRemoteAudio(const char* userId, bool mute) = 0;

    /**
     * 4.5  静音/取消静音所有用户的声音
     *
     * @param mute true：静音；false：取消静音
     *
     * @note
     * - 静音时会停止接收所有用户的远端音频流并停止播放，取消静音时会自动拉取所有用户的远端音频流并进行播放。
     * - 您在 enterRoom 之前或之后调用此 API 均能生效，在您调用 exitRoom 之后会被重置为 false。
     */
    virtual void muteAllRemoteAudio(bool mute) = 0;

    /**
     * 4.6 设置某个远程用户的播放音量
     *
     * @param userId 远程用户 ID
     * @param volume 音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100 
     *
     * @note 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setRemoteAudioVolume(const char *userId, int volume) = 0;

    /**
     * 4.7 设置 SDK 采集音量。
     *
     * @param volume 音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100 
     *
     * @note  如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setAudioCaptureVolume(int volume) = 0;

    /**
     * 4.8 获取 SDK 采集音量
     */
    virtual int getAudioCaptureVolume() = 0;

    /**
     * 4.9 设置 SDK 播放音量。
     *
     * @param volume 音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100 
     *
     * @note
     *  1. 该函数会控制最终交给系统播放的声音音量，会影响录制本地音频文件的音量大小，但不会影响耳返的音量。<br>
     *  2. 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setAudioPlayoutVolume(int volume) = 0;

    /**
     * 4.10 获取 SDK 播放音量
     */
    virtual int getAudioPlayoutVolume() = 0;

    /**
     * 4.11 启用或关闭音量大小提示
     *
     * 开启此功能后，SDK 会在 onUserVoiceVolume() 中反馈对每一路声音音量大小值的评估。
     * 我们在 Demo 中有一个音量大小的提示条，就是基于这个接口实现的。
     * 如希望打开此功能，请在 startLocalAudio() 之前调用。
     *
     * @param interval 设置 onUserVoiceVolume 回调的触发间隔，单位为ms，最小间隔为100ms，如果小于等于0则会关闭回调，建议设置为300ms
     */
    virtual void enableAudioVolumeEvaluation(uint32_t interval) = 0;

    /**
     * 4.12 开始录音
     *
     * 该方法调用后， SDK 会将通话过程中的所有音频(包括本地音频，远端音频，BGM等)录制到一个文件里。
     * 无论是否进房，调用该接口都生效。
     * 如果调用 exitRoom 时还在录音，录音会自动停止。
     *
     * @param audioRecordingParams 录音参数，请参考 TRTCAudioRecordingParams
     * @return 0：成功；-1：录音已开始；-2：文件或目录创建失败；-3：后缀指定的音频格式不支持
     */
    virtual int startAudioRecording(const TRTCAudioRecordingParams& audioRecordingParams) = 0;

    /**
     * 4.13 停止录音
     *
     * 如果调用 exitRoom 时还在录音，录音会自动停止。
     */
    virtual void stopAudioRecording() = 0;
#if _WIN32
    /**
    * 4.14 开启本地录制
    *
    * 开启后把直播过程中的音视频数据录制存储到本地文件。
    * 应用场景:
    * 1. 不推流情况下，通过调用 startLocalPreview 预览画面后，进行录制。
    * 2. 在推流的同时进行录制，把直播的全程录制保存到本地文件。
    *
    * @param params 录制参数，请参考 {@link TRTCLocalRecordingParams}
    *
    */
    virtual void startLocalRecording(const TRTCLocalRecordingParams& params) = 0;
    /**
    * 4.15 停止本地录制
    *
    * 如果调用 exitRoom 时还在录制，录制会自动停止。
    */
    virtual void stopLocalRecording() = 0;
#endif
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （五）设备相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 设备相关接口函数
    /// @{
    /**
     * 5.1 获取设备管理模块
     *
     * @return ITXDeviceManager 设备管理类
     */
    virtual ITXDeviceManager *getDeviceManager() = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （六）美颜特效和图像水印
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 美颜特效和图像水印
    /// @{
    /**
     * 6.1 设置美颜、美白、红润效果级别
     *
     * SDK 内部集成了两套风格不同的磨皮算法，一套我们取名叫“光滑”，适用于美女秀场，效果比较明显。
     * 另一套我们取名“自然”，磨皮算法更多地保留了面部细节，主观感受上会更加自然。
     *
     * @param style     美颜风格，光滑或者自然，光滑风格磨皮更加明显，适合娱乐场景。
     * @param beautyLevel    美颜级别，取值范围0 - 9，0表示关闭，1 - 9值越大，效果越明显
     * @param whitenessLevel     美白级别，取值范围0 - 9，0表示关闭，1 - 9值越大，效果越明显
     * @param ruddinessLevel 红润级别，取值范围0 - 9，0表示关闭，1 - 9值越大，效果越明显，该参数暂未生效
     */
    virtual void setBeautyStyle(TRTCBeautyStyle style, uint32_t beautyLevel, uint32_t whitenessLevel, uint32_t ruddinessLevel) = 0;

    /**
     * 6.2 设置水印
     *
     * 水印的位置是通过 xOffset, yOffset, fWidthRatio 来指定的。
     * - xOffset：水印的坐标，取值范围为0 - 1的浮点数。
     * - yOffset：水印的坐标，取值范围为0 - 1的浮点数。
     * - fWidthRatio：水印的大小比例，取值范围为0 - 1的浮点数。
     *
     * @param streamType 要设置水印的流类型(TRTCVideoStreamTypeBig、TRTCVideoStreamTypeSub)
     * @param srcData    水印图片源数据（传 nullptr 表示去掉水印）
     * @param srcType    水印图片源数据类型
     * @param nWidth     水印图片像素宽度（源数据为文件路径时忽略该参数）
     * @param nHeight    水印图片像素高度（源数据为文件路径时忽略该参数）
     * @param xOffset    水印显示的左上角 x 轴偏移
     * @param yOffset    水印显示的左上角 y 轴偏移
     * @param fWidthRatio 水印显示的宽度占画面宽度比例（水印按该参数等比例缩放显示）
     * @note 只支持主路视频流
     */
    virtual void setWaterMark(TRTCVideoStreamType streamType, const char* srcData, TRTCWaterMarkSrcType srcType, uint32_t nWidth, uint32_t nHeight, float xOffset, float yOffset, float fWidthRatio) = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （七）音乐特效和人声特效
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 音乐特效和人声特效
    /// @{
    /**
     * 7.1 获取音效管理类 ITXAudioEffectManager
     *
     * 该模块是整个 SDK 的音效管理模块，支持如下功能：
     * - 耳机耳返：麦克风捕捉的声音实时通过耳机播放。
     * - 混响效果：KTV、小房间、大会堂、低沉、洪亮...
     * - 变声特效：萝莉、大叔、重金属、外国人...
     * - 背景音乐：支持在线音乐和本地音乐，支持变速、变调等特效、支持原生和伴奏并播放和循环播放。
     * - 短音效：鼓掌声、欢笑声等简短的音效文件，对于小于10秒的文件，请将 isShortFile 参数设置为 YES。
     */
    virtual ITXAudioEffectManager* getAudioEffectManager() = 0;

#if TARGET_PLATFORM_DESKTOP
    /**
     * 7.2 打开系统声音采集
     *
     * 开启后可以采集整个操作系统的播放声音（path 为空）或某一个播放器（path 不为空）的声音，
     * 并将其混入到当前麦克风采集的声音中一起发送到云端。
     *
     *
     * @param path
     *    - path 为空，代表采集整个操作系统的声音。( Windows 平台)
     *    - path 填写 exe 程序（如 QQ音乐）所在的路径，将会启动此程序并只采集此程序的声音。( Windows 平台，采集程序声音仅支持32位 SDK )
     *    - path 默认为空，其他值未定义。（ Mac 平台）
     *
     * @note 此接口目前仅适用于 Windows 、 Mac 平台
     */
    virtual void startSystemAudioLoopback(const char* path = nullptr) = 0;

    /**
     * 7.3 关闭系统声音采集。
     *
     * @note 此接口目前仅适用于 Windows 、 Mac 平台
     */
    virtual void stopSystemAudioLoopback() = 0;

    /**
     * 7.4 设置系统声音采集的音量。
     *
     * @param volume 音量大小，100为原始音量，取值0 - 150，默认值为100
     *
     * @note
     *  1. 此接口目前仅适用于 Windows 、 Mac 平台。<br>
     *  2. 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setSystemAudioLoopbackVolume(uint32_t volume) = 0;
#endif
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （八）屏幕分享相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 屏幕分享相关接口函数
    /// @{
#if TARGET_PLATFORM_DESKTOP
    /**
     * 8.1 启动屏幕分享
     *
     * @param rendView 承载预览画面的控件，可以设置为 nullptr，表示不显示屏幕分享的预览效果。
     * @param type 屏幕分享使用的线路，可以设置为主路（TRTCVideoStreamTypeBig）或者辅路（TRTCVideoStreamTypeSub），默认使用辅路。
     * @param params 屏幕分享的画面编码参数，SDK 会优先使用您通过此接口设置的编码参数：
     * - 如果 params 设置为 nullptr，且您已通过 setSubStreamEncoderParam 设置过辅路视频编码参数，SDK 将使用您设置过的辅路编码参数进行屏幕分享。
     * - 如果 params 设置为 nullptr，且您未通过 setSubStreamEncoderParam 设置过辅路视频编码参数，SDK 将自适应选择最佳的编码参数进行屏幕分享。
     *
     * @note 一个用户同时最多只能上传一条主路（TRTCVideoStreamTypeBig）画面和一条辅路（TRTCVideoStreamTypeSub）画面，
     * 默认情况下，屏幕分享使用辅路画面，如果使用主路画面，建议您提前停止摄像头采集（stopLocalPreview）避免相互冲突。
     */
    virtual void startScreenCapture(TXView rendView, TRTCVideoStreamType type, TRTCVideoEncParam* params) = 0;

    /**
     * 8.2 停止屏幕采集
     */
    virtual void stopScreenCapture() = 0;

    /**
     * 8.3 暂停屏幕分享
     */
    virtual void pauseScreenCapture() = 0;

    /**
     * 8.4 恢复屏幕分享
     */
    virtual void resumeScreenCapture() = 0;

    /**
     * 8.5 枚举可分享的屏幕窗口，建议在 startScreenCapture 之前调用
     *
     * 如果您要给您的 App 增加屏幕分享功能，一般需要先显示一个窗口选择界面，这样用户可以选择希望分享的窗口。
     * 通过如下函数，您可以获得可分享窗口的 ID、类型、窗口名称以及缩略图。
     * 拿到这些信息后，您就可以实现一个窗口选择界面，当然，您也可以使用我们在 Demo 源码中已经实现好的一个界面。
     *
     * @note
     * - 返回的列表中包括屏幕和应用窗口，屏幕会在列表的前面几个元素中。
     * - delete ITRTCScreenCaptureSourceList* 指针会导致编译错误，SDK 维护 ITRTCScreenCaptureSourceList 对象的生命周期。
     * - 获取完屏幕窗口列表后请手动调用 ITRTCScreenCaptureSourceList 的 release 方法释放资源，否则可能会引起内存泄漏。
     * - Windows 平台 v8.3 版本后获取窗口列表默认携带最小化窗口，且最小化窗口的缩略图数据默认填充窗口图标数据
     *
     * @param thumbSize 指定要获取的窗口缩略图大小，缩略图可用于绘制在窗口选择界面上
     * @param iconSize  指定要获取的窗口图标大小
     *
     * @return 窗口列表包括屏幕
     */
    virtual ITRTCScreenCaptureSourceList* getScreenCaptureSources(const SIZE &thumbSize, const SIZE &iconSize) = 0;

    /**
     * 8.6 设置屏幕分享参数，该方法在屏幕分享过程中也可以调用
     *
     * 如果您期望在屏幕分享的过程中，切换想要分享的窗口，可以再次调用这个函数而不需要重新开启屏幕分享。
     *
     * 支持如下四种情况：
     * - 共享整个屏幕：sourceInfoList 中 type 为 Screen 的 source，captureRect 设为 { 0, 0, 0, 0 }
     * - 共享指定区域：sourceInfoList 中 type 为 Screen 的 source，captureRect 设为非 nullptr，例如 { 100, 100, 300, 300 }
     * - 共享整个窗口：sourceInfoList 中 type 为 Window 的 source，captureRect 设为 { 0, 0, 0, 0 }
     * - 共享窗口区域：sourceInfoList 中 type 为 Window 的 source，captureRect 设为非 nullptr，例如 { 100, 100, 300, 300 }
     *
     *
     * @param source                 指定分享源
     * @param captureRect            指定捕获的区域
     * @param property               指定屏幕分享目标的属性，包括捕获鼠标，高亮捕获窗口等，详情参考TRTCScreenCaptureProperty 定义
     * @note 设置高亮边框颜色、宽度参数在 Mac 平台不生效
     *
     */
    virtual void selectScreenCaptureTarget(const TRTCScreenCaptureSourceInfo &source, const RECT& captureRect, const TRTCScreenCaptureProperty &property) = 0;

    /**
     * 8.7 设置屏幕分享的编码器参数
     * - setVideoEncoderParam() 用于设置远端主路画面（TRTCVideoStreamTypeBig，一般用于摄像头）的编码参数。
     * - setSubStreamEncoderParam() 用于设置远端辅路画面（TRTCVideoStreamTypeSub，一般用于屏幕分享）的编码参数。
     * 该设置决定远端用户看到的画面质量，同时也是云端录制出的视频文件的画面质量。
     *
     * @param params 辅流编码参数，详情请参考 TRTCTypeDef.h 中的 TRTCVideoEncParam 定义
     * @note 即使使用主路传输屏幕分享的数据（在调用 startScreenCapture 时设置 type=TRTCVideoStreamTypeBig），依然要使用此接口更新屏幕分享的编码参数。
     */
    virtual void setSubStreamEncoderParam(const TRTCVideoEncParam& params) = 0;

    /**
     * 8.8 设置屏幕分享的混音音量大小
     *
     * 这个数值越高，屏幕分享音量的占比就越高，麦克风音量占比就越小，所以不推荐设置得太大，否则麦克风的声音就被压制了。
     *
     * @param volume 设置的混音音量大小，范围0 - 100
     */
    virtual void setSubStreamMixVolume(uint32_t volume) = 0;

    /**
     * 8.9 将指定窗口加入屏幕分享的排除列表中，加入排除列表中的窗口不会被分享出去
     *
     * 支持启动屏幕分享前设置过滤窗口，也支持屏幕分享过程中动态添加过滤窗口。
     *
     * @param window 不希望分享出去的窗口
     * @note 
     * - 该方法只有在 TRTCScreenCaptureSourceInfo 中的 type 指定为 TRTCScreenCaptureSourceTypeScreen 时生效，即分享屏幕时生效
     * - 该方法添加的窗口列表会在退房后清除
     * - Mac 平台下请传入窗口 ID（即 CGWindowID），您可以通过 TRTCScreenCaptureSourceInfo 中的 sourceId 成员获得。
     */
    virtual void addExcludedShareWindow(TXView window) = 0;

    /**
     * 8.10 将指定窗口从屏幕分享的排除列表中移除
     *
     * @param window 不希望分享出去的窗口
     *
     * @note
     * - 该方法只有在 TRTCScreenCaptureSourceInfo 中的 type 指定为 TRTCScreenCaptureSourceTypeScreen 时生效，即分享屏幕时生效
     * - Mac 平台下请传入窗口 ID（即 CGWindowID），您可以通过 TRTCScreenCaptureSourceInfo 中的 sourceId 成员获得。
     */
    virtual void removeExcludedShareWindow(TXView window) = 0;

    /**
     * 8.11 将所有窗口从屏幕分享的排除列表中移除
     *
     * @note 该方法只有在 TRTCScreenCaptureSourceInfo 中的 type 指定为 TRTCScreenCaptureSourceTypeScreen 时生效，即分享屏幕时生效
     */
    virtual void removeAllExcludedShareWindow() = 0;

    /**
     * 8.12 将指定窗口加入屏幕分享的包含列表中，加入包含列表中的窗口如果在采集窗口区域内会被分享出去
     *
     * 支持启动屏幕分享前设置包含的窗口，也支持屏幕分享过程中动态添加包含的窗口。
     *
     * @param window 希望被分享出去的窗口
     * @note 
     * - 该方法只有在 TRTCScreenCaptureSourceInfo 中的 type 指定为 TRTCScreenCaptureSourceTypeWindow 时生效，即分享窗口时生效
     * - 该方法添加的窗口列表会在退房后清除
     * - Mac 平台下请传入窗口 ID（即 CGWindowID），您可以通过 TRTCScreenCaptureSourceInfo 中的 sourceId 成员获得
     */
    virtual void addIncludedShareWindow(TXView window) = 0;

    /**
     * 8.13 将指定窗口从屏幕分享的包含列表中移除
     *
     * @param window 希望被分享出去的窗口
     * @note
     * - 该方法只有在 TRTCScreenCaptureSourceInfo 中的 type 指定为 TRTCScreenCaptureSourceTypeWindow 时生效，即分享窗口时生效
     * - Mac 平台下请传入窗口 ID（即 CGWindowID），您可以通过 TRTCScreenCaptureSourceInfo 中的 sourceId 成员获得
     */
    virtual void removeIncludedShareWindow(TXView window) = 0;

    /**
     * 8.14 将所有窗口从屏幕分享的包含列表中移除
     *
     * @note 该方法只有在 TRTCScreenCaptureSourceInfo 中的 type 指定为 TRTCScreenCaptureSourceTypeWindow 时生效，即分享窗口时生效
     */
    virtual void removeAllIncludedShareWindow() = 0;
#endif
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （九）自定义采集和渲染
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 自定义采集和渲染
    /// @{
#ifdef _WIN32
    /**
     * 9.1 启用视频自定义采集模式
     *
     * 开启该模式后，SDK 不再运行原有视频流上的采集流程，只保留编码和发送能力。
     * 您需要用 sendCustomVideoData() 不断地向 SDK 塞入自己采集的视频画面。
     *
     * @param type 视频流类型：
     *     - 高清大画面：({@link  TRTCVideoStreamTypeBig})
     *     - 辅流（屏幕分享）：({@link  TRTCVideoStreamTypeSub})
     * @param enable 是否启用，默认值：false 
     */
    virtual void enableCustomVideoCapture(TRTCVideoStreamType type, bool enable) = 0;

     /**
     * 9.2 向 SDK 投送自己采集的视频数据
     *
     * TRTCVideoFrame 推荐如下填写方式（其他字段不需要填写）：
     * - pixelFormat： Windows、Android 平台仅支持 TRTCVideoPixelFormat_I420
     *                iOS、Mac 平台支持 TRTCVideoPixelFormat_I420 和 TRTCVideoPixelFormat_BGRA32
     * - bufferType：仅支持 TRTCVideoBufferType_Buffer。
     * - data：视频帧 buffer。
     * - length：视频帧数据长度，I420 格式下，其值等于：width × height × 3 / 2。
     * - width：视频图像长度。
     * - height：视频图像宽度。
     * - timestamp：时间戳，单位毫秒（ms）。如果 timestamp 间隔不均匀，会严重影响音画同步和录制出的 MP4 质量。
     *
     * 参考文档：[自定义采集和渲染](https://cloud.tencent.com/document/product/647/34066)。
     * @param type 指定视频流类型：
     *     - 高清大画面：({@link  TRTCVideoStreamTypeBig})
     *     - 辅流（屏幕分享）：({@link  TRTCVideoStreamTypeSub})
     * @param frame 视频数据，支持 I420 格式数据。
     * @note - SDK 内部有帧率控制逻辑，目标帧率以您在 setVideoEncoderParam (高清大画面) 或者 setSubStreamEncoderParam (辅流) 中设置的为准。
     *       - 可以设置 frame 中的 timestamp 为 0，相当于让 SDK 自己设置时间戳，但请“均匀”地控制 sendCustomVideoData 的调用间隔，否则会导致视频帧率不稳定。
     *       - Windows 平台目前仅支持传入 TRTCVideoPixelFormat_I420 格式的视频帧
     */
    virtual void sendCustomVideoData(TRTCVideoStreamType type, TRTCVideoFrame* frame) = 0;
#else
    /**
     * 9.1 启用视频自定义采集模式
     *
     * 开启该模式后，SDK 不再运行原有的视频采集流程，只保留编码和发送能力。
     * 您需要用 sendCustomVideoData() 不断地向 SDK 塞入自己采集的视频画面。
     *
     * @param enable 是否启用，默认值：false
     */
    virtual void enableCustomVideoCapture(bool enable) = 0;

    /**
     * 9.2 向 SDK 投送自己采集的视频数据
     *
     * TRTCVideoFrame 推荐如下填写方式（其他字段不需要填写）：
     * - pixelFormat： Windows、Android 平台仅支持 TRTCVideoPixelFormat_I420
     *                iOS、Mac 平台支持 TRTCVideoPixelFormat_I420 和 TRTCVideoPixelFormat_BGRA32
     * - bufferType：仅支持 TRTCVideoBufferType_Buffer。
     * - data：视频帧 buffer。
     * - length：视频帧数据长度，I420 格式下，其值等于：width × height × 3 / 2。
     * - width：视频图像长度。
     * - height：视频图像宽度。
     * - timestamp：时间戳，单位毫秒（ms）。如果 timestamp 间隔不均匀，会严重影响音画同步和录制出的 MP4 质量。
     *
     * 参考文档：[自定义采集和渲染](https://cloud.tencent.com/document/product/647/34066)。
     *
     * @param frame 视频数据，支持 I420 格式数据。
     * @note - SDK 内部有帧率控制逻辑，目标帧率以您在 setVideoEncoderParam 中设置的为准，太快会自动丢帧，太慢则会自动补帧。
     *       - 可以设置 frame 中的 timestamp 为 0，相当于让 SDK 自己设置时间戳，但请“均匀”地控制 sendCustomVideoData 的调用间隔，否则会导致视频帧率不稳定。
     *       - iOS、Mac平台目前仅支持传入 TRTCVideoPixelFormat_I420 或 TRTCVideoPixelFormat_BGRA32 格式的视频帧
     *       - Android 平台目前仅支持传入 TRTCVideoPixelFormat_I420 格式的视频帧
     */
    virtual void sendCustomVideoData(TRTCVideoFrame* frame) = 0;
#endif
    
    /**
     * 9.3 启用音频自定义采集模式
     * 开启该模式后，SDK 停止运行原有的音频采集流程，只保留编码和发送能力。
     * 您需要用 sendCustomAudioData() 不断地向 SDK 塞入自己采集的音频数据。
     *
     * @param enable 是否启用，默认值：false
     */
    virtual void enableCustomAudioCapture(bool enable) = 0;
  
    /**
     * 9.4 向 SDK 投送自己采集的音频数据
     *
     * TRTCAudioFrame 推荐如下填写方式：
     * - audioFormat：音频数据格式，仅支持 TRTCAudioFrameFormatPCM。
     * - data：音频帧 buffer。
     * - length：音频帧数据长度，支持[5ms ~ 100ms]帧长，推荐使用20 ms帧长，【48000采样率、单声道的帧长度：48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。
     * - sampleRate：采样率，支持：16000、24000、32000、44100、48000。
     * - channel：声道数（如果是立体声，数据是交叉的），单声道：1； 双声道：2。
     * - timestamp：时间戳，单位毫秒（ms）。如果 timestamp 间隔不均匀，会严重影响音画同步和录制出的 MP4 质量。
     *
     * 参考文档：[自定义采集和渲染](https://cloud.tencent.com/document/product/647/34066)。
     *
     * @param frame 音频数据
     * @note 可以设置 frame 中的 timestamp 为 0，相当于让 SDK 自己设置时间戳，但请“均匀”地控制 sendCustomAudioData 的调用间隔，否则会导致声音断断续续。
     */
    virtual void sendCustomAudioData(TRTCAudioFrame* frame) = 0;
#ifdef _WIN32
    /**
     * 9.5 控制外部音频是否要混入推流和混入播放
     *
     * 通过 mixExternalAudioFrame() 增加一路音频混合到推流的音频流，同时可以支持本地播放
     *
     * @param enablePublish 是否混入推流 true：混入推流；false：不混入推流，默认值：false
     * @param enablePlayout 是否混入本地播放 true：混入播放；false：不混入播放，默认值：false
     * @note enablePublish = false， enablePlayout = false 时，表示完全关闭这个额外的音频流，即不推流，也不播放
     */
    virtual void enableMixExternalAudioFrame(bool enablePublish, bool enablePlayout) = 0;

    /**
     * 9.6 向 SDK 发送自定义辅流音频数据
     *
     * TRTCAudioFrame 推荐如下填写方式（其他字段不需要填写）：
     * - audioFormat：仅支持 TRTCAudioFrameFormatPCM。
     * - data：音频帧 buffer。
     * - length：音频帧数据长度，推荐每帧20ms采样数。【PCM格式、48000采样率、单声道的帧长度：48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。
     * - sampleRate：采样率，仅支持48000。
     * - channel：频道数量（如果是立体声，数据是交叉的），单声道：1； 双声道：2。
     * - timestamp：时间戳，单位毫秒（ms）。如果 timestamp 间隔不均匀，会严重影响音画同步和录制出的 MP4 质量。
     *
     * @param frame 音频数据
     * @note 可以设置 frame 中的 timestamp 为 0，相当于让 SDK 自己设置时间戳，但请“均匀”地控制 mixExternalAudioFrame 的调用间隔，否则会导致声音断断续续。
     */
    virtual void mixExternalAudioFrame(TRTCAudioFrame* frame) = 0;
#endif
    /**
     * 9.7 设置本地视频自定义渲染
     *
     * @note - 设置此方法，SDK 内部会把采集到的数据回调出来，SDK 跳过 TXView 渲染逻辑
     *       - 调用 setLocalVideoRenderCallback(TRTCVideoPixelFormat_Unknown, TRTCVideoBufferType_Unknown, nullptr) 停止回调。
     *       - iOS、Mac、Windows 平台目前仅支持回调 TRTCVideoPixelFormat_I420 或 TRTCVideoPixelFormat_BGRA32 像素格式的视频帧
     *       - Android 平台目前仅支持回调 TRTCVideoPixelFormat_I420 或 TRTCVideoPixelFormat_RGBA32 像素格式的视频帧
     * @param pixelFormat 指定回调的像素格式
     * @param bufferType  指定视频数据结构类型，目前只支持 TRTCVideoBufferType_Buffer
     * @param callback    自定义渲染回调
     * @return 0：成功；<0：错误
     */
    virtual int setLocalVideoRenderCallback(TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback* callback) = 0;

    /**
     * 9.8 设置远端视频自定义渲染
     *
     * 此方法同 setLocalVideoRenderDelegate，区别在于一个是本地画面的渲染回调， 一个是远程画面的渲染回调。
     *
     * @note - 设置此方法，SDK 内部会把远端的数据解码后回调出来，SDK 跳过 TXView 渲染逻辑
     *       - 调用 setRemoteVideoRenderCallback(userId, TRTCVideoPixelFormat_Unknown,  TRTCVideoBufferType_Unknown, nullptr) 停止回调。
     *       - iOS、Mac、Windows 平台目前仅支持回调 TRTCVideoPixelFormat_I420 或 TRTCVideoPixelFormat_BGRA32 像素格式的视频帧
     *       - Android 平台目前仅支持回调 TRTCVideoPixelFormat_I420 或 TRTCVideoPixelFormat_RGBA32 像素格式的视频帧
     * @param userId      用户标识
     * @param pixelFormat  指定回调的像素格式
     * @param bufferType  指定视频数据结构类型，目前只支持 TRTCVideoBufferType_Buffer
     * @param callback    自定义渲染回调
     * @return 0：成功；<0：错误
     */
    virtual int setRemoteVideoRenderCallback(const char* userId, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback* callback) = 0;

    /**
     * 9.9 设置音频数据回调
     *
     * 设置此方法，SDK 内部会把声音模块的数据（PCM 格式）回调出来，包括：
     * - onCapturedAudioFrame：本机麦克风采集到的音频数据
     * - onPlayAudioFrame：混音前的每一路远程用户的音频数据
     * - onMixedPlayAudioFrame：各路音频数据混合后送入扬声器播放的音频数据
     *
     * @param callback  声音帧数据（PCM 格式）的回调，callback = nullptr 则停止回调数据
     * @return 0：成功；<0：错误
     */
    virtual int setAudioFrameCallback(ITRTCAudioFrameCallback* callback) = 0;
    /**
     * 9.8 生成自定义采集时间戳
     *
     * 此函数仅适合自定义视频采集时使用，当您的 App 自己或由第三方美颜 SDK 调用摄像头 API 采集视频时，由于可能引入一些耗时的外部操作（比如美颜），这会导致视频的节奏和 SDK 内部的音频节奏不一致，进而导致音画不同步。
     * 为避免发生音画不同步的问题，请按照如下步骤正确使用该接口：
     * 1. 在调用系统相机 API 采集到一帧视频时，额外调用一次 generateCustomPTS() 获得 pts 时间戳。
     * 2. 在调用 {@link sendCustomVideoData()} 时，将该帧采集时记录的 pts 时间戳赋值给入参 TRTCVideoFrame 中的 timestamp 字段。
     *
     * @return 时间戳（单位：ms）
     */
    virtual uint64_t generateCustomPTS() = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （十）自定义消息发送
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 自定义消息发送
    /// @{
    /**
     * 10.1 发送自定义消息给房间内所有用户
     *
     * 该接口可以借助音视频数据通道向当前房间里的其他用户广播您自定义的数据，但因为复用了音视频数据通道，
     * 请务必严格控制自定义消息的发送频率和消息体的大小，否则会影响音视频数据的质量控制逻辑，造成不确定性的问题。
     *
     * @param cmdId    消息 ID，取值范围为1 - 10
     * @param data     待发送的消息，最大支持1KB（1000字节）的数据大小
     * @param dataSize 待发送的数据大小
     * @param reliable 是否可靠发送，可靠发送的代价是会引入一定的延时，因为接收端要暂存一段时间的数据来等待重传
     * @param ordered  是否要求有序，即是否要求接收端接收的数据顺序和发送端发送的顺序一致，这会带来一定的接收延时，因为在接收端需要暂存并排序这些消息
     * @return true：消息已经发出；false：消息发送失败
     *
     * @note 本接口有以下限制：
     *       - 发送消息到房间内所有用户（暂时不支持 Web/小程序端），每秒最多能发送30条消息。
     *       - 每个包最大为1KB，超过则很有可能会被中间路由器或者服务器丢弃。
     *       - 每个客户端每秒最多能发送总计8KB数据。
     *       - 将 reliable 和 ordered 同时设置为 true 或 false，暂不支持交叉设置。
     *       - 强烈建议不同类型的消息使用不同的 cmdID，这样可以在要求有序的情况下减小消息时延。
     */
    virtual bool sendCustomCmdMsg(uint32_t cmdId, const uint8_t* data, uint32_t dataSize, bool reliable, bool ordered) = 0;

    /**
     * 10.2 将小数据量的自定义数据嵌入视频帧中
     *
     * 跟 sendCustomCmdMsg 的原理不同，sendSEIMsg 是将数据直接塞入视频数据头中。因此，即使视频帧被旁路到了直播 CDN 上，
     * 这些数据也会一直存在。但是由于要把数据嵌入视频帧中，所以数据本身不能太大，推荐几个字节就好。
     *
     * 最常见的用法是把自定义的时间戳（timstamp）用 sendSEIMsg 嵌入视频帧中，这种方案的最大好处就是可以实现消息和画面的完美对齐。
     *
     * @param data          待发送的数据，最大支持1kb（1000字节）的数据大小
     * @param dataSize      待发送的数据大小
     * @param repeatCount   发送数据次数
     * @return true：消息已通过限制，等待后续视频帧发送；false:消息被限制发送
     *
     * @note 本接口有以下限制：
     *       - 数据在接口调用完后不会被即时发送出去，而是从下一帧视频帧开始带在视频帧中发送。
     *       - 发送消息到房间内所有用户，每秒最多能发送30条消息（与 sendCustomCmdMsg 共享限制）。
     *       - 每个包最大为1KB，若发送大量数据，会导致视频码率增大，可能导致视频画质下降甚至卡顿（与 sendCustomCmdMsg 共享限制）。
     *       - 每个客户端每秒最多能发送总计8KB数据（与 sendCustomCmdMsg 共享限制）。
     *       - 若指定多次发送（repeatCount > 1），则数据会被带在后续的连续 repeatCount 个视频帧中发送出去，同样会导致视频码率增大。
     *       - 如果 repeatCount > 1，多次发送，接收消息 onRecvSEIMsg 回调也可能会收到多次相同的消息，需要去重。
     */
    virtual bool sendSEIMsg(const uint8_t* data, uint32_t dataSize, int32_t repeatCount) = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （十一）设备和网络测试
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name 设备和网络测试
    /// @{
    /**
     * 11.1 开始进行网络测速（视频通话期间请勿测试，以免影响通话质量）
     *
     * 测速结果将会用于优化 SDK 接下来的服务器选择策略，因此推荐您在用户首次通话前先进行一次测速，这将有助于我们选择最佳的服务器。
     * 同时，如果测试结果非常不理想，您可以通过醒目的 UI 提示用户选择更好的网络。
     *
     * @note 测速本身会消耗一定的流量，所以也会产生少量额外的流量费用。
     *
     * @param sdkAppId 应用标识
     * @param userId 用户标识
     * @param userSig 用户签名
     */
    virtual void startSpeedTest(uint32_t sdkAppId, const char* userId, const char* userSig) = 0;

    /**
     * 11.2 停止网络测速
     */
    virtual void stopSpeedTest() = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （十二）LOG 相关接口函数
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name LOG 相关接口函数
    /// @{
    /**
     * 12.1 获取 SDK 版本信息
     *
     * @return UTF-8 编码的版本号。
     */
    virtual const char* getSDKVersion() = 0;

    /**
     * 12.2 设置 Log 输出级别
     *
     * @param level 参见 TRTCLogLevel，默认值：TRTCLogLevelNone
     */
    virtual void setLogLevel(TRTCLogLevel level) = 0;

    /**
     * 12.3 启用或禁用控制台日志打印
     *
     * @param enabled 指定是否启用，默认为禁止状态
     */
    virtual void setConsoleEnabled(bool enabled) = 0;

    /**
     * 12.4 启用或禁用 Log 的本地压缩
     *
     *  开启压缩后，Log 存储体积明显减小，但需要腾讯云提供的 Python 脚本解压后才能阅读。
     *  禁用压缩后，Log 采用明文存储，可以直接用记事本打开阅读，但占用空间较大。
     *
     * @param enabled 指定是否启用，默认为禁止状态
     */
    virtual void setLogCompressEnabled(bool enabled) = 0;

    /**
     * 12.5 设置日志保存路径
     *
     * @note 日志文件默认保存位置：
     * - Windows 平台：在 C:/Users/[系统用户名]/AppData/Roaming/Tencent/liteav/log，即 %appdata%/Tencent/liteav/log 下
     * - iOS 或 Mac 平台：在 sandbox Documents/log 下
     * - Android 平台：在 /app私有目录/files/log/tencent/liteav/ 下
     * @note 如需修改，必须在所有方法前调用，并且保证目录存在及应用有目录的读写权限。
     * @param path 存储日志的文件夹，请使用 UTF-8 编码
     */
    virtual void setLogDirPath(const char* path) = 0;

    /**
     * 12.6 设置日志回调
     *
     * @param callback 日志回调
     */
    virtual void setLogCallback(ITRTCLogCallback* callback) = 0;

    /**
     * 12.7 显示仪表盘
     *
     * 仪表盘是状态统计和事件消息浮层 view，方便调试。
     *
     * @param showType 0：不显示；1：显示精简版；2：显示全量版，默认为不显示
     */
    virtual void showDebugView(int showType) = 0;

    /**
     * 12.8 调用实验性 API 接口
     *
     * @note 该接口用于调用一些实验性功能
     * @param jsonStr 接口及参数描述的 JSON 字符串
     */
    virtual void callExperimentalAPI(const char *jsonStr) = 0;
    /// @}

    /////////////////////////////////////////////////////////////////////////////////
    //
    //                      （十三）Windows 专有废弃方法
    //
    /////////////////////////////////////////////////////////////////////////////////
    /// @name Windows 专有废弃方法
    /// @{
#ifdef _WIN32
    using IDeprecatedTRTCCloud::startLocalAudio;
    using IDeprecatedTRTCCloud::startRemoteView;
    using IDeprecatedTRTCCloud::startScreenCapture;
    using IDeprecatedTRTCCloud::stopRemoteView;
    using IDeprecatedTRTCCloud::selectScreenCaptureTarget;
    using IDeprecatedTRTCCloud::enableCustomVideoCapture;
    using IDeprecatedTRTCCloud::sendCustomVideoData;
#endif  // _WIN32
    /// @}
};
/// @}
}

#endif /* __ITRTCCLOUD_H__ */
