using System;
using UnityEngine;

namespace trtc
{
    public class TRTCCallbackObj : MonoBehaviour
    {
        public void Awake()
        {
            DontDestroyOnLoad(gameObject);
        }

        private static int callbackObjCount = 0;
        public static string CreateGameObj()
        {
            string gameObjName = string.Format("TRTCCallback_GameObj_{0}", callbackObjCount++);
            GameObject obj = new GameObject(gameObjName);
            TRTCCallbackObj instance = obj.AddComponent<TRTCCallbackObj>();
            obj.hideFlags = HideFlags.HideAndDontSave;

            DontDestroyOnLoad(obj);

            Debug.LogFormat("CreateGameObj:{0}, {1}", obj.GetInstanceID(), instance);
            return gameObjName;
        }

        public static void DestroyGameObj(string gameObjName)
        {
            GameObject gameObject = GameObject.Find(gameObjName);
            if (!ReferenceEquals(gameObject, null))
            {
                GameObject.Destroy(gameObject);
            }
        }

        public virtual void Update()
        {
            ITRTCCloudNative.TRTCUnityUpdate();
        }

        void OnApplicationFocus(bool hasFocus)
        {
            // Debug.Log(string.Format("OnApplicationFocus {0}", hasFocus));
        }

        void OnApplicationPause(bool pauseStatus)
        {
            // Debug.Log(string.Format("OnApplicationPause {0}", pauseStatus));
        }

        void OnApplicationQuit()
        {
            Debug.Log(string.Format("OnApplicationQuit"));
            ITRTCCloudImplement.destroyTRTCShareInstance();
        }
    }
}