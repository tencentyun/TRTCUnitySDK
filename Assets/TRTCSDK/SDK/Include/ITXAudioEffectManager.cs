using System;

namespace trtc
{
    /// <summary>
    /// Background music callbacks
    /// </summary>
    public interface ITXMusicPlayObserver
    {
        /// <summary>
        /// Background music started
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="errCode">Error code</param>
        void onStart(int id, int errCode);

        /// <summary>
        /// Playback progress of background music
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="curPtsMS">Current playback time</param>
        /// <param name="durationMS">Total music length</param>
        void onPlayProgress(int id, long curPtsMS, long durationMS);

        /// <summary>
        /// Background music ended
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="errCode">Error code</param>
        void onComplete(int id, int errCode);
    }

    /// <summary>
    /// TRTC music and audio effect APIs
    /// </summary>
    public abstract class ITXAudioEffectManager
    {

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (1) Audio Effect APIs
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        /// 1.1 Enable/Disable in-ear monitoring
        /// After in-ear monitoring is enabled, the local user will hear his or her own voice in earphones.
        /// </summary>
        /// <param name="enable">`true:` enable; `false`: disable</param>
        /// <remarks>
        /// This API works only if the user wears earphones and the device has low capturing latency.
        /// </remarks>
        //public abstract void enableVoiceEarMonitor(bool enable);

        /// <summary>
        /// 1.2 Set in-ear monitoring volume
        /// </summary>
        /// <param name="volume"Volume. Value range: 0-150. Default value: `100`></param>
        /// <remarks>You need to contact technical support to use a value higher than `100`.</remarks>
        //public abstract void setVoiceEarMonitorVolume(int volume);

        /// <summary>
        /// 1.3 Set a reverb effect (karaoke, room, hall, deep, resonant, etc.)
        /// </summary>
        /// <remarks>An effect becomes invalid after you leave the room. If you want to use the same effect the next time, you need to call this API again after room entry.</remarks>
        public abstract void setVoiceReverbType(TXVoiceReverbType reverbType);

        /// <summary>
        /// 1.4 Set an audio effect (little girl, middle-aged man, metal, punk, etc.)
        /// </summary>
        /// <remarks>
        /// An effect becomes invalid after you leave the room. If you want to use the same effect the next time, you need to call this API again after room entry.
        /// </remarks>
        //public abstract void setVoiceChangerType(TXVoiceChangeType changerType);

        /// <summary>
        /// 1.5 Set the mic capturing volume
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-150. Default value: `100`</param>
        /// <remarks>
        /// You need to contact technical support to use a value higher than `100`.
        /// </remarks>
        public abstract void setVoiceCaptureVolume(int volume);

        /////////////////////////////////////////////////////////////////////////////////
        //
        //                      (2) Background Music APIs
        //
        /////////////////////////////////////////////////////////////////////////////////

        /// <summary>
        /// Set the callback of the playback progress of background music
        /// </summary>
        /// <param name="musicId">Music ID</param>
        /// <param name="observer">For more information, please see the APIs defined in `ITXMusicPlayObserver`.</param>
        public abstract void setMusicObserver(int musicId,ITXMusicPlayObserver observer);

        /// <summary>
        /// 2.1 Start background music
        /// <para>You must assign an ID to each music track so that you can start, stop, or set the volume of music tracks by ID.</para>
        /// </summary>
        /// <param name="musicParam">Music parameters</param>
        /// <remarks>
        ///     To play multiple music tracks at the same time, assign different IDs to them.
        ///     If you use the same ID to play a music track different from the current one, the SDK will stop the current one before playing the new one.
        /// </remarks>
        public abstract void startPlayMusic(AudioMusicParam musicParam);
        // public abstract void startPlayMusic:(TXAudioMusicParam *)musicParam
        //             onStart:(TXAudioMusicStartBlock _Nullable)startBlock
        //             onProgress:(TXAudioMusicProgressBlock _Nullable)progressBlock
        //             onComplete:(TXAudioMusicCompleteBlock _Nullable)completeBlock;

        /// <summary>
        /// 2.2 Stop background music
        /// </summary>
        /// <param name="id">Music ID</param>
        public abstract void stopPlayMusic(int id);

        /// <summary>
        /// 2.3 Pause background music
        /// </summary>
        /// <param name="id">Music ID</param>
        public abstract void pausePlayMusic(int id);

        /// <summary>
        /// 2.4 Resume background music
        /// </summary>
        /// <param name="id">Music ID</param>
        public abstract void resumePlayMusic(int id);

        /// <summary>
        /// 2.5 Set the volume of the anchor’s background music heard by remote users
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="volume">Volume. Value range: 0-150. Default value: `100`</param>
        /// <remarks>
        /// You need to contact technical support to use a value higher than `100`.
        /// </remarks>
        public abstract void setMusicPublishVolume(int id,int volume);

        /// <summary>
        /// 2.6 Set the volume of background music heard by the anchor
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="volume">Volume. Value range: 0-150. Default value: `100`</param>
        /// <remarks>
        /// You need to contact technical support to use a value higher than `100`.
        /// </remarks>
        public abstract void setMusicPlayoutVolume(int id,int volume);

        /// <summary>
        /// 2.7 Set the global (local and remote) volume of background music
        /// </summary>
        /// <param name="volume">Volume. Value range: 0-150. Default value: `100`</param>
        /// <remarks>
        /// You need to contact technical support to use a value higher than `100`.
        /// </remarks>
        public abstract void setAllMusicVolume(int volume);

        /// <summary>
        /// 2.8 Adjust the pitch of background music
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="pitch">Pitch. Value range: [-1, 1] (floating point number). Default value: 0.0f</param>
        public abstract void setMusicPitch(int id,double pitch);

        /// <summary>
        /// 2.9 Change the speed of background music
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="pitch">Speed. Value range: [0.5, 2] (floating point number). Default value: 1.0f</param>
        public abstract void setMusicSpeedRate(int id ,double speedRate);

        /// <summary>
        /// 2.10 Get the playback progress (ms) of background music
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <returns>
        /// The current playback time (ms) is returned if this API is called successfully; otherwise, `-1` is returned.
        /// </returns>
        public abstract int getMusicCurrentPosInMS(int id);

        /// <summary>
        /// 2.11 Set the playback progress (ms) of background music
        /// </summary>
        /// <param name="id">Music ID</param>
        /// <param name="pts">Playback progress (ms)</param>
        /// <remarks>
        ///     Do not call this API frequently as the music file may be read and written each time the API is called, which can be time-consuming.
        /// If you use this API to implement a draggable progress bar, do not call it during dragging, but after receiving the callback that indicates the completion of dragging.
        /// </remarks>
        public abstract void seekMusicToPosInMS(int id,int  pts);

        /// <summary>
        /// 2.12 Get the total music length (ms)
        /// </summary>
        /// <param name="path">Path of the music file. If it is not specified, the length of the music file being played is returned.</param>
        /// <returns>
        /// The total music length is returned if this API is called successfully; otherwise, `-1` is returned.
        /// </returns>
        public abstract int getMusicDurationInMS(string path);
    }
}

