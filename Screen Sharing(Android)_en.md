# Unity Android Screen Share
The TRTC SDK supports screen sharing on Android. This means you can share your screen with other users in the same room. 

## Starting screen sharing
To start screen sharing on Android, simply call startScreenCapture() in TRTCCloud. However, to ensure the stability and video quality of screen sharing, you need to do the following.

#### Adding an activity
Copy the activity below and paste it in the manifest file. You can skip this if the activity is already included in your project code.
```xml
<activity 
    android:name="com.tencent.rtmp.video.TXScreenCapture$TXScreenCaptureAssistantActivity" 
    android:theme="@android:style/Theme.Translucent"/>
```

#### Setting video encoding parameters
By setting the first parameter encParams in startScreenCapture(), you can specify the encoding quality of screen sharing. If encParams is set to null, the SDK will use the encoding parameters set previously. We recommend the following settings:

| Item | Parameter | Recommended Value for Regular Scenarios |  Recommended Value for Text-based Teaching |
|---------|---------|---------|-----|
| Resolution | videoResolution | 1280 × 720 | 1920 × 1080 |
| Frame rate | videoFps | 10 FPS | 8 FPS |
| Highest bitrate	 | videoBitrate| 1600 kbps | 2000 kbps |
| Resolution adaption | enableAdjustRes | NO | NO |

- As screen content generally does not change drastically, it is not economical to use a high frame rate. We recommend setting it to 10 fps.  
- If the screen you share contains a large amount of text, you can increase the resolution and bitrate accordingly.
- The highest bitrate (videoBitrate) refers to the highest output bitrate when a shared screen changes dramatically. If the shared content does not change a lot, the actual encoding bitrate will be lower.

#### Android targetSdkVersion 30 Crash
##### 1.Reduce targetsdkversion to 28.
The specific steps are [Build Settings]->[Switch Platform(Android)]->[Player Settings]->[Playr]->[Other Settings]->[Target API Level]->[API Level 28]

##### 2.Export the project as an Android project to add a mediaService
2.1 Export the project
![](https://imgcache.qq.com/operation/dianshi/other/export.58ce964b062e6deae7d0311465632dec2238c3b5.png)

2.2 Open the exported project using Android Studio
![](https://imgcache.qq.com/operation/dianshi/other/export2.ac1209897c49630e22fd1e679463ae339266bf0d.png)

2.3 Add configuration

2.3.1 open 'unityLibrary/build.gradle', add `implementation 'androidx.core:core:1.6.0'`  to dependencies
![](https://imgcache.qq.com/operation/dianshi/other/export4.595fbaa2057f807b1d1dc086e16b837380f40c04.png)

2.3.2 open 'gradle.properties', add `android.useAndroidX=true`

2.3.3 open 'unityLibrary/src/main/AndroidManifest.xml' 

![](https://imgcache.qq.com/operation/dianshi/other/export6.7dcf13416b75dea5dac312025ece3e59cd132b09.png)

add `<uses-permission android:name="android.permission.FOREGROUND_SERVICE" />`

add `<service
        android:name=".MediaService"
        android:enabled="true"
        android:foregroundServiceType="mediaProjection"
        android:exported="true"/>`

2.4 Add MediaService
![](https://imgcache.qq.com/operation/dianshi/other/export5.4a0d024b07f95672b9f0b4dfae7ca47d04df61f8.png)

2.5 Start MediaService
open ‘UnityPlayerActivity.java’ to add `startService(new Intent(this, MediaService.class));` in onCreate function
![](https://imgcache.qq.com/operation/dianshi/other/export7.f50b35b716dfb013fe81576016ac09df505ec745.png)

2.6 Use Android Studio to build and run.

[Reference export project](https://github.com/c1avie/UnityAndroidExport)

## FAQs
 **Can there be multiple channels of screen sharing streams in a room at the same time?**
Currently, each TRTC room can have only one channel of screen sharing stream.
