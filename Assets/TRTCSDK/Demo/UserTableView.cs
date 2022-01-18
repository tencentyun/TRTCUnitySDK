using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using trtc;

namespace TRTCCUnityDemo
{
    public class UserInfo
    {
        public string userId;
        public bool isAudioMute;
        public bool isVideoMute;
    }

    public class UserTableView : MonoBehaviour
    {
        public delegate void MuteAudioHandler(string userId, bool mute);
        public delegate void MuteVideoHandler(string userId, bool mute);

        public event MuteAudioHandler DoMuteAudio;
        public event MuteVideoHandler DoMuteVideo;

        public RectTransform tableView;
        public RectTransform contentView;
        public GameObject tableViewCell;
        private Dictionary<ITRTCCloudImplement.RenderKey, UserTableViewCell> userViewCells = new Dictionary<ITRTCCloudImplement.RenderKey, UserTableViewCell>();
        bool audioVolumeVisible = false;
        bool userStatisVisible = false;

        void Start()
        {

        }

        public void AddUser(string userId, TRTCVideoStreamType streamType)
        {
            ITRTCCloudImplement.RenderKey key = new ITRTCCloudImplement.RenderKey(userId, streamType);
            if (userViewCells.ContainsKey(key))
                return;

            GameObject cell = Instantiate(tableViewCell);
            cell.transform.SetParent(contentView.transform, false);

            UserTableViewCell tableViewCellScript = cell.GetComponent<UserTableViewCell>();
            tableViewCellScript.StreamTypeInt = streamType;
            tableViewCellScript.UserIdStr = userId;
            tableViewCellScript.IsAudioMute = true;
            tableViewCellScript.IsVideoMute = true;
            tableViewCellScript.AudioVolumeVisible = audioVolumeVisible;
            tableViewCellScript.UserStatisVisible = userStatisVisible;
            tableViewCellScript.DoMuteAudio += new UserTableViewCell.MuteAudioHandler(TableViewDoMuteAudio);
            tableViewCellScript.DoMuteVideo += new UserTableViewCell.MuteVideoHandler(TableViewDoMuteVideo);
            tableViewCellScript.IsVideoAvailable = false;

            userViewCells.Add(key, tableViewCellScript);
        }

        public void RemoveUser(string userId, TRTCVideoStreamType streamType)
        {
            ITRTCCloudImplement.RenderKey key = new ITRTCCloudImplement.RenderKey(userId, streamType);
            if (!userViewCells.ContainsKey(key))
                return;

            GameObject.Destroy(userViewCells[key].gameObject);
            userViewCells.Remove(key);
        }

        public void UpdateVideoAvailable(string userId, TRTCVideoStreamType streamType, bool available)
        {
            ITRTCCloudImplement.RenderKey key = new ITRTCCloudImplement.RenderKey(userId, streamType);
            if (!userViewCells.ContainsKey(key))
                return;

            UserTableViewCell tableViewCellScript = userViewCells[key];
            tableViewCellScript.IsVideoAvailable = available;
            tableViewCellScript.IsVideoMute = !available;
        }

        public void UpdateAudioAvailable(string userId, TRTCVideoStreamType streamType, bool available)
        {
            ITRTCCloudImplement.RenderKey key = new ITRTCCloudImplement.RenderKey(userId, streamType);
            if (!userViewCells.ContainsKey(key))
                return;

            UserTableViewCell tableViewCellScript = userViewCells[key];
            tableViewCellScript.IsAudioMute = !available;
        }

        public void UpdateAudioVolume(string userId, TRTCVideoStreamType streamType, UInt32 volume)
        {
            ITRTCCloudImplement.RenderKey key = new ITRTCCloudImplement.RenderKey(userId, streamType);
            if (!userViewCells.ContainsKey(key))
                return;

            UserTableViewCell tableViewCellScript = userViewCells[key];
            tableViewCellScript.AudioVolume = volume;
        }

        public void UpdateAudioVolumeVisible(bool value)
        {
            audioVolumeVisible = value;

            foreach (UserTableViewCell tableViewCellScript in userViewCells.Values)
            {
                tableViewCellScript.AudioVolumeVisible = value;
            }
        }

        public void UpdateUserStatisVisible(bool value)
        {
            userStatisVisible = value;

            foreach (UserTableViewCell tableViewCellScript in userViewCells.Values)
            {
                tableViewCellScript.UserStatisVisible = value;
            }
        }

        public void updateUserStatistics(string userId, TRTCVideoStreamType streamType, string statisText)
        {
            ITRTCCloudImplement.RenderKey key = new ITRTCCloudImplement.RenderKey(userId, streamType);
            if (!userViewCells.ContainsKey(key))
                return;

            UserTableViewCell tableViewCellScript = userViewCells[key];
            tableViewCellScript.UserStatisText = statisText;
        }

        private void TableViewDoMuteAudio(string userId, bool mute)
        {
            if (DoMuteAudio != null)
            {
                DoMuteAudio(userId, mute);
            }
        }

        private void TableViewDoMuteVideo(string userId, bool mute)
        {
            if (DoMuteVideo != null)
            {
                DoMuteVideo(userId, mute);
            }
        }
    }
}