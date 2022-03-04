## Implementing Screen Sharing for an Unity iOS project on Unity

### Sample code
You can find the sample code we provide for cross-app sharing in the **ScreenUpload** directory on [this GitHub page](https://github.com/tencentyun/TRTCUnitySDK/tree/english), which contains the following files:

```
├── ScreenUpload                    // Code for the screen recording process Broadcast Upload Extension. For details, see step 2.
│   ├── Info.plist
│   ├── SampleHandler.h
│   ├── SampleHandler.m             // Code for receiving screen recording data from the system
│   ├── ScreenUpload.entitlements
│   └── TXLiteAVSDK_ReplayKitExt.framework
│       ├── Headers
│       ├── Info.plist
│       ├── Modules
│       └── TXLiteAVSDK_ReplayKitExt
```

You can follow the instructions in [README](https://github.com/tencentyun/TRTCUnitySDK/blob/main/README.en.md) to run the demo.

### Directions

To enable cross-app screen sharing on iOS, you need to add the screen recording process Broadcast Upload Extension, which works with the host app to push streams. A Broadcast Upload Extension is created by the system when screen sharing is requested and is responsible for receiving the screen images captured by the system. For this, you need to do the following:

1. Export an iOS project to run in Xcode.
2. Create an App Group and configure it in Xcode (optional) to enable communication between the Broadcast Upload Extension and host app.
3. Create a target of Broadcast Upload Extension in your project and import into it `TXLiteAVSDK_ReplayKitExt.framework` from the SDK package.
4. Put the host app on standby to receive screen recording data from the Broadcast Upload Extension.
5. Use a helper class (`IosExtensionLauncher`) available in the demo to make it possible to start screen sharing by tapping a button (optional), similar to VooV Meeting for iOS.

>! If you skip step 1, that is, if you do not configure an App Group (passing in `nil` to the API), you can still enable screen sharing, but its stability will be compromised. We suggest you configure an App Group as described below.
[](id:createGroup)
#### Step 1. Export an Xcode project
1. Open Unity Editor, go to **File** > **Build Settings**, and select **iOS** for **Platform**.
![](https://main.qcloudimg.com/raw/3a0ef43000fe53e8e7ff58b6cc243785.png)

[](id:createGroup)
#### Step 2. Create an App Group
Log in to [**https://developer.apple.com/**](https://develop.apple.com) and do the following. **You need to download the provisioning profile again afterwards**.

1. Click **Certificates, IDs & Profiles**.
2. Click **+** next to **Identifiers**.
3. Select **App Groups** and click **Continue**.
4. Fill in the **Description** and **Identifier** boxes. For **Identifier**, type the `AppGroup` value passed in to the API. Click **Continue**.
 ![](https://main.qcloudimg.com/raw/43dd60f5053b21c167ee3a8dbe7d16f9/Create_AppGroup.jpg)
5. Select **Identifiers** on the top left sidebar, and click your App ID (you need to configure the App ID for the host app and extension in the same way).
6. Select **App Groups** and click **Edit**.
7. Select the App Group you created, click **Continue** to return to the edit page, and click **Save** to save the settings.
 ![](https://main.qcloudimg.com/raw/962c1b705433aa62c9617f90d28238c5/Apply_AppGroup.jpg)
8. Download the provisioning profile again and import it to Xcode.

[](id:createExtension)
#### Step 3. Create a Broadcast Upload Extension
1. In the Xcode menu, click **File** > **New** > **Target...**, and select **Broadcast Upload Extension**.
2. In the dialog box that pops up, enter the information required. You **don't** need to select **Include UI Extension**. Click **Finish**.
3. Drag [TXLiteAVSDK_ReplayKitExt.framework](https://github.com/tencentyun/TRTCUnitySDK/tree/english/ScreenUpload/) from the SDK package to the project and select the target you created.
4. Add the dependencies required: libc++.tbd, Accelerate.framework, libresolv.tbd, AVFoundation.framework.
![](https://imgcache.qq.com/operation/dianshi/other/M.ffe02f895946c405feb24aea3bf3954ef92b246b.png)
5. Select the target you created, click **+ Capability**, and double-click **App Groups**, as shown below:
 ![AddCapability](https://main.qcloudimg.com/raw/a2b38f1581a495f2a966f6eaf464e057.png)
 A file named `target name.entitlements` will appear in the file list as shown below. Select it, click **+**, and enter the App Group created earlier.
 ![AddGroup](https://main.qcloudimg.com/raw/b4904a8b425cf55e58497b35c0700966.png)
6. Select the target of the host app **and repeat the above steps.**
7. In the new target, Xcode will automatically create a file named `SampleHandler.h`. Replace the file content with the following code. You need to **change `APPGROUP` in the code to the ID of the App Group created earlier**.
``` iOS object-c
#import "SampleHandler.h"
@import TXLiteAVSDK_ReplayKitExt;

#define APPGROUP @"group.com.tencent.comm.unity.screen"

@interface SampleHandler() <TXReplayKitExtDelegate>
@end

@implementation SampleHandler
// Note: Replace `APPGROUP` with the ID of the App Group created earlier.
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
            tip = @"Screen sharing ended";
            break;
        case TXReplayKitExtReasonDisconnected:
            tip = @"Application disconnected";
            break;
        case TXReplayKitExtReasonVersionMismatch:
            tip = @"Integration error (SDK version mismatch)";
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
#### Step 4. Put the host app on standby to receive data
Before screen sharing starts, the host app must be on standby to receive screen recording data from the Broadcast Upload Extension. To achieve this, follow these steps:
1. Make sure that camera capturing has been disabled in `TRTCCloud`; if not, call [stopLocalPreview](https://liteav.sdk.qcloud.com/doc/api/zh-cn/group__TRTCCloud__ios.html#a01ee967e3180a5e2fc0e37e9e99e85b3) to disable it.
2. Call **startScreenCapture** to put the SDK on standby.
3. The SDK will then wait for a user to trigger screen sharing. If a "triggering button" is not added as described in [step 5](#launch), users need to press and hold the screen recording button in the iOS Control Center to start screen sharing.
![](https://main.qcloudimg.com/raw/4082c8bcc7f41328a17f7ede78577bd9.png)
4. You can call **stopScreenCapture** to stop screen sharing at any time.
``` C#
// Start screen sharing. You need to replace `APPGROUP` with the ID of the App Group created earlier.
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

// Stop screen sharing
#if UNITY_STANDALONE_WIN || UNITY_ANDROID || UNITY_IOS
  mTRTCCloud.stopScreenCapture();
#endif
#if UNITY_STANDALONE_WIN
  userTableView.UpdateVideoAvailable("", TRTCVideoStreamType.TRTCVideoStreamTypeSub, false);
  userTableView.RemoveUser("", TRTCVideoStreamType.TRTCVideoStreamTypeSub);
#endif

// Notification of the start of screen sharing, which can be received via `ITRTCCloudCallback`
public void onScreenCaptureStarted()
{
    LogManager.Log(String.Format("onScreenCaptureStarted"));
}
```

[](id:launch)
#### Step 5. Add a screen sharing triggering button (optional)
In [step 4](#receive), users need to start screen sharing manually by pressing and holding the screen recording button in the Control Center. To make it possible to start screen sharing by tapping a button in your app as in VooV Meeting, follow these steps:
![](https://main.qcloudimg.com/raw/4a759043c613a558400cce8b539fd7d9.png)

1. Find `IosExtensionLauncher` in the [demo](https://github.com/tencentyun/TRTCUnitySDK/tree/english/Assets/TRTCSDK/SDK/Implement/ITRTCCloudNative.cs) and add it to your project.
2. Add a button to your UI and call the `IosExtensionLauncher` function of `TRTCUnityExtensionLauncher` in the response function of the button to trigger screen sharing.
``` C#
// Customize a response for button tapping
#if UNITY_IOS
  IosExtensionLauncher.TRTCUnityExtensionLauncher();
#endif
```

>!
>- Apple added `RPSystemBroadcastPickerView` to iOS 12.0, which can show a picker view in apps for users to select whether to start screen sharing. Currently, `RPSystemBroadcastPickerView` does not support custom UI, and Apple does not provide an official triggering method.
>`IosExtensionLauncher` works by traversing the subviews of `RPSystemBroadcastPickerView`, finding `UIButton`, and triggering its tapping event.
>- **Please note that this scheme is not recommended by Apple and may become invalid in its next update. We have therefore made [step 4](#launch) optional. You need to bear the risks of using the scheme yourself.**

## Watching Shared Screen
  When a user in a room starts screen sharing, the screen will be shared through the substream, and other users in the room will be notified via onUserSubStreamAvailable in `TRTCCloudCallback`.
  Users who want to watch the shared screen can start rendering the substream of the remote user by calling the startRemoteView  API.

## FAQs
- What should I do if **error: invalid iOS deployment version '-target armv7-apple-ios15.2', iOS 10 is the maximum deployment target for 32-bit targets [-Winvalid-ios-deployment-target]** occurs?
![](https://imgcache.qq.com/operation/dianshi/other/i.2a8db0fd5c88639593fb0b14fa7b9cc43a725d88.jpg)
Specify ARMv7 and ARM64 as the instruction set architectures.
![](https://imgcache.qq.com/operation/dianshi/other/7.e3169f39d8e5789b7f0b22b8398daab9183dcf8c.png)
