using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

namespace trtc
{
    // 参考
    // https://stackoverflow.com/questions/52686472/update-texture2d-pixels-from-c
    public class TRTCVideoData : MonoBehaviour
    {
        private int mTextureRotation = 0;
        private int mTextureWidth = 0;
        private int mTextureHeight = 0;
        private bool mEnable = false;
        private int mTextureLength = 0;
        private Texture2D _nativeTexture = null;
        private System.IntPtr mNativeTextureData = Marshal.AllocHGlobal(4000 * 3000 * 4);
        private uint _textureWidth = 0;
        private uint _textureHeight = 0;
        private float mLastUpdateTime = 0f;
        private Texture2D mNativeTexture = null;
        private ITRTCCloud mTRTCCloud;
        void Start()
        {
            mTRTCCloud = ITRTCCloud.getTRTCShareInstance();
        }
        public void SetEnable(bool enable)
        {
            mEnable = enable;
            if (enable)
            {
                mTRTCCloud.startLocalPreview(true, null);

            }
            else
            {
                mTRTCCloud.stopLocalPreview();
                mNativeTexture = null;
                setRawImageTexture(null);
            }
        }

        void setRawImageTexture(Texture2D mNativeTexture)
        {
            try
            {
                RawImage rawImager = GetComponent<RawImage>();
                Renderer _renderer = GetComponent<Renderer>();
                if (_renderer != null)
                {
                    _renderer.material.mainTexture = _nativeTexture;
                }
                else
                {
                    rawImager.texture = mNativeTexture;
                }
                
            }
            catch (Exception ex)
            {
                Debug.LogError("VideoRenderCreate Exception e = " + ex);
            }
            
        }

        void Update()
        {
            if (mTRTCCloud == null)
            {
                return;
            }
            if (!mEnable)
            {
                return;
            }
            IntPtr dataIntPtr = mTRTCCloud.GetVideoRenderData("",ref mTextureRotation, ref mTextureWidth, ref mTextureHeight, ref mTextureLength, false);
            // Debug.LogFormat("mTextureWidth = {0}, mTextureHeight = {1} ,mTextureLength = {2} ", mTextureWidth, mTextureHeight, mTextureLength);
            if (dataIntPtr == IntPtr.Zero)
                return;
            if (ReferenceEquals(mNativeTexture, null) && mTextureHeight > 0 && mTextureWidth > 0)
            {
                mNativeTexture = new Texture2D(mTextureWidth, mTextureHeight, TextureFormat.RGBA32, false);
                setRawImageTexture(mNativeTexture);
            }

            if (!ReferenceEquals(mNativeTexture, null) && (mTextureWidth != mNativeTexture.width || mTextureHeight != mNativeTexture.height))
            {
                mNativeTexture = null;
                mNativeTexture = new Texture2D(mTextureWidth, mTextureHeight, TextureFormat.RGBA32, false);
                
                setRawImageTexture(mNativeTexture);
            }

            if (!ReferenceEquals(mNativeTexture, null) && mTextureLength > 0)
            {
               // Debug.LogFormat("mNativeTexture.LoadRawTextureData(mNativeTextureData, mTextureLength ={0}, width ={1} mTextureRotation={2}", mTextureLength, mTextureWidth, mTextureRotation);
                mNativeTexture.LoadRawTextureData(dataIntPtr, mTextureLength);
                mNativeTexture.Apply();
            }
        }

        void OnDestroy()
        {
           
        }
    }
}
