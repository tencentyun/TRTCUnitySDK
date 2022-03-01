using System.Collections;
using System.IO;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;
using System;
using System.Reflection;

class BuildScript : Editor
{
    public static string projectName
    {
        get
        {
            return "TRTCUnityDemo";
        }
    }

    public static String[] GetBuildScenes()
    {
        List<string> names = new List<String>();
        names.Add("Assets/TRTCSDK/Demo/HomeScene.unity");
        names.Add("Assets/TRTCSDK/Demo/RoomSceme.unity");
        // names.Add("Assets/TRTCSDK/Demo/AudioApiTest.unity");
        return names.ToArray();
    }

    [MenuItem("TRTC Build Configuration Tool/Windowsx64", false, 50)]
    public static void BuildWindowsx64()
    {
        BuildPipeline.BuildPlayer(GetBuildScenes(), "x64\\" + projectName + ".exe", BuildTarget.StandaloneWindows64, BuildOptions.Development);
    }

    [MenuItem("TRTC Build Configuration Tool/Windowsx86", false, 50)]
    public static void BuildWindowsx86()
    {
        BuildPipeline.BuildPlayer(GetBuildScenes(), "x86\\" + projectName + ".exe", BuildTarget.StandaloneWindows, BuildOptions.Development);
    }

    [MenuItem("TRTC Build Configuration Tool/macOS", false, 50)]
    public static void BuildOSXUniversal()
    {
        BuildPipeline.BuildPlayer(GetBuildScenes(), projectName, BuildTarget.StandaloneOSX, BuildOptions.Development);
    }

    [MenuItem("TRTC Build Configuration Tool/Android", false, 50)]
    public static void BuildAndroid()
    {
        BuildPipeline.BuildPlayer(GetBuildScenes(), projectName + ".apk", BuildTarget.Android, BuildOptions.Development);
    }

    [MenuItem("TRTC Build Configuration Tool/IOS", false, 50)]
    public static void BuildIOS()
    {
        BuildPipeline.BuildPlayer(GetBuildScenes(), projectName, BuildTarget.iOS, BuildOptions.Development);
    }
}