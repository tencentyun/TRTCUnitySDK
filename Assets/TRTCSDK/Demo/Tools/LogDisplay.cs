
using UnityEngine;
using UnityEngine.UI;

namespace TRTCCUnityDemo
{
    public class LogManager
    {
        private static LogManager sharedInstance;
        private static readonly System.Object sLock = new System.Object();
        private string logText;

        private LogManager()
        {

        }

        public static LogManager GetInstance()
        {
            if (sharedInstance == null)
            {
                lock (sLock)
                {
                    sharedInstance = new LogManager();
                }
            }
            return sharedInstance;
        }

        public static void Log(string message)
        {
            LogManager.GetInstance().LogI(message);
        }

        private void LogI(string message)
        {
            logText = logText + "\n" + message;
        }

        public string getLogText()
        {
            return logText;
        }

        public void clear()
        {
            logText = ">>log";
        }
    }

    public class LogDisplay : MonoBehaviour
    {
        public Text logText;
        public Scrollbar verticalBar;
        public Button clearBtn;

        void Start()
        {
            clearBtn.onClick.AddListener(this.OnClearLogClick);
        }

        // Update is called once per frame
        void Update()
        {
            logText.text = LogManager.GetInstance().getLogText();
        }

        void OnDestroy()
        {

        }

        void OnClearLogClick()
        {
            LogManager.GetInstance().clear();
        }
    }
}
