using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
#if UNITY_IPHONE
using UnityEditor.iOS.Xcode;
#endif
using System.Text;
using System.IO;
using System.Linq;

public static class IosPostProcess
{

    public static string projectName
    {
        get
        {
            return "TRTCUnityDemo";
        }
    }
    static void UpdatePermission(string plistPath)
    {
        #if UNITY_IPHONE || UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
        UnityEditor.iOS.Xcode.PlistDocument plist = new UnityEditor.iOS.Xcode.PlistDocument();
        plist.ReadFromString(System.IO.File.ReadAllText(plistPath));
        UnityEditor.iOS.Xcode.PlistElementDict rootDict = plist.root;
        rootDict.SetString("NSCameraUsageDescription", "Authorize the camera permission to make normal video calls");
        rootDict.SetString("NSMicrophoneUsageDescription", "Authorize microphone permission to make normal voice calls");
        rootDict.SetBoolean("UIFileSharingEnabled", true);

        UnityEditor.iOS.Xcode.PlistElementArray CFBundleDocumentTypes = rootDict.CreateArray("CFBundleDocumentTypes"); // just for test
        CFBundleDocumentTypes.AddDict().CreateArray("LSItemContentTypes").AddString("public.content");

        System.IO.File.WriteAllText(plistPath, plist.WriteToString());
        #endif
    }

    static string Utf8string(string s)
    {
        UTF8Encoding.UTF8.GetString(UTF8Encoding.UTF8.GetBytes(s));
        return s;
    }

    [PostProcessBuild]
    public static void OnPostProcessBuild(BuildTarget buildTarget, string buildPath)
    {
        if (buildTarget == BuildTarget.iOS)
        {
            UnityEngine.Debug.Log("--ios--start buildPath:"+buildPath);
            #if UNITY_IPHONE
            var projPath = buildPath + "/Unity-Iphone.xcodeproj/project.pbxproj";
            UnityEngine.Debug.Log("projPath:"+projPath);
            var proj = new PBXProject();
            proj.ReadFromFile(projPath);

            var targetGuid = proj.TargetGuidByName(PBXProject.GetUnityTestTargetName());
            proj.SetBuildProperty(targetGuid, "ENABLE_BITCODE", "NO");

            proj.AddBuildProperty(targetGuid, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks $(PROJECT_DIR)/lib/$(CONFIGURATION) $(inherited)");
            proj.AddBuildProperty(targetGuid, "FRAMERWORK_SEARCH_PATHS",
                "$(inherited) $(PROJECT_DIR) $(PROJECT_DIR)/Frameworks");
            proj.AddBuildProperty(targetGuid, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "YES");
            proj.AddBuildProperty(targetGuid, "DYLIB_INSTALL_NAME_BASE", "@rpath");
            proj.AddBuildProperty(targetGuid, "LD_DYLIB_INSTALL_NAME",
                "@executable_path/../Frameworks/$(EXECUTABLE_PATH)");
            proj.AddBuildProperty(targetGuid, "DEFINES_MODULE", "YES");
    
		    proj.AddFrameworkToProject(targetGuid, Utf8string("libc++.tbd"), true);
            proj.AddFrameworkToProject(targetGuid, Utf8string("libresolv.tbd"), true);
            proj.AddFrameworkToProject(targetGuid, Utf8string("Accelerate.framework"), true);
            proj.AddFrameworkToProject(targetGuid, Utf8string("AVFoundation.framework"), true);


            proj.WriteToFile(projPath);
            UpdatePermission(buildPath + "/Info.plist");
            UnityEngine.Debug.Log("--ios-- build complete, please use xcode open 【"+buildPath + "/Unity-Iphone.xcodeproj】to run");
            #endif
        }else if(buildTarget == BuildTarget.StandaloneOSX || 
        buildTarget == BuildTarget.StandaloneOSXIntel || buildTarget == BuildTarget.StandaloneOSXIntel64){
             UnityEngine.Debug.Log("--macos--start:"+buildPath);
             string plistPath = buildPath+".app" + "/Contents/Info.plist"; // straight to a binary
            UpdatePermission(plistPath);
            UnityEngine.Debug.Log("--macos-- build complete, please open 【"+buildPath+".app】to run");
        }
        else if (buildTarget == BuildTarget.Android)
        {
            UnityEngine.Debug.Log("--Android--  build complete, please open 【"+buildPath+"】to run");
        }
        else
        {
            UnityEngine.Debug.Log("--windows-- build complete, please open 【"+buildPath+"】to run");
        }
    }

}