
## Unity iOS实时屏幕分享

### 示例代码
我们在 [Github](https://github.com/tencentyun/TRTCUnitySDK/tree/english) 中的 **ScreenUpload** 目录下放置了一份跨应用分享的示例代码，其包含如下一些文件：

```
├── ScreenUpload                    // 录屏进程 Broadcast Upload Extension 代码详见步骤2
│   ├── Info.plist
│   ├── SampleHandler.h
│   ├── SampleHandler.m             // 用于接收来自系统的录屏数据
│   ├── ScreenUpload.entitlements
│   └── TXLiteAVSDK_ReplayKitExt.framework
│       ├── Headers
│       ├── Info.plist
│       ├── Modules
│       └── TXLiteAVSDK_ReplayKitExt
```

您可以通过 [README](https://github.com/tencentyun/TRTCUnitySDK/blob/main/README.md) 中的指引跑通该示例 Demo。

### 对接步骤

iOS 系统上的跨应用屏幕分享，需要增加 Extension 录屏进程以配合主 App 进程进行推流。Extension 录屏进程由系统在需要录屏的时候创建，并负责接收系统采集到屏幕图像。因此需要：

1. 导出ios Xcode工程。
2. 创建 App Group，并在 XCode 中进行配置（可选）。这一步的目的是让 Extension 录屏进程可以同主 App 进程进行跨进程通信。
3. 在您的工程中，新建一个 Broadcast Upload Extension 的 Target，并在其中集成 SDK 压缩包中专门为扩展模块定制的 `TXLiteAVSDK_ReplayKitExt.framework`。
4. 对接主 App 端的接收逻辑，让主 App 等待来自 Broadcast Upload Extension 的录屏数据。
5. 使用 Demo 中预先实现的一个 helper class ( `IosExtensionLauncher`) ，实现类似腾讯会议 iOS 版中点击一个按钮即可唤起屏幕分享的效果（可选）。

>! 如果跳过步骤1，也就是不配置 App Group（接口传 nil），屏幕分享依然可以运行，但稳定性要打折扣，故虽然步骤较多，但请尽量配置正确的 App Group 以保障屏幕分享功能的稳定性。
[](id:createGroup)
#### 步骤1：导出Xcode工程
1. Open Unity Editor, go to **File** > **Build Settings**, and select **iOS** for **Platform**.
![](https://main.qcloudimg.com/raw/3a0ef43000fe53e8e7ff58b6cc243785.png)

[](id:createGroup)
#### 步骤2：创建 App Group
使用您的帐号登录 [**https://developer.apple.com/**](https://developer.apple.com/) ，进行以下操作，**注意完成后需要重新下载对应的 Provisioning Profile**。

1. 单击【Certificates, IDs & Profiles】。
2. 在右侧的界面中单击加号。
3. 选择【App Groups】，单击【Continue】。
4. 在弹出的表单中填写 Description 和 Identifier, 其中 Identifier 需要传入接口中的对应的 AppGroup 参数。完成后单击【Continue】。
 ![](https://main.qcloudimg.com/raw/43dd60f5053b21c167ee3a8dbe7d16f9/Create_AppGroup.jpg)
5. 回到 Identifier 页面，左上边的菜单中选择【App IDs】，然后单击您的 App ID（主 App 与 Extension 的 AppID 需要进行同样的配置）。
6. 选中【App Groups】并单击【Edit】。
7. 在弹出的表单中选择您之前创建的 App Group，单击【Continue】返回编辑页，单击【Save】保存。
 ![](https://main.qcloudimg.com/raw/962c1b705433aa62c9617f90d28238c5/Apply_AppGroup.jpg)
8. 重新下载 Provisioning Profile 并配置到 XCode 中。

[](id:createExtension)
#### 步骤3：创建 Broadcast Upload Extension
1. 在 Xcode 菜单依次单击【File】、【New】 、【Target...】，选择【Broadcast Upload Extension】。
2. 在弹出的对话框中填写相关信息，**不用**勾选"【Include UI Extension】，单击【Finish】完成创建。
3. 将下载到的 SDK 中的 [TXLiteAVSDK_ReplayKitExt.framework](https://github.com/tencentyun/TRTCUnitySDK/tree/english/ScreenUpload/) 拖动到工程中，勾选刚创建的 Target。
4. 依次添加其所需依赖库 libc++.tbd 、Accelerate.framework 和 libresolv.tbd、AVFoundation.framework。
![](https://imgcache.qq.com/operation/dianshi/other/M.ffe02f895946c405feb24aea3bf3954ef92b246b.png)
5. 选中新增加的 Target，依次单击【+ Capability】，双击【App Groups】，如下图：
 ![AddCapability](https://main.qcloudimg.com/raw/a2b38f1581a495f2a966f6eaf464e057.png)
 操作完成后，会在文件列表中生成一个名为 `Target名.entitlements` 的文件，如下图所示，选中该文件并单击 + 号填写上述步骤中的 App Group 即可。
 ![AddGroup](https://main.qcloudimg.com/raw/b4904a8b425cf55e58497b35c0700966.png)
6. 选中主 App 的 Target ，**并按照上述步骤对主 App 的 Target 做同样的处理。**
7. 在新创建的 Target 中，Xcode 会自动创建一个名为 "SampleHandler.h" 的文件，用如下代码进行替换。**需将代码中的 APPGROUP 改为上文中的创建的 App Group Identifier**。
``` iOS object-c
#import "SampleHandler.h"
@import TXLiteAVSDK_ReplayKitExt;

#define APPGROUP @"group.com.tencent.comm.unity.screen"

@interface SampleHandler() <TXReplayKitExtDelegate>
@end

@implementation SampleHandler
// 注意：此处的 APPGROUP 需要改成上文中的创建的 App Group Identifier。
- (void)broadcastStartedWithSetupInfo:(NSDictionary<NSString *,NSObject *> *)setupInfo {
    [[TXReplayKitExt sharedInstance] setupWithAppGroup:APPGROUP delegate:self];
}

- (void)broadcastPaused {
    // User has requested to pause the broadcast. Samples will stop being delivered.
}

- (void)broadcastResumed {
    // User has requested to resume the broadcast. Samples delivery will resume.
}

- (void)broadcastFinished {
    [[TXReplayKitExt sharedInstance] broadcastFinished];
    // User has requested to finish the broadcast.
}

#pragma mark - TXReplayKitExtDelegate
- (void)broadcastFinished:(TXReplayKitExt *)broadcast reason:(TXReplayKitExtReason)reason
{
    NSString *tip = @"";
    switch (reason) {
        case TXReplayKitExtReasonRequestedByMain:
            tip = @"屏幕共享已结束";
            break;
        case TXReplayKitExtReasonDisconnected:
            tip = @"应用断开";
            break;
        case TXReplayKitExtReasonVersionMismatch:
            tip = @"集成错误（SDK 版本号不相符合）";
            break;
    }

    NSError *error = [NSError errorWithDomain:NSStringFromClass(self.class)
                                         code:0
                                     userInfo:@{
                                         NSLocalizedFailureReasonErrorKey:tip
                                     }];
    [self finishBroadcastWithError:error];
}

- (void)processSampleBuffer:(CMSampleBufferRef)sampleBuffer withType:(RPSampleBufferType)sampleBufferType {
    switch (sampleBufferType) {
        case RPSampleBufferTypeVideo:
            [[TXReplayKitExt sharedInstance] sendVideoSampleBuffer:sampleBuffer];
            break;
        case RPSampleBufferTypeAudioApp:
            // Handle audio sample buffer for app audio
            break;
        case RPSampleBufferTypeAudioMic:
            // Handle audio sample buffer for mic audio
            break;
            
        default:
            break;
    }
}
@end
```

[](id:receive)
#### 步骤4：对接主 App 端的接收逻辑
按照如下步骤，对接主 App 端的接收逻辑。也就是在用户触发屏幕分享之前，要让主 App 处于“等待”状态，以便随时接收来自 Broadcast Upload Extension 进程的录屏数据。
1. 确保 TRTCCloud 已经关闭了摄像头采集，如果尚未关闭，请调用 [stopLocalPreview](https://liteav.sdk.qcloud.com/doc/api/zh-cn/group__TRTCCloud__ios.html#a01ee967e3180a5e2fc0e37e9e99e85b3) 关闭摄像头采集。
2. 调用 **startScreenCapture**方法，让 SDK 进入“等待”状态。
3. 等待用户触发屏幕分享。如果不实现 [步骤5](#launch) 中的“触发按钮”，屏幕分享就需要用户在 iOS 系统的控制中心，通过长按录屏按钮来触发，这一操作步骤如下图所示：
![](https://main.qcloudimg.com/raw/4082c8bcc7f41328a17f7ede78577bd9.png)
4. 通过调用 **stopScreenCapture** 接口可以随时中止屏幕分享。
``` C#
// 开始屏幕分享，需要将 APPGROUP 替换为上述步骤中创建的 App Group Identifier。
TRTCVideoEncParam videoEncParam = new TRTCVideoEncParam()
{
    videoResolution = TRTCVideoResolution.TRTCVideoResolution_640_360,
    resMode = TRTCVideoResolutionMode.TRTCVideoResolutionModeLandscape,
    videoFps = 10,
    videoBitrate = 550,
    minVideoBitrate = 550
};
#if UNITY_STANDALONE_WIN
    TRTCScreenCaptureSourceInfo[] sources = mTRTCCloud.getScreenCaptureSources();
    if (sources.Length > 0)
    {
        mTRTCCloud.selectScreenCaptureTarget(sources[0], new Rect(0, 0, 640, 360), new TRTCScreenCaptureProperty());
        mTRTCCloud.startScreenCapture(TRTCVideoStreamType.TRTCVideoStreamTypeSub, ref videoEncParam);
        userTableView.AddUser("", TRTCVideoStreamType.TRTCVideoStreamTypeSub);
        userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeSub, true);
    }
#elif UNITY_ANDROID || UNITY_IOS
    mTRTCCloud.startScreenCapture(TRTCVideoStreamType.TRTCVideoStreamTypeSub, ref videoEncParam);
#endif

// 停止屏幕分享
#if UNITY_STANDALONE_WIN || UNITY_ANDROID || UNITY_IOS
  mTRTCCloud.stopScreenCapture();
#endif
#if UNITY_STANDALONE_WIN
  userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeSub, false);
  userTableView.RemoveUser("", TRTCVideoStreamType.TRTCVideoStreamTypeSub);
#endif

// 屏幕分享的启动事件通知，可以通过 ITRTCCloudCallback 进行接收
public void onScreenCaptureStarted()
{
    LogManager.Log(String.Format("onScreenCaptureStarted"));
}
```

[](id:launch)
#### 步骤5：增加屏幕分享的触发按钮（可选）
截止到 [步骤4](#receive) ，我们的屏幕分享还必须要用户从控制中心中长按录屏按钮来手动启动。您可通过下述方法实现类似腾讯会议的单击按钮即可触发的效果：
![](https://main.qcloudimg.com/raw/4a759043c613a558400cce8b539fd7d9.png)

1. 在 [Demo](https://github.com/tencentyun/TRTCUnitySDK/tree/english/Assets/TRTCSDK/SDK/Implement/ITRTCCloudNative.cs) 中寻找 `IosExtensionLauncher` 这个类，并将其加入到您的工程中。
2. 在您的界面上放置一个按钮，并在按钮的响应函数中调用 `IosExtensionLauncher` 中的 `TRTCUnityExtensionLauncher` 函数，就可以唤起屏幕分享功能了。
``` C#
// 自定义按钮响应方法
#if UNITY_IOS
  IosExtensionLauncher.TRTCUnityExtensionLauncher();
#endif
```

>!
>- 苹果在 iOS 12.0 中增加了 `RPSystemBroadcastPickerView` 可以从应用中弹出启动器供用户确认启动屏幕分享，到目前为止, `RPSystemBroadcastPickerView` 尚不支持自定义界面，也没有官方的唤起方法。
>- IosExtensionLauncher 的原理就是遍历 `RPSystemBroadcastPickerView` 的子 View 寻找 UIButton 并触发了其点击事件。
> - **但该方案不被苹果官方推荐，并可能在新一轮的系统更新中失效，因此 [步骤4](#launch) 只是一个可选方案，您需要自行承担风险来选用此方案。**

## 观看屏幕分享
- **观看 屏幕分享**
  当房间里有一个 用户启动了屏幕分享，可以选择通过主路或者辅路进行分享。当调用startScreenCapture通过辅流进行分享时，房间里的其他用户会通过 TRTCCloudCallback 中的 [onUserSubStreamAvailable](https://comm.qq.com/trtc/api/api/trtc.ITRTCCloudCallback.html#onUserSubStreamAvailable) 事件获得这个通知。
  希望观看屏幕分享的用户可以通过 [startRemoteView](https://comm.qq.com/trtc/api/api/trtc.ITRTCCloud.html#trtc_ITRTCCloud_startRemoteView_System_String_trtc_TRTCVideoStreamType_System_Object_) 接口来启动渲染远端用户辅流画面。

## 常见问题
- **error: invalid iOS deployment version '-target armv7-apple-ios15.2', iOS 10 is the maximum deployment target for 32-bit targets [-Winvalid-ios-deployment-target]**
![](https://imgcache.qq.com/operation/dianshi/other/i.2a8db0fd5c88639593fb0b14fa7b9cc43a725d88.jpg)
解决方法：指令集设置armv7 和 arm64
![](https://imgcache.qq.com/operation/dianshi/other/7.e3169f39d8e5789b7f0b22b8398daab9183dcf8c.png)
