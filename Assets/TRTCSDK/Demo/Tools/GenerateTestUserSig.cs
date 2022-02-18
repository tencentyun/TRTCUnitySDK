using System;
using System.Text;
using tencentyun;

/// <summary>
/// Module： GenerateTestUserSig
/// 
/// Description: generates UserSig for testing. UserSig is a security signature designed by Tencent Cloud for its cloud services.
///           It is calculated based on `SDKAppID`, `UserID`, and `EXPIRETIME` using the HMAC-SHA256 encryption algorithm.
///      
/// Attention: do not use the code below in your commercial app. This is because:
/// 
///            The code may be able to calculate UserSig correctly, but it is only for quick testing of the SDK’s basic features, not for commercial apps.
///            `SECRETKEY` in client code can be easily decompiled and reversed, especially on web.
///             Once your key is disclosed, attackers will be able to steal your Tencent Cloud traffic.
///             
///            The correct method is to deploy the `UserSig` calculation code and encryption key on your project server so that your app can request from your server a `UserSig` that is calculated whenever one is needed.
///            Given that it is more difficult to hack a server than a client app, server-end calculation can better protect your key.
///            
/// Reference：https://cloud.tencent.com/document/product/647/17275#Server
/// </summary>

namespace TRTCCUnityDemo
{
    class GenerateTestUserSig
    {
        /// <summary>
        /// Tencent Cloud `SDKAppID`. Set it to the `SDKAppID` of your account.
        /// 
        /// You can view your `SDKAppID` after creating an application in the [TRTC console](https://console.cloud.tencent.com/rav).
        /// </summary>
        /// <remarks>
        /// `SDKAppID` uniquely identifies a Tencent Cloud account.
        /// </remarks>
        public const int SDKAPPID = 0;

        /// <summary>
        /// Follow the steps below to obtain the key required for UserSig calculation.
        /// 
        /// Step 1. Log in to the [TRTC console](https://console.cloud.tencent.com/trtc), and create an application if you don’t have one.
        /// Step 2. Find your application, click “Application Info”, and click the “Quick Start” tab.
        /// Step 3. Copy and paste the key to the code, as shown below.
        /// </summary>
        /// <remarks>
        /// Note: this method is for testing only. Before commercial launch, please migrate the UserSig calculation code and key to your backend server to prevent key disclosure and traffic stealing.
        /// Reference：https://cloud.tencent.com/document/product/647/17275#GetFromServer
        /// </remarks>
        public const string SECRETKEY = @"";

        /// <summary>
        /// Signature validity period, which should not be set too short
        /// 
        /// Unit: second
        /// Default value: 604800 (7 days)
        /// </summary>
        public const int EXPIRETIME = 604800;

        /// <summary>
        /// This account information needs to be supplemented for the implementation of mixed stream interface function.
        /// 
        /// Access: Tencent cloud console - > real-time audio and video - > your application - > account information panel can obtain appid / bizid
        /// </summary>
        public const int APPID = 0;
        public const int BIZID = 0;

        private static GenerateTestUserSig mInstance;

        private GenerateTestUserSig()
        {
        }

        public static GenerateTestUserSig GetInstance()
        {
            if (mInstance == null)
            {
                mInstance = new GenerateTestUserSig();
            }
            return mInstance;
        }

        public string GenTestUserSig(string userId)
        {
            if (SDKAPPID == 0 || string.IsNullOrEmpty(SECRETKEY)) return null;
            TLSSigAPIv2 api = new TLSSigAPIv2(SDKAPPID, SECRETKEY);

            byte[] utf16Bytes = Encoding.Unicode.GetBytes(userId);
            byte[] utf8Bytes = Encoding.Convert(Encoding.Unicode, Encoding.UTF8, utf16Bytes);
            return api.GenSig(Encoding.UTF8.GetString(utf8Bytes));
        }
        
    }
}
