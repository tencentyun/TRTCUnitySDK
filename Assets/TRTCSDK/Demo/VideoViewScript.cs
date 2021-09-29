using System;
using System.Collections;
using System.Collections.Generic;
using trtc;
using UnityEngine;
using UnityEngine.UI;

public class VideoViewScript : MonoBehaviour
{
    TRTCVideoData tRTCVideoData;
    // Start is called before the first frame update
    void Start()
    {
        tRTCVideoData = GameObject.Find("RawImage").GetComponent<TRTCVideoData>();

        Button btnStart = transform.Find("btnStart").gameObject.GetComponent<Button>();
        btnStart.onClick.AddListener(this.OnStartClick);

        Button btnStop = transform.Find("btnStop").gameObject.GetComponent<Button>();
        btnStop.onClick.AddListener(()=> {
            tRTCVideoData.SetEnable(false);
        });
    }

    private void OnStartClick()
    {
        tRTCVideoData.SetEnable(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
