#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>
struct List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.U2D.IK.FABRIKChain2D[]
struct FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.U2D.IK.Solver2D[]
struct Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.U2D.IK.CCDSolver2D
struct CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.U2D.IK.FabrikSolver2D
struct FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.U2D.IK.IKChain2D
struct IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F;
// UnityEngine.U2D.IK.IKManager2D
struct IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510;
// UnityEngine.U2D.IK.IKUtility
struct IKUtility_t5432A6816929991EF2E73DC80923184DB10A32F4;
// UnityEngine.U2D.IK.LimbSolver2D
struct LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.U2D.IK.Solver2D
struct Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6;
// UnityEngine.U2D.IK.Solver2DMenuAttribute
struct Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_2D_IK_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233;
IL2CPP_EXTERN_C String_t* _stringLiteral5073C13C2783CC73331A1CD2F89E8E7491DFAF7A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27;
IL2CPP_EXTERN_C String_t* _stringLiteralB41257E5E0C416B372DE6548D39D39CD5B915390;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C const RuntimeMethod* CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_DoPrepare_m493568C24CD5B8759CA47A09627E818616D02C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_DoUpdateIK_m44204DE0B6AA4A1641EB29F41073756C9397487F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_GetChainCount_mB0E03E52A8F303F2C47F5C17CB2E9C27B19C6E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_GetChain_mD8B4C8D95393D7B5CDD8AA123A6DEC702EEE8C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D__ctor_mEC83E99C3BF83ABF9CA118FA3C5D0C8EEC644E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_get_velocity_mA30B419389420DFBBBABFC128DF7AF50494CF910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_set_iterations_m4111E7A59A26ED09B622FF0D683F11D3BB75DA84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_set_tolerance_m90FAB6AA7B69FBF7A831362185C0CD542053C345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CCDSolver2D_set_velocity_mF013ADE8C4F2292ECDFBD020551CA034C3BC063F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_m94867AA44F7B27FAA1795DB215F8C832DF9EE0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSolver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_m16C798614AE57E2DA830AAF2CAFA405FA5B7EDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_SolveChain_mFF40BA2FB827165265AA44E60AAC1936B6CA44E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIK2D_ValidateJoint_m1DF2870F51889EA753C75C88649A3DBE97BB36D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_DoPrepare_m11A596B27A320872CEDF7C50315A446867247759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_DoUpdateIK_mA8967BDE17AE9AF65258E3FC1DD1BD1D0A1C2E4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_GetChainCount_m728A207A0C0763F34DFAF090FEAE10413E9CEF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_GetChain_mFA9D5D7B6590A706BD424278C05C92AFC4DA42D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D__ctor_mCB809B3FE0901BDB09392F9D5BEE5FEFB0CECD4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_set_iterations_m085C999DE4F34E1C4398F7FC01744875D64DD97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FabrikSolver2D_set_tolerance_m85EC38FAE93A27D2A9AFFF745496666B62B5CDBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_set_effector_mDD444E4A1D63081FB879B1C50BB7829CA3FD57D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_set_target_mC4F45D64899E0E609B85F17DA591BACCD5BCDBF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_LateUpdate_m7B22FDC10F0B298F89D2BE620BC7FA26CB52A7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_OnEnable_m858A0B4B94345538EE3F0EA4CAF5058EFF4E14EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_OnValidate_mC5ABBFFA8CFDE1530D605B789E48951EF6F092C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_RemoveSolver_mC4CE591F88DBA76AAB027D1D2BE6EA3EE688530E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_Reset_mA34497CB3DA73360DDF40B246FA5D46D7FE2483D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D__ctor_m002A5C6D45E373738321F8ABBCF9C794F41D3A0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_get_solvers_m35D16ED777FE441C5706DDBA4000CF8506F06893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKManager2D_set_weight_m62E7130274C1CC9C9CED5B07B8C88FA78EF7E9D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKUtility_GetMaxChainCount_m47D63524E83FC27958E44667D87A19DA76EE5C5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKUtility__ctor_m1AD7446D6DFC54EABED89F1A28E617172F8561E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_DoInitialize_m9B227AF3EE7EF95B43440E79EB89066843F9D71B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_DoPrepare_mBE932A922E069AB00BBB1D43D17513D8B418DEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_DoUpdateIK_mA69D30D60865E704661D4BF5FD6DFFFE62A893A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_GetChainCount_m1A66887522C4220AAC6B67C058EAB0777F2F5461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_GetChain_mE667E617107DF15290736582537457D148EA0C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D__ctor_m592941CDC674268A88E60FA51432B9CC67753B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LimbSolver2D_set_flip_m7443E0EE70067423B7E15454739D991CB6BA8D9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA8ADA8666BA41E6EB329B7E4F3E3A41A23FCB103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m44EA024D005005EE4938BE9BE0E9E5C97337166E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mFCC76F5D887C6FE8A803523360E51659BE17C1ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m503270EF64E8E4C3B549B048BE4B30D138997146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2DMenuAttribute__ctor_mED0E68602FAE36A276FEEFEBC56D19579E565D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2DMenuAttribute_get_menuPath_m14306AE406D2C9D583C3C6813CCBAD4708C1086D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_DoPrepare_m3EA5C1FB98720BE063FECEF45CD43F97074362A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_DoValidate_mBE2653329D0E6CB75D6D702D08D5AB15C36DF134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_GetPlaneRootTransform_m68283288A5D143586073C4C6A5F84C32DD256076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_OnEnable_mDCEFAECCB63D067D4BE7C6CBEB72DB240AAF6BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_OnValidate_m4D5F8DC53BF01B6258FCAC1392E847B87DC2D28B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_get_solveFromDefaultPose_m3E70B852F77C1A9ADFE2BC9C7F15278B3EF4389C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_set_constrainRotation_m818E6EB1F86D51E4B3DAED77D2770327EFF2D026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_set_solveFromDefaultPose_mF960A44F143699F4AFABCD915AEC31FBB5FE00C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Solver2D_set_weight_m25C08DD643429FAB1323C054A56D155C0506DCFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;

struct FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFBE0E8DF4D6C3594CE300379B4D8B9122035F720 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>
struct  List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479, ____items_1)); }
	inline Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466* get__items_1() const { return ____items_1; }
	inline Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_StaticFields, ____emptyArray_5)); }
	inline Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Solver2DU5BU5D_t24B7A56258CF56DC069E49A852DDC9A8F7436466* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.U2D.IK.CCD2D
struct  CCD2D_t82258235ABC03D19A07071991914A356C19C1BE3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.U2D.IK.FABRIK2D
struct  FABRIK2D_t3BDEA4B0728B4692A5B64CD6F09E71D3097CE6D7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.U2D.IK.IKChain2D
struct  IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::m_EffectorTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_EffectorTransform_0;
	// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::m_TargetTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_TargetTransform_1;
	// System.Int32 UnityEngine.U2D.IK.IKChain2D::m_TransformCount
	int32_t ___m_TransformCount_2;
	// UnityEngine.Transform[] UnityEngine.U2D.IK.IKChain2D::m_Transforms
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___m_Transforms_3;
	// UnityEngine.Quaternion[] UnityEngine.U2D.IK.IKChain2D::m_DefaultLocalRotations
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___m_DefaultLocalRotations_4;
	// UnityEngine.Quaternion[] UnityEngine.U2D.IK.IKChain2D::m_StoredLocalRotations
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___m_StoredLocalRotations_5;
	// System.Single[] UnityEngine.U2D.IK.IKChain2D::m_Lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Lengths_6;

public:
	inline static int32_t get_offset_of_m_EffectorTransform_0() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_EffectorTransform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_EffectorTransform_0() const { return ___m_EffectorTransform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_EffectorTransform_0() { return &___m_EffectorTransform_0; }
	inline void set_m_EffectorTransform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_EffectorTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EffectorTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetTransform_1() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_TargetTransform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_TargetTransform_1() const { return ___m_TargetTransform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_TargetTransform_1() { return &___m_TargetTransform_1; }
	inline void set_m_TargetTransform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_TargetTransform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetTransform_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransformCount_2() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_TransformCount_2)); }
	inline int32_t get_m_TransformCount_2() const { return ___m_TransformCount_2; }
	inline int32_t* get_address_of_m_TransformCount_2() { return &___m_TransformCount_2; }
	inline void set_m_TransformCount_2(int32_t value)
	{
		___m_TransformCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Transforms_3() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_Transforms_3)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_m_Transforms_3() const { return ___m_Transforms_3; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_m_Transforms_3() { return &___m_Transforms_3; }
	inline void set_m_Transforms_3(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___m_Transforms_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transforms_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultLocalRotations_4() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_DefaultLocalRotations_4)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get_m_DefaultLocalRotations_4() const { return ___m_DefaultLocalRotations_4; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of_m_DefaultLocalRotations_4() { return &___m_DefaultLocalRotations_4; }
	inline void set_m_DefaultLocalRotations_4(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		___m_DefaultLocalRotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultLocalRotations_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoredLocalRotations_5() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_StoredLocalRotations_5)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get_m_StoredLocalRotations_5() const { return ___m_StoredLocalRotations_5; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of_m_StoredLocalRotations_5() { return &___m_StoredLocalRotations_5; }
	inline void set_m_StoredLocalRotations_5(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		___m_StoredLocalRotations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoredLocalRotations_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lengths_6() { return static_cast<int32_t>(offsetof(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F, ___m_Lengths_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Lengths_6() const { return ___m_Lengths_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Lengths_6() { return &___m_Lengths_6; }
	inline void set_m_Lengths_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Lengths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_6), (void*)value);
	}
};


// UnityEngine.U2D.IK.IKUtility
struct  IKUtility_t5432A6816929991EF2E73DC80923184DB10A32F4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.U2D.IK.Limb
struct  Limb_t9C3E65D3FAD0E9DB55CBCAA68A42FB831F681AD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.U2D.IK.Solver2D>
struct  Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538, ___list_0)); }
	inline List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * get_list_0() const { return ___list_0; }
	inline List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538, ___current_3)); }
	inline Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * get_current_3() const { return ___current_3; }
	inline Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.U2D.IK.Solver2DMenuAttribute
struct  Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.U2D.IK.Solver2DMenuAttribute::m_MenuPath
	String_t* ___m_MenuPath_0;

public:
	inline static int32_t get_offset_of_m_MenuPath_0() { return static_cast<int32_t>(offsetof(Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713, ___m_MenuPath_0)); }
	inline String_t* get_m_MenuPath_0() const { return ___m_MenuPath_0; }
	inline String_t** get_address_of_m_MenuPath_0() { return &___m_MenuPath_0; }
	inline void set_m_MenuPath_0(String_t* value)
	{
		___m_MenuPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuPath_0), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.U2D.IK.FABRIKChain2D
struct  FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 
{
public:
	// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIKChain2D::origin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_0;
	// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIKChain2D::target
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target_1;
	// System.Single UnityEngine.U2D.IK.FABRIKChain2D::sqrTolerance
	float ___sqrTolerance_2;
	// UnityEngine.Vector2[] UnityEngine.U2D.IK.FABRIKChain2D::positions
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___positions_3;
	// System.Single[] UnityEngine.U2D.IK.FABRIKChain2D::lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths_4;
	// System.Int32[] UnityEngine.U2D.IK.FABRIKChain2D::subChainIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___subChainIndices_5;
	// UnityEngine.Vector3[] UnityEngine.U2D.IK.FABRIKChain2D::worldPositions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___worldPositions_6;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___origin_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_origin_0() const { return ___origin_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___target_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_target_1() const { return ___target_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___target_1 = value;
	}

	inline static int32_t get_offset_of_sqrTolerance_2() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___sqrTolerance_2)); }
	inline float get_sqrTolerance_2() const { return ___sqrTolerance_2; }
	inline float* get_address_of_sqrTolerance_2() { return &___sqrTolerance_2; }
	inline void set_sqrTolerance_2(float value)
	{
		___sqrTolerance_2 = value;
	}

	inline static int32_t get_offset_of_positions_3() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___positions_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_positions_3() const { return ___positions_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_positions_3() { return &___positions_3; }
	inline void set_positions_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___positions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_3), (void*)value);
	}

	inline static int32_t get_offset_of_lengths_4() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___lengths_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_lengths_4() const { return ___lengths_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_lengths_4() { return &___lengths_4; }
	inline void set_lengths_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___lengths_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengths_4), (void*)value);
	}

	inline static int32_t get_offset_of_subChainIndices_5() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___subChainIndices_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_subChainIndices_5() const { return ___subChainIndices_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_subChainIndices_5() { return &___subChainIndices_5; }
	inline void set_subChainIndices_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___subChainIndices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subChainIndices_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldPositions_6() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59, ___worldPositions_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_worldPositions_6() const { return ___worldPositions_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_worldPositions_6() { return &___worldPositions_6; }
	inline void set_worldPositions_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___worldPositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldPositions_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.U2D.IK.FABRIKChain2D
struct FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target_1;
	float ___sqrTolerance_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___positions_3;
	Il2CppSafeArray/*NONE*/* ___lengths_4;
	Il2CppSafeArray/*NONE*/* ___subChainIndices_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___worldPositions_6;
};
// Native definition for COM marshalling of UnityEngine.U2D.IK.FABRIKChain2D
struct FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target_1;
	float ___sqrTolerance_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___positions_3;
	Il2CppSafeArray/*NONE*/* ___lengths_4;
	Il2CppSafeArray/*NONE*/* ___subChainIndices_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___worldPositions_6;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.U2D.IK.IKManager2D
struct  IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D> UnityEngine.U2D.IK.IKManager2D::m_Solvers
	List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * ___m_Solvers_4;
	// System.Single UnityEngine.U2D.IK.IKManager2D::m_Weight
	float ___m_Weight_5;

public:
	inline static int32_t get_offset_of_m_Solvers_4() { return static_cast<int32_t>(offsetof(IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510, ___m_Solvers_4)); }
	inline List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * get_m_Solvers_4() const { return ___m_Solvers_4; }
	inline List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 ** get_address_of_m_Solvers_4() { return &___m_Solvers_4; }
	inline void set_m_Solvers_4(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * value)
	{
		___m_Solvers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Solvers_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_5() { return static_cast<int32_t>(offsetof(IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510, ___m_Weight_5)); }
	inline float get_m_Weight_5() const { return ___m_Weight_5; }
	inline float* get_address_of_m_Weight_5() { return &___m_Weight_5; }
	inline void set_m_Weight_5(float value)
	{
		___m_Weight_5 = value;
	}
};


// UnityEngine.U2D.IK.Solver2D
struct  Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.U2D.IK.Solver2D::m_ConstrainRotation
	bool ___m_ConstrainRotation_4;
	// System.Boolean UnityEngine.U2D.IK.Solver2D::m_SolveFromDefaultPose
	bool ___m_SolveFromDefaultPose_5;
	// System.Single UnityEngine.U2D.IK.Solver2D::m_Weight
	float ___m_Weight_6;
	// UnityEngine.Plane UnityEngine.U2D.IK.Solver2D::m_Plane
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___m_Plane_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.U2D.IK.Solver2D::m_TargetPositions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_TargetPositions_8;

public:
	inline static int32_t get_offset_of_m_ConstrainRotation_4() { return static_cast<int32_t>(offsetof(Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6, ___m_ConstrainRotation_4)); }
	inline bool get_m_ConstrainRotation_4() const { return ___m_ConstrainRotation_4; }
	inline bool* get_address_of_m_ConstrainRotation_4() { return &___m_ConstrainRotation_4; }
	inline void set_m_ConstrainRotation_4(bool value)
	{
		___m_ConstrainRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_SolveFromDefaultPose_5() { return static_cast<int32_t>(offsetof(Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6, ___m_SolveFromDefaultPose_5)); }
	inline bool get_m_SolveFromDefaultPose_5() const { return ___m_SolveFromDefaultPose_5; }
	inline bool* get_address_of_m_SolveFromDefaultPose_5() { return &___m_SolveFromDefaultPose_5; }
	inline void set_m_SolveFromDefaultPose_5(bool value)
	{
		___m_SolveFromDefaultPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Weight_6() { return static_cast<int32_t>(offsetof(Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6, ___m_Weight_6)); }
	inline float get_m_Weight_6() const { return ___m_Weight_6; }
	inline float* get_address_of_m_Weight_6() { return &___m_Weight_6; }
	inline void set_m_Weight_6(float value)
	{
		___m_Weight_6 = value;
	}

	inline static int32_t get_offset_of_m_Plane_7() { return static_cast<int32_t>(offsetof(Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6, ___m_Plane_7)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_m_Plane_7() const { return ___m_Plane_7; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_m_Plane_7() { return &___m_Plane_7; }
	inline void set_m_Plane_7(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___m_Plane_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetPositions_8() { return static_cast<int32_t>(offsetof(Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6, ___m_TargetPositions_8)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_TargetPositions_8() const { return ___m_TargetPositions_8; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_TargetPositions_8() { return &___m_TargetPositions_8; }
	inline void set_m_TargetPositions_8(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_TargetPositions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetPositions_8), (void*)value);
	}
};


// UnityEngine.U2D.IK.CCDSolver2D
struct  CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE  : public Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6
{
public:
	// UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.CCDSolver2D::m_Chain
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * ___m_Chain_13;
	// System.Int32 UnityEngine.U2D.IK.CCDSolver2D::m_Iterations
	int32_t ___m_Iterations_14;
	// System.Single UnityEngine.U2D.IK.CCDSolver2D::m_Tolerance
	float ___m_Tolerance_15;
	// System.Single UnityEngine.U2D.IK.CCDSolver2D::m_Velocity
	float ___m_Velocity_16;
	// UnityEngine.Vector3[] UnityEngine.U2D.IK.CCDSolver2D::m_Positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Positions_17;

public:
	inline static int32_t get_offset_of_m_Chain_13() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE, ___m_Chain_13)); }
	inline IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * get_m_Chain_13() const { return ___m_Chain_13; }
	inline IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F ** get_address_of_m_Chain_13() { return &___m_Chain_13; }
	inline void set_m_Chain_13(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * value)
	{
		___m_Chain_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Iterations_14() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE, ___m_Iterations_14)); }
	inline int32_t get_m_Iterations_14() const { return ___m_Iterations_14; }
	inline int32_t* get_address_of_m_Iterations_14() { return &___m_Iterations_14; }
	inline void set_m_Iterations_14(int32_t value)
	{
		___m_Iterations_14 = value;
	}

	inline static int32_t get_offset_of_m_Tolerance_15() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE, ___m_Tolerance_15)); }
	inline float get_m_Tolerance_15() const { return ___m_Tolerance_15; }
	inline float* get_address_of_m_Tolerance_15() { return &___m_Tolerance_15; }
	inline void set_m_Tolerance_15(float value)
	{
		___m_Tolerance_15 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_16() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE, ___m_Velocity_16)); }
	inline float get_m_Velocity_16() const { return ___m_Velocity_16; }
	inline float* get_address_of_m_Velocity_16() { return &___m_Velocity_16; }
	inline void set_m_Velocity_16(float value)
	{
		___m_Velocity_16 = value;
	}

	inline static int32_t get_offset_of_m_Positions_17() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE, ___m_Positions_17)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Positions_17() const { return ___m_Positions_17; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Positions_17() { return &___m_Positions_17; }
	inline void set_m_Positions_17(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Positions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_17), (void*)value);
	}
};


// UnityEngine.U2D.IK.FabrikSolver2D
struct  FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC  : public Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6
{
public:
	// UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.FabrikSolver2D::m_Chain
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * ___m_Chain_11;
	// System.Int32 UnityEngine.U2D.IK.FabrikSolver2D::m_Iterations
	int32_t ___m_Iterations_12;
	// System.Single UnityEngine.U2D.IK.FabrikSolver2D::m_Tolerance
	float ___m_Tolerance_13;
	// System.Single[] UnityEngine.U2D.IK.FabrikSolver2D::m_Lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Lengths_14;
	// UnityEngine.Vector2[] UnityEngine.U2D.IK.FabrikSolver2D::m_Positions
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_Positions_15;
	// UnityEngine.Vector3[] UnityEngine.U2D.IK.FabrikSolver2D::m_WorldPositions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_WorldPositions_16;

public:
	inline static int32_t get_offset_of_m_Chain_11() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC, ___m_Chain_11)); }
	inline IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * get_m_Chain_11() const { return ___m_Chain_11; }
	inline IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F ** get_address_of_m_Chain_11() { return &___m_Chain_11; }
	inline void set_m_Chain_11(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * value)
	{
		___m_Chain_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Iterations_12() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC, ___m_Iterations_12)); }
	inline int32_t get_m_Iterations_12() const { return ___m_Iterations_12; }
	inline int32_t* get_address_of_m_Iterations_12() { return &___m_Iterations_12; }
	inline void set_m_Iterations_12(int32_t value)
	{
		___m_Iterations_12 = value;
	}

	inline static int32_t get_offset_of_m_Tolerance_13() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC, ___m_Tolerance_13)); }
	inline float get_m_Tolerance_13() const { return ___m_Tolerance_13; }
	inline float* get_address_of_m_Tolerance_13() { return &___m_Tolerance_13; }
	inline void set_m_Tolerance_13(float value)
	{
		___m_Tolerance_13 = value;
	}

	inline static int32_t get_offset_of_m_Lengths_14() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC, ___m_Lengths_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Lengths_14() const { return ___m_Lengths_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Lengths_14() { return &___m_Lengths_14; }
	inline void set_m_Lengths_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Lengths_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Positions_15() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC, ___m_Positions_15)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_Positions_15() const { return ___m_Positions_15; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_Positions_15() { return &___m_Positions_15; }
	inline void set_m_Positions_15(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_Positions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_WorldPositions_16() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC, ___m_WorldPositions_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_WorldPositions_16() const { return ___m_WorldPositions_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_WorldPositions_16() { return &___m_WorldPositions_16; }
	inline void set_m_WorldPositions_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_WorldPositions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldPositions_16), (void*)value);
	}
};


// UnityEngine.U2D.IK.LimbSolver2D
struct  LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611  : public Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6
{
public:
	// UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.LimbSolver2D::m_Chain
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * ___m_Chain_9;
	// System.Boolean UnityEngine.U2D.IK.LimbSolver2D::m_Flip
	bool ___m_Flip_10;
	// UnityEngine.Vector3[] UnityEngine.U2D.IK.LimbSolver2D::m_Positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Positions_11;
	// System.Single[] UnityEngine.U2D.IK.LimbSolver2D::m_Lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Lengths_12;
	// System.Single[] UnityEngine.U2D.IK.LimbSolver2D::m_Angles
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Angles_13;

public:
	inline static int32_t get_offset_of_m_Chain_9() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611, ___m_Chain_9)); }
	inline IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * get_m_Chain_9() const { return ___m_Chain_9; }
	inline IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F ** get_address_of_m_Chain_9() { return &___m_Chain_9; }
	inline void set_m_Chain_9(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * value)
	{
		___m_Chain_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flip_10() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611, ___m_Flip_10)); }
	inline bool get_m_Flip_10() const { return ___m_Flip_10; }
	inline bool* get_address_of_m_Flip_10() { return &___m_Flip_10; }
	inline void set_m_Flip_10(bool value)
	{
		___m_Flip_10 = value;
	}

	inline static int32_t get_offset_of_m_Positions_11() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611, ___m_Positions_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Positions_11() const { return ___m_Positions_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Positions_11() { return &___m_Positions_11; }
	inline void set_m_Positions_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Positions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lengths_12() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611, ___m_Lengths_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Lengths_12() const { return ___m_Lengths_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Lengths_12() { return &___m_Lengths_12; }
	inline void set_m_Lengths_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Lengths_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Angles_13() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611, ___m_Angles_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Angles_13() const { return ___m_Angles_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Angles_13() { return &___m_Angles_13; }
	inline void set_m_Angles_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Angles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Angles_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.U2D.IK.FABRIKChain2D[]
struct FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  m_Items[1];

public:
	inline FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___positions_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lengths_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subChainIndices_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___worldPositions_6), (void*)NULL);
		#endif
	}
	inline FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___positions_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lengths_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subChainIndices_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___worldPositions_6), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  m_Items[1];

public:
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.CCD2D::DoIteration(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___last2, float ___velocity3, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.U2D.IK.CCD2D::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pivot1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.U2D.IK.IKChain2D::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// UnityEngine.Transform[] UnityEngine.U2D.IK.IKChain2D::get_transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::BeginSample(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline (String_t* ___name0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.U2D.IK.CCDSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.U2D.IK.CCDSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.CCD2D::Solve(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___solverLimit2, float ___tolerance3, float ___velocity4, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::EndSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_EndSample_m78C76E709113E225D47687E26EA320E4FC548B71 (const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.FABRIK2D::Forward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.FABRIK2D::Backward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::ValidateChain(UnityEngine.U2D.IK.FABRIKChain2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43 (FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* ___chains0, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.FABRIK2D::SolveForwardsChain(System.Int32,UnityEngine.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727 (int32_t ___idx0, FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** ___chains1, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::SolveBackwardsChain(System.Int32,UnityEngine.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE (int32_t ___idx0, FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** ___chains1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIKChain2D::get_last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546 (FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIKChain2D::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A (FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.U2D.IK.Solver2D::GetPointOnSolverPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Int32 UnityEngine.U2D.IK.FabrikSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8 (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.U2D.IK.FabrikSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2 (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::Solve(UnityEngine.Vector2,System.Int32,System.Single,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, int32_t ___solverLimit1, float ___tolerance2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths3, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.U2D.IK.Solver2D::GetWorldPositionFromSolverPlanePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___planePoint0, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.IKChain2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.IKChain2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::PrepareLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_effector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_rootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_lastTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.IKUtility::IsDescendentOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ancestor1, const RuntimeMethod* method);
// System.Int32 UnityEngine.U2D.IK.IKUtility::GetAncestorCount(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKManager2D::OnEditorDataValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKManager2D::FindChildSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>::Clear()
inline void List_1_Clear_m44EA024D005005EE4938BE9BE0E9E5C97337166E (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>::.ctor()
inline void List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706 (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.U2D.IK.Solver2D>(System.Boolean,System.Collections.Generic.List`1<!!0>)
inline void Component_GetComponentsInChildren_TisSolver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_m16C798614AE57E2DA830AAF2CAFA405FA5B7EDA2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * ___result1, const RuntimeMethod* method)
{
	((  void (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared)(__this, ___includeInactive0, ___result1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>::GetEnumerator()
inline Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538  List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72 (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538  (*) (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.U2D.IK.Solver2D>::get_Current()
inline Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_inline (Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 * __this, const RuntimeMethod* method)
{
	return ((  Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * (*) (Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.U2D.IK.IKManager2D>()
inline IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * Component_GetComponentInParent_TisIKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_m94867AA44F7B27FAA1795DB215F8C832DF9EE0D5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void UnityEngine.U2D.IK.IKManager2D::AddSolver(UnityEngine.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___solver0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.U2D.IK.Solver2D>::MoveNext()
inline bool Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05 (Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.U2D.IK.Solver2D>::Dispose()
inline void Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896 (Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>::Contains(!0)
inline bool List_1_Contains_mFCC76F5D887C6FE8A803523360E51659BE17C1ED (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>::Add(!0)
inline void List_1_Add_mA8ADA8666BA41E6EB329B7E4F3E3A41A23FCB103 (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.U2D.IK.IKManager2D::AddSolverEditorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKManager2D::RemoveSolverEditorData(UnityEngine.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___solver0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D>::Remove(!0)
inline bool List_1_Remove_m503270EF64E8E4C3B549B048BE4B30D138997146 (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.U2D.IK.IKManager2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::UpdateIK(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, float ___globalWeight0, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKManager2D::UpdateManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::set_transformCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Single[] UnityEngine.U2D.IK.IKChain2D::get_lengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.Limb::Solve(UnityEngine.Vector3,System.Single[],UnityEngine.Vector3[],System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___outAngles3, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.LimbSolver2D::get_flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707 (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.Solver2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.Solver2D::HasTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::set_normal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_normal_m4F84FE27CD58E2B3EE27DB108576B570EF8AE723 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::set_distance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_distance_m7B427E5F6F6D1DD44C96A503980F4627CDD4A59A (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_constrainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::RestoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, bool ___targetRotationIsConstrained0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_allChainsHaveTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::PrepareEffectorPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::UpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions0, float ___globalWeight1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.U2D.IK.Solver2D::get_chainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.U2D.IK.Solver2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.Solver2D::BlendFkToIk(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, float ___finalWeight0, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.IK.IKChain2D::BlendFkToIk(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, float ___finalWeight0, bool ___targetRotationIsConstrained1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::ValidateArguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_inline (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::BeginSampleImpl(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_BeginSampleImpl_mF1EE2C3EB23D01B3F9A25C43C8BC82BFC4F3B5A0 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___targetObject1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.IK.CCD2D::Solve(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___solverLimit2, float ___tolerance3, float ___velocity4, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetPosition0), (&___forward1), (&___solverLimit2), (&___tolerance3), (&___velocity4), (&___positions5));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1127));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1128));
		// int last = positions.Length - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1129));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_0 = ___positions5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		// int iterations = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1130));
		V_1 = 0;
		// float sqrTolerance = tolerance * tolerance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1131));
		float L_2 = ___tolerance3;
		float L_3 = ___tolerance3;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// float sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1132));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_5 = ___positions5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1145));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1145));
		V_4 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1146));
		float L_11;
		L_11 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1146));
		V_3 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1133));
		goto IL_0065;
	}

IL_002a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1134));
		// DoIteration(targetPosition, forward, last, velocity, ref positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1135));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___targetPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___forward1;
		int32_t L_14 = V_0;
		float L_15 = ___velocity4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_16 = ___positions5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1147));
		CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423(L_12, L_13, L_14, L_15, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1147));
		// sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1136));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_18 = ___positions5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_18);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1148));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1148));
		V_4 = L_23;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1149));
		float L_24;
		L_24 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1149));
		V_3 = L_24;
		// if (++iterations >= solverLimit)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1137));
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		V_1 = L_26;
		int32_t L_27 = ___solverLimit2;
		V_5 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1138));
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_0064;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1139));
		goto IL_006f;
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1140));
	}

IL_0065:
	{
		// while (sqrDistanceToTarget > sqrTolerance)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1141));
		float L_29 = V_3;
		float L_30 = V_2;
		V_6 = (bool)((((float)L_29) > ((float)L_30))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1142));
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_002a;
		}
	}

IL_006f:
	{
		// return iterations != 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1143));
		int32_t L_32 = V_1;
		V_7 = (bool)((!(((uint32_t)L_32) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0077;
	}

IL_0077:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1144));
		bool L_33 = V_7;
		return L_33;
	}
}
// System.Void UnityEngine.U2D.IK.CCD2D::DoIteration(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___last2, float ___velocity3, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423_RuntimeMethod_var);
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetPosition0), (&___forward1), (&___last2), (&___velocity3), (&___positions4));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCD2D_DoIteration_m7D1A6F51429A7FE777156C1BA76EE30C65610423_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1151));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1152));
		// for (int i = last - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1153));
		int32_t L_0 = ___last2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1154));
		goto IL_0091;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1155));
		// Vector3 toTarget = targetPosition - positions[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1156));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_2 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_2);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1172));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1172));
		V_1 = L_7;
		// Vector3 toLast = positions[last] - positions[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1157));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_8 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_8);
		int32_t L_10 = ___last2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_13 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_13);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1173));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1173));
		V_2 = L_18;
		// float angle = Vector3.SignedAngle(toLast, toTarget, forward);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1158));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___forward1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1174));
		float L_22;
		L_22 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_19, L_20, L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1174));
		V_3 = L_22;
		// angle = Mathf.Lerp(0f, angle, velocity);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1159));
		float L_23 = V_3;
		float L_24 = ___velocity3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1175));
		float L_25;
		L_25 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), L_23, L_24, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1175));
		V_3 = L_25;
		// Quaternion deltaRotation = Quaternion.AngleAxis(angle, forward);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1160));
		float L_26 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___forward1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1176));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_26, L_27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1176));
		V_4 = L_28;
		// for (int j = last; j > i; --j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1161));
		int32_t L_29 = ___last2;
		V_5 = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1162));
		goto IL_0081;
	}

IL_0057:
	{
		// positions[j] = RotatePositionFrom(positions[j], positions[i], deltaRotation);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1163));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_30 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_31 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_30);
		int32_t L_32 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_33 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_34 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_33);
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_38 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_39 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_38);
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1177));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4(L_37, L_42, L_43, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1177));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_44);
		// for (int j = last; j > i; --j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1164));
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1));
	}

IL_0081:
	{
		// for (int j = last; j > i; --j)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1165));
		int32_t L_46 = V_5;
		int32_t L_47 = V_0;
		V_6 = (bool)((((int32_t)L_46) > ((int32_t)L_47))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1166));
		bool L_48 = V_6;
		if (L_48)
		{
			goto IL_0057;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1167));
		// for (int i = last - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1168));
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = last - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1169));
		int32_t L_50 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1170));
		bool L_51 = V_7;
		if (L_51)
		{
			goto IL_000a;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1171));
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.U2D.IK.CCD2D::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pivot1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___position0), (&___pivot1), (&___rotation2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCD2D_RotatePositionFrom_m4F421FBEBD89BFE0EF6321CF3996E6DAE1F209C4_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1178));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1179));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1180));
		// Vector3 v = position - pivot;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1181));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pivot1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1185));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1185));
		V_0 = L_2;
		// v = rotation * v;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1182));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1186));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_3, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1186));
		V_0 = L_5;
		// return pivot + v;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1183));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___pivot1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1187));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1187));
		V_1 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1184));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.U2D.IK.CCDSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 2));
		// get { return m_Iterations; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 3));
		int32_t L_0 = __this->get_m_Iterations_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Iterations; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 4));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.CCDSolver2D::set_iterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_iterations_m4111E7A59A26ED09B622FF0D683F11D3BB75DA84 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_set_iterations_m4111E7A59A26ED09B622FF0D683F11D3BB75DA84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_set_iterations_m4111E7A59A26ED09B622FF0D683F11D3BB75DA84_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_set_iterations_m4111E7A59A26ED09B622FF0D683F11D3BB75DA84_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 5));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 6));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 7));
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 8));
		int32_t L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 10));
		int32_t L_1;
		L_1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_0, 1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 10));
		__this->set_m_Iterations_14(L_1);
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 9));
		return;
	}
}
// System.Single UnityEngine.U2D.IK.CCDSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D_RuntimeMethod_var);
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 11));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 12));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 13));
		// get { return m_Tolerance; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 14));
		float L_0 = __this->get_m_Tolerance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Tolerance; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 15));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.CCDSolver2D::set_tolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_tolerance_m90FAB6AA7B69FBF7A831362185C0CD542053C345 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_set_tolerance_m90FAB6AA7B69FBF7A831362185C0CD542053C345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_set_tolerance_m90FAB6AA7B69FBF7A831362185C0CD542053C345_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_set_tolerance_m90FAB6AA7B69FBF7A831362185C0CD542053C345_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 16));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 17));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 18));
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 19));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 21));
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.00100000005f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 21));
		__this->set_m_Tolerance_15(L_1);
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 20));
		return;
	}
}
// System.Single UnityEngine.U2D.IK.CCDSolver2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_velocity_mA30B419389420DFBBBABFC128DF7AF50494CF910 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_get_velocity_mA30B419389420DFBBBABFC128DF7AF50494CF910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_get_velocity_mA30B419389420DFBBBABFC128DF7AF50494CF910_RuntimeMethod_var);
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_get_velocity_mA30B419389420DFBBBABFC128DF7AF50494CF910_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 22));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 23));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 24));
		// get { return m_Velocity; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 25));
		float L_0 = __this->get_m_Velocity_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Velocity; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 26));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.CCDSolver2D::set_velocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_velocity_mF013ADE8C4F2292ECDFBD020551CA034C3BC063F (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_set_velocity_mF013ADE8C4F2292ECDFBD020551CA034C3BC063F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_set_velocity_mF013ADE8C4F2292ECDFBD020551CA034C3BC063F_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_set_velocity_mF013ADE8C4F2292ECDFBD020551CA034C3BC063F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 28));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 29));
		// set { m_Velocity = Mathf.Clamp01(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 30));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 32));
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 32));
		__this->set_m_Velocity_16(L_1);
		// set { m_Velocity = Mathf.Clamp01(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 31));
		return;
	}
}
// System.Int32 UnityEngine.U2D.IK.CCDSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_GetChainCount_mB0E03E52A8F303F2C47F5C17CB2E9C27B19C6E83 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_GetChainCount_mB0E03E52A8F303F2C47F5C17CB2E9C27B19C6E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_GetChainCount_mB0E03E52A8F303F2C47F5C17CB2E9C27B19C6E83_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_GetChainCount_mB0E03E52A8F303F2C47F5C17CB2E9C27B19C6E83_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 34));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 35));
		// return 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 36));
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 37));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.CCDSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * CCDSolver2D_GetChain_mD8B4C8D95393D7B5CDD8AA123A6DEC702EEE8C36 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_GetChain_mD8B4C8D95393D7B5CDD8AA123A6DEC702EEE8C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_GetChain_mD8B4C8D95393D7B5CDD8AA123A6DEC702EEE8C36_RuntimeMethod_var);
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_GetChain_mD8B4C8D95393D7B5CDD8AA123A6DEC702EEE8C36_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 38));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 39));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 40));
		// return m_Chain;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 41));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = __this->get_m_Chain_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 42));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.CCDSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_DoPrepare_m493568C24CD5B8759CA47A09627E818616D02C1E (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_DoPrepare_m493568C24CD5B8759CA47A09627E818616D02C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_DoPrepare_m493568C24CD5B8759CA47A09627E818616D02C1E_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_DoPrepare_m493568C24CD5B8759CA47A09627E818616D02C1E_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 43));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 44));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 45));
		// if (m_Positions == null || m_Positions.Length != m_Chain.transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 46));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_m_Positions_17();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_m_Positions_17();
		NullCheck(L_1);
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 56));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 56));
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 47));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// m_Positions = new Vector3[m_Chain.transformCount];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 48));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_5 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 57));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 57));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_m_Positions_17(L_7);
	}

IL_003e:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 49));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 50));
		goto IL_0064;
	}

IL_0042:
	{
		// m_Positions[i] = m_Chain.transforms[i].position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 51));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_m_Positions_17();
		int32_t L_9 = V_1;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_10 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 58));
		NullCheck(L_10);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11;
		L_11 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 58));
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 59));
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 59));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_15);
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 52));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 53));
		int32_t L_17 = V_1;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_18 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 60));
		NullCheck(L_18);
		int32_t L_19;
		L_19 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 60));
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 54));
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_0042;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 55));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.CCDSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_DoUpdateIK_m44204DE0B6AA4A1641EB29F41073756C9397487F (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_DoUpdateIK_m44204DE0B6AA4A1641EB29F41073756C9397487F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5073C13C2783CC73331A1CD2F89E8E7491DFAF7A);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D_DoUpdateIK_m44204DE0B6AA4A1641EB29F41073756C9397487F_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___effectorPositions0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D_DoUpdateIK_m44204DE0B6AA4A1641EB29F41073756C9397487F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 61));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 62));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 63));
		// Profiler.BeginSample("CCDSolver2D.DoUpdateIK");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 64));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 84));
		Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline(_stringLiteral5073C13C2783CC73331A1CD2F89E8E7491DFAF7A, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 84));
		// Vector3 effectorPosition = effectorPositions[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 65));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___effectorPositions0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 85));
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 85));
		V_0 = L_1;
		// Vector2 effectorLocalPosition2D = m_Chain.transforms[0].InverseTransformPoint(effectorPosition);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 66));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 86));
		NullCheck(L_2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3;
		L_3 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 86));
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 87));
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_5, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 87));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 88));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 88));
		V_1 = L_8;
		// effectorPosition = m_Chain.transforms[0].TransformPoint(effectorLocalPosition2D);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 67));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_9 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 89));
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10;
		L_10 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 89));
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 90));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 90));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 91));
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_12, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 91));
		V_0 = L_15;
		// if (CCD2D.Solve(effectorPosition, GetPlaneRootTransform().forward, iterations, tolerance, Mathf.Lerp(kMinVelocity, kMaxVelocity, m_Velocity), ref m_Positions))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 68));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 92));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 92));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 93));
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 93));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 94));
		int32_t L_19;
		L_19 = CCDSolver2D_get_iterations_m865B9C229A4C0D7B8B7A132C651258A56EDAEE28(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 94));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 95));
		float L_20;
		L_20 = CCDSolver2D_get_tolerance_mD1B0EDE706703F601BD0A0C4DF6C892075283C2D(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 95));
		float L_21 = __this->get_m_Velocity_16();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 96));
		float L_22;
		L_22 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.00999999978f), (1.0f), L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 96));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_23 = __this->get_address_of_m_Positions_17();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 97));
		bool L_24;
		L_24 = CCD2D_Solve_m7C131A12642533B8C236B2A3FF1F40EE67E9B1E5(L_16, L_18, L_19, L_20, L_22, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_23, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 97));
		V_2 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 69));
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0106;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 70));
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 71));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 72));
		goto IL_00ef;
	}

IL_008a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 73));
		// Vector3 startLocalPosition = m_Chain.transforms[i + 1].localPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 74));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_26 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 98));
		NullCheck(L_26);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_27;
		L_27 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 98));
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 99));
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_30, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 99));
		V_4 = L_31;
		// Vector3 endLocalPosition = m_Chain.transforms[i].InverseTransformPoint(m_Positions[i + 1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 75));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_32 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 100));
		NullCheck(L_32);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_33;
		L_33 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_32, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 100));
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_37 = __this->get_m_Positions_17();
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 101));
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_36, L_40, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 101));
		V_5 = L_41;
		// m_Chain.transforms[i].localRotation *= Quaternion.FromToRotation(startLocalPosition, endLocalPosition);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 76));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_42 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 102));
		NullCheck(L_42);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_43;
		L_43 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_42, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 102));
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = L_46;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 103));
		NullCheck(L_47);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
		L_48 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_47, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 103));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 104));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_49, L_50, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 104));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 105));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52;
		L_52 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_48, L_51, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 105));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 106));
		NullCheck(L_47);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_47, L_52, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 106));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 77));
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 78));
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00ef:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 79));
		int32_t L_54 = V_3;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_55 = __this->get_m_Chain_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 107));
		NullCheck(L_55);
		int32_t L_56;
		L_56 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_55, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 107));
		V_6 = (bool)((((int32_t)L_54) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 80));
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 81));
	}

IL_0106:
	{
		// Profiler.EndSample();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 82));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 108));
		Profiler_EndSample_m78C76E709113E225D47687E26EA320E4FC548B71(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 108));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 83));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.CCDSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D__ctor_mEC83E99C3BF83ABF9CA118FA3C5D0C8EEC644E06 (CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D__ctor_mEC83E99C3BF83ABF9CA118FA3C5D0C8EEC644E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CCDSolver2D_t6A0F493058D78FED67126D42F5A1A423298284BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(CCDSolver2D__ctor_mEC83E99C3BF83ABF9CA118FA3C5D0C8EEC644E06_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CCDSolver2D__ctor_mEC83E99C3BF83ABF9CA118FA3C5D0C8EEC644E06_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 110));
	{
		// private IKChain2D m_Chain = new IKChain2D();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 111));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 115));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *)il2cpp_codegen_object_new(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var);
		IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 115));
		__this->set_m_Chain_13(L_0);
		// private int m_Iterations = 10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 112));
		__this->set_m_Iterations_14(((int32_t)10));
		// private float m_Tolerance = 0.01f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 113));
		__this->set_m_Tolerance_15((0.00999999978f));
		// private float m_Velocity = 0.5f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 114));
		__this->set_m_Velocity_16((0.5f));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 116));
		Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 116));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::Solve(UnityEngine.Vector2,System.Int32,System.Single,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, int32_t ___solverLimit1, float ___tolerance2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths3, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetPosition0), (&___solverLimit1), (&___tolerance2), (&___lengths3), (&___positions4));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1199));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1200));
		// int last = positions.Length - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1201));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_0 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		// int iterations = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1202));
		V_1 = 0;
		// float sqrTolerance = tolerance * tolerance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1203));
		float L_2 = ___tolerance2;
		float L_3 = ___tolerance2;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// float sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1204));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___targetPosition0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_5 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1219));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_4, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1219));
		V_5 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1220));
		float L_11;
		L_11 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1220));
		V_3 = L_11;
		// Vector2 originPosition = positions[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1205));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_12 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_12);
		NullCheck(L_13);
		int32_t L_14 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1206));
		goto IL_0078;
	}

IL_0035:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1207));
		// Forward(targetPosition, lengths, ref positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1208));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___targetPosition0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = ___lengths3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_18 = ___positions4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1221));
		FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12(L_16, L_17, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1221));
		// Backward(originPosition, lengths, ref positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1209));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = ___lengths3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_21 = ___positions4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1222));
		FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF(L_19, L_20, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1222));
		// sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1210));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = ___targetPosition0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_23 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_23);
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1223));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_22, L_27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1223));
		V_5 = L_28;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1224));
		float L_29;
		L_29 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1224));
		V_3 = L_29;
		// if (++iterations >= solverLimit)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1211));
		int32_t L_30 = V_1;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		V_1 = L_31;
		int32_t L_32 = ___solverLimit1;
		V_6 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1212));
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_0077;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1213));
		goto IL_0082;
	}

IL_0077:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1214));
	}

IL_0078:
	{
		// while (sqrDistanceToTarget > sqrTolerance)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1215));
		float L_34 = V_3;
		float L_35 = V_2;
		V_7 = (bool)((((float)L_34) > ((float)L_35))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1216));
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0035;
		}
	}

IL_0082:
	{
		// return iterations != 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1217));
		int32_t L_37 = V_1;
		V_8 = (bool)((!(((uint32_t)L_37) <= ((uint32_t)0)))? 1 : 0);
		goto IL_008a;
	}

IL_008a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1218));
		bool L_38 = V_8;
		return L_38;
	}
}
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::SolveChain(System.Int32,UnityEngine.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveChain_mFF40BA2FB827165265AA44E60AAC1936B6CA44E9 (int32_t ___solverLimit0, FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_SolveChain_mFF40BA2FB827165265AA44E60AAC1936B6CA44E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_SolveChain_mFF40BA2FB827165265AA44E60AAC1936B6CA44E9_RuntimeMethod_var);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___solverLimit0), (&___chains1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_SolveChain_mFF40BA2FB827165265AA44E60AAC1936B6CA44E9_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1225));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1226));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1227));
		// if (ValidateChain(chains))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1228));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_1 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1244));
		bool L_2;
		L_2 = FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1244));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1229));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1230));
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0010:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1231));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1232));
		goto IL_0032;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1233));
		// SolveForwardsChain(0, ref chains);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1234));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_4 = ___chains1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1245));
		FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727(0, (FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1245));
		// if (!SolveBackwardsChain(0, ref chains))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1235));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_5 = ___chains1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1246));
		bool L_6;
		L_6 = FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE(0, (FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1246));
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1236));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1237));
		goto IL_003c;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1238));
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1239));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1240));
		int32_t L_9 = V_2;
		int32_t L_10 = ___solverLimit0;
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1241));
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0014;
		}
	}

IL_003c:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1242));
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1243));
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::ValidateChain(UnityEngine.U2D.IK.FABRIKChain2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43 (FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* ___chains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43_RuntimeMethod_var);
	FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* V_0 = NULL;
	int32_t V_1 = 0;
	FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___chains0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_ValidateChain_m20D50DF3E6116AD920EA0D77BA5CA8E7464B9F43_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1247));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1248));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1249));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1250));
		// foreach (var chain in chains)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1251));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_0 = ___chains0;
		V_0 = L_0;
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1252));
		goto IL_004e;
	}

IL_0008:
	{
		// foreach (var chain in chains)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1253));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1254));
		// if (chain.subChainIndices.Length == 0 && (chain.target - chain.last).sqrMagnitude > chain.sqrTolerance)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1255));
		FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  L_5 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5.get_subChainIndices_5();
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_003f;
		}
	}
	{
		FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  L_7 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = L_7.get_target_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1263));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546((FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 *)(&V_2), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1263));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1264));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_8, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1264));
		V_4 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1265));
		float L_11;
		L_11 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1265));
		FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59  L_12 = V_2;
		float L_13 = L_12.get_sqrTolerance_2();
		G_B4_0 = ((((float)L_11) > ((float)L_13))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B4_0 = 0;
	}

IL_0040:
	{
		V_3 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1256));
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1257));
		V_5 = (bool)0;
		goto IL_0059;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1258));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1259));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004e:
	{
		// foreach (var chain in chains)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1260));
		int32_t L_16 = V_1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1261));
		V_5 = (bool)1;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1262));
		bool L_18 = V_5;
		return L_18;
	}
}
// System.Void UnityEngine.U2D.IK.FABRIK2D::SolveForwardsChain(System.Int32,UnityEngine.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727 (int32_t ___idx0, FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727_RuntimeMethod_var);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___idx0), (&___chains1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1266));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1267));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1268));
		// var target = chains[idx].target;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1269));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_1 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_0);
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_target_1();
		V_0 = L_3;
		// if (chains[idx].subChainIndices.Length > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1270));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_4 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_5 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_4);
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_subChainIndices_5();
		NullCheck(L_7);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_7)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1271));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1272));
		// target = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1273));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1288));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1288));
		V_0 = L_9;
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1274));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1275));
		goto IL_0061;
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1276));
		// var childIdx = chains[idx].subChainIndices[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1277));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_10 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_11 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_10);
		int32_t L_12 = ___idx0;
		NullCheck(L_11);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_subChainIndices_5();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		// SolveForwardsChain(childIdx, ref chains);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1278));
		int32_t L_17 = V_3;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_18 = ___chains1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1289));
		FABRIK2D_SolveForwardsChain_m5FE322F4779E9476181D5F20C59CC68FAAED7727(L_17, (FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1289));
		// target += chains[childIdx].first;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1279));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_20 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_21 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_20);
		int32_t L_22 = V_3;
		NullCheck(L_21);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1290));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A((FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1290));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1291));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_19, L_23, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1291));
		V_0 = L_24;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1280));
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1281));
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1282));
		int32_t L_26 = V_2;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_27 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_28 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_27);
		int32_t L_29 = ___idx0;
		NullCheck(L_28);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->get_subChainIndices_5();
		NullCheck(L_30);
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1283));
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_002f;
		}
	}
	{
		// target = target / chains[idx].subChainIndices.Length;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1284));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_0;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_33 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_34 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_33);
		int32_t L_35 = ___idx0;
		NullCheck(L_34);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->get_subChainIndices_5();
		NullCheck(L_36);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1292));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_32, ((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1292));
		V_0 = L_37;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1285));
	}

IL_0091:
	{
		// Forward(target, chains[idx].lengths, ref chains[idx].positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1286));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_0;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_39 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_40 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_39);
		int32_t L_41 = ___idx0;
		NullCheck(L_40);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_lengths_4();
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_43 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_44 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_43);
		int32_t L_45 = ___idx0;
		NullCheck(L_44);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_address_of_positions_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1293));
		FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12(L_38, L_42, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_46, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1293));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1287));
		return;
	}
}
// System.Boolean UnityEngine.U2D.IK.FABRIK2D::SolveBackwardsChain(System.Int32,UnityEngine.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE (int32_t ___idx0, FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___idx0), (&___chains1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1294));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1295));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1296));
		// bool notSolved = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1297));
		V_0 = (bool)0;
		// Backward(chains[idx].origin, chains[idx].lengths, ref chains[idx].positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1298));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_1 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_0);
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_origin_0();
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_4 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_5 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_4);
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_lengths_4();
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_8 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_9 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_8);
		int32_t L_10 = ___idx0;
		NullCheck(L_9);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_address_of_positions_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1316));
		FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF(L_3, L_7, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1316));
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1299));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1300));
		goto IL_006e;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1301));
		// var childIdx = chains[idx].subChainIndices[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1302));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_12 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_13 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_12);
		int32_t L_14 = ___idx0;
		NullCheck(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_subChainIndices_5();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		// chains[childIdx].origin = chains[idx].last;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1303));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_19 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_20 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_19);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_22 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_23 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_22);
		int32_t L_24 = ___idx0;
		NullCheck(L_23);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1317));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546((FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1317));
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->set_origin_0(L_25);
		// notSolved |= SolveBackwardsChain(childIdx, ref chains);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1304));
		bool L_26 = V_0;
		int32_t L_27 = V_2;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_28 = ___chains1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1318));
		bool L_29;
		L_29 = FABRIK2D_SolveBackwardsChain_mEA0A100EED6E133E75D321701AB5D2C8869D11FE(L_27, (FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_28, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1318));
		V_0 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1305));
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1306));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_006e:
	{
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1307));
		int32_t L_31 = V_1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_32 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_33 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_32);
		int32_t L_34 = ___idx0;
		NullCheck(L_33);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_subChainIndices_5();
		NullCheck(L_35);
		V_3 = (bool)((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1308));
		bool L_36 = V_3;
		if (L_36)
		{
			goto IL_0034;
		}
	}
	{
		// if (chains[idx].subChainIndices.Length == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1309));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_37 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_38 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_37);
		int32_t L_39 = ___idx0;
		NullCheck(L_38);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->get_subChainIndices_5();
		NullCheck(L_40);
		V_4 = (bool)((((int32_t)(((RuntimeArray*)L_40)->max_length)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1310));
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00d7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1311));
		// notSolved |= (chains[idx].target - chains[idx].last).sqrMagnitude > chains[idx].sqrTolerance;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1312));
		bool L_42 = V_0;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_43 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_44 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_43);
		int32_t L_45 = ___idx0;
		NullCheck(L_44);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_target_1();
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_47 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_48 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_47);
		int32_t L_49 = ___idx0;
		NullCheck(L_48);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1319));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546((FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 *)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1319));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1320));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_46, L_50, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1320));
		V_5 = L_51;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1321));
		float L_52;
		L_52 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1321));
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2** L_53 = ___chains1;
		FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2* L_54 = *((FABRIKChain2DU5BU5D_tBE7BA5B6396B9F466342E303193EA44ABCAB42F2**)L_53);
		int32_t L_55 = ___idx0;
		NullCheck(L_54);
		float L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->get_sqrTolerance_2();
		V_0 = (bool)((int32_t)((int32_t)L_42|(int32_t)((((float)L_52) > ((float)L_56))? 1 : 0)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1313));
	}

IL_00d7:
	{
		// return notSolved;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1314));
		bool L_57 = V_0;
		V_6 = L_57;
		goto IL_00dc;
	}

IL_00dc:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1315));
		bool L_58 = V_6;
		return L_58;
	}
}
// System.Void UnityEngine.U2D.IK.FABRIK2D::Forward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetPosition0), (&___lengths1), (&___positions2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_Forward_m7C7FE55BAD6886E44F94015A613B5717EC7B1D12_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1322));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1323));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1324));
		// var last = positions.Length - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1325));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_0 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		// positions[last] = targetPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1326));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_2 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_2);
		int32_t L_4 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___targetPosition0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
		// for (int i = last - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1327));
		int32_t L_6 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1328));
		goto IL_0076;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1329));
		// var r = positions[i + 1] - positions[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1330));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_7 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_12 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_12);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1339));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_11, L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1339));
		V_2 = L_17;
		// var l = lengths[i] / r.magnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1331));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ___lengths1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1340));
		float L_22;
		L_22 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1340));
		V_3 = ((float)((float)L_21/(float)L_22));
		// var position = (1f - l) * positions[i + 1] + l * positions[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1332));
		float L_23 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_24 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_24);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1341));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23)), L_28, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1341));
		float L_30 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_31 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_32 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_31);
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1342));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_30, L_35, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1342));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1343));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_29, L_36, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1343));
		V_4 = L_37;
		// positions[i] = position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1333));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_38 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_39 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_38);
		int32_t L_40 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_41);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1334));
		// for (int i = last - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1335));
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = last - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1336));
		int32_t L_43 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1337));
		bool L_44 = V_5;
		if (L_44)
		{
			goto IL_0017;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1338));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.FABRIK2D::Backward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___originPosition0), (&___lengths1), (&___positions2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_Backward_mFD8C1326375670D404930BDA24819392A8F882CF_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1344));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1345));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1346));
		// positions[0] = originPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1347));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_0 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___originPosition0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_2);
		// var last = positions.Length - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1348));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_3 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_4 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1));
		// for (int i = 0; i < last; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1349));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1350));
		goto IL_0076;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1351));
		// var r = positions[i + 1] - positions[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1352));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_5 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_10 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_11 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1361));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_9, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1361));
		V_2 = L_15;
		// var l = lengths[i] / r.magnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1353));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = ___lengths1;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1362));
		float L_20;
		L_20 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1362));
		V_3 = ((float)((float)L_19/(float)L_20));
		// var position = (1f - l) * positions[i] + l * positions[i + 1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1354));
		float L_21 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_22 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_22);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1363));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_21)), L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1363));
		float L_28 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_29 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_30 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_29);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1364));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_28, L_33, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1364));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1365));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_27, L_34, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1365));
		V_4 = L_35;
		// positions[i + 1] = position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1355));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_36 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_37 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_36);
		int32_t L_38 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = V_4;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_39);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1356));
		// for (int i = 0; i < last; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1357));
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = 0; i < last; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1358));
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		V_5 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1359));
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0015;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1360));
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIK2D::ValidateJoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIK2D_ValidateJoint_m1DF2870F51889EA753C75C88649A3DBE97BB36D1 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___right2, float ___min3, float ___max4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIK2D_ValidateJoint_m1DF2870F51889EA753C75C88649A3DBE97BB36D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIK2D_ValidateJoint_m1DF2870F51889EA753C75C88649A3DBE97BB36D1_RuntimeMethod_var);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___endPosition0), (&___startPosition1), (&___right2), (&___min3), (&___max4));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIK2D_ValidateJoint_m1DF2870F51889EA753C75C88649A3DBE97BB36D1_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1366));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1367));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1368));
		// var localDifference = endPosition - startPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1369));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___endPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___startPosition1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1386));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1386));
		V_0 = L_2;
		// var angle = Vector2.SignedAngle(right, localDifference);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1370));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___right2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1387));
		float L_5;
		L_5 = Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69(L_3, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1387));
		V_1 = L_5;
		// var validatedPosition = endPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1371));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___endPosition0;
		V_2 = L_6;
		// if (angle < min)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1372));
		float L_7 = V_1;
		float L_8 = ___min3;
		V_3 = (bool)((((float)L_7) < ((float)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1373));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1374));
		// var minRotation = Quaternion.Euler(0f, 0f, min);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1375));
		float L_10 = ___min3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1388));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1388));
		V_4 = L_11;
		// validatedPosition = startPosition + (Vector2)(minRotation * right * localDifference.magnitude);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1376));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___startPosition1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___right2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1389));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1389));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1390));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_13, L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1390));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1391));
		float L_17;
		L_17 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1391));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1392));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1392));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1393));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1394));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_12, L_19, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1394));
		V_2 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1377));
		goto IL_009b;
	}

IL_0056:
	{
		// else if (angle > max)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1378));
		float L_21 = V_1;
		float L_22 = ___max4;
		V_5 = (bool)((((float)L_21) > ((float)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1379));
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_009b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1380));
		// var maxRotation = Quaternion.Euler(0f, 0f, max);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1381));
		float L_24 = ___max4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1395));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1395));
		V_6 = L_25;
		// validatedPosition = startPosition + (Vector2)(maxRotation * right * localDifference.magnitude);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1382));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___startPosition1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = ___right2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1396));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_28, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1397));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_27, L_29, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1397));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1398));
		float L_31;
		L_31 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1398));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1399));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1400));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_32, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1400));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1401));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_26, L_33, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1401));
		V_2 = L_34;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1383));
	}

IL_009b:
	{
		// return validatedPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1384));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_2;
		V_7 = L_35;
		goto IL_00a0;
	}

IL_00a0:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1385));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_7;
		return L_36;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke(const FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59& unmarshaled, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_pinvoke& marshaled)
{
	marshaled.___origin_0 = unmarshaled.get_origin_0();
	marshaled.___target_1 = unmarshaled.get_target_1();
	marshaled.___sqrTolerance_2 = unmarshaled.get_sqrTolerance_2();
	if (unmarshaled.get_positions_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_positions_Length = (unmarshaled.get_positions_3())->max_length;
		marshaled.___positions_3 = il2cpp_codegen_marshal_allocate_array<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 >(_unmarshaled_positions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_positions_Length); i++)
		{
			(marshaled.___positions_3)[i] = (unmarshaled.get_positions_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___positions_3 = NULL;
	}
	marshaled.___lengths_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_lengths_4());
	marshaled.___subChainIndices_5 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_subChainIndices_5());
	if (unmarshaled.get_worldPositions_6() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_worldPositions_Length = (unmarshaled.get_worldPositions_6())->max_length;
		marshaled.___worldPositions_6 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_worldPositions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_worldPositions_Length); i++)
		{
			(marshaled.___worldPositions_6)[i] = (unmarshaled.get_worldPositions_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___worldPositions_6 = NULL;
	}
}
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke_back(const FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_pinvoke& marshaled, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_origin_temp_0;
	memset((&unmarshaled_origin_temp_0), 0, sizeof(unmarshaled_origin_temp_0));
	unmarshaled_origin_temp_0 = marshaled.___origin_0;
	unmarshaled.set_origin_0(unmarshaled_origin_temp_0);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_target_temp_1;
	memset((&unmarshaled_target_temp_1), 0, sizeof(unmarshaled_target_temp_1));
	unmarshaled_target_temp_1 = marshaled.___target_1;
	unmarshaled.set_target_1(unmarshaled_target_temp_1);
	float unmarshaled_sqrTolerance_temp_2 = 0.0f;
	unmarshaled_sqrTolerance_temp_2 = marshaled.___sqrTolerance_2;
	unmarshaled.set_sqrTolerance_2(unmarshaled_sqrTolerance_temp_2);
	if (marshaled.___positions_3 != NULL)
	{
		if (unmarshaled.get_positions_3() == NULL)
		{
			unmarshaled.set_positions_3(reinterpret_cast<Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*>((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_positions_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_positions_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___positions_3)[i]);
		}
	}
	unmarshaled.set_lengths_4((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___lengths_4));
	unmarshaled.set_subChainIndices_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___subChainIndices_5));
	if (marshaled.___worldPositions_6 != NULL)
	{
		if (unmarshaled.get_worldPositions_6() == NULL)
		{
			unmarshaled.set_worldPositions_6(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_worldPositions_6())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_worldPositions_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___worldPositions_6)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_pinvoke_cleanup(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_pinvoke& marshaled)
{
	if (marshaled.___positions_3 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___positions_3);
		marshaled.___positions_3 = NULL;
	}
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lengths_4);
	marshaled.___lengths_4 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___subChainIndices_5);
	marshaled.___subChainIndices_5 = NULL;
	if (marshaled.___worldPositions_6 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___worldPositions_6);
		marshaled.___worldPositions_6 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_com(const FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59& unmarshaled, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_com& marshaled)
{
	marshaled.___origin_0 = unmarshaled.get_origin_0();
	marshaled.___target_1 = unmarshaled.get_target_1();
	marshaled.___sqrTolerance_2 = unmarshaled.get_sqrTolerance_2();
	if (unmarshaled.get_positions_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_positions_Length = (unmarshaled.get_positions_3())->max_length;
		marshaled.___positions_3 = il2cpp_codegen_marshal_allocate_array<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 >(_unmarshaled_positions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_positions_Length); i++)
		{
			(marshaled.___positions_3)[i] = (unmarshaled.get_positions_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___positions_3 = NULL;
	}
	marshaled.___lengths_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_lengths_4());
	marshaled.___subChainIndices_5 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_subChainIndices_5());
	if (unmarshaled.get_worldPositions_6() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_worldPositions_Length = (unmarshaled.get_worldPositions_6())->max_length;
		marshaled.___worldPositions_6 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_worldPositions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_worldPositions_Length); i++)
		{
			(marshaled.___worldPositions_6)[i] = (unmarshaled.get_worldPositions_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___worldPositions_6 = NULL;
	}
}
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_com_back(const FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_com& marshaled, FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_origin_temp_0;
	memset((&unmarshaled_origin_temp_0), 0, sizeof(unmarshaled_origin_temp_0));
	unmarshaled_origin_temp_0 = marshaled.___origin_0;
	unmarshaled.set_origin_0(unmarshaled_origin_temp_0);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_target_temp_1;
	memset((&unmarshaled_target_temp_1), 0, sizeof(unmarshaled_target_temp_1));
	unmarshaled_target_temp_1 = marshaled.___target_1;
	unmarshaled.set_target_1(unmarshaled_target_temp_1);
	float unmarshaled_sqrTolerance_temp_2 = 0.0f;
	unmarshaled_sqrTolerance_temp_2 = marshaled.___sqrTolerance_2;
	unmarshaled.set_sqrTolerance_2(unmarshaled_sqrTolerance_temp_2);
	if (marshaled.___positions_3 != NULL)
	{
		if (unmarshaled.get_positions_3() == NULL)
		{
			unmarshaled.set_positions_3(reinterpret_cast<Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*>((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_positions_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_positions_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___positions_3)[i]);
		}
	}
	unmarshaled.set_lengths_4((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___lengths_4));
	unmarshaled.set_subChainIndices_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___subChainIndices_5));
	if (marshaled.___worldPositions_6 != NULL)
	{
		if (unmarshaled.get_worldPositions_6() == NULL)
		{
			unmarshaled.set_worldPositions_6(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_worldPositions_6())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_worldPositions_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___worldPositions_6)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshal_com_cleanup(FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_marshaled_com& marshaled)
{
	if (marshaled.___positions_3 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___positions_3);
		marshaled.___positions_3 = NULL;
	}
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lengths_4);
	marshaled.___lengths_4 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___subChainIndices_5);
	marshaled.___subChainIndices_5 = NULL;
	if (marshaled.___worldPositions_6 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___worldPositions_6);
		marshaled.___worldPositions_6 = NULL;
	}
}
// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIKChain2D::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A (FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A_RuntimeMethod_var);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1189));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1190));
		// get { return positions[0]; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1191));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_positions_3();
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// get { return positions[0]; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1192));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * _thisAdjusted = reinterpret_cast<FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = FABRIKChain2D_get_first_m3B7A5DADFA5DEBB6C1882ED237BD390F3E713C5A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.U2D.IK.FABRIKChain2D::get_last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546 (FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546_RuntimeMethod_var);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1193));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1194));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1195));
		// get { return positions[positions.Length - 1]; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1196));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_positions_3();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = __this->get_positions_3();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// get { return positions[positions.Length - 1]; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1197));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 * _thisAdjusted = reinterpret_cast<FABRIKChain2D_t005A8D2E350FD757389CE28D0253E6D8EFCD5D59 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = FABRIKChain2D_get_last_m6ED44B613CAB74F7306D814AF15A9792E8BE8546(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.U2D.IK.FabrikSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8 (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 117));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 118));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 119));
		// get { return m_Iterations; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 120));
		int32_t L_0 = __this->get_m_Iterations_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Iterations; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 121));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.FabrikSolver2D::set_iterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_set_iterations_m085C999DE4F34E1C4398F7FC01744875D64DD97C (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_set_iterations_m085C999DE4F34E1C4398F7FC01744875D64DD97C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_set_iterations_m085C999DE4F34E1C4398F7FC01744875D64DD97C_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_set_iterations_m085C999DE4F34E1C4398F7FC01744875D64DD97C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 122));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 123));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 124));
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 125));
		int32_t L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 127));
		int32_t L_1;
		L_1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_0, 1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 127));
		__this->set_m_Iterations_12(L_1);
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 126));
		return;
	}
}
// System.Single UnityEngine.U2D.IK.FabrikSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2 (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2_RuntimeMethod_var);
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 128));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 129));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 130));
		// get { return m_Tolerance; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 131));
		float L_0 = __this->get_m_Tolerance_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Tolerance; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 132));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.FabrikSolver2D::set_tolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_set_tolerance_m85EC38FAE93A27D2A9AFFF745496666B62B5CDBB (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_set_tolerance_m85EC38FAE93A27D2A9AFFF745496666B62B5CDBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_set_tolerance_m85EC38FAE93A27D2A9AFFF745496666B62B5CDBB_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_set_tolerance_m85EC38FAE93A27D2A9AFFF745496666B62B5CDBB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 133));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 134));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 135));
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 136));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 138));
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.00100000005f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 138));
		__this->set_m_Tolerance_13(L_1);
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 137));
		return;
	}
}
// System.Int32 UnityEngine.U2D.IK.FabrikSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_GetChainCount_m728A207A0C0763F34DFAF090FEAE10413E9CEF7F (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_GetChainCount_m728A207A0C0763F34DFAF090FEAE10413E9CEF7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_GetChainCount_m728A207A0C0763F34DFAF090FEAE10413E9CEF7F_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_GetChainCount_m728A207A0C0763F34DFAF090FEAE10413E9CEF7F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 139));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 140));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 141));
		// return 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 142));
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 143));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.FabrikSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * FabrikSolver2D_GetChain_mFA9D5D7B6590A706BD424278C05C92AFC4DA42D1 (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_GetChain_mFA9D5D7B6590A706BD424278C05C92AFC4DA42D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_GetChain_mFA9D5D7B6590A706BD424278C05C92AFC4DA42D1_RuntimeMethod_var);
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_GetChain_mFA9D5D7B6590A706BD424278C05C92AFC4DA42D1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 144));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 145));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 146));
		// return m_Chain;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 147));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = __this->get_m_Chain_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 148));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.FabrikSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_DoPrepare_m11A596B27A320872CEDF7C50315A446867247759 (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_DoPrepare_m11A596B27A320872CEDF7C50315A446867247759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_DoPrepare_m11A596B27A320872CEDF7C50315A446867247759_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_DoPrepare_m11A596B27A320872CEDF7C50315A446867247759_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 149));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 150));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 151));
		// if (m_Positions == null || m_Positions.Length != m_Chain.transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 152));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_m_Positions_15();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = __this->get_m_Positions_15();
		NullCheck(L_1);
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 176));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 176));
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 153));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 154));
		// m_Positions = new Vector2[m_Chain.transformCount];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 155));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_5 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 177));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 177));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_m_Positions_15(L_7);
		// m_Lengths = new float[m_Chain.transformCount - 1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 156));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_8 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 178));
		NullCheck(L_8);
		int32_t L_9;
		L_9 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 178));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		__this->set_m_Lengths_14(L_10);
		// m_WorldPositions = new Vector3[m_Chain.transformCount];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 157));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_11 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 179));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 179));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_m_WorldPositions_16(L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 158));
	}

IL_006e:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 159));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 160));
		goto IL_00a1;
	}

IL_0072:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 161));
		// m_Positions[i] = GetPointOnSolverPlane(m_Chain.transforms[i].position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 162));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = __this->get_m_Positions_15();
		int32_t L_15 = V_1;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_16 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 180));
		NullCheck(L_16);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_17;
		L_17 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 180));
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 181));
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 181));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 182));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301(__this, L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 182));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 183));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 183));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_23);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 163));
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 164));
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a1:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 165));
		int32_t L_25 = V_1;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_26 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 184));
		NullCheck(L_26);
		int32_t L_27;
		L_27 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_26, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 184));
		V_2 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 166));
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_0072;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 167));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 168));
		goto IL_00ed;
	}

IL_00b7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 169));
		// m_Lengths[i] = (m_Positions[i + 1] - m_Positions[i]).magnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 170));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = __this->get_m_Lengths_14();
		int32_t L_30 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_31 = __this->get_m_Positions_15();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_35 = __this->get_m_Positions_15();
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 185));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_34, L_38, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 185));
		V_4 = L_39;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 186));
		float L_40;
		L_40 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 186));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (float)L_40);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 171));
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 172));
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00ed:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 173));
		int32_t L_42 = V_3;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_43 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 187));
		NullCheck(L_43);
		int32_t L_44;
		L_44 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_43, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 187));
		V_5 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 174));
		bool L_45 = V_5;
		if (L_45)
		{
			goto IL_00b7;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 175));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.FabrikSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_DoUpdateIK_mA8967BDE17AE9AF65258E3FC1DD1BD1D0A1C2E4D (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_DoUpdateIK_mA8967BDE17AE9AF65258E3FC1DD1BD1D0A1C2E4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41257E5E0C416B372DE6548D39D39CD5B915390);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D_DoUpdateIK_mA8967BDE17AE9AF65258E3FC1DD1BD1D0A1C2E4D_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___effectorPositions0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_4), (&V_5), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D_DoUpdateIK_mA8967BDE17AE9AF65258E3FC1DD1BD1D0A1C2E4D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 188));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 189));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 190));
		// Profiler.BeginSample("FABRIKSolver2D.DoUpdateIK");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 191));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 218));
		Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline(_stringLiteralB41257E5E0C416B372DE6548D39D39CD5B915390, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 218));
		// Vector3 effectorPosition = effectorPositions[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 192));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___effectorPositions0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 219));
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 219));
		V_0 = L_1;
		// effectorPosition = GetPointOnSolverPlane(effectorPosition);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 193));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 220));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301(__this, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 220));
		V_0 = L_3;
		// if (FABRIK2D.Solve(effectorPosition, iterations, tolerance, m_Lengths, ref m_Positions))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 194));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 221));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 221));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 222));
		int32_t L_6;
		L_6 = FabrikSolver2D_get_iterations_m46C5BE63A5E2E52628D750D4028BBC2122BAB1E8(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 223));
		float L_7;
		L_7 = FabrikSolver2D_get_tolerance_m98EAF62D8185C67EB65A8EE354D7C477B872FBD2(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 223));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_m_Lengths_14();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_9 = __this->get_address_of_m_Positions_15();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 224));
		bool L_10;
		L_10 = FABRIK2D_Solve_mDBACC6E4D2F9479A6171910E08A1EA8A455A5580(L_5, L_6, L_7, L_8, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 224));
		V_1 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 195));
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0109;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 196));
		// for (int i = 0; i < m_Positions.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 197));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 198));
		goto IL_006f;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 199));
		// m_WorldPositions[i] = GetWorldPositionFromSolverPlanePoint(m_Positions[i]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 200));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = __this->get_m_WorldPositions_16();
		int32_t L_13 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = __this->get_m_Positions_15();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 225));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00(__this, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 225));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 201));
		// for (int i = 0; i < m_Positions.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 202));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006f:
	{
		// for (int i = 0; i < m_Positions.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 203));
		int32_t L_20 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_21 = __this->get_m_Positions_15();
		NullCheck(L_21);
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 204));
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_004b;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 205));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 206));
		goto IL_00ee;
	}

IL_0083:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 207));
		// Vector3 startLocalPosition = m_Chain.transforms[i + 1].localPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 208));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_23 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 226));
		NullCheck(L_23);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_24;
		L_24 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_23, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 226));
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 227));
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 227));
		V_5 = L_28;
		// Vector3 endLocalPosition = m_Chain.transforms[i].InverseTransformPoint(m_WorldPositions[i + 1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 209));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_29 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 228));
		NullCheck(L_29);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_30;
		L_30 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_29, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 228));
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_34 = __this->get_m_WorldPositions_16();
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 229));
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_33, L_37, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 229));
		V_6 = L_38;
		// m_Chain.transforms[i].localRotation *= Quaternion.FromToRotation(startLocalPosition, endLocalPosition);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 210));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_39 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 230));
		NullCheck(L_39);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_40;
		L_40 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_39, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 230));
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 231));
		NullCheck(L_44);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45;
		L_45 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_44, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 231));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 232));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
		L_48 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_46, L_47, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 232));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 233));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_45, L_48, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 234));
		NullCheck(L_44);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_44, L_49, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 234));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 211));
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 212));
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00ee:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 213));
		int32_t L_51 = V_4;
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_52 = __this->get_m_Chain_11();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 235));
		NullCheck(L_52);
		int32_t L_53;
		L_53 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(L_52, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 235));
		V_7 = (bool)((((int32_t)L_51) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 214));
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0083;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 215));
	}

IL_0109:
	{
		// Profiler.EndSample();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 216));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 236));
		Profiler_EndSample_m78C76E709113E225D47687E26EA320E4FC548B71(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 236));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 217));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.FabrikSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D__ctor_mCB809B3FE0901BDB09392F9D5BEE5FEFB0CECD4C (FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D__ctor_mCB809B3FE0901BDB09392F9D5BEE5FEFB0CECD4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FabrikSolver2D_t1E01919887CE09EF05A596F2E53DA2CA8359C1FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(FabrikSolver2D__ctor_mCB809B3FE0901BDB09392F9D5BEE5FEFB0CECD4C_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FabrikSolver2D__ctor_mCB809B3FE0901BDB09392F9D5BEE5FEFB0CECD4C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 237));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 238));
	{
		// private IKChain2D m_Chain = new IKChain2D();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 239));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 242));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *)il2cpp_codegen_object_new(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var);
		IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 242));
		__this->set_m_Chain_11(L_0);
		// private int m_Iterations = 10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 240));
		__this->set_m_Iterations_12(((int32_t)10));
		// private float m_Tolerance = 0.01f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 241));
		__this->set_m_Tolerance_13((0.00999999978f));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 243));
		Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 243));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_effector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046_RuntimeMethod_var);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 244));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 245));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 246));
		// get { return m_EffectorTransform; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 247));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_EffectorTransform_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_EffectorTransform; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 248));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::set_effector(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_effector_mDD444E4A1D63081FB879B1C50BB7829CA3FD57D6 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_set_effector_mDD444E4A1D63081FB879B1C50BB7829CA3FD57D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_set_effector_mDD444E4A1D63081FB879B1C50BB7829CA3FD57D6_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_set_effector_mDD444E4A1D63081FB879B1C50BB7829CA3FD57D6_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 249));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 250));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 251));
		// set { m_EffectorTransform = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 252));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_EffectorTransform_0(L_0);
		// set { m_EffectorTransform = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 253));
		return;
	}
}
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90_RuntimeMethod_var);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 254));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 255));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 256));
		// get { return m_TargetTransform; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 257));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_TargetTransform_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_TargetTransform; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 258));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::set_target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_target_mC4F45D64899E0E609B85F17DA591BACCD5BCDBF9 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_set_target_mC4F45D64899E0E609B85F17DA591BACCD5BCDBF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_set_target_mC4F45D64899E0E609B85F17DA591BACCD5BCDBF9_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_set_target_mC4F45D64899E0E609B85F17DA591BACCD5BCDBF9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 259));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 260));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 261));
		// set { m_TargetTransform = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 262));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_TargetTransform_1(L_0);
		// set { m_TargetTransform = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 263));
		return;
	}
}
// UnityEngine.Transform[] UnityEngine.U2D.IK.IKChain2D::get_transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B_RuntimeMethod_var);
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 264));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 265));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 266));
		// get { return m_Transforms; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 267));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Transforms_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Transforms; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 268));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_rootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757_RuntimeMethod_var);
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 269));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 270));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 271));
		// if (m_Transforms != null && transformCount > 0 && m_Transforms.Length == transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 272));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Transforms_3();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 277));
		int32_t L_1;
		L_1 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 277));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_m_Transforms_3();
		NullCheck(L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 278));
		int32_t L_3;
		L_3 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 278));
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)L_3))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 273));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// return m_Transforms[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 274));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_Transforms_3();
		NullCheck(L_5);
		int32_t L_6 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0038;
	}

IL_0034:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 275));
		V_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 276));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Transform UnityEngine.U2D.IK.IKChain2D::get_lastTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9_RuntimeMethod_var);
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 279));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 280));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 281));
		// if (m_Transforms != null && transformCount > 0 && m_Transforms.Length == transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 282));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Transforms_3();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 287));
		int32_t L_1;
		L_1 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 287));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_m_Transforms_3();
		NullCheck(L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 288));
		int32_t L_3;
		L_3 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 288));
		G_B4_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)L_3))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 283));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// return m_Transforms[transformCount - 1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 284));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_Transforms_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 289));
		int32_t L_6;
		L_6 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 289));
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_003f;
	}

IL_003b:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 285));
		V_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 286));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UnityEngine.U2D.IK.IKChain2D::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 290));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 291));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 292));
		// get { return m_TransformCount; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 293));
		int32_t L_0 = __this->get_m_TransformCount_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_TransformCount; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 294));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::set_transformCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 295));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 296));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 297));
		// set { m_TransformCount = Mathf.Max(0, value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 298));
		int32_t L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 300));
		int32_t L_1;
		L_1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 300));
		__this->set_m_TransformCount_2(L_1);
		// set { m_TransformCount = Mathf.Max(0, value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 299));
		return;
	}
}
// System.Boolean UnityEngine.U2D.IK.IKChain2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 301));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 302));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 303));
		// get { return Validate(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 304));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 306));
		bool L_0;
		L_0 = IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 306));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Validate(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 305));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single[] UnityEngine.U2D.IK.IKChain2D::get_lengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D_RuntimeMethod_var);
	bool V_0 = false;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 307));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 308));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 309));
		// if(isValid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 310));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 317));
		bool L_0;
		L_0 = IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 317));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 311));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 312));
		// PrepareLengths();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 313));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 318));
		IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 318));
		// return m_Lengths;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 314));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_m_Lengths_6();
		V_1 = L_2;
		goto IL_0020;
	}

IL_001c:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 315));
		V_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 316));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.U2D.IK.IKChain2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C_RuntimeMethod_var);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_Validate_m2DB28BA7405790241AE8089F3CEABF12A9E22D7C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 319));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 320));
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B26_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 321));
		// if (effector == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 322));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 348));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 348));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 349));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 349));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 323));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 324));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0018:
	{
		// if (transformCount == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 325));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 350));
		int32_t L_3;
		L_3 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 350));
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 326));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 327));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_002c:
	{
		// if (m_Transforms == null || m_Transforms.Length != transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 328));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_Transforms_3();
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_m_Transforms_3();
		NullCheck(L_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 351));
		int32_t L_7;
		L_7 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 351));
		G_B7_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 1;
	}

IL_004a:
	{
		V_3 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 329));
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 330));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0055:
	{
		// if (m_DefaultLocalRotations == null || m_DefaultLocalRotations.Length != transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 331));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_9 = __this->get_m_DefaultLocalRotations_4();
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_10 = __this->get_m_DefaultLocalRotations_4();
		NullCheck(L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 352));
		int32_t L_11;
		L_11 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 352));
		G_B12_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
	}

IL_0073:
	{
		V_4 = (bool)G_B12_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 332));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 333));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0080:
	{
		// if (m_StoredLocalRotations ==  null || m_StoredLocalRotations.Length != transformCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 334));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_13 = __this->get_m_StoredLocalRotations_5();
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_14 = __this->get_m_StoredLocalRotations_5();
		NullCheck(L_14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 353));
		int32_t L_15;
		L_15 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 353));
		G_B17_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B17_0 = 1;
	}

IL_009e:
	{
		V_5 = (bool)G_B17_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 335));
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 336));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_00a8:
	{
		// if (rootTransform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 337));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 354));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 354));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 355));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 355));
		V_6 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 338));
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 339));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_00be:
	{
		// if (lastTransform != effector)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 340));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 356));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = IKChain2D_get_lastTransform_m2BADDA09E4D23103EB3B1B48D48CA37051F5E7E9(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 356));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 357));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 357));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 358));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 358));
		V_7 = L_22;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 341));
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 342));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_00d9:
	{
		// if (target && IKUtility.IsDescendentOf(target, rootTransform))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 343));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 359));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 359));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 360));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_24, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 360));
		if (!L_25)
		{
			goto IL_00f9;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 361));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 361));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 362));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 362));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 363));
		bool L_28;
		L_28 = IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4(L_26, L_27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 363));
		G_B26_0 = ((int32_t)(L_28));
		goto IL_00fa;
	}

IL_00f9:
	{
		G_B26_0 = 0;
	}

IL_00fa:
	{
		V_8 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 344));
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_0104;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 345));
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0104:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 346));
		V_1 = (bool)1;
		goto IL_0108;
	}

IL_0108:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 347));
		bool L_30 = V_1;
		return L_30;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA_RuntimeMethod_var);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 364));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 365));
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 366));
		// if (effector == null || transformCount == 0 || IKUtility.GetAncestorCount(effector) < transformCount - 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 367));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 385));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 385));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 386));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 386));
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 387));
		int32_t L_2;
		L_2 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 387));
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 388));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 388));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 389));
		int32_t L_4;
		L_4 = IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 389));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 390));
		int32_t L_5;
		L_5 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 390));
		G_B4_0 = ((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 1;
	}

IL_002f:
	{
		V_2 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 368));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 369));
		goto IL_00bb;
	}

IL_0038:
	{
		// m_Transforms = new Transform[transformCount];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 370));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 391));
		int32_t L_7;
		L_7 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 391));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_m_Transforms_3(L_8);
		// m_DefaultLocalRotations = new Quaternion[transformCount];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 371));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 392));
		int32_t L_9;
		L_9 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 392));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_10 = (QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)SZArrayNew(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->set_m_DefaultLocalRotations_4(L_10);
		// m_StoredLocalRotations = new Quaternion[transformCount];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 372));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 393));
		int32_t L_11;
		L_11 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 393));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_12 = (QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)SZArrayNew(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set_m_StoredLocalRotations_5(L_12);
		// var currentTransform = effector;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 373));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 394));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 394));
		V_0 = L_13;
		// int index = transformCount - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 374));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 395));
		int32_t L_14;
		L_14 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 395));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 375));
		goto IL_00a5;
	}

IL_007d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 376));
		// m_Transforms[index] = currentTransform;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 377));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_15 = __this->get_m_Transforms_3();
		int32_t L_16 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_17);
		// m_DefaultLocalRotations[index] = currentTransform.localRotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 378));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_18 = __this->get_m_DefaultLocalRotations_4();
		int32_t L_19 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 396));
		NullCheck(L_20);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 396));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_21);
		// currentTransform = currentTransform.parent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 379));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 397));
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 397));
		V_0 = L_23;
		// --index;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 380));
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 381));
	}

IL_00a5:
	{
		// while (currentTransform && index >= 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 382));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 398));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 398));
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B11_0 = ((((int32_t)((((int32_t)L_27) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B11_0 = 0;
	}

IL_00b7:
	{
		V_3 = (bool)G_B11_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 383));
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_007d;
		}
	}

IL_00bb:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 384));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::PrepareLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C_RuntimeMethod_var);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_PrepareLengths_mD4BE7E28775C08918AB06D8405632159B98BB90C_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 399));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 400));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 401));
		// var currentTransform = effector;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 402));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 418));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 418));
		V_0 = L_0;
		// int index = transformCount - 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 403));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 419));
		int32_t L_1;
		L_1 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 419));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// if (m_Lengths == null || m_Lengths.Length != transformCount - 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 404));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_m_Lengths_6();
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = __this->get_m_Lengths_6();
		NullCheck(L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 420));
		int32_t L_4;
		L_4 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 420));
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 405));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// m_Lengths = new float[transformCount - 1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 406));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 421));
		int32_t L_6;
		L_6 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 421));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		__this->set_m_Lengths_6(L_7);
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 407));
		goto IL_0098;
	}

IL_004a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 408));
		// if (currentTransform.parent && index > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 409));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 422));
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 422));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 423));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 423));
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_11 = V_1;
		G_B9_0 = ((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B9_0 = 0;
	}

IL_005f:
	{
		V_3 = (bool)G_B9_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 410));
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// m_Lengths[index - 1] = (currentTransform.position - currentTransform.parent.position).magnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 411));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = __this->get_m_Lengths_6();
		int32_t L_14 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 424));
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 424));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 425));
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 425));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 426));
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 426));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 427));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_19, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 427));
		V_4 = L_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 428));
		float L_21;
		L_21 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 428));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1))), (float)L_21);
	}

IL_008c:
	{
		// currentTransform = currentTransform.parent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 412));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 429));
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 429));
		V_0 = L_23;
		// --index;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 413));
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 414));
	}

IL_0098:
	{
		// while (currentTransform && index >= 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 415));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 430));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 430));
		if (!L_26)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B15_0 = ((((int32_t)((((int32_t)L_27) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B15_0 = 0;
	}

IL_00aa:
	{
		V_5 = (bool)G_B15_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 416));
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_004a;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 417));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::RestoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, bool ___targetRotationIsConstrained0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetRotationIsConstrained0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 431));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 432));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 433));
		// var count = targetRotationIsConstrained ? transformCount : transformCount-1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 434));
		bool L_0 = ___targetRotationIsConstrained0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 442));
		int32_t L_1;
		L_1 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 442));
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0014;
	}

IL_000e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 443));
		int32_t L_2;
		L_2 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 443));
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 435));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 436));
		goto IL_0037;
	}

IL_0019:
	{
		// m_Transforms[i].localRotation = m_DefaultLocalRotations[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 437));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_m_Transforms_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_7 = __this->get_m_DefaultLocalRotations_4();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 444));
		NullCheck(L_6);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_6, L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 444));
		// for (int i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 438));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 439));
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 440));
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0019;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 441));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 446));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 447));
		// for (int i = 0; i < m_Transforms.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 448));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 449));
		goto IL_0022;
	}

IL_0005:
	{
		// m_StoredLocalRotations[i] = m_Transforms[i].localRotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 450));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_0 = __this->get_m_StoredLocalRotations_5();
		int32_t L_1 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_m_Transforms_3();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 455));
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 455));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6);
		// for (int i = 0; i < m_Transforms.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 451));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < m_Transforms.Length; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 452));
		int32_t L_8 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_9 = __this->get_m_Transforms_3();
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 453));
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 454));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::BlendFkToIk(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, float ___finalWeight0, bool ___targetRotationIsConstrained1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___finalWeight0), (&___targetRotationIsConstrained1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 456));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 457));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 458));
		// var count = targetRotationIsConstrained ? transformCount : transformCount-1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 459));
		bool L_0 = ___targetRotationIsConstrained1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 467));
		int32_t L_1;
		L_1 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 467));
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0014;
	}

IL_000e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 468));
		int32_t L_2;
		L_2 = IKChain2D_get_transformCount_mA9085C77FF8E063E4579AE3CBBCB448429CEF68B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 468));
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 460));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 461));
		goto IL_004a;
	}

IL_0019:
	{
		// m_Transforms[i].localRotation = Quaternion.Slerp(m_StoredLocalRotations[i], m_Transforms[i].localRotation, finalWeight);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 462));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_m_Transforms_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_7 = __this->get_m_StoredLocalRotations_5();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_m_Transforms_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 469));
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 469));
		float L_16 = ___finalWeight0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 470));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_10, L_15, L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 470));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 471));
		NullCheck(L_6);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_6, L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 471));
		// for (int i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 463));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 464));
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 465));
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0019;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 466));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKChain2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620 (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.U2D.IK.IKManager2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00_RuntimeMethod_var);
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 472));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 473));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 474));
		// get { return m_Weight; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 475));
		float L_0 = __this->get_m_Weight_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Weight; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 476));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_set_weight_m62E7130274C1CC9C9CED5B07B8C88FA78EF7E9D3 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_set_weight_m62E7130274C1CC9C9CED5B07B8C88FA78EF7E9D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_set_weight_m62E7130274C1CC9C9CED5B07B8C88FA78EF7E9D3_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_set_weight_m62E7130274C1CC9C9CED5B07B8C88FA78EF7E9D3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 477));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 478));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 479));
		// set { m_Weight = Mathf.Clamp01(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 480));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 482));
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 482));
		__this->set_m_Weight_5(L_1);
		// set { m_Weight = Mathf.Clamp01(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 481));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.U2D.IK.Solver2D> UnityEngine.U2D.IK.IKManager2D::get_solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * IKManager2D_get_solvers_m35D16ED777FE441C5706DDBA4000CF8506F06893 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_get_solvers_m35D16ED777FE441C5706DDBA4000CF8506F06893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_get_solvers_m35D16ED777FE441C5706DDBA4000CF8506F06893_RuntimeMethod_var);
	List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_get_solvers_m35D16ED777FE441C5706DDBA4000CF8506F06893_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 483));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 484));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 485));
		// get { return m_Solvers; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 486));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_0 = __this->get_m_Solvers_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Solvers; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 487));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnValidate_mC5ABBFFA8CFDE1530D605B789E48951EF6F092C6 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_OnValidate_mC5ABBFFA8CFDE1530D605B789E48951EF6F092C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_OnValidate_mC5ABBFFA8CFDE1530D605B789E48951EF6F092C6_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_OnValidate_mC5ABBFFA8CFDE1530D605B789E48951EF6F092C6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 488));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 489));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 490));
		// m_Weight = Mathf.Clamp01(m_Weight);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 491));
		float L_0 = __this->get_m_Weight_5();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 494));
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 494));
		__this->set_m_Weight_5(L_1);
		// OnEditorDataValidate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 492));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 495));
		IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 495));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 493));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEnable_m858A0B4B94345538EE3F0EA4CAF5058EFF4E14EA (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_OnEnable_m858A0B4B94345538EE3F0EA4CAF5058EFF4E14EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_OnEnable_m858A0B4B94345538EE3F0EA4CAF5058EFF4E14EA_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_OnEnable_m858A0B4B94345538EE3F0EA4CAF5058EFF4E14EA_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 498));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 499));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_Reset_mA34497CB3DA73360DDF40B246FA5D46D7FE2483D (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_Reset_mA34497CB3DA73360DDF40B246FA5D46D7FE2483D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_Reset_mA34497CB3DA73360DDF40B246FA5D46D7FE2483D_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_Reset_mA34497CB3DA73360DDF40B246FA5D46D7FE2483D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 500));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 501));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 502));
		// FindChildSolvers();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 503));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 506));
		IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 506));
		// OnEditorDataValidate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 504));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 507));
		IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 507));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 505));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::FindChildSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_m94867AA44F7B27FAA1795DB215F8C832DF9EE0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSolver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_m16C798614AE57E2DA830AAF2CAFA405FA5B7EDA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m44EA024D005005EE4938BE9BE0E9E5C97337166E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064_RuntimeMethod_var);
	List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * V_0 = NULL;
	Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * V_2 = NULL;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_FindChildSolvers_m7EDD5127BA852896F46E5C4D76447DAEF9022064_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 508));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 509));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 510));
		// m_Solvers.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 511));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_0 = __this->get_m_Solvers_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 526));
		NullCheck(L_0);
		List_1_Clear_m44EA024D005005EE4938BE9BE0E9E5C97337166E(L_0, /*hidden argument*/List_1_Clear_m44EA024D005005EE4938BE9BE0E9E5C97337166E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 526));
		// List<Solver2D> solvers = new List<Solver2D>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 512));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 527));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_1 = (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *)il2cpp_codegen_object_new(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_il2cpp_TypeInfo_var);
		List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706(L_1, /*hidden argument*/List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 527));
		V_0 = L_1;
		// transform.GetComponentsInChildren<Solver2D>(true, solvers);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 528));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 528));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 529));
		NullCheck(L_2);
		Component_GetComponentsInChildren_TisSolver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_m16C798614AE57E2DA830AAF2CAFA405FA5B7EDA2(L_2, (bool)1, L_3, /*hidden argument*/Component_GetComponentsInChildren_TisSolver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_m16C798614AE57E2DA830AAF2CAFA405FA5B7EDA2_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 529));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 514));
		// foreach (Solver2D solver in solvers)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 515));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 530));
		NullCheck(L_4);
		Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538  L_5;
		L_5 = List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72(L_4, /*hidden argument*/List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 530));
		V_1 = L_5;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 516));
			goto IL_004d;
		}

IL_002b:
		{
			// foreach (Solver2D solver in solvers)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 517));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 531));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_6;
			L_6 = Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_inline((Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 531));
			V_2 = L_6;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 518));
			// if (solver.GetComponentInParent<IKManager2D>() == this)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 519));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_7 = V_2;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 532));
			NullCheck(L_7);
			IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * L_8;
			L_8 = Component_GetComponentInParent_TisIKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_m94867AA44F7B27FAA1795DB215F8C832DF9EE0D5(L_7, /*hidden argument*/Component_GetComponentInParent_TisIKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_m94867AA44F7B27FAA1795DB215F8C832DF9EE0D5_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 532));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 533));
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, __this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 533));
			V_3 = L_9;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 520));
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0044:
		{
			// AddSolver(solver);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 521));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_11 = V_2;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 534));
			IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA(__this, L_11, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 534));
		}

IL_004c:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 522));
		}

IL_004d:
		{
			// foreach (Solver2D solver in solvers)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 523));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 535));
			bool L_12;
			L_12 = Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05((Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 535));
			if (L_12)
			{
				goto IL_002b;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 524));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 536));
		Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896((Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 536));
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 525));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::AddSolver(UnityEngine.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA8ADA8666BA41E6EB329B7E4F3E3A41A23FCB103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mFCC76F5D887C6FE8A803523360E51659BE17C1ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___solver0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_AddSolver_mC886398746EFCF678F39589E34AC602C5DA2BAEA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 537));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 538));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 539));
		// if (!m_Solvers.Contains(solver))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 540));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_0 = __this->get_m_Solvers_4();
		Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_1 = ___solver0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 547));
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mFCC76F5D887C6FE8A803523360E51659BE17C1ED(L_0, L_1, /*hidden argument*/List_1_Contains_mFCC76F5D887C6FE8A803523360E51659BE17C1ED_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 547));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 541));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 542));
		// m_Solvers.Add(solver);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 543));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_4 = __this->get_m_Solvers_4();
		Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_5 = ___solver0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 548));
		NullCheck(L_4);
		List_1_Add_mA8ADA8666BA41E6EB329B7E4F3E3A41A23FCB103(L_4, L_5, /*hidden argument*/List_1_Add_mA8ADA8666BA41E6EB329B7E4F3E3A41A23FCB103_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 548));
		// AddSolverEditorData();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 544));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 549));
		IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 549));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 545));
	}

IL_002a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 546));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::RemoveSolver(UnityEngine.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolver_mC4CE591F88DBA76AAB027D1D2BE6EA3EE688530E (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_RemoveSolver_mC4CE591F88DBA76AAB027D1D2BE6EA3EE688530E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m503270EF64E8E4C3B549B048BE4B30D138997146_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_RemoveSolver_mC4CE591F88DBA76AAB027D1D2BE6EA3EE688530E_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___solver0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_RemoveSolver_mC4CE591F88DBA76AAB027D1D2BE6EA3EE688530E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 550));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 551));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 552));
		// RemoveSolverEditorData(solver);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 553));
		Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_0 = ___solver0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 556));
		IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232(__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 556));
		// m_Solvers.Remove(solver);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 554));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_1 = __this->get_m_Solvers_4();
		Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_2 = ___solver0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 557));
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_m503270EF64E8E4C3B549B048BE4B30D138997146(L_1, L_2, /*hidden argument*/List_1_Remove_m503270EF64E8E4C3B549B048BE4B30D138997146_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 557));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 555));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::UpdateManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783_RuntimeMethod_var);
	Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 558));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 559));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 560));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 561));
		// foreach (var solver in m_Solvers)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 562));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_0 = __this->get_m_Solvers_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 577));
		NullCheck(L_0);
		Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538  L_1;
		L_1 = List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72(L_0, /*hidden argument*/List_1_GetEnumerator_m37365AAB52AECA923EFAE4D6398AD6D88D015F72_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 577));
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 563));
			goto IL_0056;
		}

IL_0010:
		{
			// foreach (var solver in m_Solvers)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 564));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 578));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_2;
			L_2 = Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_inline((Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m1539A08E25F713882E7B4A29E3FC618F5890C42F_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 578));
			V_1 = L_2;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 565));
			// if (solver == null || !solver.isActiveAndEnabled)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 566));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_3 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 579));
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 579));
			if (L_4)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_5 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 580));
			NullCheck(L_5);
			bool L_6;
			L_6 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_5, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 580));
			G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			goto IL_002e;
		}

IL_002d:
		{
			G_B5_0 = 1;
		}

IL_002e:
		{
			V_2 = (bool)G_B5_0;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 567));
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0034;
			}
		}

IL_0032:
		{
			// continue;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 568));
			goto IL_0056;
		}

IL_0034:
		{
			// if (!solver.isValid)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 569));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_8 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 581));
			NullCheck(L_8);
			bool L_9;
			L_9 = Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B(L_8, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 581));
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 570));
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0048;
			}
		}

IL_0041:
		{
			// solver.Initialize();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 571));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_11 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 582));
			NullCheck(L_11);
			Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED(L_11, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 582));
		}

IL_0048:
		{
			// solver.UpdateIK(weight);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 572));
			Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * L_12 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 583));
			float L_13;
			L_13 = IKManager2D_get_weight_m9C5AA621D970FADB235FD35E9B31F6BB1E2DFF00(__this, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 583));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 584));
			NullCheck(L_12);
			Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654(L_12, L_13, /*hidden argument*/NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 584));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 573));
		}

IL_0056:
		{
			// foreach (var solver in m_Solvers)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 574));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 585));
			bool L_14;
			L_14 = Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05((Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m049CFDB39DDCB7B3ABC594574C3843EAF9A72C05_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 585));
			if (L_14)
			{
				goto IL_0010;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 575));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 586));
		Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896((Enumerator_tDFBA6776A99D581509B5EFCC3806E3038FBF5538 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC2D67A1ED0D450AD54A905F9EF34E62B868B0896_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 586));
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 576));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_LateUpdate_m7B22FDC10F0B298F89D2BE620BC7FA26CB52A7F0 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_LateUpdate_m7B22FDC10F0B298F89D2BE620BC7FA26CB52A7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_LateUpdate_m7B22FDC10F0B298F89D2BE620BC7FA26CB52A7F0_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_LateUpdate_m7B22FDC10F0B298F89D2BE620BC7FA26CB52A7F0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 587));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 588));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 589));
		// UpdateManager();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 590));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 592));
		IKManager2D_UpdateManager_m81A83CD039BC8ACA25E2A2A69F784840BF38F783(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 592));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 591));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::OnEditorDataValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_OnEditorDataValidate_m314875943C56E4D3937EB09D21567FC75A8A334B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 593));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 594));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 595));
		// void OnEditorDataValidate(){}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 596));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::AddSolverEditorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_AddSolverEditorData_m5F1BC9F27CBEEDACF3C71D2381887125D5AC22B7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 597));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 598));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 599));
		// void AddSolverEditorData(){}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 600));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::RemoveSolverEditorData(UnityEngine.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232 (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___solver0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D_RemoveSolverEditorData_m9C3936EEBDB0EC019E5AA84F050EF12D0960A232_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 601));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 602));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 603));
		// void RemoveSolverEditorData(Solver2D solver){}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 604));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.IKManager2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D__ctor_m002A5C6D45E373738321F8ABBCF9C794F41D3A0C (IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D__ctor_m002A5C6D45E373738321F8ABBCF9C794F41D3A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKManager2D_tE48D1FE480E3DB82090AE160F5F29C18C7D74510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKManager2D__ctor_m002A5C6D45E373738321F8ABBCF9C794F41D3A0C_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKManager2D__ctor_m002A5C6D45E373738321F8ABBCF9C794F41D3A0C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 605));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 606));
	{
		// private List<Solver2D> m_Solvers = new List<Solver2D>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 607));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 609));
		List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 * L_0 = (List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479 *)il2cpp_codegen_object_new(List_1_t5AD9FC44D7FFD5B7D3AE07112E73513D3F17C479_il2cpp_TypeInfo_var);
		List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706(L_0, /*hidden argument*/List_1__ctor_m86F667E44E8BE415B5D35272D407953C5E573706_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 609));
		__this->set_m_Solvers_4(L_0);
		// private float m_Weight = 1f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 608));
		__this->set_m_Weight_5((1.0f));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 610));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 610));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.IK.IKUtility::IsDescendentOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ancestor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4_RuntimeMethod_var);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___ancestor1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKUtility_IsDescendentOf_m62549D8A1C1F80AA41765ACB55D65BEDD5F785D4_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 611));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 612));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 613));
		// Debug.Assert(transform != null, "Transform is null");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 614));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 627));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 627));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 628));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5(L_1, _stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 628));
		// Transform currentParent = transform.parent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 615));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 629));
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 629));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 616));
		goto IL_0034;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 617));
		// if (currentParent == ancestor)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 618));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___ancestor1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 630));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 630));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 619));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 620));
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_002c:
	{
		// currentParent = currentParent.parent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 621));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 631));
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 631));
		V_0 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 622));
	}

IL_0034:
	{
		// while (currentParent)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 623));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 632));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 632));
		V_3 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 624));
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 625));
		V_2 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 626));
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Int32 UnityEngine.U2D.IK.IKUtility::GetAncestorCount(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 633));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 634));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 635));
		// Debug.Assert(transform != null, "Transform is null");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 636));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 647));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 647));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 648));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5(L_1, _stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 648));
		// int ancestorCount = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 637));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 638));
		goto IL_0025;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 639));
		// ++ancestorCount;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 640));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		// transform = transform.parent;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 641));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 649));
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 649));
		___transform0 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 642));
	}

IL_0025:
	{
		// while (transform.parent)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 643));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 650));
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 650));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 651));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 651));
		V_1 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 644));
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0017;
		}
	}
	{
		// return ancestorCount;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 645));
		int32_t L_9 = V_0;
		V_2 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 646));
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Int32 UnityEngine.U2D.IK.IKUtility::GetMaxChainCount(UnityEngine.U2D.IK.IKChain2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetMaxChainCount_m47D63524E83FC27958E44667D87A19DA76EE5C5D (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * ___chain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKUtility_GetMaxChainCount_m47D63524E83FC27958E44667D87A19DA76EE5C5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKUtility_GetMaxChainCount_m47D63524E83FC27958E44667D87A19DA76EE5C5D_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___chain0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKUtility_GetMaxChainCount_m47D63524E83FC27958E44667D87A19DA76EE5C5D_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 652));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 653));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 654));
		// int maxChainCount = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 655));
		V_0 = 0;
		// if (chain.effector)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 656));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = ___chain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 661));
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 661));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 662));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 662));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 657));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// maxChainCount = GetAncestorCount(chain.effector) + 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 658));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_4 = ___chain0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 663));
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 663));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 664));
		int32_t L_6;
		L_6 = IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 664));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0020:
	{
		// return maxChainCount;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 659));
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 660));
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.U2D.IK.IKUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKUtility__ctor_m1AD7446D6DFC54EABED89F1A28E617172F8561E0 (IKUtility_t5432A6816929991EF2E73DC80923184DB10A32F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKUtility__ctor_m1AD7446D6DFC54EABED89F1A28E617172F8561E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(IKUtility__ctor_m1AD7446D6DFC54EABED89F1A28E617172F8561E0_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IKUtility__ctor_m1AD7446D6DFC54EABED89F1A28E617172F8561E0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.IK.Limb::Solve(UnityEngine.Vector3,System.Single[],UnityEngine.Vector3[],System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___outAngles3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___targetPosition0), (&___lengths1), (&___positions2), (&___outAngles3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1402));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1403));
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1404));
		// outAngles[0] = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1405));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_0 = ___outAngles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_0);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// outAngles[1] = 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1406));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_2 = ___outAngles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_2);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0f));
		// if (lengths[0] == 0f || lengths[1] == 0f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1407));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___lengths1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___lengths1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_7 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1408));
		bool L_10 = V_7;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1409));
		V_8 = (bool)0;
		goto IL_00ed;
	}

IL_0038:
	{
		// Vector3 startToEnd = targetPosition - positions[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1410));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = ___positions2;
		NullCheck(L_12);
		int32_t L_13 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1425));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1425));
		V_0 = L_15;
		// float distanceMagnitude = startToEnd.magnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1411));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1426));
		float L_16;
		L_16 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1426));
		V_1 = L_16;
		// float sqrDistance = startToEnd.sqrMagnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1412));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1427));
		float L_17;
		L_17 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1427));
		V_2 = L_17;
		// float sqrParentLength = (lengths[0] * lengths[0]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1413));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ___lengths1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ___lengths1;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((float)il2cpp_codegen_multiply((float)L_20, (float)L_23));
		// float sqrTargetLength = (lengths[1] * lengths[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1414));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = ___lengths1;
		NullCheck(L_24);
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = ___lengths1;
		NullCheck(L_27);
		int32_t L_28 = 1;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((float)il2cpp_codegen_multiply((float)L_26, (float)L_29));
		// float angle0Cos = (sqrDistance + sqrParentLength - sqrTargetLength) / (2f * lengths[0] * distanceMagnitude);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1415));
		float L_30 = V_2;
		float L_31 = V_3;
		float L_32 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = ___lengths1;
		NullCheck(L_33);
		int32_t L_34 = 0;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36 = V_1;
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_30, (float)L_31)), (float)L_32))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_35)), (float)L_36))));
		// float angle1Cos = (sqrDistance - sqrParentLength - sqrTargetLength) / (2f * lengths[0] * lengths[1]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1416));
		float L_37 = V_2;
		float L_38 = V_3;
		float L_39 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40 = ___lengths1;
		NullCheck(L_40);
		int32_t L_41 = 0;
		float L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_43 = ___lengths1;
		NullCheck(L_43);
		int32_t L_44 = 1;
		float L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_38)), (float)L_39))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_42)), (float)L_45))));
		// if ((angle0Cos >= -1f && angle0Cos <= 1f) && (angle1Cos >= -1f && angle1Cos <= 1f))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1417));
		float L_46 = V_5;
		if ((!(((float)L_46) >= ((float)(-1.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_47 = V_5;
		if ((!(((float)L_47) <= ((float)(1.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_48 = V_6;
		if ((!(((float)L_48) >= ((float)(-1.0f)))))
		{
			goto IL_00ba;
		}
	}
	{
		float L_49 = V_6;
		G_B10_0 = ((((int32_t)((!(((float)L_49) <= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B10_0 = 0;
	}

IL_00bb:
	{
		G_B12_0 = G_B10_0;
		goto IL_00be;
	}

IL_00bd:
	{
		G_B12_0 = 0;
	}

IL_00be:
	{
		V_9 = (bool)G_B12_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1418));
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_00e8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1419));
		// outAngles[0] = Mathf.Acos(angle0Cos) * Mathf.Rad2Deg;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1420));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_51 = ___outAngles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_51);
		float L_53 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1428));
		float L_54;
		L_54 = acosf(L_53);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1428));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply((float)L_54, (float)(57.2957802f))));
		// outAngles[1] = Mathf.Acos(angle1Cos) * Mathf.Rad2Deg;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1421));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_55 = ___outAngles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_56 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_55);
		float L_57 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1429));
		float L_58;
		L_58 = acosf(L_57);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1429));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_multiply((float)L_58, (float)(57.2957802f))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1422));
	}

IL_00e8:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1423));
		V_8 = (bool)1;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1424));
		bool L_59 = V_8;
		return L_59;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.IK.LimbSolver2D::get_flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707 (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 665));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 666));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 667));
		// get { return m_Flip; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 668));
		bool L_0 = __this->get_m_Flip_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Flip; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 669));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.LimbSolver2D::set_flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_set_flip_m7443E0EE70067423B7E15454739D991CB6BA8D9A (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_set_flip_m7443E0EE70067423B7E15454739D991CB6BA8D9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_set_flip_m7443E0EE70067423B7E15454739D991CB6BA8D9A_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_set_flip_m7443E0EE70067423B7E15454739D991CB6BA8D9A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 670));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 671));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 672));
		// set { m_Flip = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 673));
		bool L_0 = ___value0;
		__this->set_m_Flip_10(L_0);
		// set { m_Flip = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 674));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.LimbSolver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoInitialize_m9B227AF3EE7EF95B43440E79EB89066843F9D71B (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_DoInitialize_m9B227AF3EE7EF95B43440E79EB89066843F9D71B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_DoInitialize_m9B227AF3EE7EF95B43440E79EB89066843F9D71B_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_DoInitialize_m9B227AF3EE7EF95B43440E79EB89066843F9D71B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 675));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 676));
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * G_B3_0 = NULL;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * G_B1_0 = NULL;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * G_B4_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 677));
		// m_Chain.transformCount = m_Chain.effector == null || IKUtility.GetAncestorCount(m_Chain.effector) < 2 ? 0 : 3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 678));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = __this->get_m_Chain_9();
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 681));
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 681));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 682));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 682));
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B3_0 = L_0;
			goto IL_0030;
		}
	}
	{
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_4 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 683));
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 683));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 684));
		int32_t L_6;
		L_6 = IKUtility_GetAncestorCount_m66BF38868832D92A4DC53F9948248E2695F12410(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 684));
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0030;
		}
	}
	{
		G_B4_0 = 3;
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 685));
		NullCheck(G_B4_1);
		IKChain2D_set_transformCount_m71CA735D9E8E3E1FD01FCB2AF2B1A03074A04511(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 685));
		// base.DoInitialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 679));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 686));
		Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 686));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 680));
		return;
	}
}
// System.Int32 UnityEngine.U2D.IK.LimbSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LimbSolver2D_GetChainCount_m1A66887522C4220AAC6B67C058EAB0777F2F5461 (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_GetChainCount_m1A66887522C4220AAC6B67C058EAB0777F2F5461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_GetChainCount_m1A66887522C4220AAC6B67C058EAB0777F2F5461_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_GetChainCount_m1A66887522C4220AAC6B67C058EAB0777F2F5461_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 687));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 688));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 689));
		// return 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 690));
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 691));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.LimbSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * LimbSolver2D_GetChain_mE667E617107DF15290736582537457D148EA0C3C (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_GetChain_mE667E617107DF15290736582537457D148EA0C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_GetChain_mE667E617107DF15290736582537457D148EA0C3C_RuntimeMethod_var);
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_GetChain_mE667E617107DF15290736582537457D148EA0C3C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 692));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 693));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 694));
		// return m_Chain;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 695));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = __this->get_m_Chain_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 696));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.LimbSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoPrepare_mBE932A922E069AB00BBB1D43D17513D8B418DEEB (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_DoPrepare_mBE932A922E069AB00BBB1D43D17513D8B418DEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_DoPrepare_mBE932A922E069AB00BBB1D43D17513D8B418DEEB_RuntimeMethod_var);
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_DoPrepare_mBE932A922E069AB00BBB1D43D17513D8B418DEEB_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 697));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 698));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 699));
		// var lengths = m_Chain.lengths;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 700));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 707));
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1;
		L_1 = IKChain2D_get_lengths_mF25A01AAA5E9A0C2D6E4B1F87F29FFF63468E75D(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 707));
		V_0 = L_1;
		// m_Positions[0] = m_Chain.transforms[0].position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 701));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = __this->get_m_Positions_11();
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_3 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 708));
		NullCheck(L_3);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_4;
		L_4 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 708));
		NullCheck(L_4);
		int32_t L_5 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 709));
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 709));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7);
		// m_Positions[1] = m_Chain.transforms[1].position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 702));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_m_Positions_11();
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_9 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 710));
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10;
		L_10 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 710));
		NullCheck(L_10);
		int32_t L_11 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 711));
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 711));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_13);
		// m_Positions[2] = m_Chain.transforms[2].position;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 703));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = __this->get_m_Positions_11();
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_15 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 712));
		NullCheck(L_15);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_16;
		L_16 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_15, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 712));
		NullCheck(L_16);
		int32_t L_17 = 2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 713));
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 713));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_19);
		// m_Lengths[0] = lengths[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 704));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = __this->get_m_Lengths_12();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_23);
		// m_Lengths[1] = lengths[1];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 705));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = __this->get_m_Lengths_12();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_27);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 706));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.LimbSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoUpdateIK_mA69D30D60865E704661D4BF5FD6DFFFE62A893A3 (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_DoUpdateIK_mA69D30D60865E704661D4BF5FD6DFFFE62A893A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D_DoUpdateIK_mA69D30D60865E704661D4BF5FD6DFFFE62A893A3_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	float V_3 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___effectorPositions0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D_DoUpdateIK_mA69D30D60865E704661D4BF5FD6DFFFE62A893A3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 714));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 715));
	int32_t G_B3_0 = 0;
	float G_B7_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 716));
		// Vector3 effectorPosition = effectorPositions[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 717));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___effectorPositions0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 729));
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 729));
		V_0 = L_1;
		// Vector2 effectorLocalPosition2D = m_Chain.transforms[0].InverseTransformPoint(effectorPosition);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 718));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 730));
		NullCheck(L_2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3;
		L_3 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 730));
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 731));
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_5, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 731));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 732));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 732));
		V_1 = L_8;
		// effectorPosition = m_Chain.transforms[0].TransformPoint(effectorLocalPosition2D);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 719));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_9 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 733));
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10;
		L_10 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 733));
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 734));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 734));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 735));
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_12, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 735));
		V_0 = L_15;
		// if (effectorLocalPosition2D.sqrMagnitude > 0f && Limb.Solve(effectorPosition, m_Lengths, m_Positions, ref m_Angles))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 720));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 736));
		float L_16;
		L_16 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 736));
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = __this->get_m_Lengths_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = __this->get_m_Positions_11();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_20 = __this->get_address_of_m_Angles_13();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 737));
		bool L_21;
		L_21 = Limb_Solve_m972DC483BE62D28C354BB162A4418EA875CC117C(L_17, L_18, L_19, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_20, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 737));
		G_B3_0 = ((int32_t)(L_21));
		goto IL_0064;
	}

IL_0063:
	{
		G_B3_0 = 0;
	}

IL_0064:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 721));
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_015f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 722));
		// float flipSign = flip ? -1f : 1f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 738));
		bool L_23;
		L_23 = LimbSolver2D_get_flip_mFBD38C46874A7F08949B5A0302D0F2B6BBA08707(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 738));
		if (L_23)
		{
			goto IL_007b;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_0080;
	}

IL_007b:
	{
		G_B7_0 = (-1.0f);
	}

IL_0080:
	{
		V_3 = G_B7_0;
		// m_Chain.transforms[0].localRotation *= Quaternion.FromToRotation(Vector3.right, effectorLocalPosition2D) * Quaternion.FromToRotation(m_Chain.transforms[1].localPosition, Vector3.right);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 724));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_24 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 739));
		NullCheck(L_24);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_25;
		L_25 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_24, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 739));
		NullCheck(L_25);
		int32_t L_26 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 740));
		NullCheck(L_28);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_28, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 740));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 741));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 741));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 742));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 742));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 743));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_30, L_32, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 743));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_34 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 744));
		NullCheck(L_34);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_35;
		L_35 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_34, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 744));
		NullCheck(L_35);
		int32_t L_36 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 745));
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_37, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 745));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 746));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 746));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 747));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_38, L_39, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 747));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 748));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_33, L_40, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 748));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 749));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42;
		L_42 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_29, L_41, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 749));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 750));
		NullCheck(L_28);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_28, L_42, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 750));
		// m_Chain.transforms[0].localRotation *= Quaternion.AngleAxis(flipSign * m_Angles[0], Vector3.forward);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 725));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_43 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 751));
		NullCheck(L_43);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_44;
		L_44 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_43, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 751));
		NullCheck(L_44);
		int32_t L_45 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = L_46;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 752));
		NullCheck(L_47);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
		L_48 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_47, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 752));
		float L_49 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = __this->get_m_Angles_13();
		NullCheck(L_50);
		int32_t L_51 = 0;
		float L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 753));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 753));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 754));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		L_54 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_multiply((float)L_49, (float)L_52)), L_53, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 754));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 755));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_48, L_54, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 755));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 756));
		NullCheck(L_47);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_47, L_55, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 756));
		// m_Chain.transforms[1].localRotation *= Quaternion.FromToRotation(Vector3.right, m_Chain.transforms[1].InverseTransformPoint(effectorPosition)) * Quaternion.FromToRotation(m_Chain.transforms[2].localPosition, Vector3.right);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 726));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_56 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 757));
		NullCheck(L_56);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_57;
		L_57 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_56, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 757));
		NullCheck(L_57);
		int32_t L_58 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = L_59;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 758));
		NullCheck(L_60);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61;
		L_61 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_60, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 758));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 759));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 759));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_63 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 760));
		NullCheck(L_63);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_64;
		L_64 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_63, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 760));
		NullCheck(L_64);
		int32_t L_65 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 761));
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_66, L_67, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 761));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 762));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69;
		L_69 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_62, L_68, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 762));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_70 = __this->get_m_Chain_9();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 763));
		NullCheck(L_70);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_71;
		L_71 = IKChain2D_get_transforms_m1CF36244C840CA67533FF798D82DEAAFF121F86B(L_70, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 763));
		NullCheck(L_71);
		int32_t L_72 = 2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 764));
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_73, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 764));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 765));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 765));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 766));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_76;
		L_76 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_74, L_75, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 766));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 767));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77;
		L_77 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_69, L_76, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 767));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 768));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_61, L_77, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 768));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 769));
		NullCheck(L_60);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_60, L_78, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 769));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 727));
	}

IL_015f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 728));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.LimbSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D__ctor_m592941CDC674268A88E60FA51432B9CC67753B36 (LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D__ctor_m592941CDC674268A88E60FA51432B9CC67753B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimbSolver2D_t7853B3E9E5644B3A9FE624BCF58FD4279E5D2611_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(LimbSolver2D__ctor_m592941CDC674268A88E60FA51432B9CC67753B36_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LimbSolver2D__ctor_m592941CDC674268A88E60FA51432B9CC67753B36_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 770));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 771));
	{
		// private IKChain2D m_Chain = new IKChain2D();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 772));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 776));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_0 = (IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *)il2cpp_codegen_object_new(IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_il2cpp_TypeInfo_var);
		IKChain2D__ctor_m6551D974C5CCD2BC3BE58B13BB2E2513A66CC620(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 776));
		__this->set_m_Chain_9(L_0);
		// private Vector3[] m_Positions = new Vector3[3];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 773));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_Positions_11(L_1);
		// private float[] m_Lengths = new float[2];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 774));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Lengths_12(L_2);
		// private float[] m_Angles = new float[2];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 775));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Angles_13(L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 777));
		Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 777));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.U2D.IK.Solver2D::get_chainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 778));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 779));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 780));
		// get { return GetChainCount(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 781));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 783));
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 783));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return GetChainCount(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 782));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_constrainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 784));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 785));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 786));
		// get { return m_ConstrainRotation; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 787));
		bool L_0 = __this->get_m_ConstrainRotation_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ConstrainRotation; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 788));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::set_constrainRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_constrainRotation_m818E6EB1F86D51E4B3DAED77D2770327EFF2D026 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_set_constrainRotation_m818E6EB1F86D51E4B3DAED77D2770327EFF2D026_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_set_constrainRotation_m818E6EB1F86D51E4B3DAED77D2770327EFF2D026_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_set_constrainRotation_m818E6EB1F86D51E4B3DAED77D2770327EFF2D026_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 789));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 790));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 791));
		// set { m_ConstrainRotation = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 792));
		bool L_0 = ___value0;
		__this->set_m_ConstrainRotation_4(L_0);
		// set { m_ConstrainRotation = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 793));
		return;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_solveFromDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_solveFromDefaultPose_m3E70B852F77C1A9ADFE2BC9C7F15278B3EF4389C (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_get_solveFromDefaultPose_m3E70B852F77C1A9ADFE2BC9C7F15278B3EF4389C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_get_solveFromDefaultPose_m3E70B852F77C1A9ADFE2BC9C7F15278B3EF4389C_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_get_solveFromDefaultPose_m3E70B852F77C1A9ADFE2BC9C7F15278B3EF4389C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 794));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 795));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 796));
		// get { return m_SolveFromDefaultPose; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 797));
		bool L_0 = __this->get_m_SolveFromDefaultPose_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SolveFromDefaultPose; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 798));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::set_solveFromDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_solveFromDefaultPose_mF960A44F143699F4AFABCD915AEC31FBB5FE00C0 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_set_solveFromDefaultPose_mF960A44F143699F4AFABCD915AEC31FBB5FE00C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_set_solveFromDefaultPose_mF960A44F143699F4AFABCD915AEC31FBB5FE00C0_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_set_solveFromDefaultPose_mF960A44F143699F4AFABCD915AEC31FBB5FE00C0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 799));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 800));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 801));
		// set { m_SolveFromDefaultPose = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 802));
		bool L_0 = ___value0;
		__this->set_m_SolveFromDefaultPose_5(L_0);
		// set { m_SolveFromDefaultPose = value; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 803));
		return;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 804));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 805));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 806));
		// get { return Validate(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 807));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 809));
		bool L_0;
		L_0 = Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 809));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Validate(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 808));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::get_allChainsHaveTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 810));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 811));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 812));
		// get { return HasTargets(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 813));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 815));
		bool L_0;
		L_0 = Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 815));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return HasTargets(); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 814));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.U2D.IK.Solver2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05_RuntimeMethod_var);
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 816));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 817));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 818));
		// get { return m_Weight; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 819));
		float L_0 = __this->get_m_Weight_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Weight; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 820));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_weight_m25C08DD643429FAB1323C054A56D155C0506DCFB (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_set_weight_m25C08DD643429FAB1323C054A56D155C0506DCFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_set_weight_m25C08DD643429FAB1323C054A56D155C0506DCFB_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_set_weight_m25C08DD643429FAB1323C054A56D155C0506DCFB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 821));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 822));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 823));
		// set { m_Weight = Mathf.Clamp01(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 824));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 826));
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 826));
		__this->set_m_Weight_6(L_1);
		// set { m_Weight = Mathf.Clamp01(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 825));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnEnable_mDCEFAECCB63D067D4BE7C6CBEB72DB240AAF6BFB (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_OnEnable_mDCEFAECCB63D067D4BE7C6CBEB72DB240AAF6BFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_OnEnable_mDCEFAECCB63D067D4BE7C6CBEB72DB240AAF6BFB_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_OnEnable_mDCEFAECCB63D067D4BE7C6CBEB72DB240AAF6BFB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 827));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 828));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 829));
		// private void OnEnable() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 830));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnValidate_m4D5F8DC53BF01B6258FCAC1392E847B87DC2D28B (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_OnValidate_m4D5F8DC53BF01B6258FCAC1392E847B87DC2D28B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_OnValidate_m4D5F8DC53BF01B6258FCAC1392E847B87DC2D28B_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_OnValidate_m4D5F8DC53BF01B6258FCAC1392E847B87DC2D28B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 831));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 832));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 833));
		// m_Weight = Mathf.Clamp01(m_Weight);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 834));
		float L_0 = __this->get_m_Weight_6();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 839));
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 839));
		__this->set_m_Weight_6(L_1);
		// if (!isValid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 835));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 840));
		bool L_2;
		L_2 = Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 840));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 836));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Initialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 837));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 841));
		Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 841));
	}

IL_0026:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 838));
		return;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404_RuntimeMethod_var);
	int32_t V_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_Validate_mDE546F070375AEC67486B07DAC9ACEB606646404_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 842));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 843));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 844));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 845));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 846));
		goto IL_0024;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 847));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 848));
		int32_t L_0 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 858));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1;
		L_1 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 858));
		V_1 = L_1;
		// if (!chain.isValid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 849));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 859));
		NullCheck(L_2);
		bool L_3;
		L_3 = IKChain2D_get_isValid_mE3AC818DEB38A876C8919A6D5B1C3AA6F225BC8A(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 859));
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 850));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 851));
		V_3 = (bool)0;
		goto IL_003c;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 852));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 853));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 854));
		int32_t L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 860));
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 860));
		V_4 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 855));
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// return DoValidate();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 856));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 861));
		bool L_9;
		L_9 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.U2D.IK.Solver2D::DoValidate() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 861));
		V_3 = L_9;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 857));
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::HasTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069_RuntimeMethod_var);
	int32_t V_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_HasTargets_m40811DD2D576F5C640AEEEBE557C756925AA4069_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 862));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 863));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 864));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 865));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 866));
		goto IL_0027;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 867));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 868));
		int32_t L_0 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 878));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1;
		L_1 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 878));
		V_1 = L_1;
		// if (chain.target == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 869));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 879));
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 879));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 880));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 880));
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 870));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 871));
		V_3 = (bool)0;
		goto IL_003a;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 872));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 873));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 874));
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 881));
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 881));
		V_4 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 875));
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 876));
		V_3 = (bool)1;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 877));
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED_RuntimeMethod_var);
	int32_t V_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_Initialize_m1C02ACEDC29FC68935739489E69BE3E17F22A3ED_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 882));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 883));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 884));
		// DoInitialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 885));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 896));
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.U2D.IK.Solver2D::DoInitialize() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 896));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 886));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 887));
		goto IL_0021;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 888));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 889));
		int32_t L_0 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 897));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1;
		L_1 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 897));
		V_1 = L_1;
		// chain.Initialize();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 890));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 898));
		NullCheck(L_2);
		IKChain2D_Initialize_mAD562B4CABDBD051BA9CCD30FD68BBF49990E3BA(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 898));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 891));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 892));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 893));
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 899));
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 899));
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 894));
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_000c;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 895));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416_RuntimeMethod_var);
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 900));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 901));
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 902));
		// var rootTransform = GetPlaneRootTransform();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 903));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 924));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 924));
		V_0 = L_0;
		// if (rootTransform != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 904));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 925));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 925));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 905));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 906));
		// m_Plane.normal = rootTransform.forward;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 907));
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_4 = __this->get_address_of_m_Plane_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 926));
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 926));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 927));
		Plane_set_normal_m4F84FE27CD58E2B3EE27DB108576B570EF8AE723((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_4, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 927));
		// m_Plane.distance = -Vector3.Dot(m_Plane.normal, rootTransform.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 908));
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_7 = __this->get_address_of_m_Plane_7();
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_8 = __this->get_address_of_m_Plane_7();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 928));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 928));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 929));
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 929));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 930));
		float L_12;
		L_12 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_9, L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 930));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 931));
		Plane_set_distance_m7B427E5F6F6D1DD44C96A503980F4627CDD4A59A((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_7, ((-L_12)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 931));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 909));
	}

IL_004a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 910));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 911));
		goto IL_008a;
	}

IL_004e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 912));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 913));
		int32_t L_13 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 932));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_14;
		L_14 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 932));
		V_3 = L_14;
		// var constrainTargetRotation = constrainRotation && chain.target != null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 914));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 933));
		bool L_15;
		L_15 = Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 933));
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_16 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 934));
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_16, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 934));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 935));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 935));
		G_B6_0 = ((int32_t)(L_18));
		goto IL_006e;
	}

IL_006d:
	{
		G_B6_0 = 0;
	}

IL_006e:
	{
		V_4 = (bool)G_B6_0;
		// if (m_SolveFromDefaultPose)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 915));
		bool L_19 = __this->get_m_SolveFromDefaultPose_5();
		V_5 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 916));
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0085;
		}
	}
	{
		// chain.RestoreDefaultPose(constrainTargetRotation);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 917));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_21 = V_3;
		bool L_22 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 936));
		NullCheck(L_21);
		IKChain2D_RestoreDefaultPose_m9078C5D10EB72B9F01682D9EE0419BCEBCD61D4C(L_21, L_22, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 936));
	}

IL_0085:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 918));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 919));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 920));
		int32_t L_24 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 937));
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 937));
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 921));
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		// DoPrepare();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 922));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 938));
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.U2D.IK.Solver2D::DoPrepare() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 938));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 923));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::PrepareEffectorPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F_RuntimeMethod_var);
	int32_t V_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 939));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 940));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 941));
		// m_TargetPositions.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 942));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_m_TargetPositions_8();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 955));
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 955));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 943));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 944));
		goto IL_0045;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 945));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 946));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 956));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2;
		L_2 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 956));
		V_1 = L_2;
		// if (chain.target)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 947));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 957));
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 957));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 958));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 958));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 948));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// m_TargetPositions.Add(chain.target.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 949));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = __this->get_m_TargetPositions_8();
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 959));
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 959));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 960));
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 960));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 961));
		NullCheck(L_7);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_7, L_10, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 961));
	}

IL_0040:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 950));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 951));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 952));
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 962));
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 962));
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 953));
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0011;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 954));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::UpdateIK(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, float ___globalWeight0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___globalWeight0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_UpdateIK_m91BF63A9B6B1A3D63FE7C3E5A0FF050A0152B654_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 963));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 964));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 965));
		// if(allChainsHaveTargets)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 966));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 973));
		bool L_0;
		L_0 = Solver2D_get_allChainsHaveTargets_mC0D6635D31377E8F0C5F535B0F3D8A147C430460(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 973));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 967));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 968));
		// PrepareEffectorPositions();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 969));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 974));
		Solver2D_PrepareEffectorPositions_m9A85A1F76C32A676C46488E2BF76BC12C9044C8F(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 974));
		// UpdateIK(m_TargetPositions, globalWeight);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 970));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = __this->get_m_TargetPositions_8();
		float L_3 = ___globalWeight0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 975));
		Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB(__this, L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 975));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 971));
	}

IL_0022:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 972));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::UpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions0, float ___globalWeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB_RuntimeMethod_var);
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___positions0), (&___globalWeight1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_6), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_UpdateIK_mA42642E47A3B527871C3128FE7520C66EBC5A0CB_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 976));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 977));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 978));
		// if(positions.Count != chainCount)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 979));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___positions0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1013));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_0, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1013));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1014));
		int32_t L_2;
		L_2 = Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1014));
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 980));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 981));
		goto IL_00e1;
	}

IL_001b:
	{
		// float finalWeight = globalWeight * weight;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 982));
		float L_4 = ___globalWeight1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1015));
		float L_5;
		L_5 = Solver2D_get_weight_mC28624569969B5FE6C0319251C27D5C1EE42CE05(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1015));
		V_0 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		// if (finalWeight == 0f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 983));
		float L_6 = V_0;
		V_2 = (bool)((((float)L_6) == ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 984));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 985));
		goto IL_00e1;
	}

IL_0035:
	{
		// if (!isValid)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 986));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1016));
		bool L_8;
		L_8 = Solver2D_get_isValid_m180D4F0261F10FD3058E9A3D8D418BA098A8B54B(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1016));
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 987));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// return;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 988));
		goto IL_00e1;
	}

IL_0047:
	{
		// Prepare();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 989));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1017));
		Solver2D_Prepare_m0119AF48F7073E9E64E97E208B9D564E8911F416(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1017));
		// if (finalWeight < 1f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 990));
		float L_10 = V_0;
		V_4 = (bool)((((float)L_10) < ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 991));
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// StoreLocalRotations();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 992));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1018));
		Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1018));
	}

IL_0063:
	{
		// DoUpdateIK(positions);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 993));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_12 = ___positions0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1019));
		VirtActionInvoker1< List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * >::Invoke(7 /* System.Void UnityEngine.U2D.IK.Solver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>) */, __this, L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1019));
		// if (constrainRotation)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 994));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1020));
		bool L_13;
		L_13 = Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1020));
		V_5 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 995));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00cb;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 996));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 997));
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 998));
		goto IL_00ba;
	}

IL_007d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 999));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1000));
		int32_t L_15 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1021));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_16;
		L_16 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1021));
		V_7 = L_16;
		// if (chain.target)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1001));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_17 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1022));
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_17, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1022));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1023));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_18, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1023));
		V_8 = L_19;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1002));
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// chain.effector.rotation = chain.target.rotation;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1003));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_21 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1024));
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = IKChain2D_get_effector_m4C8436D4F6EF2A06DE5D4E852BA7C99D4D0E9046(L_21, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1024));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_23 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1025));
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_23, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1025));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1026));
		NullCheck(L_24);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_24, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1026));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1027));
		NullCheck(L_22);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_22, L_25, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1027));
	}

IL_00b3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1004));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1005));
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00ba:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1006));
		int32_t L_27 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1028));
		int32_t L_28;
		L_28 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1028));
		V_9 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1007));
		bool L_29 = V_9;
		if (L_29)
		{
			goto IL_007d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1008));
	}

IL_00cb:
	{
		// if (finalWeight < 1f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1009));
		float L_30 = V_0;
		V_10 = (bool)((((float)L_30) < ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1010));
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00e1;
		}
	}
	{
		// BlendFkToIk(finalWeight);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1011));
		float L_32 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1029));
		Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE(__this, L_32, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1029));
	}

IL_00e1:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1012));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE_RuntimeMethod_var);
	int32_t V_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_StoreLocalRotations_mE44B67DBA2B736BCD68ADA7AE912973BA4DFF6EE_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1030));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1031));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1032));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1033));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1034));
		goto IL_001a;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1035));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1036));
		int32_t L_0 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1043));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1;
		L_1 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1043));
		V_1 = L_1;
		// chain.StoreLocalRotations();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1037));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1044));
		NullCheck(L_2);
		IKChain2D_StoreLocalRotations_m7E529365BE433D59BB1D2A4282B4B21B1DC4E400(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1044));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1038));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1039));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1040));
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1045));
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1045));
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1041));
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1042));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::BlendFkToIk(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, float ___finalWeight0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE_RuntimeMethod_var);
	int32_t V_0 = 0;
	IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___finalWeight0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_BlendFkToIk_m6862D6599516FBAA8680E8C81D73C1A04636E4AE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1046));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1047));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1048));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1049));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1050));
		goto IL_0034;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1051));
		// var chain = GetChain(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1052));
		int32_t L_0 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1060));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_1;
		L_1 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1060));
		V_1 = L_1;
		// var constrainTargetRotation = constrainRotation && chain.target != null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1053));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1061));
		bool L_2;
		L_2 = Solver2D_get_constrainRotation_mAD2044675730E793B93AD79D522A77CC901965B0(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1061));
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1062));
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = IKChain2D_get_target_mDD9973A4AC2F4FA94607EC09A6324B8E9CEEFD90(L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1062));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1063));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1063));
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_2 = (bool)G_B4_0;
		// chain.BlendFkToIk(finalWeight, constrainTargetRotation);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1054));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_6 = V_1;
		float L_7 = ___finalWeight0;
		bool L_8 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1064));
		NullCheck(L_6);
		IKChain2D_BlendFkToIk_m45CA3EF8F3AE14674F913AF9F38A7BD3E42AEBA8(L_6, L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1064));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1055));
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1056));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1057));
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1065));
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.U2D.IK.Solver2D::GetChainCount() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1065));
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1058));
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1059));
		return;
	}
}
// System.Boolean UnityEngine.U2D.IK.Solver2D::DoValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_DoValidate_mBE2653329D0E6CB75D6D702D08D5AB15C36DF134 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_DoValidate_mBE2653329D0E6CB75D6D702D08D5AB15C36DF134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_DoValidate_mBE2653329D0E6CB75D6D702D08D5AB15C36DF134_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_DoValidate_mBE2653329D0E6CB75D6D702D08D5AB15C36DF134_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1066));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1067));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1068));
		// protected virtual bool DoValidate() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1069));
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// protected virtual bool DoValidate() { return true; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1070));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_DoInitialize_mDCE1B7D63FE599641A0634A66FD85993D5BE0265_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1071));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1072));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1073));
		// protected virtual void DoInitialize() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1074));
		return;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoPrepare_m3EA5C1FB98720BE063FECEF45CD43F97074362A1 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_DoPrepare_m3EA5C1FB98720BE063FECEF45CD43F97074362A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_DoPrepare_m3EA5C1FB98720BE063FECEF45CD43F97074362A1_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_DoPrepare_m3EA5C1FB98720BE063FECEF45CD43F97074362A1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1075));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1076));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1077));
		// protected virtual void DoPrepare() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1078));
		return;
	}
}
// UnityEngine.Transform UnityEngine.U2D.IK.Solver2D::GetPlaneRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Solver2D_GetPlaneRootTransform_m68283288A5D143586073C4C6A5F84C32DD256076 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_GetPlaneRootTransform_m68283288A5D143586073C4C6A5F84C32DD256076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_GetPlaneRootTransform_m68283288A5D143586073C4C6A5F84C32DD256076_RuntimeMethod_var);
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_GetPlaneRootTransform_m68283288A5D143586073C4C6A5F84C32DD256076_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1079));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1080));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1081));
		// if (chainCount > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1082));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1087));
		int32_t L_0;
		L_0 = Solver2D_get_chainCount_mB7D56B5D3D0699CAE3159E482E6FD5EE8F23D737(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1087));
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1083));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return GetChain(0).rootTransform;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1084));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1088));
		IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F * L_2;
		L_2 = VirtFuncInvoker1< IKChain2D_tDF0260969B3AF0AF72F7F6B0F881F028B8927D8F *, int32_t >::Invoke(5 /* UnityEngine.U2D.IK.IKChain2D UnityEngine.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1088));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1089));
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = IKChain2D_get_rootTransform_mEA22E774F957B3E09673D30A310923E107EB0757(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1089));
		V_1 = L_3;
		goto IL_0021;
	}

IL_001d:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1085));
		V_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1086));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.U2D.IK.Solver2D::GetPointOnSolverPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___worldPosition0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_GetPointOnSolverPlane_mB1860607F0C31502574E1D8E80C55CC991A00301_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1090));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1091));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1092));
		// return GetPlaneRootTransform().InverseTransformPoint(m_Plane.ClosestPointOnPlane(worldPosition));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1093));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1095));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1095));
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_1 = __this->get_address_of_m_Plane_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___worldPosition0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1096));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_1, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1096));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1097));
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_0, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1097));
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1094));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector3 UnityEngine.U2D.IK.Solver2D::GetWorldPositionFromSolverPlanePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00 (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___planePoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00_RuntimeMethod_var);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___planePoint0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D_GetWorldPositionFromSolverPlanePoint_m05071085502CDC4F25D5F8549094406937B40A00_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1098));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1099));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1100));
		// return GetPlaneRootTransform().TransformPoint(planePoint);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1101));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1103));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1103));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___planePoint0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1104));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1104));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1105));
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_0, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1105));
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1102));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C (Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2D_t8A225947B36460AC49D5388511B3BBE7E03FB2B6_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2D__ctor_mD0FAAA85839E2CE1F6727F924EECA48F9CBA0E8C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1106));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1107));
	{
		// private bool m_ConstrainRotation = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1108));
		__this->set_m_ConstrainRotation_4((bool)1);
		// private bool m_SolveFromDefaultPose = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1109));
		__this->set_m_SolveFromDefaultPose_5((bool)1);
		// private float m_Weight = 1f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1110));
		__this->set_m_Weight_6((1.0f));
		// private List<Vector3> m_TargetPositions = new List<Vector3>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1111));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1112));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1112));
		__this->set_m_TargetPositions_8(L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1113));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1113));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.U2D.IK.Solver2DMenuAttribute::get_menuPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Solver2DMenuAttribute_get_menuPath_m14306AE406D2C9D583C3C6813CCBAD4708C1086D (Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2DMenuAttribute_get_menuPath_m14306AE406D2C9D583C3C6813CCBAD4708C1086D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2DMenuAttribute_get_menuPath_m14306AE406D2C9D583C3C6813CCBAD4708C1086D_RuntimeMethod_var);
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2DMenuAttribute_get_menuPath_m14306AE406D2C9D583C3C6813CCBAD4708C1086D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1114));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1115));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1116));
		// get { return m_MenuPath; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1117));
		String_t* L_0 = __this->get_m_MenuPath_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MenuPath; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1118));
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.IK.Solver2DMenuAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2DMenuAttribute__ctor_mED0E68602FAE36A276FEEFEBC56D19579E565D00 (Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713 * __this, String_t* ____menuPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2DMenuAttribute__ctor_mED0E68602FAE36A276FEEFEBC56D19579E565D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver2DMenuAttribute_tD2DF460A88F66EA84C3FE59F208BA336BF57A713_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Solver2DMenuAttribute__ctor_mED0E68602FAE36A276FEEFEBC56D19579E565D00_RuntimeMethod_var);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&____menuPath0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Solver2DMenuAttribute__ctor_mED0E68602FAE36A276FEEFEBC56D19579E565D00_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1120));
	{
		// public Solver2DMenuAttribute(string _menuPath)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1121));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1125));
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1125));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1122));
		// m_MenuPath = _menuPath;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1123));
		String_t* L_0 = ____menuPath0;
		__this->set_m_MenuPath_0(L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_IK_Runtime + 1124));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3493));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3494));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3495));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3496));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3498));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3498));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3497));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3487));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3488));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3489));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3490));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3492));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3492));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3491));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6533));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6534));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6535));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6536));
		String_t* L_0 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6539));
		Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_inline(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6539));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6537));
		String_t* L_1 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6540));
		Profiler_BeginSampleImpl_mF1EE2C3EB23D01B3F9A25C43C8BC82BFC4F3B5A0(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6540));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6538));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___v0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4079));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4080));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4081));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4082));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4084));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4084));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4083));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___v0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4085));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4086));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4087));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4088));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4090));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4090));
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4089));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4030));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4031));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4032));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4033));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4035));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4035));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4034));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4024));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4025));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4026));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4027));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4029));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4029));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4028));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___d1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4060));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4061));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4062));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4063));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4065));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4065));
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4064));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___d0), (&___a1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4054));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4055));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4056));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4057));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4059));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4059));
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 4058));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___d1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3505));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3506));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3507));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3508));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3510));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3510));
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3509));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3370));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3371));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3372));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3373));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3374));
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1), (&___z2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3316));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3317));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3318));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3319));
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3320));
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3321));
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3322));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_inline (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___name0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6541));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6542));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6543));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6544));
		String_t* L_0 = ___name0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6549));
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6549));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6545));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6546));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6547));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6550));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31D159E683556C06B3B3963D92483B6867EB3233)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6550));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_RuntimeMethod_var)));
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6548));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3930));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3931));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3932));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3933));
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3934));
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 3935));
		return;
	}
}
