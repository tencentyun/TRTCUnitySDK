using System;

namespace trtc
{
    /// <summary>
    /// TRTC device management APIs
    /// </summary>
    public abstract class ITXDeviceManager
    {

        /// <summary>
        /// Get whether the front camera is in use
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        public abstract bool isFrontCamera();

        /// <summary>
        /// Switch the camera
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="frontCamera">`YES`: switch to the front camera; `NO`: switch to the rear camera</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int switchCamera(bool frontCamera);
        /// <summary>
        /// Get the maximum zoom level of the camera
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <returns></returns>
        public abstract double getCameraZoomMaxRatio();

        /// <summary>
        /// Set the zoom level of the camera
        /// @param zoomRatio Value range: 1-5. `1` indicates the widest angle of view (original), and `5` the narrowest angle of view (zoomed in).
        /// Video will be blurry if the zoom level exceeds 5. The default value is 1.
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="zoomRatio">Zoom level</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int setCameraZoomRatio(double zoomRatio);

        /// <summary>
        /// Get whether automatic face detection is supported
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <returns></returns>
        public abstract bool isAutoFocusEnabled();

        /// <summary>
        /// Enable/Disable automatic face detection
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="enabled">`YES` (default): enable; `NO`: disable</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int enableCameraAutoFocus(bool enabled);

        /// <summary>
        /// Set camera focus
        /// @param position Focus position
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="x">Horizontal coordinate of the focus</param>
        /// <param name="y">Vertical coordinate of the focus</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int setCameraFocusPosition(int x,int y);

        /// <summary>
        /// Enable/Disable flash
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="enabled">`YES`: enable; `NO` (default): disable</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int enableCameraTorch(bool enabled);

        /// <summary>
        /// Set the type of system volume to use during a call
        /// @note
        ///   1. This API must be called before `startLocalAudio()` to take effect.
        ///   2. You can ignore this API if you don’t have special requirements. Just call `enterRoom`, specifying the scenario, and the SDK will automatically select a system volume type for you.
        /// @param type System volume type. For more information, please see `TXSystemVolumeType`. You are not advised to set this parameter by yourself unless you have special requirements.
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="type">System volume type. You are not advised to set this parameter by yourself unless you have special requirements.</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int setSystemVolumeType(TXSystemVolumeType type) ;

        /// <summary>
        /// Set the audio route
        /// <para>The audio route concept is behind the hands-free mode of video calls in WeChat and Mobile QQ.</para>
        /// <para>A mobile phone usually has two speakers: one at the top, whose volume is low, and the other at the bottom, whose volume is high.</para>
        /// <para>The audio route determines the speaker via which audio is played.</para>
        /// </summary>
        /// <remarks>
        /// This API is supported only on Android and iOS.
        /// </remarks>
        /// <param name="route">Audio route, i.e., whether to play audio via the speaker or receiver. Default value: `TXAudioRouteSpeakerphone`</param>
        /// <returns>If `0` is returned, the operation is successful; if a negative value is returned, the operation failed.</returns>
        public abstract int setAudioRoute(TXAudioRoute route);

        /// <summary>
        /// Get device list (desktop only)
        /// </summary>
        /// <param name="type">Device type, specifying which device list to obtain. See txmediadevicetype definition for details.</param>
        /// <returns></returns>
        public abstract ITXDeviceInfo[] GetDevicesList(TXMediaDeviceType type);

        /// <summary>
        /// Set the current device to use (desktop only)
        /// </summary>
        /// <param name="type">Device type, See the definition of TXMediaDeviceType for details.</param>
        /// <param name="deviceId">Device ID, you can get the device ID through the interface {@ link GetDevicesList}</param>
        /// <returns></returns>
        public abstract int SetCurrentDevice(TXMediaDeviceType type, String deviceId);

        /// <summary>
        /// Get the device currently in use (desktop only)
        /// </summary>
        /// <param name="type">Device type，See the definition of TXMediaDeviceType for details.</param>
        /// <returns></returns> 
        public abstract ITXDeviceInfo GetCurrentDevice(TXMediaDeviceType type);
    }
}

