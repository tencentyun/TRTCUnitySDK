#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif







IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
IL2CPP_EXTERN_C const Il2CppMethodPointer g_Il2CppGenericMethodPointers[];
IL2CPP_EXTERN_C const InvokerMethod g_Il2CppInvokerPointers[];
IL2CPP_EXTERN_C const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[];
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_LitJson_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_Mono_Security_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_Configuration_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_Core_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_System_Xml_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_AnimationModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_AudioModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_CoreModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_GameCenterModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_GridModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_IMGUIModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_InputLegacyModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_Physics2DModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_PhysicsModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_SharedInternalsModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_SpriteShapeModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_TextRenderingModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_TilemapModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_UIModule_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_UnityEngine_UI_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_Unity_2D_IK_Runtime_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_mscorlib_CodeGenModule;
IL2CPP_EXTERN_C_CONST Il2CppCodeGenModule g_zlib_net_CodeGenModule;
IL2CPP_EXTERN_C const Il2CppCodeGenModule* g_CodeGenModules[];
const Il2CppCodeGenModule* g_CodeGenModules[27] = 
{
	(&g_AssemblyU2DCSharp_CodeGenModule),
	(&g_LitJson_CodeGenModule),
	(&g_Mono_Security_CodeGenModule),
	(&g_System_CodeGenModule),
	(&g_System_Configuration_CodeGenModule),
	(&g_System_Core_CodeGenModule),
	(&g_System_Xml_CodeGenModule),
	(&g_UnityEngine_AnimationModule_CodeGenModule),
	(&g_UnityEngine_AudioModule_CodeGenModule),
	(&g_UnityEngine_CodeGenModule),
	(&g_UnityEngine_CoreModule_CodeGenModule),
	(&g_UnityEngine_GameCenterModule_CodeGenModule),
	(&g_UnityEngine_GridModule_CodeGenModule),
	(&g_UnityEngine_IMGUIModule_CodeGenModule),
	(&g_UnityEngine_InputLegacyModule_CodeGenModule),
	(&g_UnityEngine_JSONSerializeModule_CodeGenModule),
	(&g_UnityEngine_Physics2DModule_CodeGenModule),
	(&g_UnityEngine_PhysicsModule_CodeGenModule),
	(&g_UnityEngine_SharedInternalsModule_CodeGenModule),
	(&g_UnityEngine_SpriteShapeModule_CodeGenModule),
	(&g_UnityEngine_TextRenderingModule_CodeGenModule),
	(&g_UnityEngine_TilemapModule_CodeGenModule),
	(&g_UnityEngine_UIModule_CodeGenModule),
	(&g_UnityEngine_UI_CodeGenModule),
	(&g_Unity_2D_IK_Runtime_CodeGenModule),
	(&g_mscorlib_CodeGenModule),
	(&g_zlib_net_CodeGenModule),
};
IL2CPP_EXTERN_C const Il2CppCodeRegistration g_CodeRegistration;
const Il2CppCodeRegistration g_CodeRegistration = 
{
	48,
	g_ReversePInvokeWrapperPointers,
	5560,
	g_Il2CppGenericMethodPointers,
	2220,
	g_Il2CppInvokerPointers,
	322,
	g_UnresolvedVirtualMethodPointers,
	248,
	g_Il2CppInteropData,
	0,
	NULL,
	27,
	g_CodeGenModules,
};
IL2CPP_EXTERN_C_CONST Il2CppMetadataRegistration g_MetadataRegistration;
static const Il2CppCodeGenOptions s_Il2CppCodeGenOptions = 
{
	true,
	7,
};
void s_Il2CppCodegenRegistration()
{
	il2cpp_codegen_register (&g_CodeRegistration, &g_MetadataRegistration, &s_Il2CppCodeGenOptions);
	#if IL2CPP_MONO_DEBUGGER
	il2cpp_codegen_register_debugger_data(NULL);
	#endif
}
#if RUNTIME_IL2CPP
typedef void (*CodegenRegistrationFunction)();
CodegenRegistrationFunction g_CodegenRegistration = s_Il2CppCodegenRegistration;
#endif
