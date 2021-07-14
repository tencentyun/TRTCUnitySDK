#ifndef __ITXAUDIOEFFECTMANAGER_H__
#define __ITXAUDIOEFFECTMANAGER_H__

namespace trtc {

/// @defgroup ITXAudioEffectManager_cplusplus ITXAudioEffectManager
/// 腾讯云视频通话功能音乐和人声设置接口
/// @{
enum TXVoiceReverbType
{
    TXLiveVoiceReverbType_0         = 0,    ///< 关闭混响
    TXLiveVoiceReverbType_1         = 1,    ///< KTV
    TXLiveVoiceReverbType_2         = 2,    ///< 小房间
    TXLiveVoiceReverbType_3         = 3,    ///< 大会堂
    TXLiveVoiceReverbType_4         = 4,    ///< 低沉
    TXLiveVoiceReverbType_5         = 5,    ///< 洪亮
    TXLiveVoiceReverbType_6         = 6,    ///< 金属声
    TXLiveVoiceReverbType_7         = 7,    ///< 磁性
};

class ITXMusicPlayObserver {
public:
    virtual ~ITXMusicPlayObserver() {}

    /// 背景音乐开始播放
    virtual void onStart(int id,int errCode) = 0;

    /// 背景音乐的播放进度
    virtual void onPlayProgress(int id,long curPtsMS,long durationMS) = 0;

    /// 背景音乐已播放完毕
    virtual void onComplete(int id,int errCode) = 0;
};

class AudioMusicParam {
public:
    /// 【字段含义】音乐 ID
    /// 【特殊说明】SDK 允许播放多路音乐，因此需要音乐 ID 进行标记，用于控制音乐的开始、停止、音量等
    int id;

    /// 【字段含义】音乐文件的绝对路径
    char* path;

    /// 【字段含义】音乐循环播放的次数
    /// 【推荐取值】取值范围为0 - 任意正整数，默认值：0。0表示播放音乐一次；1表示播放音乐两次；以此类推
    int loopCount;

    /// 【字段含义】是否将音乐传到远端
    /// 【推荐取值】YES：音乐在本地播放的同时，会上行至云端，因此远端用户也能听到该音乐；NO：音乐不会上行至云端，因此只能在本地听到该音乐。默认值：NO
    bool publish;

    /// 【字段含义】播放的是否为短音乐文件
    /// 【推荐取值】YES：需要重复播放的短音乐文件；NO：正常的音乐文件。默认值：NO
    bool isShortFile;

    /// 【字段含义】音乐开始播放时间点，单位毫秒
    long startTimeMS;

    /// 【字段含义】音乐结束播放时间点，单位毫秒，0表示播放至文件结尾。
    long endTimeMS;

    AudioMusicParam(int id_, char* path_) {
        path = path_;
        id = id_;
        loopCount = 0;
        publish = false;
        isShortFile = false;
        startTimeMS = 0;
        endTimeMS = 0;
    }
};


class ITXAudioEffectManager
{
protected:
    ITXAudioEffectManager() {}
    virtual ~ITXAudioEffectManager() {}

public:
/////////////////////////////////////////////////////////////////////////////////
//
//                      （一）人声相关特效函数
//
/////////////////////////////////////////////////////////////////////////////////
/// @name 人声相关特效函数
/// @{

    /**
     * 1.1 设置人声的混响效果（KTV、小房间、大会堂、低沉、洪亮...）
     *
     * @note  设置的效果在退房后会失效，如果下次进房还需要对应特效，需要调用此接口再次设置。
     */
    virtual void setVoiceReverbType(TXVoiceReverbType type) = 0;

    /**
     * 1.2 设置麦克风采集人声的音量
     *
     * @param volume 音量大小，100为原始音量，取值范围为0 - 150；默认值：100
     *
     * @note  如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setVoiceCaptureVolume(int volume) = 0;
/// @}

/////////////////////////////////////////////////////////////////////////////////
//
//                      （二）背景音乐特效函数
//
/////////////////////////////////////////////////////////////////////////////////

/// @name 背景音乐特效函数
/// @{
    /**
     * 2.1 设置背景音乐的播放进度回调接口
     *
     * @param musicId   音乐 ID
     * @param observer  具体参考 ITXMusicPlayObserver 中定义接口
     */
    virtual void setMusicObserver(int musicId, ITXMusicPlayObserver* observer) = 0;

    /**
     * 2.2 开始播放背景音乐
     *
     * 每个音乐都需要您指定具体的 ID，您可以通过该 ID 对音乐的开始、停止、音量等进行设置。
     *
     * @note 若您想同时播放多个音乐，请分配不同的 ID 进行播放。
     *       如果使用同一个 ID 播放不同音乐，SDK 会先停止播放旧的音乐，再播放新的音乐。
     * @param musicParam 音乐参数
     */
    virtual void startPlayMusic(AudioMusicParam musicParam) = 0;

    /**
     * 2.3 停止播放背景音乐
     *
     * @param id  音乐 ID
     */
    virtual void stopPlayMusic(int id) = 0;

    /**
     * 2.4 暂停播放背景音乐
     *
     * @param id  音乐 ID
     */
    virtual void pausePlayMusic(int id) = 0;

    /**
     * 2.5 恢复播放背景音乐
     *
     * @param id  音乐 ID
     */
    virtual void resumePlayMusic(int id) = 0;

    /**
     * 2.6 设置背景音乐的远端音量大小，即主播可以通过此接口设置远端观众能听到的背景音乐的音量大小。
     *
     * @param id    音乐 ID
     * @param volume 音量大小，100为原始音量，取值范围为0 - 150；默认值：100
     *
     * @note  如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setMusicPublishVolume(int id, int volume) = 0;

    /**
     * 2.7 设置背景音乐的本地音量大小，即主播可以通过此接口设置主播自己本地的背景音乐的音量大小。
     *
     * @param id    音乐 ID
     * @param volume 音量大小，100为原始音量，取值范围为0 - 150；默认值：100
     *
     * @note  如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setMusicPlayoutVolume(int id, int volume) = 0;

    /**
     * 2.8 设置全局背景音乐的本地和远端音量的大小
     *
     * @param volume 音量大小，100为原始音量，取值范围为0 - 150；默认值：100
     *
     * @note  如果要将 volume 设置为大于100的数值，需要进行特殊配置，请联系技术支持。
     */
    virtual void setAllMusicVolume(int volume) = 0;

    /**
     * 2.9 调整背景音乐的音调高低
     *
     * @param id   音乐 ID
     * @param pitch 音调，默认值是0.0f，范围是：[-1 ~ 1] 之间的浮点数；
     */
    virtual void setMusicPitch(int id, float pitch) = 0;

    /**
     * 2.10 调整背景音乐的变速效果
     *
     * @param id   音乐 ID
     * @param speedRate 速度，默认值是1.0f，范围是：[0.5 ~ 2] 之间的浮点数；
     */
    virtual void setMusicSpeedRate(int id, float speedRate) = 0;

    /**
     * 2.11 获取背景音乐当前的播放进度（单位：毫秒）
     *
     * @param id   音乐 ID
     * @return 成功返回当前播放时间，单位：毫秒，失败返回-1
     */
    virtual long getMusicCurrentPosInMS(int id) = 0;

    /**
     * 2.12 设置背景音乐的播放进度（单位：毫秒）
     *
     * @note 请尽量避免频繁地调用该接口，因为该接口可能会再次读写音乐文件，耗时稍高。
     *       当配合进度条使用时，请在进度条拖动完毕的回调中调用，而避免在拖动过程中实时调用。
     *
     * @param id   音乐 ID
     * @param pts 单位: 毫秒
     */
    virtual void seekMusicToPosInTime(int id, int pts) = 0;

    /**
     * 2.13 获取景音乐文件的总时长（单位：毫秒）
     *
     * @param path 音乐文件路径，如果 path 为空，那么返回当前正在播放的 music 时长。
     * @return 成功返回时长，失败返回-1
     */
    virtual long getMusicDurationInMS(char* path) = 0;

};
/// @}
}

#ifdef _WIN32
using namespace trtc;
#endif

#endif /* __ITXAUDIOEFFECTMANAGER_H__ */
