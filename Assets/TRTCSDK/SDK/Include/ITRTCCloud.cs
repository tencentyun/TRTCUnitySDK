using System;
using UnityEngine;

namespace trtc
{
    /// <summary>
    /// Module:   ITRTCCloud @ TXLiteAVSDK
    /// 
    /// SDK VERSION 6.0
    ///
    /// <para>Function: 腾讯云视频通话功能的主要接口类</para>
    /// <para>Nouns[1]: 主流 - TRTC 里称摄像头这一路的画面叫做“主流”（或主路）画面。</para>
    /// <para>Nouns[2]: 辅流(substream) - TRTC 里称屏幕分享或者播片这一路的画面叫做“辅流”（或辅路）画面。</para>
    /// <para>Nouns[3]: 播片(vodplay) - TRTC 的 Windows 版本支持将本地的一个视频文件分享出去，这个功能成为“播片”。</para>
    /// </summary>
    /// <example>
    /// 创建/使用/销毁 ITRTCCloud 对象的示例代码：
    /// <code>
    /// ITRTCCloud trtcCloud = ITRTCCloud.getTRTCShareInstance();
    /// if (trtcCloud != null)
    /// {
    ///		string version = trtcCloud->getSDKVersion();
    /// }
    /// </code>
    ///	程序退出或者后续程序流程不需要使用 TRTCCloud 对象时，释放单例对象 ITRTCCloud
    /// <code>
    /// ITRTCCloud.destroyTRTCShareInstance();
    /// trtcCloud = NULL;
    /// </code>
    /// </example>
    public abstract class ITRTCCloud
    {
        /// <summary>
        /// 获取 ITRTCCloud 单例对象。
        /// </summary>
        /// <returns>返回 ITRTCCloud 单例对象</returns>
        public static ITRTCCloud getTRTCShareInstance() { return ITRTCCloudImplement.getTRTCShareInstance(); }

        /// <summary>
        /// 释放 ITRTCCloud 单例对象。
        /// </summary>
        public static void destroyTRTCShareInstance() { ITRTCCloudImplement.destroyTRTCShareInstance(); }

        
        /////////////////////////////////////////////////////////////////////////////////
        //
        //                       设置 TRTCCloudCallback 回调
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        /// 设置回调接口 ITRTCCloudCallback
        /// <para>您可以通过 ITRTCCloudCallback 获得来自 SDK 的各种状态通知，详见 TRTCCloudCallback.cs 中的定义</para>
        /// </summary>
        /// <param name="callback">事件回调</param>
        public abstract void addCallback(ITRTCCloudCallback callback);

        /// <summary>
        /// 移除事件回调
        /// </summary>
        /// <param name="callback">事件回调</param>
        public abstract void removeCallback(ITRTCCloudCallback callback);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （一）房间相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        ///  1.1 进入房间
        /// <para>您会收到来自 TRTCCloudCallback 中的 onEnterRoom(result) 回调:</para>
        /// <para>- 如果加入成功，result 会是一个正数（result &gt; 0），表示加入房间的时间消耗，单位是毫秒（ms）。</para>
        /// <para>- 如果加入失败，result 会是一个负数（result &lt; 0），表示进房失败的错误码。</para>
        /// <para>进房失败的错误码含义请参见[错误码](https://cloud.tencent.com/document/product/647/32257)。</para>
        /// <para> TRTCAppSceneVideoCall：</para>
        /// <para>          视频通话场景，支持720P、1080P高清画质，单个房间最多支持300人同时在线，最高支持50人同时发言。</para>
        /// <para>          适合：[1对1视频通话]、[300人视频会议]、[在线问诊]、[视频聊天]、[远程面试]等。</para>
        /// <para> TRTCAppSceneAudioCall：</para>
        /// <para>          语音通话场景，支持 48kHz，支持双声道。单个房间最多支持300人同时在线，最高支持50人同时发言。</para>
        /// <para>          适合：[1对1语音通话]、[300人语音会议]、[在线狼人杀]、[语音聊天室]等。</para>
        /// <para>  TRTCAppSceneLIVE：</para>
        /// <para>          视频互动直播，支持平滑上下麦，切换过程无需等待，主播延时小于300ms；支持十万级别观众同时播放，播放延时低至1000ms。</para>
        /// <para>          适合：[在线互动课堂]、[互动直播]、[视频相亲]、[远程培训]、[超大型会议]等。</para>
        /// <para>  TRTCAppSceneVoiceChatRoom：</para>
        /// <para>          语音互动直播，支持平滑上下麦，切换过程无需等待，主播延时小于300ms；支持十万级别观众同时播放，播放延时低至1000ms。</para>
        /// <para>         适合：[语聊房]、[K 歌房]、[FM 电台]等。</para>
        /// </summary>
        /// <remarks>
        /// 1. 当 scene 选择为 TRTCAppSceneLIVE 或 TRTCAppSceneVoiceChatRoom 时，您必须通过 TRTCParams 中的 role 字段指定当前用户的角色。
        /// 2. 不管进房是否成功，enterRoom 都必须与 exitRoom 配对使用，在调用 exitRoom 前再次调用 enterRoom 函数会导致不可预期的错误问题。
        /// </remarks>
        /// <param name="params">进房参数，请参考 TRTCParams</param>
        /// <param name="scene">应用场景，目前支持视频通话（VideoCall）、在线直播（Live）、语音通话（AudioCall）、语音聊天室（VoiceChatRoom）四种场景</param>
        public abstract void enterRoom(ref TRTCParams param, TRTCAppScene scene);

        /// <summary>
        /// 1.2 离开房间
        ///
        /// <para>调用 exitRoom() 接口会执行退出房间的相关逻辑，例如释放音视频设备资源和编解码器资源等。</para>
        /// <para>待资源释放完毕，SDK 会通过 TRTCCloudCallback 中的 onExitRoom() 回调通知您。</para>
        /// 
        /// <para>如果您要再次调用 enterRoom() 或者切换到其他的音视频 SDK，请等待 onExitRoom() 回调到来后再执行相关操作。</para>
        /// <para>否则可能会遇到如摄像头、麦克风设备被强占等各种异常问题。</para>
        /// </summary>
        public abstract void exitRoom();

        /// <summary>
        /// 1.3 切换角色，仅适用于直播场景（TRTCAppSceneLIVE 和 TRTCAppSceneVoiceChatRoom）
        /// 
        /// <para>在直播场景下，一个用户可能需要在“观众”和“主播”之间来回切换。</para>
        /// <para>您可以在进房前通过 TRTCParams 中的 role 字段确定角色，也可以通过 switchRole 在进房后切换角色。</para>
        /// </summary>
        /// <param name="role">目标角色，默认为主播：
        /// - {@link TRTCRoleAnchor} 主播，可以上行视频和音频，一个房间里最多支持50个主播同时上行音视频。
        /// - {@link TRTCRoleAudience} 观众，只能观看，不能上行视频和音频，一个房间里的观众人数没有上限。
        /// </param>
        public abstract void switchRole(TRTCRoleType role);

        /// <summary>
        /// 请求跨房通话（主播 PK）
        /// <para>TRTC 中两个不同音视频房间中的主播，可以通过“跨房通话”功能拉通连麦通话功能。使用此功能时， 两个主播无需退出各自原来的直播间即可进行“连麦 PK”。</para>
        /// </summary>
        /// <example>
        /// <code>
        ///     例如：当房间“001”中的主播 A 通过 connectOtherRoom() 跟房间“002”中的主播 B 拉通跨房通话后， 房间“001”中的用户都会收到主播 B 的 onUserEnter(B) 回调和 onUserVideoAvailable(B,true) 回调。 房间“002”中的用户都会收到主播 A 的 onUserEnter(A) 回调和 onUserVideoAvailable(A,true) 回调。
        ///     简言之，跨房通话的本质，就是把两个不同房间中的主播相互分享，让每个房间里的观众都能看到两个主播。
        ///                         房间 001                     房间 002
        ///               -------------               ------------
        ///    跨房通话前：| 主播 A      |             | 主播 B     |
        ///              | 观众 U V W  |             | 观众 X Y Z |
        ///               -------------               ------------
        ///                 房间 001                     房间 002
        ///               -------------               ------------
        ///    跨房通话后：| 主播 A B    |             | 主播 B A   |
        ///              | 观众 U V W  |             | 观众 X Y Z |
        ///               -------------               ------------
        /// 跨房通话的参数考虑到后续扩展字段的兼容性问题，暂时采用了 JSON 格式的参数，要求至少包含两个字段：
        /// roomId：房间“001”中的主播 A 要跟房间“002”中的主播 B 连麦，主播 A 调用 connectOtherRoom() 时 roomId 应指定为“002”。
        /// userId：房间“001”中的主播 A 要跟房间“002”中的主播 B 连麦，主播 A 调用 connectOtherRoom() 时 userId 应指定为 B 的 userId。
        /// 跨房通话的请求结果会通过 ITRTCCloudCallback 中的 onConnectOtherRoom() 回调通知给您。
        /// </code>
        /// </example>
        /// <param name="jsonParams"> JSON 字符串连麦参数，roomId 代表目标房间号，userId 代表目标用户 ID</param>
        /// <remarks>
        /// 此处用到 jsoncpp 库来格式化 JSON 字符串
        /// JsonData jsonObj =new JsonData();
        /// jsonObj["roomId"] = 1908;
        /// jsonObj["userId"] = "345";
        /// string jsonData = JsonMapper.ToJson(jsonObj);
        /// mTRTCCloud.connectOtherRoom(jsonData);
        /// </remarks>
        public abstract void connectOtherRoom(string jsonParams);


        ///<summary>
        ///关闭跨房连麦
        ///<para>跨房通话的退出结果会通过 ITRTCCloudCallback 中的 onDisconnectOtherRoom() 回调通知给您。</para>
        ///</summary>
        public abstract void disconnectOtherRoom();

        ///<summary>
        ///切换房间
        ///<para> 调用该接口后，用户会先退出原来的房间并快速进入 TRTCSwitchRoomConfig 中指定的新房间: 相比于直接调用 exitRoom + enterRoom 的方式，switchRoom 接口对主播更加友好，</para>
        ///<para> 因为 switchRoom 不会停止主播端视频的采集和预览。 接口调用结果会通过 ITRTCCloudCallback 中的 onSwitchRoom(errCode, errMsg) 回调通知给您。</para>
        ///</summary>
        ///<param name="config">房间切换参数，请参考 TRTCSwitchRoomConfig</param>
        public abstract void switchRoom(TRTCSwitchRoomConfig config);

        ///<summary>
        ///设置音视频数据接收模式
        ///<para>需要在进房前设置才能生效</para>
        ///</summary>
        ///<param name="autoRecvAudio">true：自动接收音频数据；false：需要调用 muteRemoteAudio 进行请求或取消。默认值：true</param>
        ///<param name="autoRecvVideo">true：自动接收视频数据；false：需要调用 startRemoteView/stopRemoteView 进行请求或取消。默认值：true </param>
        ///<remarks>
        /// 为实现进房秒开的绝佳体验，SDK 默认进房后自动接收音视频。即在您进房成功的同时，您将立刻收到远端所有用户的音视频数据。 若您没有调用 startRemoteView，视频数据将自动超时取消。 若您主要用于语音聊天等没有自动接收视频数据需求的场景，您可以根据实际需求选择接收模式，以免产生预期之外的视频时长费用。
        ///</remarks>
        public abstract void setDefaultStreamRecvMode(bool autoRecvAudio, bool autoRecvVideo);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （二）CDN 相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name CDN 相关接口函数
        /// @{
        /// <summary>
        /// 2.1 开始向腾讯云的直播 CDN 推流
        /// 
        /// <para>该接口会指定当前用户的音视频流在腾讯云 CDN 所对应的 StreamId，进而可以指定当前用户的 CDN 播放地址。</para>
        /// 
        /// <para>例如：如果我们采用如下代码设置当前用户的主画面 StreamId 为 user_stream_001，那么该用户主画面对应的 CDN 播放地址为：</para>
        /// <para>“http://yourdomain/live/user_stream_001.flv”，其中 yourdomain 为您自己备案的播放域名，</para>
        /// <para>您可以在直播[控制台](https://console.cloud.tencent.com/live) 配置您的播放域名，腾讯云不提供默认的播放域名。</para>
        /// <para>您也可以在设置 enterRoom 的参数 TRTCParams 时指定 streamId, 而且我们更推荐您采用这种方案。</para>
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
        /// 您需要先在实时音视频 [控制台](https://console.cloud.tencent.com/trtc) 中的功能配置页开启“启用旁路推流”才能生效。
        /// - 若您选择“指定流旁路”，则您可以通过该接口将对应音视频流推送到腾讯云 CDN 且指定为填写的流 ID。
        /// - 若您选择“全局自动旁路”，则您可以通过该接口调整默认的流 ID。
        /// </remarks>
        /// <param name="streamId">自定义流 ID</param>
        /// <param name="type">仅支持 TRTCVideoStreamTypeBig 和 TRTCVideoStreamTypeSub。</param>
        public abstract void startPublishing(string streamId, TRTCVideoStreamType type);

        /// <summary>
        /// 2.2 停止向腾讯云的直播 CDN 推流
        /// </summary>
        public abstract void stopPublishing();

        /// <summary>
        /// 2.3 开始向友商云的直播 CDN 转推，暂不支持windows
        /// 该接口跟 startPublishing() 类似，但 startPublishCDNStream() 支持向非腾讯云的直播 CDN 转推。
        /// </summary>
        public abstract void startPublishCDNStream(TRTCPublishCDNParam param);
        
        /// <summary>
        /// 2.4 停止向腾讯云的直播 CDN 推流，暂不支持windows
        /// </summary>
        public abstract void stopPublishCDNStream();

        /// <summary>
        /// 设置云端的混流转码参，暂不支持windows
        /// </summary>
        /// <example>
        /// <para>
        /// 如果您在实时音视频 控制台 中的功能配置页开启了“启动自动旁路直播”功能， 房间里的每一路画面都会有一个默认的直播 CDN 地址。
        /// </para>
        /// <para>
        /// 一个直播间中可能有不止一位主播，而且每个主播都有自己的画面和声音，但对于 CDN 观众来说，他们只需要一路直播流， 所以您需要将多路音视频流混成一路标准的直播流，这就需要混流转码。
        /// </para>
        /// <para>
        /// 当您调用 setMixTranscodingConfig() 接口时，SDK 会向腾讯云的转码服务器发送一条指令，目的是将房间里的多路音视频流混合为一路, 您可以通过 mixUsers 参数来调整每一路画面的位置，以及是否只混合声音，也可以通过 videoWidth、videoHeight、videoBitrate 等参数控制混合音视频流的编码参数。
        /// </para>
        /// <code>
        /// 【画面1】=> 解码 ====> \
        ///                        \
        ///【画面2】=> 解码 =>  画面混合 => 编码 => 【混合后的画面】
        ///                        /
        ///【画面3】=> 解码 ====> /
        ///【声音1】=> 解码 ====> \
        ///                        \
        ///【声音2】=> 解码 =>  声音混合 => 编码 => 【混合后的声音】
        ///                        /
        ///【声音3】=> 解码 ====> /
        /// </code>
        /// </example>
        /// <remarks>
        /// 关于云端混流的注意事项：
        ///        云端转码会引入一定的 CDN 观看延时，大概会增加1 - 2秒。
        ///         调用该函数的用户，会将连麦中的多路画面混合到自己当前这路画面或者 config 中指定的 streamId 上。
        ///         请注意，若您还在房间中且不再需要混流，请务必传入 nullptr 进行取消，因为当您发起混流后，云端混流模块就会开始工作，不及时取消混流可能会引起不必要的计费损失。
        ///         请放心，您退房时会自动取消混流状态。
        /// </remarks>
        /// <param name="config">请参考 TRTCTypeDef.h 中关于 TRTCTranscodingConfig 的介绍。如果传入 nullptr 则取消云端混流转码。</param>
        public abstract void setMixTranscodingConfig(TRTCTranscodingConfig? config);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （三）视频相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name  视频相关接口函数
        /// @{

        /// <summary>
        /// 3.1 开启本地视频的预览画面
        /// </summary>
        /// <remarks>
        /// 目前只支持自定义视频渲染，需要先设置setLocalVideoRenderCallback，再调用startLocalPreview开始推拉流，视频帧数据会通过onRenderFrame回调出来
        /// <para>具体渲染方式：new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// 可参考Demo/TRTCVideoRender.cs中的实现
        /// </remarks>
        /// <remarks>
        /// 这个接口会启动默认的摄像头
        /// <para>当开始渲染首帧摄像头画面时，您会收到 ITRTCCloudCallback 中的 onFirstVideoFrame(null) 回调。</para>
        /// </remarks>
        /// <param name="rendObj">目前只支持自定义渲染，此参数传null</param>
        /// <param name="frontCamera">true-前置摄像头，false-后置摄像头，该参数只针对android、ios平台生效，windows平台默认是前置摄像头</param>
        public abstract void startLocalPreview(bool frontCamera, System.Object rendObj);
        
        public abstract IntPtr GetVideoRenderData(string userId, ref int rotation, ref int width, ref int height,ref int length,bool isNeedDestroy);
        
        /// <summary>
        /// 3.2 停止本地视频采集及预览
        /// </summary>
        public abstract void stopLocalPreview();

        /// <summary>
        /// 3.3 暂停/恢复推送本地的视频数据
        /// 
        /// <para>当暂停推送本地视频后，房间里的其它成员将会收到 onUserVideoAvailable(userId, false) 回调通知</para>
		/// <para>当恢复推送本地视频后，房间里的其它成员将会收到 onUserVideoAvailable(userId, true) 回调通知</para>
        /// </summary>
        /// <param name="mute">true：暂停；false：恢复，默认值：false</param>
        public abstract void muteLocalVideo(bool mute);

        /// <summary>
        /// 3.4 开始显示远端视频画面
        /// <para>
        /// 在收到 SDK 的 onUserVideoAvailable(userId, true) 通知时，可以获知该远程用户开启了视频，
        /// 此后调用 startRemoteView(userId) 接口加载该用户的远程画面时，可以用 loading 动画优化加载过程中的等待体验。
        /// 待该用户的首帧画面开始显示时，您会收到 onFirstVideoFrame(userId) 事件回调。
        /// </para>
        /// </summary>
        /// <remarks>
        /// 目前只支持自定义视频渲染，需要先设置setRemoteVideoRenderCallback，再调用startRemoteView开始推拉流，视频帧数据会通过onRenderFrame回调出来
        /// <para>具体渲染方式：new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// 可参考Demo/TRTCVideoRender.cs中的实现
        /// </remarks>
        /// <param name="userId">对方的用户标识</param>
        /// <param name="streamType">指定要观看 userId 的视频流类型：
        /// - 高清大画面：({@link  TRTCVideoStreamTypeBig})
        /// - 低清大画面：({@link  TRTCVideoStreamTypeSmall})
        /// </param>
        /// <param name="rendObj">目前只支持自定义渲染，此参数传null</param>
        public abstract void startRemoteView(string userId, TRTCVideoStreamType streamType, System.Object rendObj);

        /// <summary>
        /// 3.5 停止显示远端视频画面，同时不再拉取远端用户的视频数据流
        /// 
        /// <para>调用此接口后，SDK 会停止接收该用户的远程视频流，同时会清理相关的视频显示资源。</para>
        /// </summary>
        /// <param name="userId">对方的用户标识</param>
        /// <param name="streamType">指定要停止观看的 userId 的视频流类型：
        /// - 高清大画面：({@link  TRTCVideoStreamTypeBig})
        /// - 低清大画面：({@link  TRTCVideoStreamTypeSmall})
        /// </param>
        public abstract void stopRemoteView(string userId, TRTCVideoStreamType streamType);

        /// <summary>
        /// 停止显示所有远端视频画面，同时不再拉取远端用户的视频数据流
        /// </summary>
        /// <remarks>
        /// 如果有屏幕分享的画面在显示，则屏幕分享的画面也会一并被关闭
        /// </remarks>
        public abstract void stopAllRemoteView();

        /// <summary>
        /// 暂停/恢复接收指定的远端视频流
        /// 
        /// <para>该接口仅暂停/恢复接收指定的远端用户的视频流，但并不释放显示资源，所以如果暂停，视频画面会冻屏在 mute 前的最后一帧。</para>
        /// </summary>
        /// <param name="userId">对方的用户标识</param>
        /// <param name="mute">是否暂停接收</param>
        public abstract void muteRemoteVideoStream(string userId, bool mute);

        /// <summary>
        /// 暂停/恢复接收所有远端视频流
        /// </summary>
		/// <para>该接口仅暂停/恢复接收所有远端用户的视频流，但并不释放显示资源，所以如果暂停，视频画面会冻屏在 mute 前的最后一帧。</para>
        /// <param name="mute">是否停止接收</param>
        public abstract void muteAllRemoteVideoStreams(bool mute);

        /// <summary>
        /// 3.9 设置视频编码器相关参数，暂不支持安卓和IOS
        ///
        /// <para>该设置决定了远端用户看到的画面质量（同时也是云端录制出的视频文件的画面质量）</para>
        /// </summary>
        /// <param name="params">视频编码参数，详情请参考 TRTCCloudDef.h 中 TRTCVideoEncParam 的定义</param>
        public abstract void setVideoEncoderParam(ref TRTCVideoEncParam param);

        /// <summary>
        /// 设置网络流控相关参数
        /// 
        /// <para>该设置决定了 SDK 在各种网络环境下的调控策略（例如弱网下是“保清晰”还是“保流畅”）</para>
        /// </summary>
        /// <param name="params">网络流控参数，详情请参考 TRTCCloudDef.h 中 TRTCNetworkQosParam 的定义</param>
        public abstract void setNetworkQosParam(ref TRTCNetworkQosParam param);

        /// <summary>
        /// 设置编码器输出的画面镜像模式，暂不支持windows
        /// </summary>
        /// <remarks>
        /// 该接口不改变本地摄像头的预览画面，但会改变另一端用户看到的（以及服务器录制的）画面效果。
        /// </remarks>
        /// <param name="mirror">是否开启远端镜像, true：远端画面镜像；false：远端画面非镜像。默认值：false</param>
        public abstract void setVideoEncoderMirror(bool mirror);

        /// <summary>
        /// 开启大小画面双路编码模式
        /// </summary>
        /// <remarks>
        /// <code>
        /// 如果当前用户是房间中的主要角色（例如主播、老师、主持人等），并且使用 PC 或者 Mac 环境，可以开启该模式。 开启该模式后，当前用户会同时输出【高清】和【低清】两路视频流（但只有一路音频流）。 对于开启该模式的当前用户，会占用更多的网络带宽，并且会更加消耗 CPU 计算资源。
        /// 对于同一房间的远程观众而言：
        ///     如果用户的下行网络很好，可以选择观看【高清】画面
        ///     如果用户的下行网络较差，可以选择观看【低清】画面
        /// </code>
        /// </remarks>
        /// <param name="enable">是否开启小画面编码，默认值：false</param>
        /// <param name="smallVideoParam">小流的视频参数</param>
        public abstract void enableSmallVideoStream(bool enable, ref TRTCVideoEncParam smallVideoParam);

        /// <summary>
        /// 选定观看指定 userId 的大画面还是小画面
        /// </summary>
        /// <remarks>
        /// 此功能需要该 userId 通过 enableEncSmallVideoStream 提前开启双路编码模式。 如果该 userId 没有开启双路编码模式，则此操作无效。
        /// </remarks>
        /// <param name="userId">用户 ID</param>
        /// <param name="type">视频流类型，即选择看大画面还是小画面，默认为 TRTCVideoStreamTypeBig</param>
        public abstract void setRemoteVideoStreamType(string userId, TRTCVideoStreamType type);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （四）音频相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name 音频相关接口函数
        /// @{
        /// <summary>
        /// 4.2 开启本地音频的采集和上行
        /// 
        /// <para>该函数会启动麦克风采集，并将音频数据传输给房间里的其他用户。</para>
        /// <para>SDK 并不会默认开启本地的音频上行，也就说，如果您不调用这个函数，房间里的其他用户就听不到您的声音。</para>
        /// </summary>
        /// <remarks>
        /// TRTC SDK 并不会默认打开本地的麦克风采集。
        /// </remarks>
		/// <param name="quality">声音质量，参见 TRTCAudioQuality</param>
        public abstract void startLocalAudio(TRTCAudioQuality quality);

        /// <summary>
        /// 4.3 关闭本地音频的采集和上行
        ///
        /// <para>当关闭本地音频的采集和上行，房间里的其它成员会收到 onUserAudioAvailable(false) 回调通知。</para>
        /// </summary>
        public abstract void stopLocalAudio();

        /// <summary>
        /// 4.4 静音/取消静音本地的音频
        ///
        /// <para>当静音本地音频后，房间里的其它成员会收到 onUserAudioAvailable(userId, false) 回调通知。</para>
		/// <para>当取消静音本地音频后，房间里的其它成员会收到 onUserAudioAvailable(userId, true) 回调通知。</para>
        /// <para>与 stopLocalAudio 不同之处在于，muteLocalAudio(true) 并不会停止发送音视频数据，而是继续发送码率极低的静音包。</para>
        /// <para>由于 MP4 等视频文件格式，对于音频的连续性是要求很高的，使用 stopLocalAudio 会导致录制出的 MP4 不易播放。</para>
        /// <para>因此在对录制质量要求很高的场景中，建议选择 muteLocalAudio，从而录制出兼容性更好的 MP4 文件。</para>
        /// </summary>
        /// <param name="mute">true：静音；false：取消静音，默认值：false</param>
        public abstract void muteLocalAudio(bool mute);

        /// <summary>
        /// 4.5 静音/取消静音指定的远端用户的声音
        /// </summary>
        /// <param name="userId">用户 ID</param>
        /// <param name="mute">true：静音；false：取消静音</param>
		/// <remarks>
        /// 静音时会停止接收该用户的远端音频流并停止播放，取消静音时会自动拉取该用户的远端音频流并进行播放。
        /// </remarks>
        public abstract void muteRemoteAudio(string userId, bool mute);

        /// <summary>
        /// 4.6 静音/取消静音所有用户的声音
        /// </summary>
        /// <param name="mute">true：静音；false：取消静音</param>
		/// <remarks>
        /// 静音时会停止接收所有用户的远端音频流并停止播放，取消静音时会自动拉取所有用户的远端音频流并进行播放。
        /// </remarks>
        public abstract void muteAllRemoteAudio(bool mute);

        /// <summary>
        /// 设置某个远程用户的播放音量
        /// 该函数会控制最终交给系统播放的声音音量，会影响录制本地音频文件的音量大小，但不会影响耳返的音量。
        /// 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
        /// </summary>
        /// <param name="userId">远程用户 ID</param>
        /// <param name="volume">音量大小，取值0 - 100</param>
        public abstract void setRemoteAudioVolume(string userId,int volume);

        /// <summary>
        /// 设置 SDK 播放音量。
        /// </summary>
        /// <param name="volume">音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100</param>
        public abstract void setAudioPlayoutVolume(int volume);

        /// <summary>
        /// 获取 SDK 播放音量
        /// </summary>
        /// <returns></returns>
        public abstract int getAudioPlayoutVolume();

        /// <summary>
        /// 开始录音
        /// 该方法调用后， SDK 会将通话过程中的所有音频(包括本地音频，远端音频，BGM等)录制到一个文件里。 无论是否进房，调用该接口都生效。 如果调用 exitRoom 时还在录音，录音会自动停止。
        /// </summary>
        /// <param name="audioRecordingParams">录音参数，请参考 TRTCAudioRecordingParams</param>
        /// <returns>0：成功；-1：录音已开始；-2：文件或目录创建失败；-3：后缀指定的音频格式不支持</returns>
        public abstract int startAudioRecording(ref TRTCAudioRecordingParams audioRecordingParams);

        /// <summary>
        /// 停止录音
        /// 如果调用 exitRoom 时还在录音，录音会自动停止。
        /// </summary>
        public abstract void stopAudioRecording();
        

        /// <summary>
        /// 开启本地录制
        /// 开启后把直播过程中的音视频数据录制存储到本地文件。 应用场景:
        ///     1. 不推流情况下，通过调用 startLocalPreview 预览画面后，进行录制。
        ///     2. 在推流的同时进行录制，把直播的全程录制保存到本地文件。
        /// </summary>
        /// <param name="localRecordingParams">录制参数，请参考 TRTCLocalRecordingParams</param>
        /// 该接口仅支持windows
        public abstract void startLocalRecording(ref TRTCLocalRecordingParams localRecordingParams);

        /// <summary>
        /// 停止本地录制
        /// 如果调用 exitRoom 时还在录制，录制会自动停止。
        /// </summary>
        public abstract void stopLocalRecording();

        /// <summary>
        /// 设置 SDK 采集音量。
        /// </summary>
        /// <param name="volume">音量大小，取值0 - 100</param>
        public abstract void setAudioCaptureVolume(int volume);

        /// <summary>
        /// 获取 SDK 采集音量
        /// </summary>
        public abstract int getAudioCaptureVolume();

        /// <summary>
        /// 启用或关闭音量大小提示
        ///
        /// <para>开启此功能后，SDK 会在 onUserVoiceVolume() 中反馈对每一路声音音量大小值的评估。</para>
        /// <para>我们在 Demo 中有一个音量大小的提示条，就是基于这个接口实现的。</para>
        /// <para>如希望打开此功能，请在 startLocalAudio() 之前调用。</para>
        /// </summary>
        /// <param name="interval">设置 onUserVoiceVolume 回调的触发间隔，单位为ms，最小间隔为100ms，如果小于等于0则会关闭回调，建议设置为300ms</param>
        public abstract void enableAudioVolumeEvaluation(uint interval);


        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （五）摄像头相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name 摄像头相关接口函数
        /// @{
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （六）音频设备相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///获取设备管理模块，目前支持Android、IOS
        ///</summary>
        ///<returns>设备管理类</returns>
        public abstract ITXDeviceManager getDeviceManager();

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （七）美颜特效和图像水印
        //
        /////////////////////////////////////////////////////////////////////////////////

        ///<summary>
        ///设置美颜、美白、红润效果级别，目前暂不支持windows
        ///SDK 内部集成了两套风格不同的磨皮算法，一套我们取名叫“光滑”，适用于美女秀场，效果比较明显。 另一套我们取名“自然”，磨皮算法更多地保留了面部细节，主观感受上会更加自然。
        ///</summary>
        /// <param name="style">美颜风格，光滑或者自然，光滑风格磨皮更加明显，适合娱乐场景。</param>
        /// <param name="beautyLevel">美颜级别，取值范围0 - 9，0表示关闭，1 - 9值越大，效果越明显。</param>
        /// <param name="whitenessLevel">美白级别，取值范围0 - 9，0表示关闭，1 - 9值越大，效果越明显。</param>
        /// <param name="ruddinessLevel">红润级别，取值范围0 - 9，0表示关闭，1 - 9值越大，效果越明显，该参数暂未生效</param>
        public abstract void setBeautyStyle(TRTCBeautyStyle style, uint beauty, uint white, uint ruddiness);

        ///<summary>
        /// 设置水印，安卓、windows暂不支持
        ///</summary>
        /// <param name="streamType">要设置水印的流类型(TRTCVideoStreamTypeBig、TRTCVideoStreamTypeSub)。</param>
        /// <param name="srcData">水印图片源数据（传 null 表示去掉水印）。</param>
        /// <param name="srcType">水印图片源数据类型。</param>
        /// <param name="nWidth">水印图片像素宽度（源数据为文件路径时忽略该参数）。</param>
        /// <param name="nHeight">水印图片像素高度（源数据为文件路径时忽略该参数）。</param>
        /// <param name="xOffset">水印显示的左上角 x 轴偏移，水印的坐标，取值范围为0 - 1的浮点数。</param>
        /// <param name="yOffset">水印显示的左上角 y 轴偏移，水印的坐标，取值范围为0 - 1的浮点数。</param>
        /// <param name="fWidthRatio">水印显示的宽度占画面宽度比例（水印按该参数等比例缩放显示），水印的大小比例，取值范围为0 - 1的浮点数。</param>
        public abstract void setWaterMark(TRTCVideoStreamType streamType, string srcData, TRTCWaterMarkSrcType srcType, uint nWidth, uint nHeight, float xOffset, float yOffset, float fWidthRatio);


        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （八）音乐特效和人声特效
        //
        /////////////////////////////////////////////////////////////////////////////////
        ///<summary>
        ///获取音效管理类, 目前支持Android、IOS、MacOs
        ///</summary>
        ///<returns>音效管理类</returns>
        ///<remarks>
        ///该模块是整个 SDK 的音效管理模块，支持如下功能：
        ///耳机耳返：麦克风捕捉的声音实时通过耳机播放。
        ///混响效果：KTV、小房间、大会堂、低沉、洪亮...
        ///变声特效：萝莉、大叔、重金属、外国人...
        ///背景音乐：支持在线音乐和本地音乐，支持变速、变调等特效、支持原生和伴奏并播放和循环播放。
        ///短音效：鼓掌声、欢笑声等简短的音效文件，对于小于10秒的文件，请将 isShortFile 参数设置为 YES。
        ///</remarks>
        public abstract ITXAudioEffectManager getAudioEffectManager();

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （九）屏幕分享相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name 屏幕分享相关接口函数
        /// @{

        /// <summary>
        /// 9.1 启动屏幕分享
        /// </summary>
        /// <remarks>
        /// 一个用户同时最多只能上传一条主路（TRTCVideoStreamTypeBig）画面和一条辅路（TRTCVideoStreamTypeSub）画面，
        /// 默认情况下，屏幕分享使用辅路画面，如果使用主路画面，建议您提前停止摄像头采集（stopLocalPreview）避免相互冲突。
        ///</remarks>
        /// <param name="type">屏幕分享使用的线路，可以设置为主路（TRTCVideoStreamTypeBig）或者辅路（TRTCVideoStreamTypeSub），默认使用辅路。</param>
        /// <param name="param">屏幕分享的画面编码参数。</param>
        public abstract void startScreenCapture(TRTCVideoStreamType type, ref TRTCVideoEncParam param);

        /// <summary>
        /// 9.2 停止屏幕采集
        /// </summary>
        public abstract void stopScreenCapture();

        /// <summary>
        /// 9.3 暂停屏幕分享
        /// </summary>
        public abstract void pauseScreenCapture();

        /// <summary>
        /// 9.4 恢复屏幕分享
        /// </summary>
        public abstract void resumeScreenCapture();

        /// <summary>
        /// 9.5 枚举可分享的屏幕列表，建议在 startScreenCapture 之前调用
        /// 
        /// <para>通过如下函数，您可以获得可分享屏幕的 ID、类型、名称。</para>
        /// </summary>
        /// <remarks>
        /// 返回屏幕列表信息。
        /// </remarks>
        /// <returns>目前仅返回屏幕类型数据</returns>
        public abstract TRTCScreenCaptureSourceInfo[] getScreenCaptureSources();

        /// <summary>
        /// 9.6 设置屏幕共享参数，该方法在屏幕共享过程中也可以调用
        ///
        /// <para>如果您期望在屏幕分享的过程中，切换想要分享的屏幕，可以再次调用这个函数而不需要重新开启屏幕分享。</para>
        ///
        /// <para>支持如下两种情况：</para>
        /// <para>-共享整个屏幕：sourceInfoList 中 type 为 Screen 的 source，captureRect 设为{ 0, 0, 0, 0 }</para>
        /// <para>-共享指定区域：sourceInfoList 中 type 为 Screen 的 source，captureRect 设为非 NULL，例如{ 100, 100, 300, 300 }</para>
        /// </summary>
        /// <param name="source">指定分享源</param>
        /// <param name="captureRect">指定捕获的区域</param>
        /// <param name="property">指定屏幕分享目标的属性，包括捕获鼠标，高亮捕获窗口等，详情参考 TRTCScreenCaptureProperty 定义</param>
        public abstract void selectScreenCaptureTarget(TRTCScreenCaptureSourceInfo source, Rect captureRect, TRTCScreenCaptureProperty property);

        /// <summary>
        /// 9.7 设置屏幕分享的编码器参数
        /// </summary>
        /// <para>- setVideoEncoderParam() 用于设置远端主路画面（TRTCVideoStreamTypeBig，一般用于摄像头）的编码参数。</para>
        /// <para>- setSubStreamEncoderParam() 用于设置远端辅路画面（TRTCVideoStreamTypeSub，一般用于屏幕分享）的编码参数。</para>
        /// <para>该设置决定远端用户看到的画面质量，同时也是云端录制出的视频文件的画面质量。</para>
        /// <remarks>即使使用主路传输屏幕分享的数据（在调用 startScreenCapture 时设置 type=TRTCVideoStreamTypeBig），依然要使用此接口更新屏幕分享的编码参数。</remarks>
        /// <param name="param">辅流编码参数，详情请参考 TRTCCloudDef.h 中的 TRTCVideoEncParam 定义</param>
        public abstract void setSubStreamEncoderParam(ref TRTCVideoEncParam param);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十）自定义采集和渲染
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name 自定义采集和渲染
        /// @{

        /// <summary>
        /// 启用视频自定义采集模式
        ///
        /// <para>开启该模式后，SDK 不在运行原有的视频采集流程，只保留编码和发送能力。</para>
        /// <para>您需要用 sendCustomVideoData() 不断地向 SDK 塞入自己采集的视频画面。</para>
        /// </summary>
        /// <param name="enable">是否启用，默认值：false</param>
        public abstract void enableCustomVideoCapture(bool enable);

        /// <summary>
        /// 向 SDK 投送自己采集的视频数据
        ///
        /// <para>TRTCVideoFrame 推荐如下填写方式（其他字段不需要填写）：</para>
        /// <para>-pixelFormat：仅支持 LiteAVVideoPixelFormat_I420。</para>
        /// <para>-bufferType：仅支持 LiteAVVideoBufferType_Buffer。</para>
        /// <para>-data：视频帧 buffer。</para>
        /// <para>-length：视频帧数据长度，I420 格式下，其值等于：width × height × 3 / 2。</para>
        /// <para>-width：视频图像长度。</para>
        /// <para>-height：视频图像宽度。</para>
        /// <para>-timestamp：如果 timestamp 间隔不均匀，会严重影响音画同步和录制出的 MP4 质量。</para>
        ///
        /// <para>参考文档：[自定义采集和渲染](https://cloud.tencent.com/document/product/647/34066)。</para>
        /// </summary>
        /// <remarks>
        /// - SDK 内部有帧率控制逻辑，目标帧率以您在 setVideoEncoderParam 中设置的为准，太快会自动丢帧，太慢则会自动补帧。
        /// <para>- 可以设置 frame 中的 timestamp 为 0，相当于让 SDK 自己设置时间戳，但请“均匀”地控制 sendCustomVideoData 的调用间隔，否则会导致视频帧率不稳定。</para>
        /// </remarks>
        /// <param name="frame">视频数据，支持 I420 格式数据。</param>
        public abstract void sendCustomVideoData(TRTCVideoFrame frame);

        /// <summary>
        /// 启用音频自定义采集模式，暂不支持安卓端
        ///
        /// <para>开启该模式后，SDK 停止运行原有的音频采集流程，只保留编码和发送能力。</para>
        /// <para>您需要用 sendCustomAudioData() 不断地向 SDK 塞入自己采集的音频数据。</para>
        /// </summary>
        /// <param name="enable">是否启用，默认值：false</param>
        public abstract void enableCustomAudioCapture(bool enable);

        /// <summary>
        /// 向 SDK 投送自己采集的音频数据，暂不支持安卓端
        /// <para>TRTCAudioFrame 推荐如下填写方式（其他字段不需要填写）：</para>
        /// <para>-audioFormat：仅支持 LiteAVAudioFrameFormatPCM。</para>
        /// <para>-data：音频帧 buffer。</para>
        /// <para>-length：音频帧数据长度，推荐每帧20ms采样数。【PCM格式、48000采样率、单声道的帧长度：48000 × 0.02s × 1 × 16bit = 15360bit = 1920字节】。</para>
        /// <para>-sampleRate：采样率，仅支持48000。</para>
        /// <para>-channel：频道数量（如果是立体声，数据是交叉的），单声道：1； 双声道：2。</para>
        /// <para>-timestamp：如果 timestamp 间隔不均匀，会严重影响音画同步和录制出的 MP4 质量。</para>
        ///
        /// <para>参考文档：[自定义采集和渲染](https://cloud.tencent.com/document/product/647/34066)。</para>
        /// </summary>
        /// <remarks>
        /// 可以设置 frame 中的 timestamp 为 0，相当于让 SDK 自己设置时间戳，但请“均匀”地控制 sendCustomAudioData 的调用间隔，否则会导致声音断断续续。
        /// </remarks>
        /// <param name="frame">音频帧，仅支持 LiteAVAudioFrameFormatPCM 格式。目前只支持单声道，仅支持48K采样率，LiteAVAudioFrameFormatPCM 格式。</param>
        public abstract void sendCustomAudioData(TRTCAudioFrame frame);

        /// <summary>
        /// 设置本地视频自定义渲染
        /// </summary>
        /// <remarks>
        /// 设置此方法，SDK 内部会把采集到的数据回调出来，交给Unity的Texture2D来渲染
        /// <para>调用 setLocalVideoRenderCallback(TRTCVideoPixelFormat_Unknown, TRTCVideoBufferType_Unknown, null) 停止回调</para>
        /// <para>iOS、Mac、Windows平台目前支持回调TRTCVideoPixelFormat_BGRA32像素格式的视频帧，Unity可以使用BGRA32格式的数据进行渲染。具体渲染方式：new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// <para>Android平台目前支持TRTCVideoPixelFormat_RGBA32像素格式的视频帧，Unity可使用RGBA32像素格式的数据进行渲染。具体渲染方式：new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.RGBA32, false);</para>
        /// </remarks>
        /// <param name="streamType">流类型</param>
        /// <param name="pixelFormat">指定回调的像素格式</param>
        /// <param name="bufferType">指定视频数据结构类型</param>
        /// <param name="callback">自定义渲染回调</param>
        /// <returns>0：成功；&lt;0：错误</returns>
        public abstract int setLocalVideoRenderCallback(TRTCVideoStreamType streamType, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback callback);

        /// <summary>
        /// 设置远端视频自定义渲染
        ///
        /// <para>此方法同 setLocalVideoRenderDelegate，区别在于一个是本地画面的渲染回调， 一个是远程画面的渲染回调。</para>
        /// </summary>
        /// <remarks>
        /// 设置此方法，SDK 内部会把远端的数据解码后回调出来，交给Unity的Texture2D来渲染
        /// <para>调用 setRemoteVideoRenderCallback(userId, TRTCVideoPixelFormat_Unknown,  TRTCVideoBufferType_Unknown, nullptr) 停止回调。</para>
        /// <para>iOS、Mac、Windows平台目前支持回调TRTCVideoPixelFormat_BGRA32像素格式的视频帧，Unity可以使用BGRA32格式的数据进行渲染。具体渲染方式：new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);</para>
        /// <para>Android平台目前支持TRTCVideoPixelFormat_RGBA32像素格式的视频帧，Unity可使用RGBA32像素格式的数据进行渲染。具体渲染方式：new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.RGBA32, false);</para>
        /// </remarks>
        /// <param name="userId">用户标识</param>
        /// <param name="streamType">流类型</param>
        /// <param name="pixelFormat">指定回调的像素格式</param>
        /// <param name="bufferType">指定视频数据结构类型</param>
        /// <param name="callback">自定义渲染回调</param>
        /// <returns>0：成功；&lt;0：错误</returns>
        public abstract int setRemoteVideoRenderCallback(string userId, TRTCVideoStreamType streamType, TRTCVideoPixelFormat pixelFormat, TRTCVideoBufferType bufferType, ITRTCVideoRenderCallback callback);

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十一）自定义消息发送
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name 自定义消息发送
        /// @{
        /// <summary>
        /// 将小数据量的自定义数据嵌入视频帧中
        /// <para>
        /// 跟 sendCustomCmdMsg 的原理不同，sendSEIMsg 是将数据直接塞入视频数据头中。因此，即使视频帧被旁路到了直播 CDN 上，
        /// 这些数据也会一直存在。但是由于要把数据嵌入视频帧中，所以数据本身不能太大，推荐几个字节就好。
        /// </para>
        /// <para>最常见的用法是把自定义的时间戳（timstamp）用 sendSEIMsg 嵌入视频帧中，这种方案的最大好处就是可以实现消息和画面的完美对齐。</para>
        /// </summary>
        /// <remarks>
        /// 本接口有以下限制：
        /// <para>    -数据在接口调用完后不会被即时发送出去，而是从下一帧视频帧开始带在视频帧中发送。</para>
        /// <para>    -发送消息到房间内所有用户，每秒最多能发送30条消息（与 sendCustomCmdMsg 共享限制）。</para>
        /// <para>    -每个包最大为1KB，若发送大量数据，会导致视频码率增大，可能导致视频画质下降甚至卡顿（与 sendCustomCmdMsg 共享限制）。</para>
        /// <para>    -每个客户端每秒最多能发送总计8KB数据（与 sendCustomCmdMsg 共享限制）。</para>
        /// <para>    -若指定多次发送（repeatCount > 1），则数据会被带在后续的连续 repeatCount 个视频帧中发送出去，同样会导致视频码率增大。</para>
        /// <para>    -如果 repeatCount > 1，多次发送，接收消息 onRecvSEIMsg 回调也可能会收到多次相同的消息，需要去重。</para>
        /// </remarks>
        /// <param name="data">待发送的数据，最大支持1kb（1000字节）的数据大小</param>
        /// <param name="dataSize">待发送的数据大小</param>
        /// <param name="repeatCount">发送数据次数</param>
        /// <returns>true：消息已通过限制，等待后续视频帧发送；false:消息被限制发送</returns>
        public abstract bool sendSEIMsg(byte[] data, int dataSize, int repeatCount);

        /// <summary>
        /// 发送自定义消息给房间内所有用户
        /// <para>该接口可以借助音视频数据通道向当前房间里的其他用户广播您自定义的数据，但因为复用了音视频数据通道， 请务必严格控制自定义消息的发送频率和消息体的大小，否则会影响音视频数据的质量控制逻辑，造成不确定性的问题。</para>
        /// </summary>
        /// <param name="cmdId">消息 ID，取值范围为1 - 10</param>
        /// <param name="data">待发送的消息，最大支持1KB（1000字节）的数据大小</param>
        /// <param name="dataSize">待发送的数据大小</param>
        /// <param name="reliable">是否可靠发送，可靠发送的代价是会引入一定的延时，因为接收端要暂存一段时间的数据来等待重传</param>
        /// <param name="ordered">是否要求有序，即是否要求接收端接收的数据顺序和发送端发送的顺序一致，这会带来一定的接收延时，因为在接收端需要暂存并排序这些消息</param>
        /// <returns>消息已经发出；false：消息发送失败</returns>
        /// <remarks>
        /// 本接口有以下限制：
        ///     发送消息到房间内所有用户（暂时不支持 Web/小程序端），每秒最多能发送30条消息。
        ///     每个包最大为1KB，超过则很有可能会被中间路由器或者服务器丢弃。
        ///     每个客户端每秒最多能发送总计8KB数据。
        ///     将 reliable 和 ordered 同时设置为 true 或 false，暂不支持交叉设置。
        ///     强烈建议不同类型的消息使用不同的 cmdID，这样可以在要求有序的情况下减小消息时延。
        /// </remarks>
        public abstract bool sendCustomCmdMsg(int cmdId,byte[] data,int dataSize,bool reliable,bool ordered);
        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十二）设备和网络测试
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name 设备和网络测试
        /// @{

        /// <summary>
        /// 开始进行网络测速（视频通话期间请勿测试，以免影响通话质量）
        /// <para>测速结果将会用于优化 SDK 接下来的服务器选择策略，因此推荐您在用户首次通话前先进行一次测速，这将有助于我们选择最佳的服务器。</para>
        /// <para>同时，如果测试结果非常不理想，您可以通过醒目的 UI 提示用户选择更好的网络。</para>
        /// </summary>
        /// <param name="sdkAppId">	应用标识</param>
        /// <param name="userId">用户标识</param>
        /// <param name="userSig">用户签名</param>
        public abstract void startSpeedTest(int sdkAppId, string userId, string userSig);

        /// <summary>
        /// 停止网络测速
        /// </summary>
        public abstract void stopSpeedTest();

        /// @}

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （十三）LOG 相关接口函数
        //
        /////////////////////////////////////////////////////////////////////////////////
        /// @name LOG 相关接口函数
        /// @{

        /// <summary>
        /// 获取 SDK 版本信息
        /// </summary>
        /// <returns>UTF-8 编码的版本号。</returns>
        public abstract string getSDKVersion();

        /// <summary>
        /// 设置 Log 输出级别
        /// </summary>
        /// <param name="level">level 参见 TRTCLogLevel，默认值：TRTCLogLevelNone</param>
        public abstract void setLogLevel(TRTCLogLevel level);

        /// <summary>
        /// 启用或禁用控制台日志打印
        /// </summary>
        /// <param name="enabled">指定是否启用，默认为禁止状态</param>
        public abstract void setConsoleEnabled(bool enabled);

        /// <summary>
        /// 启用或禁用 Log 的本地压缩
        ///
        /// <para>开启压缩后，Log 存储体积明显减小，但需要腾讯云提供的 Python 脚本解压后才能阅读。</para>
        /// <para>禁用压缩后，Log 采用明文存储，可以直接用记事本打开阅读，但占用空间较大。</para>
        /// </summary>
        /// <param name="enabled">指定是否启用，默认为禁止状态</param>
        public abstract void setLogCompressEnabled(bool enabled);

        /// <summary>
        /// 设置日志保存路径
        /// </summary>
        /// <remarks>
        /// 日志文件默认保存在 C:/Users/[系统用户名]/AppData/Roaming/Tencent/liteav/log，即 %appdata%/Tencent/liteav/log 下，如需修改，必须在所有方法前调用。
        /// </remarks>
        /// <param name="path">存储日志的文件夹，例如 "D:\\Log"，UTF-8 编码</param>
        public abstract void setLogDirPath(string path);

        /// <summary>
        /// 设置日志回调
        /// </summary>
        /// <param name="callback">日志回调</param>
        public abstract void setLogCallback(ITRTCLogCallback callback);

        /// <summary>
        /// 调用实验性 API 接口
        /// </summary>
        /// <remarks>
        /// 该接口用于调用一些实验性功能
        /// </remarks>
        /// <param name="jsonStr">接口及参数描述的 JSON 字符串</param>
        public abstract void callExperimentalAPI(string jsonStr);
        /// @}
    };
}
