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
1.Reduce targetsdkversion to 28. The specific steps are [Build Settings]->[Switch Platform(Android)]->[Player Settings]->[Playr]->[Other Settings]->[Target API Level]->[API Level 28]

2.Export the project as an Android project，reference[docs](https://cloud.tencent.com/developer/article/1914827) to add a mediaService

## FAQs
 **Can there be multiple channels of screen sharing streams in a room at the same time?**
Currently, each TRTC room can have only one channel of screen sharing stream.