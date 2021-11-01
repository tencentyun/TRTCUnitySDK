using System;
using UnityEngine;
using UnityEngine.UI;

namespace trtc
{
    public enum VideoRenderType
    {
        None = 0,
        /** The renderer for rendering Raw Image of the UI components. */
        RawImage = 1,
        /** The renderer for rendering 3D GameObject, such as Cube、Cylinder and Plane.*/
        Renderer = 2,
    };

    public class TRTCVideoRender : MonoBehaviour, ITRTCVideoRenderCallback
    {
        private string _userId = "";
        private TRTCVideoStreamType _streamType = TRTCVideoStreamType.TRTCVideoStreamTypeBig;
        private bool _enable = true;

        private VideoRenderType _videoRenderType = VideoRenderType.None;
        private RawImage _rawImage = null;
        private Renderer _renderer = null;
        private Texture2D _nativeTexture = null;
        private TRTCVideoFillMode _videoFillMode = TRTCVideoFillMode.TRTCVideoFillMode_Fit;
        private bool _needUpdateLayout = false;

        private uint _textureWidth = 0;
        private uint _textureHeight = 0;
        private TRTCVideoFrame _videoFrame;
        private UnityEngine.Object _videoFrameLock = new UnityEngine.Object();
        private TRTCVideoPixelFormat _videoFormat =  TRTCVideoPixelFormat.TRTCVideoPixelFormat_BGRA32;
        public void SetEnable(bool enable)
        {
            _enable = enable;
        }

        public void Awake() {
            #if PLATFORM_ANDROID
                _videoFormat = TRTCVideoPixelFormat.TRTCVideoPixelFormat_RGBA32;
            #endif
        }

        public void SetForUser(string userID, TRTCVideoStreamType streamType)
        {
            _userId = userID;
            _streamType = streamType;
            TryRegisterCallback();
        }

        public void SetViewFillMode(TRTCVideoFillMode videoFillMode)
        {
            if (_videoFillMode != videoFillMode)
            {
                _videoFillMode = videoFillMode;
                _needUpdateLayout = true;
            }
        }

        public TRTCVideoFillMode GetViewFillMode()
        {
            return _videoFillMode;
        }

        private void TryRegisterCallback()
        {
            ITRTCCloud trtcCloud = ITRTCCloud.getTRTCShareInstance();
            if (trtcCloud == null)
                return;

            if (_userId.Length == 0)
            {
                trtcCloud.setLocalVideoRenderCallback(_streamType, _videoFormat,
                    TRTCVideoBufferType.TRTCVideoBufferType_Buffer, this);
            }
            else
            {
                trtcCloud.setRemoteVideoRenderCallback(_userId, _streamType, _videoFormat,
                    TRTCVideoBufferType.TRTCVideoBufferType_Buffer, this);
            }
        }

        void Start()
        {
            _rawImage = GetComponent<RawImage>();
            if (_rawImage != null)
            {
                _videoRenderType = VideoRenderType.RawImage;
            }
            else
            {
                _renderer = GetComponent<Renderer>();
                if (_renderer != null)
                {
                    _videoRenderType = VideoRenderType.Renderer;
                }
            }
        }

        void Update()
        {
            if (_videoRenderType == VideoRenderType.None)
                return;

            if (_enable == false)
                return;

            TRTCVideoFrame videoFrame;
            lock (_videoFrameLock)
            {
                videoFrame = _videoFrame;
            }

            lock (this)
            {
                if (_textureWidth != videoFrame.width || _textureHeight != videoFrame.height)
                {
                    _textureWidth = videoFrame.width;
                    _textureHeight = videoFrame.height;
                    _needUpdateLayout = true;

                    if (_nativeTexture == null)
                    {
                        try
                        {   
                            #if PLATFORM_ANDROID
                                _nativeTexture = new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.RGBA32, false);
                            #else
                                _nativeTexture = new Texture2D((int)_textureWidth, (int)_textureHeight, TextureFormat.BGRA32, false);
                            #endif
                            
                            _nativeTexture.filterMode = FilterMode.Trilinear;
                            if (_videoRenderType == VideoRenderType.RawImage && _rawImage != null)
                                _rawImage.texture = _nativeTexture;
                            else if (_videoRenderType == VideoRenderType.Renderer && _renderer != null)
                                _renderer.material.mainTexture = _nativeTexture;
                        }
                        catch (Exception e)
                        {
                            Debug.LogError("VideoRenderCreate Exception e = " + e);
                        }
                    }
                    else
                    {
                        try
                        {
                            _nativeTexture.Resize((int)_textureWidth, (int)_textureHeight);
                        }
                        catch (Exception e)
                        {
                            Debug.LogError("VideoRenderResize Exception e = " + e);
                        }
                    }
                }

                if (_needUpdateLayout)
                {
                    if (_textureWidth > 0 && _textureHeight > 0 && _videoRenderType == VideoRenderType.RawImage)
                    {
                        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();

                        float localRatio = rectTransform.rect.width / rectTransform.rect.height;
                        float videoRatio = (float)_textureWidth / (float)_textureHeight;

                        float localScaleX = 1.0f;
                        float localScaleY = 1.0f;
                        if (_videoFillMode == TRTCVideoFillMode.TRTCVideoFillMode_Fit)
                        {
                            if (localRatio > videoRatio)
                            {
                                localScaleX = videoRatio / localRatio;
                                localScaleY = 1.0f;
                            }
                            else
                            {
                                localScaleX = 1.0f;
                                localScaleY = localRatio / videoRatio;
                            }
                        }
                        else
                        {
                            if (localRatio > videoRatio)
                            {
                                localScaleX = 1.0f;
                                localScaleY = localRatio / videoRatio;
                            }
                            else
                            {
                                localScaleX = videoRatio / localRatio;
                                localScaleY = 1.0f;
                            }
                        }

                        rectTransform.localScale = new Vector3(localScaleX, -localScaleY, 1);
                        _needUpdateLayout = false;
                    }
                }

                if (_nativeTexture)
                {
                    try
                    {
                        _nativeTexture.LoadRawTextureData(videoFrame.data);
                        _nativeTexture.Apply();
                    }
                    catch (Exception e)
                    {
                        Debug.LogError("VideoRenderLoad Exception e = " + e);
                    }
                }
            }
        }

        void OnDestroy()
        {
            ITRTCCloud trtcCloud = ITRTCCloudImplement.queryTRTCShareInstance();
            if (trtcCloud == null)
                return;

            if (_userId != null)
            {
                if (_userId.Length == 0)
                {
                    trtcCloud.setLocalVideoRenderCallback(_streamType, _videoFormat,
                        TRTCVideoBufferType.TRTCVideoBufferType_Buffer, null);
                }
                else
                {
                    // 当用户退出的时候，会导致所有用户的回调都没了。先在c#层面修复，后续在各个平台的sdk去修复。
                    // trtcCloud.setRemoteVideoRenderCallback(_userId, _streamType, _videoFormat,
                    //     TRTCVideoBufferType.TRTCVideoBufferType_Buffer, null);
                }
                _userId = null;
                _streamType = TRTCVideoStreamType.TRTCVideoStreamTypeBig;
            }
        }

        public void Clear()
        {
            lock(_videoFrameLock)
            {
                _videoFrame = new TRTCVideoFrame();
            }
            lock (this)
            {
                _textureWidth = 0;
                _textureHeight = 0;

                _nativeTexture = null;
                if (_videoRenderType == VideoRenderType.RawImage && _rawImage != null)
                {
                    _rawImage.texture = null;
                }
                else if (_videoRenderType == VideoRenderType.Renderer && _renderer != null)
                {
                    _renderer.material.mainTexture = null;
                }
            }
        }

        public void onRenderVideoFrame(string userId, TRTCVideoStreamType streamType, TRTCVideoFrame frame)
        {
            if (_userId != userId)
                return;

            if (_streamType != streamType)
                return;

            lock (_videoFrameLock)
            {
                _videoFrame = frame;
            }
        }
    }
}
