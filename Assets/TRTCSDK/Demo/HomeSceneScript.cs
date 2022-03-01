using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
# if PLATFORM_ANDROID
using UnityEngine.Android;
# endif
using trtc;
using TRTCCUnityDemo;

namespace TRTCCUnityDemo
{
    public class HomeSceneScript : MonoBehaviour
    {
        public GameObject settingPrefab;
        public RectTransform mainCanvas;

        void Start()
        {
            #if PLATFORM_ANDROID
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
            }
            if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
            {
                Permission.RequestUserPermission(Permission.Camera);
            }
            #endif
            
            transform.Find("editUserID").GetComponent<InputField>().text = DataManager.GetInstance().GetUserID();
            transform.Find("editRoomID").GetComponent<InputField>().text = DataManager.GetInstance().GetRoomID().ToString();
            

            Button enterRoomBtn = transform.Find("btnEnterRoom").gameObject.GetComponent<Button>();
            enterRoomBtn.onClick.AddListener(this.OnEnterRoomClick);

            Button showSettingBtn = transform.Find("btnShowSetting").gameObject.GetComponent<Button>();
            showSettingBtn.onClick.AddListener(this.OnShowSettingClick);

            // Button c = transform.Find("BtnApiTest").gameObject.GetComponent<Button>();
            // showApiTestBtn.onClick.AddListener(this.OnShowApiTestClick);

            ITRTCCloud mTRTCCloud = ITRTCCloud.getTRTCShareInstance();
            string version = mTRTCCloud.getSDKVersion();
            transform.Find("lblTextVersion").GetComponent<Text>().text = "version:"+version;
        }

        void OnDestroy()
        {

        }

        void OnEnterRoomClick()
        {
            string userID = transform.Find("editUserID").GetComponent<InputField>().text;
            string roomID = transform.Find("editRoomID").GetComponent<InputField>().text;

            DataManager.GetInstance().SetUserID(userID);
            DataManager.GetInstance().SetRoomID(roomID);
            
            if (GenerateTestUserSig.SDKAPPID != 0 && !string.IsNullOrEmpty(GenerateTestUserSig.SECRETKEY)) 
            {
                SceneManager.LoadScene("RoomSceme", LoadSceneMode.Single);
            }
            else
            {
                Debug.Assert(false, "Please fill in your sdkappid && secretkey first");
            }
            
        }

        void OnShowSettingClick()
        {
            var setting = Instantiate(settingPrefab, new Vector3(0, 0, 0), Quaternion.identity);
            setting.transform.SetParent(mainCanvas.transform, false);
        }

        void OnShowApiTestClick()
        {
            SceneManager.LoadScene("AudioApiTest", LoadSceneMode.Single);
        }
    }
}