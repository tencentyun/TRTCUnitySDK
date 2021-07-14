# TRTC Unity

这个示例项目演示了如何在 Unity 中快速集成 TRTC SDK，实现在游戏中的音视频通话。

在这个示例项目中包含了以下功能：
- 加入通话和离开通话
- 自定义视频渲染
- 设备管理、音乐特效和人声特效。

具体API可查看[Unity API概览](https://cloud.tencent.com/document/product/647/55158)

项目接入可接入qq群详细咨询：788910197

## 运行环境要求
* Unity建议版本： 2020.2.1f1c1
* 目前支持Anroid、iOs、Widows、Mac(Mac还在内测中)平台
* 需要包含 `Android Build Support` `iOS Build Support` `Winodows Build Support` `MacOs Build Support`模块
- 其中iOS 端开发还需要：
  - Xcode 11.0及以上版本。
  - 请确保您的项目已设置有效的开发者签名。

## 运行示例程序
<span id="step1"></span>
### 步骤1：创建新的应用
1. 登录实时音视频控制台，选择【开发辅助】>【[快速跑通Demo](https://console.cloud.tencent.com/trtc/quickstart)】。
2. 单击【立即开始】，输入应用名称，例如`TestTRTC`，单击【创建应用】。
![](https://main.qcloudimg.com/raw/9b2db43594f4744b42ef74c94494ea8e.png)

<span id="step2"></span>
### 步骤2：下载 SDK 与源码
1. 根据您的实际业务需求，下载 SDK 及配套的 [Demo 源码](https://github.com/tencentyun/TRTCUnitySDK)。
2. 下载完成后，单击【已下载，下一步】。（可直接用Unity打开本项目；如果想直接用SDK文件，也可把sdk包中的TRTCUnitySDK/Assets/TRTCSDK/SDK文件夹拷贝到您项目中的Assets目录下）
<img src="https://imgcache.qq.com/operation/dianshi/other/unit_down.d5a5ae704fa1a0eec3c01d78fef924dd9e017014.png"/>
3. 找到并打开 `Assets/TRTCSDK/Demo/Tools/GenerateTestUserSig.cs` 文件。
4. 设置 `GenerateTestUserSig.cs` 文件中的相关参数：
  <ul><li>SDKAPPID：默认为0，请设置为实际的 SDKAppID。</li>
  <li>SECRETKEY：默认为空字符串，请设置为实际的密钥信息。</li></ul> 
	<img src="https://imgcache.qq.com/operation/dianshi/other/unity_config.ef41868fb36e8fc3a56652baf46c1f110c9f4a39.png"/>

### Android 平台
1. 配置 Unity Editor，单击【File】>【Build Setting】，切换至 Android。
![](https://imgcache.qq.com/operation/dianshi/other/unnity_android.c411b5d2254a2567d5c00f09845c60b9c3ea43a0.png)
2. 连接 Android 真机，单击【 Build And Run】，Demo 就能跑起来。
3. 接口测试，需要先点击调用 enterRoom ，然后自行测试其他相关，数据展示窗口显示点击调用成功，另外一个窗口显示回调信息。

### iOS 平台
1. 配置 Unity Editor，单击【File】>【Build Setting】，切换至 iOS。
![](https://tccweb-1258344699.cos.ap-nanjing.myqcloud.com/sdk/trtc/unity/ios.png)
2. 连接 iPhone 真机，单击【Build And Run】，需要选择一个新的目录存放编译出来的 iOS 工程，等待编译完成，会有新窗口弹出 Xcode 工程。
3. 单击 Link Binary with Libraries 项展开，单击底下的“+”号图标去添加依赖库 `libresolv.tbd`
![](https://imgcache.qq.com/operation/dianshi/other/objc.2244a0e66e271a1b1f75d73c48fb47097d7bd967.png)
4. 单击 Other Linker Flags 项展开，添加 `-ObjC`
![](https://imgcache.qq.com/operation/dianshi/other/8.6-objc.e0df060a638c1056fc07d1cb51c303a9de5b542f.png)
### Windows 平台
1. 配置 Unity Editor，单击【File】>【Build Setting】，切换至 PC, Mac & Linux Standalone，Target Platform 选择 Windows。
![](https://main.qcloudimg.com/raw/580764f661c06cf71c4952727c409c5e.png)
2. 单击【 Build And Run】，Demo 就能跑起来。

### Macos 平台
1. 配置 Unity Editor，单击【File】>【Build Setting】，切换至 PC, Mac & Linux Standalone，Target Platform 选择 macOS
![](https://imgcache.qq.com/operation/dianshi/other/macos.f2d60a6ef431222eb4944e95347584a1df2356ea.png)
2. 单击【 Build And Run】，Demo 就能跑起来。
3. 使用Unity Editor模拟器运行，先要安装Device Simulator Package。点击【Window】>【General】>【Device Simulator】
![](https://imgcache.qq.com/operation/dianshi/other/sim.8678bc4b6cc328392fa9014105ad58a155b389da.png)

## Demo示例
>- Demo 里面包含了已上线的大部分 API，可以测试和作为调用参考，API 文档参见 [SDK API（Unity）](https://cloud.tencent.com/document/product/647/55158)。
> - UI 可能会有部分调整更新，请以最新版为准。
![](https://imgcache.qq.com/operation/dianshi/other/unity_video.bd36c8bedacb14d718dec8779a8c9c2e6ef4a876.png)
## 目录结构
```
├─Assets
├── Editor                        // Unity 编辑器脚本
│   ├── BuildScript.cs            // Unity 编辑器build菜单
│   ├── IosPostProcess.cs         // Unity 编辑器构建ios应用脚本
├── Plugins
│   ├── Android                   
│   │   ├── AndroidManifest.xml   //Android应用配置文件
├── StreamingAssets               // Unity Demo 音视频流文件
├── TRTCSDK
    ├── Demo                      // Unity 示例 Demo
    ├── SDK                       // TRTC Unity SDK
        ├── Implement             // TRTC Unity SDK 实现
        ├── Include               // TRTC Unity SDK 头文件
        └── Plugins               // TRTC Unity SDK 不同平台底层实现
            
```