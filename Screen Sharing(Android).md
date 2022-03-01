# Unity Android实时屏幕分享
腾讯云 TRTC 在 Android 系统上支持屏幕分享，即将当前系统的屏幕内容通过 TRTC SDK 分享给房间里的其他用户。

## 启动屏幕分享
要开启 Android 端的屏幕分享，只需调用 `TRTCCloud` 中的  startScreenCapture()接口即可。但如果要达到稳定和清晰的分享效果，您需要关注如下几个问题：

#### 添加 Activity
在 manifest 文件中粘贴如下 activity（若项目代码中存在则不需要添加）。
```xml
<activity 
    android:name="com.tencent.rtmp.video.TXScreenCapture$TXScreenCaptureAssistantActivity" 
    android:theme="@android:style/Theme.Translucent"/>
```

#### 设定视频编码参数
通过设置 startScreenCapture()中的首个参数 `encParams` ，您可以指定屏幕分享的编码质量。如果您指定 `encParams` 为 null，SDK 会自动使用之前设定的编码参数，我们推荐的参数设定如下：

| 参数项 | 参数名称 | 常规推荐值 |  文字教学场景 |
|---------|---------|---------|-----|
| 分辨率 | videoResolution | 1280 × 720 | 1920 × 1080 |
| 帧率 | videoFps | 10 FPS | 8 FPS |
| 最高码率 | videoBitrate| 1600 kbps | 2000 kbps |
| 分辨率自适应 | enableAdjustRes | NO | NO |

- 由于屏幕分享的内容一般不会剧烈变动，所以设置较高的 FPS 并不经济，推荐10 FPS即可。
- 如果您要分享的屏幕内容包含大量文字，可以适当提高分辨率和码率设置。
- 最高码率（videoBitrate）是指画面在剧烈变化时的最高输出码率，如果屏幕内容变化较少，实际编码码率会比较低。

#### Android targetSdkVersion设置为30时崩溃解决方案
1.将targetSdkVersion降低为28，具体操作步骤为[Build Settings]->[Switch Platform(Android)]->[Player Settings]->[Playr]->[Other Settings]->[Target API Level]->[API Level 28]

2.将项目导出为一个安卓工程，参考[文档](https://cloud.tencent.com/developer/article/1914827)增加一个mediaService

#### 弹出悬浮窗以避免被强杀
从 Android 7.0 系统开始，切入到后台运行的普通 App 进程，但凡有 CPU 活动，都很容易会被系统强杀掉。 所以当 App 在切入到后台默默进行屏幕分享时，通过弹出悬浮窗的方案，可以避免被系统强杀掉。 同时，在手机屏幕上显示悬浮窗也有利于告知用户当前正在做屏幕分享，避免用户泄漏个人隐私。

要弹出类似“腾讯会议”的迷你悬浮窗，您只需要参考示例代码 [FloatingView.java](https://github.com/tencentyun/TRTCSDK/blob/master/Android/TRTC-API-Example/Basic/ScreenShare/src/main/java/com/tencent/trtc/screenshare/FloatingView.java) 中的实现即可。

## 观看屏幕分享
- **观看 Android / iOS 屏幕分享**
  当调用startScreenCapture通过辅流进行分享时，房间里的其他用户会通过 TRTCCloudCallback 中的 [onUserSubStreamAvailable](https://comm.qq.com/trtc/api/api/trtc.ITRTCCloudCallback.html#onUserSubStreamAvailable) 事件获得这个通知。
  希望观看屏幕分享的用户可以通过 [startRemoteView](https://comm.qq.com/trtc/api/api/trtc.ITRTCCloud.html#trtc_ITRTCCloud_startRemoteView_System_String_trtc_TRTCVideoStreamType_System_Object_) 接口来启动渲染远端用户辅流画面。

## 常见问题
 **一个房间里可以同时有多路屏幕分享吗？**
目前一个 TRTC 音视频房间只能有一路屏幕分享。