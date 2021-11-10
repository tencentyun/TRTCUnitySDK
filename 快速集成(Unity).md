本文主要介绍如何快速地将腾讯云 TRTC SDK（Unity）集成到您的项目中，只要按照如下步骤进行配置，就可以完成 SDK 的集成工作。

## 环境要求
* Unity 建议版本： 2020.2.1f1c1。
* 目前支持 Android、iOS、Windows、Mac（Mac 还在内测中）平台。
* 需要包含 `Android Build Support`、`iOS Build Support`、 `Winodows Build Support` 和 `MacOs Build Support` 模块。
- 其中 iOS  端开发还需要：
  - Xcode 11.0及以上版本。
  - 请确保您的项目已设置有效的开发者签名。

## 集成 SDK
1. 下载 SDK 及配套的 [Demo 源码](https://github.com/tencentyun/TRTCUnitySDK)。
2. 解压后，把项目中的 `TRTCUnitySDK/Assets/TRTCSDK/SDK` 文件夹拷贝到您项目中的 Assets 目录下。

## 常见问题
### iOS 编译注意事项
1. 配置 Unity Editor，单击【File】>【Build Setting】，切换至 iOS。
![](https://tccweb-1258344699.cos.ap-nanjing.myqcloud.com/sdk/trtc/unity/ios.png)
2. 连接 iPhone 真机，单击【Build And Run】，需要选择一个新的目录存放编译出来的 iOS 工程，等待编译完成，会有新窗口弹出 Xcode 工程。
3. 单击 Link Binary with Libraries 项展开，单击底下的“+”号图标去添加依赖库 `libc++.tbd` 、`Accelerate.framework` 和 `libresolv.tbd`、`AVFoundation.framework`。
![](https://imgcache.qq.com/operation/dianshi/other/objc.2244a0e66e271a1b1f75d73c48fb47097d7bd967.png)
4. 单击 Other Linker Flags 项展开，添加 `-ObjC`
![](https://imgcache.qq.com/operation/dianshi/other/8.6-objc.e0df060a638c1056fc07d1cb51c303a9de5b542f.png)
5. 错误提示`You must rebuild it with bitcode enabled (Xcode setting ENABLE_BITCODE)`
![](https://imgcache.qq.com/operation/dianshi/other/enable.d0cd40914b1d60e74bcc32b0c14ad5afbca4d1ee.png)
### macos 相关问题
1. 提示` "macosliteav.bundle" 已损怀，无法打开。您应该将它移到废纸篓 `
![](https://imgcache.qq.com/operation/dianshi/other/macos.600034e6a5bd6750d6abe5eb63ff45099f7a51ac.png)
解决办法[参考](http://www.pc6.com/edu/168719.html) 设置权限。

### Android 提示网络权限问题？
请将项目中 `/Assets/Plugins/AndroidManifest.xml` 文件放到同级目录下。

### Android 没有音视频的权限？
Android 端的麦克风、摄像头权限要手动申请，具体方法请参见以下代码：
```
#if PLATFORM_ANDROID
if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
 {
     Permission.RequestUserPermission(Permission.Microphone);
 }
 if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
 {
     Permission.RequestUserPermission(Permission.Camera);
 }
 #endif
```  
### 其他
xxxx could not be found(are you missing a using directive or an assembly reference?)
![](https://imgcache.qq.com/operation/dianshi/other/u-error.fd4cfb3d6eccf300d95132416799f2cd66db52e2.png)
出现该问题的原因是unity editor识别我们的c#文件失败了。解决办法，导入我们的提供[的unity package可解决](https://comm.qq.com/sdk/trtc/unity/TRTCUnitySDK.unitypackage)
如下图：
![](https://imgcache.qq.com/operation/dianshi/other/t.5b2cce3c6663e6f48a178fdab89a6e5e19011cf0.png)