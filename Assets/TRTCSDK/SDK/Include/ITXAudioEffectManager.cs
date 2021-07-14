using System;

namespace trtc
{
    /// <summary>
    /// 背景音乐的播放进度回调
    /// </summary>
    public interface ITXMusicPlayObserver
    {
        /// <summary>
        /// 背景音乐开始播放
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="errCode">错误码</param>
        void onStart(int id, int errCode);

        /// <summary>
        /// 背景音乐的播放进度
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="curPtsMS">当前播放音乐时长</param>
        /// <param name="durationMS">音乐文件的总时长</param>
        void onPlayProgress(int id, long curPtsMS, long durationMS);

        /// <summary>
        /// 背景音乐已播放完毕
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="errCode">错误码</param>
        void onComplete(int id, int errCode);
    }

    /// <summary>
    /// 腾讯云视频通话功能音乐和人声设置接口
    /// </summary>
    public abstract class ITXAudioEffectManager
    {

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （一）人声相关特效函数
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        /// 1.1 开启耳返
        /// 开启后会在耳机里听到自己的声音。
        /// </summary>
        /// <param name="enable">true：开启；false：关闭</param>
        /// <remarks>
        /// 仅在戴耳机时有效，暂时仅支持部分采集延迟较低的机型
        /// </remarks>
        //public abstract void enableVoiceEarMonitor(bool enable);

        /// <summary>
        /// 1.2 设置耳返音量
        /// </summary>
        /// <param name="volume"volume 音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100></param>
        /// <remarks>如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。</remarks>
        //public abstract void setVoiceEarMonitorVolume(int volume);

        /// <summary>
        /// 1.3 设置人声的混响效果（KTV、小房间、大会堂、低沉、洪亮...）
        /// </summary>
        /// <remarks>设置的效果在退房后会失效，如果下次进房还需要对应特效，需要调用此接口再次设置。</remarks>
        public abstract void setVoiceReverbType(TXVoiceReverbType reverbType);

        /// <summary>
        /// 1.4 设置人声的变声特效（萝莉、大叔、重金属、外国人...）
        /// </summary>
        /// <remarks>
        /// 设置的效果在退房后会失效，如果下次进房还需要对应特效，需要调用此接口再次设置。
        /// </remarks>
        //public abstract void setVoiceChangerType(TXVoiceChangeType changerType);

        /// <summary>
        /// 1.5 设置麦克风采集人声的音量
        /// </summary>
        /// <param name="volume">音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100</param>
        /// <remarks>
        /// 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
        /// </remarks>
        public abstract void setVoiceCaptureVolume(int volume);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      （二）背景音乐特效函数
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        /// 设置背景音乐的播放进度回调接口
        /// </summary>
        /// <param name="musicId">音乐 ID</param>
        /// <param name="observer">具体参考 ITXMusicPlayObserver 中定义接口</param>
        public abstract void setMusicObserver(int musicId,ITXMusicPlayObserver observer);

        /// <summary>
        /// 2.1 开始播放背景音乐
        /// <para>每个音乐都需要您指定具体的 ID，您可以通过该 ID 对音乐的开始、停止、音量等进行设置。</para>
        /// </summary>
        /// <param name="musicParam">音乐参数</param>
        /// <remarks>
        ///     若您想同时播放多个音乐，请分配不同的 ID 进行播放。
        ///     如果使用同一个 ID 播放不同音乐，SDK 会先停止播放旧的音乐，再播放新的音乐。
        /// </remarks>
        public abstract void startPlayMusic(AudioMusicParam musicParam);
        // public abstract void startPlayMusic:(TXAudioMusicParam *)musicParam
        //             onStart:(TXAudioMusicStartBlock _Nullable)startBlock
        //             onProgress:(TXAudioMusicProgressBlock _Nullable)progressBlock
        //             onComplete:(TXAudioMusicCompleteBlock _Nullable)completeBlock;

        /// <summary>
        /// 2.2 停止播放背景音乐
        /// </summary>
        /// <param name="id">音乐 ID</param>
        public abstract void stopPlayMusic(int id);

        /// <summary>
        /// 2.3 暂停播放背景音乐
        /// </summary>
        /// <param name="id">音乐 ID</param>
        public abstract void pausePlayMusic(int id);

        /// <summary>
        /// 2.4 恢复播放背景音乐
        /// </summary>
        /// <param name="id">音乐 ID</param>
        public abstract void resumePlayMusic(int id);

        /// <summary>
        /// 2.5 设置背景音乐的远端音量大小，即主播可以通过此接口设置远端观众能听到的背景音乐的音量大小。
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="volume">音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100</param>
        /// <remarks>
        /// 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
        /// </remarks>
        public abstract void setMusicPublishVolume(int id,int volume);

        /// <summary>
        /// 2.6 设置背景音乐的本地音量大小，即主播可以通过此接口设置主播自己本地的背景音乐的音量大小。
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="volume">音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100</param>
        /// <remarks>
        /// 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
        /// </remarks>
        public abstract void setMusicPlayoutVolume(int id,int volume);

        /// <summary>
        /// 2.7 设置全局背景音乐的本地和远端音量的大小
        /// </summary>
        /// <param name="volume">音量大小，100为原始音量，范围是：[0 ~ 150]，默认值为100</param>
        /// <remarks>
        /// 如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
        /// </remarks>
        public abstract void setAllMusicVolume(int volume);

        /// <summary>
        /// 2.8 调整背景音乐的音调高低
        /// </summary>
        /// <param name="id"> 音乐 ID</param>
        /// <param name="pitch">音调，默认值是0.0f，范围是：[-1 ~ 1] 之间的浮点数；</param>
        public abstract void setMusicPitch(int id,double pitch);

        /// <summary>
        /// 2.9 调整背景音乐的变速效果
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="speedRate">速度，默认值是1.0f，范围是：[0.5 ~ 2] 之间的浮点数；</param>
        public abstract void setMusicSpeedRate(int id ,double speedRate);

        /// <summary>
        /// 2.10 获取背景音乐当前的播放进度（单位：毫秒）
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <returns>
        /// 成功返回当前播放时间，单位：毫秒，失败返回-1
        /// </returns>
        public abstract int getMusicCurrentPosInMS(int id);

        /// <summary>
        /// 2.11 设置背景音乐的播放进度（单位：毫秒）
        /// </summary>
        /// <param name="id">音乐 ID</param>
        /// <param name="pts">单位: 毫秒</param>
        /// <remarks>
        ///     请尽量避免频繁地调用该接口，因为该接口可能会再次读写音乐文件，耗时稍高。
        ///     当配合进度条使用时，请在进度条拖动完毕的回调中调用，而避免在拖动过程中实时调用。
        /// </remarks>
        public abstract void seekMusicToPosInMS(int id,int  pts);

        /// <summary>
        /// 2.12 获取景音乐文件的总时长（单位：毫秒）
        /// </summary>
        /// <param name="path">音乐文件路径，如果 path 为空，那么返回当前正在播放的 music 时长。</param>
        /// <returns>
        /// 成功返回时长，失败返回-1
        /// </returns>
        public abstract int getMusicDurationInMS(string path);
    }
}

