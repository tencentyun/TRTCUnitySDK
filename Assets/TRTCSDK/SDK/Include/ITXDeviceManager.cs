using System;

namespace trtc
{
    /// <summary>
    /// 腾讯云实时音视频设备管理接口
    /// </summary>
    public abstract class ITXDeviceManager
    {

        /// <summary>
        /// 判断当前是否为前置摄像头
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        public abstract bool isFrontCamera();

        /// <summary>
        /// 切换摄像头
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="frontCamera">YES：切换到前置摄像头 NO：切换到后置摄像头</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int switchCamera(bool frontCamera);
        /// <summary>
        /// 查询当前摄像头支持的最大缩放比例
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <returns></returns>
        public abstract double getCameraZoomMaxRatio();

        /// <summary>
        /// 设置当前摄像头的缩放比例
        /// @param zoomRatio 取值范围1 - 5，取值为1表示最远视角（正常镜头），取值为5表示最近视角（放大镜头）。
        /// 最大值推荐为5，若超过5，视频数据会变得模糊不清。默认值为1。
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="zoomRatio">缩放倍数</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int setCameraZoomRatio(double zoomRatio);

        /// <summary>
        /// 查询是否支持自动识别人脸位置
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <returns></returns>
        public abstract bool isAutoFocusEnabled();

        /// <summary>
        /// 设置人脸自动识别
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="enabled">YES: 开启；NO：关闭，默认值：YES</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int enableCameraAutoFocus(bool enabled);

        /// <summary>
        /// 设置摄像头焦点
        /// @param position 对焦位置
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="x">焦点横坐标</param>
        /// <param name="y">焦点纵坐标</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int setCameraFocusPosition(int x,int y);

        /// <summary>
        /// 开关闪光灯
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="enabled">YES：开启；NO：关闭，默认值：NO</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int enableCameraTorch(bool enabled);

        /// <summary>
        /// 设置通话时使用的系统音量类型
        /// @note
        ///   1. 需要在调用 startLocalAudio() 之前调用该接口。
        ///   2. 如无特殊需求，不推荐您自行设置，您只需通过 enterRoom 设置好适合您的场景，SDK 内部会自动选择相匹配的音量类型。
        /// @param type 系统音量类型，参见 TXSystemVolumeType 说明。如无特殊需求，不推荐您自行设置。
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="type">系统音量类型，如无特殊需求，不推荐您自行设置。</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int setSystemVolumeType(TXSystemVolumeType type) ;

        /// <summary>
        /// 设置音频路由
        /// <para>微信和手机 QQ 视频通话功能的免提模式就是基于音频路由实现的。</para>
        /// <para>一般手机都有两个扬声器，一个是位于顶部的听筒扬声器，声音偏小；一个是位于底部的立体声扬声器，声音偏大。</para>
        /// <para>设置音频路由的作用就是决定声音使用哪个扬声器播放。</para>
        /// </summary>
        /// <remarks>
        /// 此接口只支持和Android和iOS平台
        /// </remarks>
        /// <param name="route">音频路由，即声音由哪里输出（扬声器、听筒），默认值：TXAudioRouteSpeakerphone</param>
        /// <returns>0：操作成功 负数：失败</returns>
        public abstract int setAudioRoute(TXAudioRoute route);


        /// <summary>
        /// 2.1 获取设备列表（仅适用于桌面端）
        /// </summary>
        /// <param name="type">设备类型，指定需要获取哪种设备的列表。详见 TXMediaDeviceType 定义。</param>
        /// <returns></returns>
        public abstract ITXDeviceInfo[] GetDevicesList(TXMediaDeviceType type);

        /// <summary>
        /// 2.2 设置当前要使用的设备（仅适用于桌面端）
        /// </summary>
        /// <param name="type">设备类型，指定需要获取哪种设备的列表。详见 TXMediaDeviceType 定义。</param>
        /// <param name="deviceId">设备ID，您可以通过接口 {@link getDevicesList} 获得设备 ID。</param>
        /// <returns></returns>
        public abstract int SetCurrentDevice(TXMediaDeviceType type, String deviceId);

        /// <summary>
        /// 2.3 获取当前正在使用的设备（仅适用于桌面端）
        /// </summary>
        /// <param name="type">设备类型，指定需要获取哪种设备的列表。详见 TXMediaDeviceType 定义。</param>
        /// <returns></returns>
        public abstract ITXDeviceInfo GetCurrentDevice(TXMediaDeviceType type);

    }
}

