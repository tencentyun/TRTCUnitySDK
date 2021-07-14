#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_tE76E0893B2EEC846BBB4A783BBD5C27DF2DE1128;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t17C8B55A564DA54EA122843DD9A31BE5E251FC63;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_tD2CC6DC3A6C69BD8729844A35C28C9EFC0CC2FCF;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_tDA2D8FAFD02D362F032B0397F7060BB6D1D0D668;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tF18CA5AA122FDD12A1A3DEDDEC417CC451BE7354;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t1968002DB23B046C922FCFDDA51CFF7A092CA83E;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_tAE661EE553CAB9A4B955C9178DBB0D603654E90A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t4114E5650E90700839B97A38A51CC403F7B86413;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_tB6AADBED49867567C3938A7A5ADF2E48AF8F2B6B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t9E3D2E327BA6AD2AFAF6A5D99795298C999308C0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t5BAB10B9E93F1B1D55B626F54E1CC88DFBAC6A99;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t8E93851B8C70BC0FC483F79BE50FBB624C967975;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_t6CBD80881E945863E2520F43C0CFF8E5ED10627C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_t0DF38E612E551FAB099AABDE5A7CD8778F3ED727;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_tB3380D8F1FCBE732741A562481AC3A84C26F41E4;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_t1F4B7F71E6697C05888FA34E52D5C365B632BAE6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_tE92B8CD4A24B1937C24B3D9E4C55039C0DB0D59B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_t56F1A8F6A0E4FBE497233A7EF73E9BC931FFBCD2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t62E56B2FE0A433643B865A649D4305831E59A08D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_t40812E46F028DDBF3A7BDDCFC2541ECC4A2C1192;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t8E3921E601E57A0F15A5711D31EC6DC567086BF6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_t1AA0BFE3EB29F9435E43643FEF63AD6E3A4D0E93;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_tB7675743BCEA368971EF2543B2DCD2A6EF47E911;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_t9AFE07D04376322B0BECD03D05B45ACBB65A629F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_t6C2852AD18FB5BAD9A5970B077C09C96D24485D7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t8F0FF14791863393A155E9B4A499721E9750CDD0;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tA9B2B5F043D30A38CE43C9730D68436F1ECBFD52;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_t77AD944802F0939FEABA6B8FD577BA2A34FBBBFB;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_tD126C9D91CD46064B926420179FD443D2EC7C66F;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LitJson.JsonData[]
struct JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_tF6D083CD1514D8C0118BF8375919E0B035F56EA4;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// LitJson.ExporterFunc
struct ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t8A89A8564EADF5FFB8494092DFED7D7C063F1501;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// LitJson.IJsonWrapper
struct IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// LitJson.ImporterFunc
struct ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// LitJson.JsonData
struct JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C;
// LitJson.JsonException
struct JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB;
// LitJson.JsonWriter
struct JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LitJson.WriterContext
struct WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t10910652C532F836416B830512402940AA3BE7A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tEDE20848338764B0FC7F39C59539C676F59D16A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t5ADE0041E6F5EE617F0339E354AD8EAF9A9F9860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tDA2D8FAFD02D362F032B0397F7060BB6D1D0D668_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t513A53213DC8B135EEE2890B463069A349DF2ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t53A330CCCA62BDDF7BDD3CA6BBB5917A285026C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t5F264CDC4CEA214092684DB8AF7035FCB2346A50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBF8348C5EC180245FA7E9CB28699FB9FD5A414E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE24DE10421AC43ADCB1732119256C910319997F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t4114E5650E90700839B97A38A51CC403F7B86413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC;
IL2CPP_EXTERN_C String_t* _stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7;
IL2CPP_EXTERN_C String_t* _stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18;
IL2CPP_EXTERN_C String_t* _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
IL2CPP_EXTERN_C String_t* _stringLiteral464EA4526685475D814F5FF8C1459165CBF8967A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral65178450579333918C3BDA9FEBAE91C079EABDE7;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB44026C99001F09F5D70AE0AE9300ACDF0D6A660;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m30DB189F64628CBBADA667D33151B959717F1A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m32CCF3D314EDBD059524C61924F6199494A41476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6623E4B07C4137CAC4F6A585029DD7F27E169E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBCB00C5E9B2C77584C3ACEAD5D18109A91459BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCC8F92039CC236F405B97D659F8C7D64C4DCC991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExporterFunc_BeginInvoke_mF61A419040916FD6FFD56C1CE8B6C663E4A2D06F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExporterFunc_EndInvoke_m05231DBC4A98F43D32B583FEA6ECC5F2F585C558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImporterFunc_BeginInvoke_m7F362E9A3ECD14CA63DD8743AE97193FF9E5E25A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImporterFunc_EndInvoke_mF7309D1EEC5047232F0E477042B68CBC66221E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImporterFunc_Invoke_m38521C202654F6337653A0781233D0D71E48B56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_Equals_mA0F435E628457E85E08738502779643FFE2705C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetBoolean_m19B263477D96ED26CB7C2C57D8C2FB6AA319358A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetDouble_mF5B511D6D9CECAB90D05EF126DBFBF1BE5D9D4BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetInt_mCC2B968C1D0EA060CCE5EBE52CE5FDA1B798CAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetLong_m4E8B2D78FE311A18698E05C22506A115A3BA1F8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetString_m86D27FF3A3E9365C1FC38F45F0703C9AF7C004E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_ToJson_m206494EC7BA582E2D837A9CCCF119DB14D1E20DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_ToJson_m849A69B44F224A169D1A4954ED80EE3319D5170F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_ICollection_CopyTo_m1259E5E1FEFE91CFFD0A2CC2D0F1AF104D5F17FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_ICollection_get_Count_m7FCDF090BAFFD9D514ADC210E1304E3AFA56942F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_Contains_mA30B981D95AB1E51E032F678159D8A7D8C65CB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_GetEnumerator_m13CE04403E503A2A7592479E99F8EBF36F7B5C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_get_Item_m0B1332645E2E957F738D3C7AFEEB5D869D2B2EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_m8519163CAE9373A396345476865A8B5BC6E73C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IEnumerable_GetEnumerator_m2F27C62580223A0B4FD4F8B7580B9498BBEB50FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_Add_mF8C6CEDF198D7F0A48FB98E803C877AE8F7809A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_Clear_mAD44DBC117032D21B857DFE2F7AF0F403F31D746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_Contains_m1F8155776BF98DA4613C3AC73D000BB414F96083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_IndexOf_m0DBCB19A97AB2CCA775A0F624ED3776379BCA296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_Insert_mA73737904D2347EB21DE79C6CF77B163C799CE23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_RemoveAt_mB2BD3FFE84B1D3327E3DB5D58DD27C1DB71515F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_Remove_mAA67D1FCD4C03DDCB13C911D70165DD56C6F662B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_get_IsReadOnly_mACD961C0505D39739C93692639ED9A51CA797949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_get_Item_m3F849DC20A6A505BF9D0622980295DF6E6C3E080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IList_set_Item_m990F53A6CBB3049703B8675E457145608796C17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mF9D3823165BB2F03C22E2BEE932120931CF771B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ToString_m3BB6D5B119342EFE87BDBAFADB0E5204F9CA7543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_mD5C59FD7D74C4224D5C9310DE989B4E166E652DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Implicit_m8B8B8B2549508F4F02BEE1C78C3EC594B4FB95A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Implicit_m9134A12021BAE5A61B1F2EB1BA1257D773501496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_op_Implicit_mF135468CF0512DAFB7DA684E7BACAEECFB6141B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToJson_mF4E9BE233A39C7412AB51E6DFA2B3206FA508D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper__cctor_m11165D8B193AFE09A19581A8210668BE48C78D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_ToString_m1123C16A4C93485B3C520120225013F1FD20F18E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__cctor_m95FA593DD1861B4734FF3CBDCFEBEA2991F90EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4CDDDEC96753082A0F663A421698FA4208038892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C99D5806C838A678562A155AB79B47150BBF2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator_MoveNext_m4315460DFF47D650A6B50BBBCF1311D1937DFAEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator_Reset_m66D786001772AFBB6F1742A5BA777D360961AB1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator_get_Current_m54BE8568814512C4B61038881D22B643FC0BF928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator_get_Key_mC39C422060E4600882CDCF44AE800CD4F58A167B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryEnumerator_get_Value_m5F77EB7AAE8D844BFB6298B27B4693781B458C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m5EFCE1DB4C712F6029539FC78605DB20445EEB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m2D1A6B11F9A11EB9A317B918F697C3DBB0118967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2B7337BFE1C3D5D6EEEF22EF0C84D02884BB48C0 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct  Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB7675743BCEA368971EF2543B2DCD2A6EF47E911* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB6AADBED49867567C3938A7A5ADF2E48AF8F2B6B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1F4B7F71E6697C05888FA34E52D5C365B632BAE6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___entries_1)); }
	inline EntryU5BU5D_tB7675743BCEA368971EF2543B2DCD2A6EF47E911* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB7675743BCEA368971EF2543B2DCD2A6EF47E911** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB7675743BCEA368971EF2543B2DCD2A6EF47E911* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___keys_7)); }
	inline KeyCollection_tB6AADBED49867567C3938A7A5ADF2E48AF8F2B6B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB6AADBED49867567C3938A7A5ADF2E48AF8F2B6B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB6AADBED49867567C3938A7A5ADF2E48AF8F2B6B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ___values_8)); }
	inline ValueCollection_t1F4B7F71E6697C05888FA34E52D5C365B632BAE6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1F4B7F71E6697C05888FA34E52D5C365B632BAE6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1F4B7F71E6697C05888FA34E52D5C365B632BAE6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9AFE07D04376322B0BECD03D05B45ACBB65A629F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9E3D2E327BA6AD2AFAF6A5D99795298C999308C0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE92B8CD4A24B1937C24B3D9E4C55039C0DB0D59B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___entries_1)); }
	inline EntryU5BU5D_t9AFE07D04376322B0BECD03D05B45ACBB65A629F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9AFE07D04376322B0BECD03D05B45ACBB65A629F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9AFE07D04376322B0BECD03D05B45ACBB65A629F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___keys_7)); }
	inline KeyCollection_t9E3D2E327BA6AD2AFAF6A5D99795298C999308C0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9E3D2E327BA6AD2AFAF6A5D99795298C999308C0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9E3D2E327BA6AD2AFAF6A5D99795298C999308C0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ___values_8)); }
	inline ValueCollection_tE92B8CD4A24B1937C24B3D9E4C55039C0DB0D59B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE92B8CD4A24B1937C24B3D9E4C55039C0DB0D59B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE92B8CD4A24B1937C24B3D9E4C55039C0DB0D59B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___entries_1)); }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___keys_7)); }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___values_8)); }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6C2852AD18FB5BAD9A5970B077C09C96D24485D7* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5BAB10B9E93F1B1D55B626F54E1CC88DFBAC6A99 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t56F1A8F6A0E4FBE497233A7EF73E9BC931FFBCD2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___entries_1)); }
	inline EntryU5BU5D_t6C2852AD18FB5BAD9A5970B077C09C96D24485D7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6C2852AD18FB5BAD9A5970B077C09C96D24485D7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6C2852AD18FB5BAD9A5970B077C09C96D24485D7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___keys_7)); }
	inline KeyCollection_t5BAB10B9E93F1B1D55B626F54E1CC88DFBAC6A99 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5BAB10B9E93F1B1D55B626F54E1CC88DFBAC6A99 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5BAB10B9E93F1B1D55B626F54E1CC88DFBAC6A99 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ___values_8)); }
	inline ValueCollection_t56F1A8F6A0E4FBE497233A7EF73E9BC931FFBCD2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t56F1A8F6A0E4FBE497233A7EF73E9BC931FFBCD2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t56F1A8F6A0E4FBE497233A7EF73E9BC931FFBCD2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8F0FF14791863393A155E9B4A499721E9750CDD0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8E93851B8C70BC0FC483F79BE50FBB624C967975 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t62E56B2FE0A433643B865A649D4305831E59A08D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___entries_1)); }
	inline EntryU5BU5D_t8F0FF14791863393A155E9B4A499721E9750CDD0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8F0FF14791863393A155E9B4A499721E9750CDD0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8F0FF14791863393A155E9B4A499721E9750CDD0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___keys_7)); }
	inline KeyCollection_t8E93851B8C70BC0FC483F79BE50FBB624C967975 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8E93851B8C70BC0FC483F79BE50FBB624C967975 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8E93851B8C70BC0FC483F79BE50FBB624C967975 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ___values_8)); }
	inline ValueCollection_t62E56B2FE0A433643B865A649D4305831E59A08D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t62E56B2FE0A433643B865A649D4305831E59A08D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t62E56B2FE0A433643B865A649D4305831E59A08D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA9B2B5F043D30A38CE43C9730D68436F1ECBFD52* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6CBD80881E945863E2520F43C0CFF8E5ED10627C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t40812E46F028DDBF3A7BDDCFC2541ECC4A2C1192 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___entries_1)); }
	inline EntryU5BU5D_tA9B2B5F043D30A38CE43C9730D68436F1ECBFD52* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA9B2B5F043D30A38CE43C9730D68436F1ECBFD52** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA9B2B5F043D30A38CE43C9730D68436F1ECBFD52* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___keys_7)); }
	inline KeyCollection_t6CBD80881E945863E2520F43C0CFF8E5ED10627C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6CBD80881E945863E2520F43C0CFF8E5ED10627C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6CBD80881E945863E2520F43C0CFF8E5ED10627C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ___values_8)); }
	inline ValueCollection_t40812E46F028DDBF3A7BDDCFC2541ECC4A2C1192 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t40812E46F028DDBF3A7BDDCFC2541ECC4A2C1192 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t40812E46F028DDBF3A7BDDCFC2541ECC4A2C1192 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t77AD944802F0939FEABA6B8FD577BA2A34FBBBFB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0DF38E612E551FAB099AABDE5A7CD8778F3ED727 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8E3921E601E57A0F15A5711D31EC6DC567086BF6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___entries_1)); }
	inline EntryU5BU5D_t77AD944802F0939FEABA6B8FD577BA2A34FBBBFB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t77AD944802F0939FEABA6B8FD577BA2A34FBBBFB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t77AD944802F0939FEABA6B8FD577BA2A34FBBBFB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___keys_7)); }
	inline KeyCollection_t0DF38E612E551FAB099AABDE5A7CD8778F3ED727 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0DF38E612E551FAB099AABDE5A7CD8778F3ED727 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0DF38E612E551FAB099AABDE5A7CD8778F3ED727 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ___values_8)); }
	inline ValueCollection_t8E3921E601E57A0F15A5711D31EC6DC567086BF6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8E3921E601E57A0F15A5711D31EC6DC567086BF6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8E3921E601E57A0F15A5711D31EC6DC567086BF6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD126C9D91CD46064B926420179FD443D2EC7C66F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB3380D8F1FCBE732741A562481AC3A84C26F41E4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1AA0BFE3EB29F9435E43643FEF63AD6E3A4D0E93 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___entries_1)); }
	inline EntryU5BU5D_tD126C9D91CD46064B926420179FD443D2EC7C66F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD126C9D91CD46064B926420179FD443D2EC7C66F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD126C9D91CD46064B926420179FD443D2EC7C66F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___keys_7)); }
	inline KeyCollection_tB3380D8F1FCBE732741A562481AC3A84C26F41E4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB3380D8F1FCBE732741A562481AC3A84C26F41E4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB3380D8F1FCBE732741A562481AC3A84C26F41E4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ___values_8)); }
	inline ValueCollection_t1AA0BFE3EB29F9435E43643FEF63AD6E3A4D0E93 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1AA0BFE3EB29F9435E43643FEF63AD6E3A4D0E93 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1AA0BFE3EB29F9435E43643FEF63AD6E3A4D0E93 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct  List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t213C8CCF51326499DF837995BC25450C4FC4010A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.JsonData>
struct  List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F, ____items_1)); }
	inline JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62* get__items_1() const { return ____items_1; }
	inline JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F_StaticFields, ____emptyArray_5)); }
	inline JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonDataU5BU5D_tB3EBB336A2358DC5F228BFBD17E596FA2566BC62* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct  List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434, ____items_1)); }
	inline PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C* get__items_1() const { return ____items_1; }
	inline PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434_StaticFields, ____emptyArray_5)); }
	inline PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PropertyMetadataU5BU5D_tF975D93A022F631CC873759317A168B067F1224C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_tF6D083CD1514D8C0118BF8375919E0B035F56EA4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74, ____array_0)); }
	inline WriterContextU5BU5D_tF6D083CD1514D8C0118BF8375919E0B035F56EA4* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_tF6D083CD1514D8C0118BF8375919E0B035F56EA4** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_tF6D083CD1514D8C0118BF8375919E0B035F56EA4* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// LitJson.JsonMapper
struct  JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;
	// System.Collections.Generic.List`1<System.String> LitJson.JsonMapper::static_err_stack
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___static_err_stack_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache11
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache11_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache12
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache12_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache13
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache13_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache14
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache14_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache15
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache15_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache16
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache16_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache17
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache17_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache18
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache18_24;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__amU24cache19
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * ___U3CU3Ef__amU24cache19_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache1A
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache1A_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache1B
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache1B_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache1C
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache1C_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache1D
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache1D_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache1E
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache1E_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache1F
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache1F_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache20
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache20_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache21
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache21_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache22
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache22_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache23
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache23_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache24
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache24_36;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__amU24cache25
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___U3CU3Ef__amU24cache25_37;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datetime_format_1), (void*)value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_exporters_table_2), (void*)value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_exporters_table_3), (void*)value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_importers_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_importers_table_5), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_lock_7), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_8), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_lock_9), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_10), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_lock_11), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_12), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_lock_13), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___static_writer_14)); }
	inline JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_14), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_lock_15), (void*)value);
	}

	inline static int32_t get_offset_of_static_err_stack_16() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___static_err_stack_16)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_static_err_stack_16() const { return ___static_err_stack_16; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_static_err_stack_16() { return &___static_err_stack_16; }
	inline void set_static_err_stack_16(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___static_err_stack_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_err_stack_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_17() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache11_17)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache11_17() const { return ___U3CU3Ef__amU24cache11_17; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache11_17() { return &___U3CU3Ef__amU24cache11_17; }
	inline void set_U3CU3Ef__amU24cache11_17(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache11_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache11_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_18() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache12_18)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache12_18() const { return ___U3CU3Ef__amU24cache12_18; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache12_18() { return &___U3CU3Ef__amU24cache12_18; }
	inline void set_U3CU3Ef__amU24cache12_18(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache12_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache12_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_19() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache13_19)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache13_19() const { return ___U3CU3Ef__amU24cache13_19; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache13_19() { return &___U3CU3Ef__amU24cache13_19; }
	inline void set_U3CU3Ef__amU24cache13_19(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache13_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache13_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_20() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache14_20)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache14_20() const { return ___U3CU3Ef__amU24cache14_20; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache14_20() { return &___U3CU3Ef__amU24cache14_20; }
	inline void set_U3CU3Ef__amU24cache14_20(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache14_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache14_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_21() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache15_21)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache15_21() const { return ___U3CU3Ef__amU24cache15_21; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache15_21() { return &___U3CU3Ef__amU24cache15_21; }
	inline void set_U3CU3Ef__amU24cache15_21(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache15_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache15_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_22() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache16_22)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache16_22() const { return ___U3CU3Ef__amU24cache16_22; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache16_22() { return &___U3CU3Ef__amU24cache16_22; }
	inline void set_U3CU3Ef__amU24cache16_22(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache16_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache16_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_23() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache17_23)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache17_23() const { return ___U3CU3Ef__amU24cache17_23; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache17_23() { return &___U3CU3Ef__amU24cache17_23; }
	inline void set_U3CU3Ef__amU24cache17_23(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache17_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache17_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_24() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache18_24)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache18_24() const { return ___U3CU3Ef__amU24cache18_24; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache18_24() { return &___U3CU3Ef__amU24cache18_24; }
	inline void set_U3CU3Ef__amU24cache18_24(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache18_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache18_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_25() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache19_25)); }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * get_U3CU3Ef__amU24cache19_25() const { return ___U3CU3Ef__amU24cache19_25; }
	inline ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC ** get_address_of_U3CU3Ef__amU24cache19_25() { return &___U3CU3Ef__amU24cache19_25; }
	inline void set_U3CU3Ef__amU24cache19_25(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * value)
	{
		___U3CU3Ef__amU24cache19_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache19_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_26() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache1A_26)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache1A_26() const { return ___U3CU3Ef__amU24cache1A_26; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache1A_26() { return &___U3CU3Ef__amU24cache1A_26; }
	inline void set_U3CU3Ef__amU24cache1A_26(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache1A_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1A_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_27() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache1B_27)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache1B_27() const { return ___U3CU3Ef__amU24cache1B_27; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache1B_27() { return &___U3CU3Ef__amU24cache1B_27; }
	inline void set_U3CU3Ef__amU24cache1B_27(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache1B_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1B_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_28() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache1C_28)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache1C_28() const { return ___U3CU3Ef__amU24cache1C_28; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache1C_28() { return &___U3CU3Ef__amU24cache1C_28; }
	inline void set_U3CU3Ef__amU24cache1C_28(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache1C_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1C_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1D_29() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache1D_29)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache1D_29() const { return ___U3CU3Ef__amU24cache1D_29; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache1D_29() { return &___U3CU3Ef__amU24cache1D_29; }
	inline void set_U3CU3Ef__amU24cache1D_29(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache1D_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1D_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1E_30() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache1E_30)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache1E_30() const { return ___U3CU3Ef__amU24cache1E_30; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache1E_30() { return &___U3CU3Ef__amU24cache1E_30; }
	inline void set_U3CU3Ef__amU24cache1E_30(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache1E_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1E_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1F_31() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache1F_31)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache1F_31() const { return ___U3CU3Ef__amU24cache1F_31; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache1F_31() { return &___U3CU3Ef__amU24cache1F_31; }
	inline void set_U3CU3Ef__amU24cache1F_31(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache1F_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1F_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_32() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache20_32)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache20_32() const { return ___U3CU3Ef__amU24cache20_32; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache20_32() { return &___U3CU3Ef__amU24cache20_32; }
	inline void set_U3CU3Ef__amU24cache20_32(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache20_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache20_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache21_33() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache21_33)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache21_33() const { return ___U3CU3Ef__amU24cache21_33; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache21_33() { return &___U3CU3Ef__amU24cache21_33; }
	inline void set_U3CU3Ef__amU24cache21_33(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache21_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache21_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache22_34() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache22_34)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache22_34() const { return ___U3CU3Ef__amU24cache22_34; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache22_34() { return &___U3CU3Ef__amU24cache22_34; }
	inline void set_U3CU3Ef__amU24cache22_34(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache22_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache22_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache23_35() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache23_35)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache23_35() const { return ___U3CU3Ef__amU24cache23_35; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache23_35() { return &___U3CU3Ef__amU24cache23_35; }
	inline void set_U3CU3Ef__amU24cache23_35(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache23_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache23_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache24_36() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache24_36)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache24_36() const { return ___U3CU3Ef__amU24cache24_36; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache24_36() { return &___U3CU3Ef__amU24cache24_36; }
	inline void set_U3CU3Ef__amU24cache24_36(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache24_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache24_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache25_37() { return static_cast<int32_t>(offsetof(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields, ___U3CU3Ef__amU24cache25_37)); }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * get_U3CU3Ef__amU24cache25_37() const { return ___U3CU3Ef__amU24cache25_37; }
	inline ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 ** get_address_of_U3CU3Ef__amU24cache25_37() { return &___U3CU3Ef__amU24cache25_37; }
	inline void set_U3CU3Ef__amU24cache25_37(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * value)
	{
		___U3CU3Ef__amU24cache25_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache25_37), (void*)value);
	}
};


// LitJson.JsonWriter
struct  JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___context_1)); }
	inline WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * get_context_1() const { return ___context_1; }
	inline WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___ctx_stack_2)); }
	inline Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_stack_2), (void*)value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___hex_seq_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hex_seq_4), (void*)value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77, ___writer_10)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_10), (void*)value);
	}
};

struct JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_format_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// LitJson.OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31, ___list_enumerator_0)); }
	inline RuntimeObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline RuntimeObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(RuntimeObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_enumerator_0), (void*)value);
	}
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// LitJson.WriterContext
struct  WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}

	inline static int32_t get_offset_of_Padding_4() { return static_cast<int32_t>(offsetof(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200, ___Padding_4)); }
	inline int32_t get_Padding_4() const { return ___Padding_4; }
	inline int32_t* get_address_of_Padding_4() { return &___Padding_4; }
	inline void set_Padding_4(int32_t value)
	{
		___Padding_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct  KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827, ___value_1)); }
	inline JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * get_value_1() const { return ___value_1; }
	inline JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// LitJson.ArrayMetadata
struct  ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Collections.DictionaryEntry
struct  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// LitJson.ObjectMetadata
struct  ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// LitJson.PropertyMetadata
struct  PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};

// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.Condition
struct  Condition_t193778F9AE9AB7EC182B082CD4E25CB14D8410C8 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_t193778F9AE9AB7EC182B082CD4E25CB14D8410C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// LitJson.JsonType
struct  JsonType_t92D141900F9119B476305909B831EB2DEE49895F 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_t92D141900F9119B476305909B831EB2DEE49895F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.StringWriter
struct  StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_11), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureData_1)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_compareInfo_4)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureInfo_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendar_17)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dayNames_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_eraNames_39)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dateWords_53)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// LitJson.JsonData
struct  JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_int_3() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_int_3)); }
	inline int32_t get_inst_int_3() const { return ___inst_int_3; }
	inline int32_t* get_address_of_inst_int_3() { return &___inst_int_3; }
	inline void set_inst_int_3(int32_t value)
	{
		___inst_int_3 = value;
	}

	inline static int32_t get_offset_of_inst_long_4() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_long_4)); }
	inline int64_t get_inst_long_4() const { return ___inst_long_4; }
	inline int64_t* get_address_of_inst_long_4() { return &___inst_long_4; }
	inline void set_inst_long_4(int64_t value)
	{
		___inst_long_4 = value;
	}

	inline static int32_t get_offset_of_inst_object_5() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_object_5)); }
	inline RuntimeObject* get_inst_object_5() const { return ___inst_object_5; }
	inline RuntimeObject** get_address_of_inst_object_5() { return &___inst_object_5; }
	inline void set_inst_object_5(RuntimeObject* value)
	{
		___inst_object_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_object_5), (void*)value);
	}

	inline static int32_t get_offset_of_inst_string_6() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___inst_string_6)); }
	inline String_t* get_inst_string_6() const { return ___inst_string_6; }
	inline String_t** get_address_of_inst_string_6() { return &___inst_string_6; }
	inline void set_inst_string_6(String_t* value)
	{
		___inst_string_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_6), (void*)value);
	}

	inline static int32_t get_offset_of_json_7() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___json_7)); }
	inline String_t* get_json_7() const { return ___json_7; }
	inline String_t** get_address_of_json_7() { return &___json_7; }
	inline void set_json_7(String_t* value)
	{
		___json_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_7), (void*)value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_object_list_9() { return static_cast<int32_t>(offsetof(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C, ___object_list_9)); }
	inline RuntimeObject* get_object_list_9() const { return ___object_list_9; }
	inline RuntimeObject** get_address_of_object_list_9() { return &___object_list_9; }
	inline void set_object_list_9(RuntimeObject* value)
	{
		___object_list_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_list_9), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
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


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ExporterFunc
struct  ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ImporterFunc
struct  ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// LitJson.JsonException
struct  JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD4B72BDA7E334D92CA340EC735F9181C963C70AB_gshared (Dictionary_2_tE76E0893B2EEC846BBB4A783BBD5C27DF2DE1128 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m67F12A0F392EA4C0BDB1AEF8014EDBC688DF00BF_gshared (Dictionary_2_t17C8B55A564DA54EA122843DD9A31BE5E251FC63 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81_gshared (List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, String_t* ___prop_name0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___index0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___value1, const RuntimeMethod* method);
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer0, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972 (KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 * __this, String_t* ___key0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *, String_t*, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_inline (KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_m6623E4B07C4137CAC4F6A585029DD7F27E169E5E (Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_m4CDDDEC96753082A0F663A421698FA4208038892 (List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993 *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_m8C99D5806C838A678562A155AB79B47150BBF2C1 (List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void LitJson.JsonData::DLOG(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874 (String_t* ___str0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::PrintJsonTypeMemory(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E (int32_t ___t0, const RuntimeMethod* method);
// System.String LitJson.JsonData::ValueAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::ValueAsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___boolean0, const RuntimeMethod* method);
// System.Double LitJson.JsonData::ValueAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, double ___number0, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::ValueAsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Int64 LitJson.JsonData::ValueAsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::ValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// LitJson.JsonType LitJson.JsonData::GetJsonType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_inline (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::WriteJson2(LitJson.JsonType,LitJson.JsonData,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913 (int32_t ___t0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___obj1, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer2, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::ValueAsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___property_name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738 (RuntimeObject* ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int64::Equals(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697 (int64_t* __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D (bool* __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_inline (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_inline (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_mCC8F92039CC236F405B97D659F8C7D64C4DCC991 (Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C *, const RuntimeMethod*))Dictionary_2__ctor_mD4B72BDA7E334D92CA340EC735F9181C963C70AB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762 (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m32CCF3D314EDBD059524C61924F6199494A41476 (Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB *, const RuntimeMethod*))Dictionary_2__ctor_m67F12A0F392EA4C0BDB1AEF8014EDBC688DF00BF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_m30DB189F64628CBBADA667D33151B959717F1A62 (Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7 (Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B (Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
inline void List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81 (List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434 *, const RuntimeMethod*))List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81_gshared)(__this, method);
}
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* Type_GetProperties_m4126C117279AD617D8D167367DF953C451FC49E3 (Type_t * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_mBCB00C5E9B2C77584C3ACEAD5D18109A91459BA5 (Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_inline (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768 (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008 (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * __this, RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method);
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Enum_GetUnderlyingType_m8BD5EDDA4C9A15C2988B27DD48314AC3C16F7A53 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB (Type_t * ___type0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55 (uint8_t ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4 (int8_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE (int16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4 (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C (int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F (int32_t ___value0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0 (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC (int32_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9 (int32_t ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668 (int32_t ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125 (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644 (double ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7 (int64_t ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m2D1A6B11F9A11EB9A317B918F697C3DBB0118967 (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0 (WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9 (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * __this, WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *, WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_m5EFCE1DB4C712F6029539FC78605DB20445EEB2F (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m96D69564ADA9ACFD81958A9AB178D27D7BFECB4E (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6 (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8 (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * (*) (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_inline (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * (*) (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *, const RuntimeMethod*))Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2 (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_inline (KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 * __this, const RuntimeMethod* method)
{
	return ((  JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * (*) (KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4 (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshal_pinvoke(const ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507& unmarshaled, ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshal_pinvoke_back(const ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_pinvoke& marshaled, ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshal_pinvoke_cleanup(ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshal_com(const ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507& unmarshaled, ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshal_com_back(const ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_com& marshaled, ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshal_com_cleanup(ArrayMetadata_tB3B071F9F768A101BD4A68D9F77A8BBF3B990507_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008 (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * __this, RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008_RuntimeMethod_var);
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_mF61A419040916FD6FFD56C1CE8B6C663E4A2D06F (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * __this, RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_BeginInvoke_mF61A419040916FD6FFD56C1CE8B6C663E4A2D06F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ExporterFunc_BeginInvoke_mF61A419040916FD6FFD56C1CE8B6C663E4A2D06F_RuntimeMethod_var);
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m05231DBC4A98F43D32B583FEA6ECC5F2F585C558 (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_EndInvoke_m05231DBC4A98F43D32B583FEA6ECC5F2F585C558_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ExporterFunc_EndInvoke_m05231DBC4A98F43D32B583FEA6ECC5F2F585C558_RuntimeMethod_var);
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m38521C202654F6337653A0781233D0D71E48B56D (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_Invoke_m38521C202654F6337653A0781233D0D71E48B56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ImporterFunc_Invoke_m38521C202654F6337653A0781233D0D71E48B56D_RuntimeMethod_var);
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_m7F362E9A3ECD14CA63DD8743AE97193FF9E5E25A (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * __this, RuntimeObject * ___input0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_BeginInvoke_m7F362E9A3ECD14CA63DD8743AE97193FF9E5E25A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ImporterFunc_BeginInvoke_m7F362E9A3ECD14CA63DD8743AE97193FF9E5E25A_RuntimeMethod_var);
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_mF7309D1EEC5047232F0E477042B68CBC66221E95 (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_EndInvoke_mF7309D1EEC5047232F0E477042B68CBC66221E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ImporterFunc_EndInvoke_mF7309D1EEC5047232F0E477042B68CBC66221E95_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mD5C59FD7D74C4224D5C9310DE989B4E166E652DF (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData__ctor_mD5C59FD7D74C4224D5C9310DE989B4E166E652DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData__ctor_mD5C59FD7D74C4224D5C9310DE989B4E166E652DF_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData__ctor_mD5C59FD7D74C4224D5C9310DE989B4E166E652DF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(4);
		int32_t L_0 = ___number0;
		__this->set_inst_int_3(L_0);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(5);
		int64_t L_0 = ___number0;
		__this->set_inst_long_4(L_0);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		__this->set_type_8(7);
		RuntimeObject * L_1 = ___obj0;
		__this->set_inst_boolean_1(((*(bool*)((bool*)UnBox(L_1, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0025:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		__this->set_type_8(6);
		RuntimeObject * L_3 = ___obj0;
		__this->set_inst_double_2(((*(double*)((double*)UnBox(L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0044:
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0063;
		}
	}
	{
		__this->set_type_8(4);
		RuntimeObject * L_5 = ___obj0;
		__this->set_inst_int_3(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0063:
	{
		RuntimeObject * L_6 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		__this->set_type_8(5);
		RuntimeObject * L_7 = ___obj0;
		__this->set_inst_long_4(((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0082:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}
	{
		__this->set_type_8(3);
		RuntimeObject * L_9 = ___obj0;
		__this->set_inst_string_6(((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00a1:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3_RuntimeMethod_var)));
	}
}
// System.Void LitJson.JsonData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(3);
		String_t* L_0 = ___str0;
		__this->set_inst_string_6(L_0);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_m7FCDF090BAFFD9D514ADC210E1304E3AFA56942F (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_ICollection_get_Count_m7FCDF090BAFFD9D514ADC210E1304E3AFA56942F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_ICollection_get_Count_m7FCDF090BAFFD9D514ADC210E1304E3AFA56942F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_ICollection_get_Count_m7FCDF090BAFFD9D514ADC210E1304E3AFA56942F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_mACD961C0505D39739C93692639ED9A51CA797949 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_get_IsReadOnly_mACD961C0505D39739C93692639ED9A51CA797949_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_get_IsReadOnly_mACD961C0505D39739C93692639ED9A51CA797949_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_get_IsReadOnly_mACD961C0505D39739C93692639ED9A51CA797949_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IDictionary_get_Item_m0B1332645E2E957F738D3C7AFEEB5D869D2B2EC1 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IDictionary_get_Item_m0B1332645E2E957F738D3C7AFEEB5D869D2B2EC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IDictionary_get_Item_m0B1332645E2E957F738D3C7AFEEB5D869D2B2EC1_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IDictionary_get_Item_m0B1332645E2E957F738D3C7AFEEB5D869D2B2EC1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_m8519163CAE9373A396345476865A8B5BC6E73C56 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_m8519163CAE9373A396345476865A8B5BC6E73C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IDictionary_set_Item_m8519163CAE9373A396345476865A8B5BC6E73C56_RuntimeMethod_var);
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IDictionary_set_Item_m8519163CAE9373A396345476865A8B5BC6E73C56_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___key0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_m8519163CAE9373A396345476865A8B5BC6E73C56_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___value1;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_3;
		L_3 = JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = ___key0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_5 = V_0;
		JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IList_get_Item_m3F849DC20A6A505BF9D0622980295DF6E6C3E080 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_get_Item_m3F849DC20A6A505BF9D0622980295DF6E6C3E080_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_get_Item_m3F849DC20A6A505BF9D0622980295DF6E6C3E080_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_get_Item_m3F849DC20A6A505BF9D0622980295DF6E6C3E080_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_m990F53A6CBB3049703B8675E457145608796C17D (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_set_Item_m990F53A6CBB3049703B8675E457145608796C17D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_set_Item_m990F53A6CBB3049703B8675E457145608796C17D_RuntimeMethod_var);
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_set_Item_m990F53A6CBB3049703B8675E457145608796C17D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_2;
		L_2 = JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___index0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_4 = V_0;
		JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_m1259E5E1FEFE91CFFD0A2CC2D0F1AF104D5F17FA (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_ICollection_CopyTo_m1259E5E1FEFE91CFFD0A2CC2D0F1AF104D5F17FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_ICollection_CopyTo_m1259E5E1FEFE91CFFD0A2CC2D0F1AF104D5F17FA_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_ICollection_CopyTo_m1259E5E1FEFE91CFFD0A2CC2D0F1AF104D5F17FA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168(__this, /*hidden argument*/NULL);
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_Contains_mA30B981D95AB1E51E032F678159D8A7D8C65CB75 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IDictionary_Contains_mA30B981D95AB1E51E032F678159D8A7D8C65CB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IDictionary_Contains_mA30B981D95AB1E51E032F678159D8A7D8C65CB75_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IDictionary_Contains_mA30B981D95AB1E51E032F678159D8A7D8C65CB75_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(2 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_m13CE04403E503A2A7592479E99F8EBF36F7B5C4F (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IDictionary_GetEnumerator_m13CE04403E503A2A7592479E99F8EBF36F7B5C4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IDictionary_GetEnumerator_m13CE04403E503A2A7592479E99F8EBF36F7B5C4F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IDictionary_GetEnumerator_m13CE04403E503A2A7592479E99F8EBF36F7B5C4F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_m2F27C62580223A0B4FD4F8B7580B9498BBEB50FF (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IEnumerable_GetEnumerator_m2F27C62580223A0B4FD4F8B7580B9498BBEB50FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IEnumerable_GetEnumerator_m2F27C62580223A0B4FD4F8B7580B9498BBEB50FF_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IEnumerable_GetEnumerator_m2F27C62580223A0B4FD4F8B7580B9498BBEB50FF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_GetBoolean_m19B263477D96ED26CB7C2C57D8C2FB6AA319358A (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetBoolean_m19B263477D96ED26CB7C2C57D8C2FB6AA319358A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_GetBoolean_m19B263477D96ED26CB7C2C57D8C2FB6AA319358A_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_GetBoolean_m19B263477D96ED26CB7C2C57D8C2FB6AA319358A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetBoolean_m19B263477D96ED26CB7C2C57D8C2FB6AA319358A_RuntimeMethod_var)));
	}

IL_0017:
	{
		bool L_2 = __this->get_inst_boolean_1();
		return L_2;
	}
}
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_LitJson_IJsonWrapper_GetDouble_mF5B511D6D9CECAB90D05EF126DBFBF1BE5D9D4BE (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetDouble_mF5B511D6D9CECAB90D05EF126DBFBF1BE5D9D4BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_GetDouble_mF5B511D6D9CECAB90D05EF126DBFBF1BE5D9D4BE_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_GetDouble_mF5B511D6D9CECAB90D05EF126DBFBF1BE5D9D4BE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetDouble_mF5B511D6D9CECAB90D05EF126DBFBF1BE5D9D4BE_RuntimeMethod_var)));
	}

IL_0017:
	{
		double L_2 = __this->get_inst_double_2();
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_LitJson_IJsonWrapper_GetInt_mCC2B968C1D0EA060CCE5EBE52CE5FDA1B798CAF1 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetInt_mCC2B968C1D0EA060CCE5EBE52CE5FDA1B798CAF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_GetInt_mCC2B968C1D0EA060CCE5EBE52CE5FDA1B798CAF1_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_GetInt_mCC2B968C1D0EA060CCE5EBE52CE5FDA1B798CAF1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetInt_mCC2B968C1D0EA060CCE5EBE52CE5FDA1B798CAF1_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_2 = __this->get_inst_int_3();
		return L_2;
	}
}
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_LitJson_IJsonWrapper_GetLong_m4E8B2D78FE311A18698E05C22506A115A3BA1F8D (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetLong_m4E8B2D78FE311A18698E05C22506A115A3BA1F8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_GetLong_m4E8B2D78FE311A18698E05C22506A115A3BA1F8D_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_GetLong_m4E8B2D78FE311A18698E05C22506A115A3BA1F8D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetLong_m4E8B2D78FE311A18698E05C22506A115A3BA1F8D_RuntimeMethod_var)));
	}

IL_0017:
	{
		int64_t L_2 = __this->get_inst_long_4();
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_GetString_m86D27FF3A3E9365C1FC38F45F0703C9AF7C004E7 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetString_m86D27FF3A3E9365C1FC38F45F0703C9AF7C004E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_GetString_m86D27FF3A3E9365C1FC38F45F0703C9AF7C004E7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_GetString_m86D27FF3A3E9365C1FC38F45F0703C9AF7C004E7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetString_m86D27FF3A3E9365C1FC38F45F0703C9AF7C004E7_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_2 = __this->get_inst_string_6();
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_ToJson_m206494EC7BA582E2D837A9CCCF119DB14D1E20DC (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_ToJson_m206494EC7BA582E2D837A9CCCF119DB14D1E20DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_ToJson_m206494EC7BA582E2D837A9CCCF119DB14D1E20DC_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_ToJson_m206494EC7BA582E2D837A9CCCF119DB14D1E20DC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0;
		L_0 = JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_ToJson_m849A69B44F224A169D1A4954ED80EE3319D5170F (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_LitJson_IJsonWrapper_ToJson_m849A69B44F224A169D1A4954ED80EE3319D5170F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_LitJson_IJsonWrapper_ToJson_m849A69B44F224A169D1A4954ED80EE3319D5170F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_LitJson_IJsonWrapper_ToJson_m849A69B44F224A169D1A4954ED80EE3319D5170F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer0;
		JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_mF8C6CEDF198D7F0A48FB98E803C877AE8F7809A7 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_Add_mF8C6CEDF198D7F0A48FB98E803C877AE8F7809A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_Add_mF8C6CEDF198D7F0A48FB98E803C877AE8F7809A7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_Add_mF8C6CEDF198D7F0A48FB98E803C877AE8F7809A7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1;
		L_1 = JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_mAD44DBC117032D21B857DFE2F7AF0F403F31D746 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_Clear_mAD44DBC117032D21B857DFE2F7AF0F403F31D746_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_Clear_mAD44DBC117032D21B857DFE2F7AF0F403F31D746_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_Clear_mAD44DBC117032D21B857DFE2F7AF0F403F31D746_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_m1F8155776BF98DA4613C3AC73D000BB414F96083 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_Contains_m1F8155776BF98DA4613C3AC73D000BB414F96083_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_Contains_m1F8155776BF98DA4613C3AC73D000BB414F96083_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_Contains_m1F8155776BF98DA4613C3AC73D000BB414F96083_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_m0DBCB19A97AB2CCA775A0F624ED3776379BCA296 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_IndexOf_m0DBCB19A97AB2CCA775A0F624ED3776379BCA296_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_IndexOf_m0DBCB19A97AB2CCA775A0F624ED3776379BCA296_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_IndexOf_m0DBCB19A97AB2CCA775A0F624ED3776379BCA296_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_mA73737904D2347EB21DE79C6CF77B163C799CE23 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_Insert_mA73737904D2347EB21DE79C6CF77B163C799CE23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_Insert_mA73737904D2347EB21DE79C6CF77B163C799CE23_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_Insert_mA73737904D2347EB21DE79C6CF77B163C799CE23_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(7 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_mAA67D1FCD4C03DDCB13C911D70165DD56C6F662B (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_Remove_mAA67D1FCD4C03DDCB13C911D70165DD56C6F662B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_Remove_mAA67D1FCD4C03DDCB13C911D70165DD56C6F662B_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_Remove_mAA67D1FCD4C03DDCB13C911D70165DD56C6F662B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_mB2BD3FFE84B1D3327E3DB5D58DD27C1DB71515F7 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_IList_RemoveAt_mB2BD3FFE84B1D3327E3DB5D58DD27C1DB71515F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_IList_RemoveAt_mB2BD3FFE84B1D3327E3DB5D58DD27C1DB71515F7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_IList_RemoveAt_mB2BD3FFE84B1D3327E3DB5D58DD27C1DB71515F7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(9 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mF9D3823165BB2F03C22E2BEE932120931CF771B7 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t5F264CDC4CEA214092684DB8AF7035FCB2346A50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mF9D3823165BB2F03C22E2BEE932120931CF771B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mF9D3823165BB2F03C22E2BEE932120931CF771B7_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mF9D3823165BB2F03C22E2BEE932120931CF771B7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_object_list_9();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_t5F264CDC4CEA214092684DB8AF7035FCB2346A50_il2cpp_TypeInfo_var, L_1);
		OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * L_3 = (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 *)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 LitJson.JsonData::ValueAsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_inst_int_3();
		G_B3_0 = L_1;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Int64 LitJson.JsonData::ValueAsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0017;
		}
	}
	{
		int64_t L_1 = __this->get_inst_long_4();
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0017:
	{
		G_B3_0 = ((int64_t)((int64_t)0));
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean LitJson.JsonData::ValueAsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_inst_boolean_1();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Double LitJson.JsonData::ValueAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	double G_B3_0 = 0.0;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0017;
		}
	}
	{
		double L_1 = __this->get_inst_double_2();
		G_B3_0 = L_1;
		goto IL_0020;
	}

IL_0017:
	{
		G_B3_0 = (0.0);
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.String LitJson.JsonData::ValueAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = __this->get_inst_string_6();
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0017:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::ValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::ValueAsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_object_5();
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Void LitJson.JsonData::PrintJsonTypeMemory(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E (int32_t ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_get_Count_m42F5B00101477D7B68B4922006C5B8D1A59EBD45_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.JsonData::DLOG(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874 (String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, String_t* ___prop_name0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t10910652C532F836416B830512402940AA3BE7A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9_RuntimeMethod_var);
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_set_Item_mA1E7EFE8800A9D89BBD137B85EC3FC5519D63ED9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prop_name0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_2 = ___value1;
		KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), L_1, L_2, /*hidden argument*/KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->get_inst_object_5();
		String_t* L_4 = ___prop_name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(!0) */, IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_005d;
	}

IL_0028:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_6 = __this->get_object_list_9();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_8;
		L_8 = InterfaceFuncInvoker1< KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		String_t* L_10 = ___prop_name0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_12 = __this->get_object_list_9();
		int32_t L_13 = V_1;
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_14 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		goto IL_006e;
	}

IL_0059:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->get_object_list_9();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t10910652C532F836416B830512402940AA3BE7A6_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0028;
		}
	}

IL_006e:
	{
		goto IL_007f;
	}

IL_0073:
	{
		RuntimeObject* L_19 = __this->get_object_list_9();
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t10910652C532F836416B830512402940AA3BE7A6_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_007f:
	{
		RuntimeObject* L_21 = __this->get_inst_object_5();
		String_t* L_22 = ___prop_name0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_23 = ___value1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, int32_t ___index0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4114E5650E90700839B97A38A51CC403F7B86413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF_RuntimeMethod_var);
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_set_Item_m0074FA0BD9A804B51CC05E832C2E8D0E5BB84AEF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_type_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_inst_array_0();
		int32_t L_3 = ___index0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,!0) */, IList_1_t4114E5650E90700839B97A38A51CC403F7B86413_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_0061;
	}

IL_0025:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_9 = ___value1;
		KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_1), L_8, L_9, /*hidden argument*/KeyValuePair_2__ctor_mDADC5704CEA39F37CA944AECE16884782D545972_RuntimeMethod_var);
		RuntimeObject* L_10 = __this->get_object_list_9();
		int32_t L_11 = ___index0;
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_12 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t0F3C9A2835DBA1493F3A42AE7F10D058B60761AB_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->get_inst_object_5();
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_15 = ___value1;
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_t0D2F641F9BCB58092819BAB43AD0D11069874C94_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_0061:
	{
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->get_type_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_0030:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureCollection_m06DE6CCED639F171173088A3DE3706EF984E4168_RuntimeMethod_var)));
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6623E4B07C4137CAC4F6A585029DD7F27E169E5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CDDDEC96753082A0F663A421698FA4208038892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureDictionary_m72D0D41902EAEAFA809636F9FD082E2A4C4476CE_RuntimeMethod_var)));
	}

IL_002e:
	{
		__this->set_type_8(1);
		Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26 * L_4 = (Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26 *)il2cpp_codegen_object_new(Dictionary_2_tBEC3AB991FBDFCDBBCF6FD1A779FF3E3ECD8DC26_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6623E4B07C4137CAC4F6A585029DD7F27E169E5E(L_4, /*hidden argument*/Dictionary_2__ctor_m6623E4B07C4137CAC4F6A585029DD7F27E169E5E_RuntimeMethod_var);
		__this->set_inst_object_5(L_4);
		List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993 * L_5 = (List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993 *)il2cpp_codegen_object_new(List_1_t20C9790EC577230F91AF7A09AAC6EB1E913D0993_il2cpp_TypeInfo_var);
		List_1__ctor_m4CDDDEC96753082A0F663A421698FA4208038892(L_5, /*hidden argument*/List_1__ctor_m4CDDDEC96753082A0F663A421698FA4208038892_RuntimeMethod_var);
		__this->set_object_list_9(L_5);
		RuntimeObject* L_6 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C99D5806C838A678562A155AB79B47150BBF2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}

IL_0018:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E_RuntimeMethod_var)));
	}

IL_002e:
	{
		__this->set_type_8(2);
		List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F * L_4 = (List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F *)il2cpp_codegen_object_new(List_1_tD97A1AE5EF1763A81609F05032BB8D2DD083443F_il2cpp_TypeInfo_var);
		List_1__ctor_m8C99D5806C838A678562A155AB79B47150BBF2C1(L_4, /*hidden argument*/List_1__ctor_m8C99D5806C838A678562A155AB79B47150BBF2C1_RuntimeMethod_var);
		__this->set_inst_array_0(L_4);
		RuntimeObject* L_5 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)NULL;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)IsInstClass((RuntimeObject*)L_1, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		return ((JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)CastclassClass((RuntimeObject*)L_2, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var));
	}

IL_001a:
	{
		RuntimeObject * L_3 = ___obj0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_4 = (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)il2cpp_codegen_object_new(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		JsonData__ctor_m99CA5E26E61F77D8383072A272A69C0E8A51AFF3(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonData::WriteJson2(LitJson.JsonType,LitJson.JsonData,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913 (int32_t ___t0, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___obj1, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t513A53213DC8B135EEE2890B463069A349DF2ED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE24DE10421AC43ADCB1732119256C910319997F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65178450579333918C3BDA9FEBAE91C079EABDE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913_RuntimeMethod_var);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_6;
	memset((&V_6), 0, sizeof(V_6));
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = ___t0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral65178450579333918C3BDA9FEBAE91C079EABDE7, L_2, /*hidden argument*/NULL);
		JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874(L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___t0;
		JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E(L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___t0;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00f6;
			}
			case 1:
			{
				goto IL_009b;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_0079;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_0068;
			}
			case 6:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0046:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_7 = ___writer2;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_8 = ___obj1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = JsonData_ValueAsString_m5C2F27B092E6DE9E90E8EEDD0A5F01FCC7946957(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3(L_7, L_9, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_0057:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_10 = ___writer2;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_11 = ___obj1;
		NullCheck(L_11);
		bool L_12;
		L_12 = JsonData_ValueAsBoolean_mA34342CED86FA730EEB321985785BB75FF3D8D57(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6(L_10, L_12, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_0068:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_13 = ___writer2;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_14 = ___obj1;
		NullCheck(L_14);
		double L_15;
		L_15 = JsonData_ValueAsDouble_m79351802A5CDF04B8EFF1351D0DACCB2D3716A9E(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920(L_13, L_15, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_0079:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_16 = ___writer2;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_17 = ___obj1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = JsonData_ValueAsInt_m6A10138095EDB05106643BBA9C801131CB7862B4(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_16, L_18, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_008a:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_19 = ___writer2;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_20 = ___obj1;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = JsonData_ValueAsLong_mA6A48980D4C706916667E8FCFD421FFD9D7F8F4F(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25(L_19, L_21, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_009b:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_22 = ___writer2;
		NullCheck(L_22);
		JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A(L_22, /*hidden argument*/NULL);
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_23 = ___obj1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = JsonData_ValueAsArray_m5319A3F0F48B7CD8B7B67861BE79074FA68D8BA8(L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		RuntimeObject* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_26 = V_1;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<LitJson.JsonData>::GetEnumerator() */, IEnumerable_1_t513A53213DC8B135EEE2890B463069A349DF2ED6_il2cpp_TypeInfo_var, L_26);
		V_2 = L_27;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			goto IL_00ce;
		}

IL_00ba:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_28 = V_2;
			NullCheck(L_28);
			JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_29;
			L_29 = InterfaceFuncInvoker0< JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LitJson.JsonData>::get_Current() */, IEnumerator_1_tE24DE10421AC43ADCB1732119256C910319997F9_il2cpp_TypeInfo_var, L_28);
			V_3 = L_29;
			JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_30 = V_3;
			NullCheck(L_30);
			int32_t L_31;
			L_31 = JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_inline(L_30, /*hidden argument*/NULL);
			JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_32 = V_3;
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_33 = ___writer2;
			JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913(L_31, L_32, L_33, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			RuntimeObject* L_34 = V_2;
			NullCheck(L_34);
			bool L_35;
			L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_00ba;
			}
		}

IL_00d9:
		{
			IL2CPP_LEAVE(0xEB, FINALLY_00de);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00de;
	}

FINALLY_00de:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_36 = V_2;
			if (!L_36)
			{
				goto IL_00ea;
			}
		}

IL_00e4:
		{
			RuntimeObject* L_37 = V_2;
			NullCheck(L_37);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_37);
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(222)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(222)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
	}

IL_00eb:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_38 = ___writer2;
		NullCheck(L_38);
		JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905(L_38, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_00f6:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_39 = ___writer2;
		NullCheck(L_39);
		JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9(L_39, /*hidden argument*/NULL);
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_40 = ___obj1;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = JsonData_ValueAsObject_mC8C51F4BDDFBFBD15BD1BA8A6B0AFFD26CCC931E(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		RuntimeObject* L_42 = V_4;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_42, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)));
		RuntimeObject* L_43;
		L_43 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)));
		V_5 = L_43;
	}

IL_0112:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 1);
		{
			goto IL_016f;
		}

IL_0117:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_44 = V_5;
			NullCheck(L_44);
			RuntimeObject * L_45;
			L_45 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_44);
			V_6 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_45, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_46 = ___writer2;
			RuntimeObject * L_47;
			L_47 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_6), /*hidden argument*/NULL);
			NullCheck(L_46);
			JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2(L_46, ((String_t*)CastclassSealed((RuntimeObject*)L_47, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_48;
			L_48 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_6), /*hidden argument*/NULL);
			String_t* L_49;
			L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3, ((String_t*)CastclassSealed((RuntimeObject*)L_48, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874(L_49, /*hidden argument*/NULL);
			RuntimeObject * L_50;
			L_50 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_6), /*hidden argument*/NULL);
			V_7 = ((JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)CastclassClass((RuntimeObject*)L_50, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var));
			JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_51 = V_7;
			NullCheck(L_51);
			int32_t L_52;
			L_52 = JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_inline(L_51, /*hidden argument*/NULL);
			JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_53 = V_7;
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_54 = ___writer2;
			JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913(L_52, L_53, L_54, /*hidden argument*/NULL);
		}

IL_016f:
		{
			RuntimeObject* L_55 = V_5;
			NullCheck(L_55);
			bool L_56;
			L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_55);
			if (L_56)
			{
				goto IL_0117;
			}
		}

IL_017b:
		{
			IL2CPP_LEAVE(0x197, FINALLY_0180);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0180;
	}

FINALLY_0180:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_57 = V_5;
			RuntimeObject* L_58 = ((RuntimeObject*)IsInst((RuntimeObject*)L_57, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_8 = L_58;
			if (!L_58)
			{
				goto IL_0196;
			}
		}

IL_018f:
		{
			RuntimeObject* L_59 = V_8;
			NullCheck(L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_59);
		}

IL_0196:
		{
			IL2CPP_END_FINALLY(384)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(384)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x197, IL_0197)
	}

IL_0197:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_60 = ___writer2;
		NullCheck(L_60);
		JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3(L_60, /*hidden argument*/NULL);
		goto IL_01a2;
	}

IL_01a2:
	{
		return;
	}
}
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738 (RuntimeObject* ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral464EA4526685475D814F5FF8C1459165CBF8967A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* LitJson.JsonType LitJson.IJsonWrapper::GetJsonType() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral464EA4526685475D814F5FF8C1459165CBF8967A, L_4, /*hidden argument*/NULL);
		JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874(L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00f8;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_006f;
			}
			case 6:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_018b;
	}

IL_004d:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_9 = ___writer1;
		RuntimeObject* L_10 = ___obj0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String LitJson.IJsonWrapper::GetString() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3(L_9, L_11, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_005e:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_12 = ___writer1;
		RuntimeObject* L_13 = ___obj0;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean LitJson.IJsonWrapper::GetBoolean() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_12);
		JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6(L_12, L_14, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_006f:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_15 = ___writer1;
		RuntimeObject* L_16 = ___obj0;
		NullCheck(L_16);
		double L_17;
		L_17 = InterfaceFuncInvoker0< double >::Invoke(1 /* System.Double LitJson.IJsonWrapper::GetDouble() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_15);
		JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920(L_15, L_17, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_0080:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_18 = ___writer1;
		RuntimeObject* L_19 = ___obj0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 LitJson.IJsonWrapper::GetInt() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_18);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_18, L_20, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_0091:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_21 = ___writer1;
		RuntimeObject* L_22 = ___obj0;
		NullCheck(L_22);
		int64_t L_23;
		L_23 = InterfaceFuncInvoker0< int64_t >::Invoke(4 /* System.Int64 LitJson.IJsonWrapper::GetLong() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, L_22);
		NullCheck(L_21);
		JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25(L_21, L_23, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_00a2:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_24 = ___writer1;
		NullCheck(L_24);
		JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A(L_24, /*hidden argument*/NULL);
		RuntimeObject* L_25 = ___obj0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_25);
		V_2 = L_26;
	}

IL_00af:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			goto IL_00c7;
		}

IL_00b4:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_27 = V_2;
			NullCheck(L_27);
			RuntimeObject * L_28;
			L_28 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_27);
			V_3 = L_28;
			RuntimeObject * L_29 = V_3;
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_30 = ___writer1;
			JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738(((JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)CastclassClass((RuntimeObject*)L_29, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var)), L_30, /*hidden argument*/NULL);
		}

IL_00c7:
		{
			RuntimeObject* L_31 = V_2;
			NullCheck(L_31);
			bool L_32;
			L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_00b4;
			}
		}

IL_00d2:
		{
			IL2CPP_LEAVE(0xED, FINALLY_00d7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d7;
	}

FINALLY_00d7:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_33 = V_2;
			RuntimeObject* L_34 = ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_4 = L_34;
			if (!L_34)
			{
				goto IL_00ec;
			}
		}

IL_00e5:
		{
			RuntimeObject* L_35 = V_4;
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
		}

IL_00ec:
		{
			IL2CPP_END_FINALLY(215)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(215)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xED, IL_00ed)
	}

IL_00ed:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_36 = ___writer1;
		NullCheck(L_36);
		JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905(L_36, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_00f8:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_37 = ___writer1;
		NullCheck(L_37);
		JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9(L_37, /*hidden argument*/NULL);
		RuntimeObject* L_38 = ___obj0;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_38);
		V_5 = L_39;
	}

IL_0106:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 1);
		{
			goto IL_0158;
		}

IL_010b:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_40 = V_5;
			NullCheck(L_40);
			RuntimeObject * L_41;
			L_41 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			V_6 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_41, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_42 = ___writer1;
			RuntimeObject * L_43;
			L_43 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_6), /*hidden argument*/NULL);
			NullCheck(L_42);
			JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2(L_42, ((String_t*)CastclassSealed((RuntimeObject*)L_43, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_44;
			L_44 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_6), /*hidden argument*/NULL);
			String_t* L_45;
			L_45 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9D9FB48D8A068EC2148400327674524D1B988AC3, ((String_t*)CastclassSealed((RuntimeObject*)L_44, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874(L_45, /*hidden argument*/NULL);
			RuntimeObject * L_46;
			L_46 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_6), /*hidden argument*/NULL);
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_47 = ___writer1;
			JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738(((JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)CastclassClass((RuntimeObject*)L_46, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var)), L_47, /*hidden argument*/NULL);
		}

IL_0158:
		{
			RuntimeObject* L_48 = V_5;
			NullCheck(L_48);
			bool L_49;
			L_49 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_48);
			if (L_49)
			{
				goto IL_010b;
			}
		}

IL_0164:
		{
			IL2CPP_LEAVE(0x180, FINALLY_0169);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0169;
	}

FINALLY_0169:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_50 = V_5;
			RuntimeObject* L_51 = ((RuntimeObject*)IsInst((RuntimeObject*)L_50, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_7 = L_51;
			if (!L_51)
			{
				goto IL_017f;
			}
		}

IL_0178:
		{
			RuntimeObject* L_52 = V_7;
			NullCheck(L_52);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_52);
		}

IL_017f:
		{
			IL2CPP_END_FINALLY(361)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(361)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x180, IL_0180)
	}

IL_0180:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_53 = ___writer1;
		NullCheck(L_53);
		JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3(L_53, /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_018b:
	{
		goto IL_0190;
	}

IL_0190:
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687_RuntimeMethod_var);
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_Add_mC861B4AEEB744B5807E8DB09ED0E4DD16E7FE687_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___value0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_1;
		L_1 = JsonData_ToJsonData_m716581E861F212FA575917A6A0F1AA814940801C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		__this->set_json_7((String_t*)NULL);
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureList_m047220E13AA434CD42D2B3048ED0F943D79E807E(__this, /*hidden argument*/NULL);
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_Equals_mA0F435E628457E85E08738502779643FFE2705C6 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_Equals_mA0F435E628457E85E08738502779643FFE2705C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_Equals_mA0F435E628457E85E08738502779643FFE2705C6_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_Equals_mA0F435E628457E85E08738502779643FFE2705C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_1 = ___x0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_type_8();
		int32_t L_3 = __this->get_type_8();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_4 = __this->get_type_8();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_0085;
			}
			case 5:
			{
				goto IL_0097;
			}
			case 6:
			{
				goto IL_00a9;
			}
			case 7:
			{
				goto IL_00bb;
			}
		}
	}
	{
		goto IL_00cd;
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		RuntimeObject* L_6 = __this->get_inst_object_5();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_7 = ___x0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_inst_object_5();
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_8);
		return L_9;
	}

IL_0061:
	{
		RuntimeObject* L_10 = __this->get_inst_array_0();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_11 = ___x0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get_inst_array_0();
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_12);
		return L_13;
	}

IL_0073:
	{
		String_t* L_14 = __this->get_inst_string_6();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_15 = ___x0;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_inst_string_6();
		NullCheck(L_14);
		bool L_17;
		L_17 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_14, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0085:
	{
		int32_t* L_18 = __this->get_address_of_inst_int_3();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_19 = ___x0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_inst_int_3();
		bool L_21;
		L_21 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_18, L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		int64_t* L_22 = __this->get_address_of_inst_long_4();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_23 = ___x0;
		NullCheck(L_23);
		int64_t L_24 = L_23->get_inst_long_4();
		bool L_25;
		L_25 = Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697((int64_t*)L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00a9:
	{
		double* L_26 = __this->get_address_of_inst_double_2();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_27 = ___x0;
		NullCheck(L_27);
		double L_28 = L_27->get_inst_double_2();
		bool L_29;
		L_29 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)L_26, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00bb:
	{
		bool* L_30 = __this->get_address_of_inst_boolean_1();
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_31 = ___x0;
		NullCheck(L_31);
		bool L_32 = L_31->get_inst_boolean_1();
		bool L_33;
		L_33 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00cd:
	{
		return (bool)0;
	}
}
// LitJson.JsonType LitJson.JsonData::GetJsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		return L_0;
	}
}
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB44026C99001F09F5D70AE0AE9300ACDF0D6A660);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200_RuntimeMethod_var);
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ToJson_m13881D90B4F447B1C37ABC4578E9D72D177B0200_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->get_json_7();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->get_json_7();
		return L_1;
	}

IL_0012:
	{
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = V_0;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_4 = (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *)il2cpp_codegen_object_new(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_5 = V_1;
		NullCheck(L_5);
		JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_inline(L_5, (bool)0, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_type_8();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(JsonType_t92D141900F9119B476305909B831EB2DEE49895F_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralB44026C99001F09F5D70AE0AE9300ACDF0D6A660, L_8, /*hidden argument*/NULL);
		JsonData_DLOG_m6A27C76FD0A21A75004217B1027AB77623EE1874(L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_type_8();
		JsonData_PrintJsonTypeMemory_m009E02729D96FEFD038321B9DDA4204BA59BDC9E(L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_type_8();
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_12 = V_1;
		JsonData_WriteJson2_mEE53D43729BA82CDB130622E21D6281FA0131913(L_11, __this, L_12, /*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->set_json_7(L_14);
		String_t* L_15 = __this->get_json_7();
		return L_15;
	}
}
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B_RuntimeMethod_var);
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ToJson_m76077DC829AB0582A367AABF9414701B6CED0D8B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer0;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_2 = ___writer0;
		NullCheck(L_2);
		JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_inline(L_2, (bool)0, /*hidden argument*/NULL);
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_3 = ___writer0;
		JsonData_WriteJson_m87C6E1CFD431D4B6456F95036C56C37616CD2738(__this, L_3, /*hidden argument*/NULL);
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_4 = ___writer0;
		bool L_5 = V_0;
		NullCheck(L_4);
		JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_inline(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToString_m3BB6D5B119342EFE87BDBAFADB0E5204F9CA7543 (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_ToString_m3BB6D5B119342EFE87BDBAFADB0E5204F9CA7543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_ToString_m3BB6D5B119342EFE87BDBAFADB0E5204F9CA7543_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_ToString_m3BB6D5B119342EFE87BDBAFADB0E5204F9CA7543_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_0042;
			}
			case 6:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0030:
	{
		return _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
	}

IL_0036:
	{
		bool* L_2 = __this->get_address_of_inst_boolean_1();
		String_t* L_3;
		L_3 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0042:
	{
		double* L_4 = __this->get_address_of_inst_double_2();
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_004e:
	{
		int32_t* L_6 = __this->get_address_of_inst_int_3();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_005a:
	{
		int64_t* L_8 = __this->get_address_of_inst_long_4();
		String_t* L_9;
		L_9 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0066:
	{
		return _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
	}

IL_006c:
	{
		String_t* L_10 = __this->get_inst_string_6();
		return L_10;
	}

IL_0073:
	{
		return _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * JsonData_op_Implicit_mF135468CF0512DAFB7DA684E7BACAEECFB6141B5 (int32_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_op_Implicit_mF135468CF0512DAFB7DA684E7BACAEECFB6141B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_op_Implicit_mF135468CF0512DAFB7DA684E7BACAEECFB6141B5_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_op_Implicit_mF135468CF0512DAFB7DA684E7BACAEECFB6141B5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___data0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_1 = (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)il2cpp_codegen_object_new(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		JsonData__ctor_m68F30DAF47D85B8235596EF5278581D41DC6FCE8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * JsonData_op_Implicit_m9134A12021BAE5A61B1F2EB1BA1257D773501496 (int64_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_op_Implicit_m9134A12021BAE5A61B1F2EB1BA1257D773501496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_op_Implicit_m9134A12021BAE5A61B1F2EB1BA1257D773501496_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_op_Implicit_m9134A12021BAE5A61B1F2EB1BA1257D773501496_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int64_t L_0 = ___data0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_1 = (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)il2cpp_codegen_object_new(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		JsonData__ctor_m5CC56FCD25998797C084B1D6F1526B77E1702540(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * JsonData_op_Implicit_m8B8B8B2549508F4F02BEE1C78C3EC594B4FB95A6 (String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_op_Implicit_m8B8B8B2549508F4F02BEE1C78C3EC594B4FB95A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonData_op_Implicit_m8B8B8B2549508F4F02BEE1C78C3EC594B4FB95A6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_op_Implicit_m8B8B8B2549508F4F02BEE1C78C3EC594B4FB95A6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___data0;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_1 = (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C *)il2cpp_codegen_object_new(JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_il2cpp_TypeInfo_var);
		JsonData__ctor_m28FDE67F410D13807B9AAADC357DEA3DE4CB3EBE(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_m11165D8B193AFE09A19581A8210668BE48C78D86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m30DB189F64628CBBADA667D33151B959717F1A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32CCF3D314EDBD059524C61924F6199494A41476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCC8F92039CC236F405B97D659F8C7D64C4DCC991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper__cctor_m11165D8B193AFE09A19581A8210668BE48C78D86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper__cctor_m11165D8B193AFE09A19581A8210668BE48C78D86_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper__cctor_m11165D8B193AFE09A19581A8210668BE48C78D86_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_2, /*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_4, /*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_static_err_stack_16(L_5);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C * L_6 = (Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C *)il2cpp_codegen_object_new(Dictionary_2_t33A4E146898B9B8D2EAAE3E78D067C475D519E5C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCC8F92039CC236F405B97D659F8C7D64C4DCC991(L_6, /*hidden argument*/Dictionary_2__ctor_mCC8F92039CC236F405B97D659F8C7D64C4DCC991_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_array_metadata_6(L_6);
		Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * L_7 = (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *)il2cpp_codegen_object_new(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762(L_7, /*hidden argument*/Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_conv_ops_8(L_7);
		Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB * L_8 = (Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB *)il2cpp_codegen_object_new(Dictionary_2_tD49EACA6FBEC313512693004DB046B103D093FFB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32CCF3D314EDBD059524C61924F6199494A41476(L_8, /*hidden argument*/Dictionary_2__ctor_m32CCF3D314EDBD059524C61924F6199494A41476_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_object_metadata_10(L_8);
		Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB * L_9 = (Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB *)il2cpp_codegen_object_new(Dictionary_2_tA036D2BC9557968631D1CFDDFB6F4F432AD85BAB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m30DB189F64628CBBADA667D33151B959717F1A62(L_9, /*hidden argument*/Dictionary_2__ctor_m30DB189F64628CBBADA667D33151B959717F1A62_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_type_properties_12(L_9);
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_10 = (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 *)il2cpp_codegen_object_new(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C(L_10, /*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_static_writer_14(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * L_11;
		L_11 = DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B(/*hidden argument*/NULL);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_datetime_format_1(L_11);
		Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E * L_12 = (Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E *)il2cpp_codegen_object_new(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7(L_12, /*hidden argument*/Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_12);
		Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E * L_13 = (Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E *)il2cpp_codegen_object_new(Dictionary_2_t570B6D94B522C4E123B83BE608B18D1B1023409E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7(L_13, /*hidden argument*/Dictionary_2__ctor_mB35BDFB1D4CE808585DE8BA4B9A9E22FA87766B7_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_13);
		Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498 * L_14 = (Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498 *)il2cpp_codegen_object_new(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B(L_14, /*hidden argument*/Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_14);
		Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498 * L_15 = (Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498 *)il2cpp_codegen_object_new(Dictionary_2_t87BF43F53E528D605959A653F539A1B45B1B2498_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B(L_15, /*hidden argument*/Dictionary_2__ctor_m4153CBD539983E0C75E3B13CC5042F5B6A7A1F0B_RuntimeMethod_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_15);
		JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tEDE20848338764B0FC7F39C59539C676F59D16A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_5 = NULL;
	int32_t V_6 = 0;
	FieldInfo_t * V_7 = NULL;
	PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject * V_9 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(!0) */, IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434 * L_3 = (List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434 *)il2cpp_codegen_object_new(List_1_t42505D544B05F36C2F3DC4BCBBA4505422DCB434_il2cpp_TypeInfo_var);
		List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81(L_3, /*hidden argument*/List_1__ctor_m003D4DA6ED1E8D3EF7AB2353E4B6246B4D42FA81_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_5;
		L_5 = Type_GetProperties_m4126C117279AD617D8D167367DF953C451FC49E3(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0067;
	}

IL_0025:
	{
		CHECK_PAUSE_POINT;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		PropertyInfo_t * L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0063;
	}

IL_0043:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B ));
		PropertyInfo_t * L_13 = V_3;
		(&V_4)->set_Info_0(L_13);
		(&V_4)->set_IsField_1((bool)0);
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  L_15 = V_4;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_tEDE20848338764B0FC7F39C59539C676F59D16A6_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0063:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_17 = V_2;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_19 = ___type0;
		NullCheck(L_19);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_20;
		L_20 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		V_6 = 0;
		goto IL_00ae;
	}

IL_0080:
	{
		CHECK_PAUSE_POINT;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_21 = V_5;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_7 = L_24;
		il2cpp_codegen_initobj((&V_8), sizeof(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B ));
		FieldInfo_t * L_25 = V_7;
		(&V_8)->set_Info_0(L_25);
		(&V_8)->set_IsField_1((bool)1);
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  L_27 = V_8;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_tEDE20848338764B0FC7F39C59539C676F59D16A6_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00ae:
	{
		int32_t L_29 = V_6;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_0080;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject * L_31 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_type_properties_lock_13();
		V_9 = L_31;
		RuntimeObject * L_32 = V_9;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_32, /*hidden argument*/NULL);
	}

IL_00c7:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		try
		{ // begin try (depth: 2)
			STORE_TRY_ID(methodExecutionContext, 1);
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			RuntimeObject* L_33 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_type_properties_12();
			Type_t * L_34 = ___type0;
			RuntimeObject* L_35 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(!0,!1) */, IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E_il2cpp_TypeInfo_var, L_33, L_34, L_35);
			goto IL_00e3;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d8;
			throw e;
		}

CATCH_00d8:
		{ // begin catch(System.ArgumentException)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				IL2CPP_LEAVE(0xF0, FINALLY_00e8);
			}

IL_00de:
			{
				; // IL_00de: leave IL_00e3
			}
		} // end catch (depth: 2)

IL_00e3:
		{
			IL2CPP_LEAVE(0xF0, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		RuntimeObject * L_36 = V_9;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_36, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF0, IL_00f0)
	}

IL_00f0:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_RegisterBaseExporters_mBF1393BCE9A5B4BA16190BE15A8198E2D21F72DF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Type_t * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t * G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t * G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t * G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t * G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_3 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_17();
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_4 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_4, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache11_17(L_4);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_5 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_17();
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_5);
		RuntimeObject* L_6 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_9 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_18();
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_0058;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_10 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_10, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache12_18(L_10);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_11 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_18();
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_11);
		RuntimeObject* L_12 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_15 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_19();
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			goto IL_0089;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_16 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_16, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache13_19(L_16);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_17 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_19();
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_17);
		RuntimeObject* L_18 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_21 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_20();
		G_B7_0 = L_20;
		G_B7_1 = L_18;
		if (L_21)
		{
			G_B8_0 = L_20;
			G_B8_1 = L_18;
			goto IL_00ba;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_22 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_22, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache14_20(L_22);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_23 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_20();
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_23);
		RuntimeObject* L_24 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_27 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_21();
		G_B9_0 = L_26;
		G_B9_1 = L_24;
		if (L_27)
		{
			G_B10_0 = L_26;
			G_B10_1 = L_24;
			goto IL_00eb;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_28 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_28, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache15_21(L_28);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_29 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_21();
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_29);
		RuntimeObject* L_30 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_33 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache16_22();
		G_B11_0 = L_32;
		G_B11_1 = L_30;
		if (L_33)
		{
			G_B12_0 = L_32;
			G_B12_1 = L_30;
			goto IL_011c;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_34 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_34, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache16_22(L_34);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_35 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache16_22();
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_35);
		RuntimeObject* L_36 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_37, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_39 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache17_23();
		G_B13_0 = L_38;
		G_B13_1 = L_36;
		if (L_39)
		{
			G_B14_0 = L_38;
			G_B14_1 = L_36;
			goto IL_014d;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_40 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_40, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache17_23(L_40);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_41 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache17_23();
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_43, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_45 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_24();
		G_B15_0 = L_44;
		G_B15_1 = L_42;
		if (L_45)
		{
			G_B16_0 = L_44;
			G_B16_1 = L_42;
			goto IL_017e;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_46 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_46, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache18_24(L_46);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_47 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_24();
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_47);
		RuntimeObject* L_48 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_51 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache19_25();
		G_B17_0 = L_50;
		G_B17_1 = L_48;
		if (L_51)
		{
			G_B18_0 = L_50;
			G_B18_1 = L_48;
			goto IL_01af;
		}
	}
	{
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_52 = (ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *)il2cpp_codegen_object_new(ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m282C86B2ED57553ACC1363A0E29005665AC313CD(L_52, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache19_25(L_52);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_53 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache19_25();
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_53);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273_RuntimeMethod_var);
	ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_RegisterBaseImporters_m9B818F33B99C5CF644C03840DB9AA68BE8980273_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_0 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1A_26();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_1 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_1, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1A_26(L_1);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_2 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1A_26();
		V_0 = L_2;
		RuntimeObject* L_3 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_8 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_3, L_5, L_7, L_8, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_9 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1B_27();
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_10 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_10, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1B_27(L_10);
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_11 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1B_27();
		V_0 = L_11;
		RuntimeObject* L_12 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_17 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_18 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1C_28();
		if (L_18)
		{
			goto IL_0092;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_19 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_19, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1C_28(L_19);
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_20 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1C_28();
		V_0 = L_20;
		RuntimeObject* L_21 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_22 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23;
		L_23 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_22, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_26 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_21, L_23, L_25, L_26, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_27 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1D_29();
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_28 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_28, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1D_29(L_28);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_29 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1D_29();
		V_0 = L_29;
		RuntimeObject* L_30 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_35 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_30, L_32, L_34, L_35, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_36 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1E_30();
		if (L_36)
		{
			goto IL_010c;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_37 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_37, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1E_30(L_37);
	}

IL_010c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_38 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1E_30();
		V_0 = L_38;
		RuntimeObject* L_39 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_40 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41;
		L_41 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_40, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_44 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_39, L_41, L_43, L_44, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_45 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1F_31();
		if (L_45)
		{
			goto IL_0149;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_46 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_46, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1F_31(L_46);
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_47 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1F_31();
		V_0 = L_47;
		RuntimeObject* L_48 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_51 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_52;
		L_52 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_51, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_53 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_48, L_50, L_52, L_53, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_54 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache20_32();
		if (L_54)
		{
			goto IL_0186;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_55 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_55, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache20_32(L_55);
	}

IL_0186:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_56 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache20_32();
		V_0 = L_56;
		RuntimeObject* L_57 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_58 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59;
		L_59 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_58, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_60 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_61;
		L_61 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_60, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_62 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_57, L_59, L_61, L_62, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_63 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache21_33();
		if (L_63)
		{
			goto IL_01c3;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_64 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_64, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache21_33(L_64);
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_65 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache21_33();
		V_0 = L_65;
		RuntimeObject* L_66 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_67 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_68;
		L_68 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_67, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_69 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_70;
		L_70 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_69, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_71 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_66, L_68, L_70, L_71, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_72 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache22_34();
		if (L_72)
		{
			goto IL_0200;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_73 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_73, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache22_34(L_73);
	}

IL_0200:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_74 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache22_34();
		V_0 = L_74;
		RuntimeObject* L_75 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_76 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77;
		L_77 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_76, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_78 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_79;
		L_79 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_78, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_80 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_75, L_77, L_79, L_80, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_81 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache23_35();
		if (L_81)
		{
			goto IL_023d;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_82 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_82, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache23_35(L_82);
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_83 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache23_35();
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_85 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86;
		L_86 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_85, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_87 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_88;
		L_88 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_87, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_89 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_84, L_86, L_88, L_89, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_90 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache24_36();
		if (L_90)
		{
			goto IL_027a;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_91 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_91, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache24_36(L_91);
	}

IL_027a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_92 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache24_36();
		V_0 = L_92;
		RuntimeObject* L_93 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_94 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95;
		L_95 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_96 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_97;
		L_97 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_96, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_98 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_99 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache25_37();
		if (L_99)
		{
			goto IL_02b7;
		}
	}
	{
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_100 = (ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 *)il2cpp_codegen_object_new(ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m0C6474F5AA5E95BE1FA4C5BF0303761FE580F3DB(L_100, NULL, (intptr_t)((intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache25_37(L_100);
	}

IL_02b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_101 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache25_37();
		V_0 = L_101;
		RuntimeObject* L_102 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_103 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_104;
		L_104 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_103, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_105 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_106;
		L_106 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_105, /*hidden argument*/NULL);
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_107 = V_0;
		JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1(L_102, L_104, L_106, L_107, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBCB00C5E9B2C77584C3ACEAD5D18109A91459BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5ADE0041E6F5EE617F0339E354AD8EAF9A9F9860_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tDA2D8FAFD02D362F032B0397F7060BB6D1D0D668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_RegisterImporter_m75E47C1DE450ECDFF50336F8401E6691894FA7A1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tDA2D8FAFD02D362F032B0397F7060BB6D1D0D668_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469 * L_5 = (Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469 *)il2cpp_codegen_object_new(Dictionary_2_t18E02B555406ED9FEE7514D9964CCACD2AE8D469_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBCB00C5E9B2C77584C3ACEAD5D18109A91459BA5(L_5, /*hidden argument*/Dictionary_2__ctor_mBCB00C5E9B2C77584C3ACEAD5D18109A91459BA5_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_tDA2D8FAFD02D362F032B0397F7060BB6D1D0D668_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0018:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tDA2D8FAFD02D362F032B0397F7060BB6D1D0D668_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t817DA63CC49A67D28F312275947F58826A3787E8 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t5ADE0041E6F5EE617F0339E354AD8EAF9A9F9860_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768 (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t53A330CCCA62BDDF7BDD3CA6BBB5917A285026C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBF8348C5EC180245FA7E9CB28699FB9FD5A414E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	Type_t * V_9 = NULL;
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * V_10 = NULL;
	ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * V_11 = NULL;
	Type_t * V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  V_15;
	memset((&V_15), 0, sizeof(V_15));
	PropertyInfo_t * V_16 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = ___depth3;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_max_nesting_depth_0();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral456BA6DFA4ECDFAAD0D654A1EC48EE0C8CB90B18)), L_3, /*hidden argument*/NULL);
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_5 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject * L_6 = ___obj0;
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_7 = ___writer1;
		NullCheck(L_7);
		JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3(L_7, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_002f:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		bool L_9 = ___writer_is_private2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_10 = ___writer1;
		NullCheck(L_10);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_11;
		L_11 = JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_inline(L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		goto IL_0067;
	}

IL_005b:
	{
		RuntimeObject * L_14 = ___obj0;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_15 = ___writer1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * >::Invoke(7 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t41686EE8FCFDA6F1E9D16727421CB1B22EA9FFB9_il2cpp_TypeInfo_var)), L_15);
	}

IL_0067:
	{
		return;
	}

IL_0068:
	{
		RuntimeObject * L_16 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_17 = ___writer1;
		RuntimeObject * L_18 = ___obj0;
		NullCheck(L_17);
		JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		RuntimeObject * L_19 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_20 = ___writer1;
		RuntimeObject * L_21 = ___obj0;
		NullCheck(L_20);
		JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920(L_20, ((*(double*)((double*)UnBox(L_21, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		RuntimeObject * L_22 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_23 = ___writer1;
		RuntimeObject * L_24 = ___obj0;
		NullCheck(L_23);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_23, ((*(int32_t*)((int32_t*)UnBox(L_24, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		RuntimeObject * L_25 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_00c8;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_26 = ___writer1;
		RuntimeObject * L_27 = ___obj0;
		NullCheck(L_26);
		JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6(L_26, ((*(bool*)((bool*)UnBox(L_27, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00c8:
	{
		RuntimeObject * L_28 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_28, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e0;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_29 = ___writer1;
		RuntimeObject * L_30 = ___obj0;
		NullCheck(L_29);
		JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25(L_29, ((*(int64_t*)((int64_t*)UnBox(L_30, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00e0:
	{
		RuntimeObject * L_31 = ___obj0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_31, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_013f;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_32 = ___writer1;
		NullCheck(L_32);
		JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A(L_32, /*hidden argument*/NULL);
		RuntimeObject * L_33 = ___obj0;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34;
		L_34 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_00fd:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			goto IL_0114;
		}

IL_0102:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_35 = V_0;
			NullCheck(L_35);
			RuntimeObject * L_36;
			L_36 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_35);
			V_1 = L_36;
			RuntimeObject * L_37 = V_1;
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_38 = ___writer1;
			bool L_39 = ___writer_is_private2;
			int32_t L_40 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768(L_37, L_38, L_39, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0114:
		{
			RuntimeObject* L_41 = V_0;
			NullCheck(L_41);
			bool L_42;
			L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0102;
			}
		}

IL_011f:
		{
			IL2CPP_LEAVE(0x138, FINALLY_0124);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0124;
	}

FINALLY_0124:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_43 = V_0;
			RuntimeObject* L_44 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_2 = L_44;
			if (!L_44)
			{
				goto IL_0137;
			}
		}

IL_0131:
		{
			RuntimeObject* L_45 = V_2;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_45);
		}

IL_0137:
		{
			IL2CPP_END_FINALLY(292)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x138, IL_0138)
	}

IL_0138:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_46 = ___writer1;
		NullCheck(L_46);
		JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905(L_46, /*hidden argument*/NULL);
		return;
	}

IL_013f:
	{
		RuntimeObject * L_47 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_47, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)))
		{
			goto IL_01a2;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_48 = ___writer1;
		NullCheck(L_48);
		JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A(L_48, /*hidden argument*/NULL);
		RuntimeObject * L_49 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)));
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var)));
		V_3 = L_50;
	}

IL_015c:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 1);
		{
			goto IL_0175;
		}

IL_0161:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_51 = V_3;
			NullCheck(L_51);
			RuntimeObject * L_52;
			L_52 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_51);
			V_4 = L_52;
			RuntimeObject * L_53 = V_4;
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_54 = ___writer1;
			bool L_55 = ___writer_is_private2;
			int32_t L_56 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768(L_53, L_54, L_55, ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0175:
		{
			RuntimeObject* L_57 = V_3;
			NullCheck(L_57);
			bool L_58;
			L_58 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_0161;
			}
		}

IL_0180:
		{
			IL2CPP_LEAVE(0x19B, FINALLY_0185);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0185;
	}

FINALLY_0185:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_59 = V_3;
			RuntimeObject* L_60 = ((RuntimeObject*)IsInst((RuntimeObject*)L_59, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_5 = L_60;
			if (!L_60)
			{
				goto IL_019a;
			}
		}

IL_0193:
		{
			RuntimeObject* L_61 = V_5;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_61);
		}

IL_019a:
		{
			IL2CPP_END_FINALLY(389)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(389)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19B, IL_019b)
	}

IL_019b:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_62 = ___writer1;
		NullCheck(L_62);
		JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905(L_62, /*hidden argument*/NULL);
		return;
	}

IL_01a2:
	{
		RuntimeObject * L_63 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_63, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)))
		{
			goto IL_0225;
		}
	}
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_64 = ___writer1;
		NullCheck(L_64);
		JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9(L_64, /*hidden argument*/NULL);
		RuntimeObject * L_65 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)));
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)));
		V_6 = L_66;
	}

IL_01c0:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 2);
		{
			goto IL_01f6;
		}

IL_01c5:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_67 = V_6;
			NullCheck(L_67);
			RuntimeObject * L_68;
			L_68 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_67);
			V_7 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_68, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_69 = ___writer1;
			RuntimeObject * L_70;
			L_70 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_7), /*hidden argument*/NULL);
			NullCheck(L_69);
			JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2(L_69, ((String_t*)CastclassSealed((RuntimeObject*)L_70, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_71;
			L_71 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_7), /*hidden argument*/NULL);
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_72 = ___writer1;
			bool L_73 = ___writer_is_private2;
			int32_t L_74 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768(L_71, L_72, L_73, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_01f6:
		{
			RuntimeObject* L_75 = V_6;
			NullCheck(L_75);
			bool L_76;
			L_76 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_75);
			if (L_76)
			{
				goto IL_01c5;
			}
		}

IL_0202:
		{
			IL2CPP_LEAVE(0x21E, FINALLY_0207);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0207;
	}

FINALLY_0207:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_77 = V_6;
			RuntimeObject* L_78 = ((RuntimeObject*)IsInst((RuntimeObject*)L_77, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_8 = L_78;
			if (!L_78)
			{
				goto IL_021d;
			}
		}

IL_0216:
		{
			RuntimeObject* L_79 = V_8;
			NullCheck(L_79);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_79);
		}

IL_021d:
		{
			IL2CPP_END_FINALLY(519)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(519)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x21E, IL_021e)
	}

IL_021e:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_80 = ___writer1;
		NullCheck(L_80);
		JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3(L_80, /*hidden argument*/NULL);
		return;
	}

IL_0225:
	{
		RuntimeObject * L_81 = ___obj0;
		NullCheck(L_81);
		Type_t * L_82;
		L_82 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_81, /*hidden argument*/NULL);
		V_9 = L_82;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_83 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_84 = V_9;
		NullCheck(L_83);
		bool L_85;
		L_85 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, L_83, L_84);
		if (!L_85)
		{
			goto IL_0256;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_86 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_87 = V_9;
		NullCheck(L_86);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_88;
		L_88 = InterfaceFuncInvoker1< ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, L_86, L_87);
		V_10 = L_88;
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_89 = V_10;
		RuntimeObject * L_90 = ___obj0;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_91 = ___writer1;
		NullCheck(L_89);
		ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008(L_89, L_90, L_91, /*hidden argument*/NULL);
		return;
	}

IL_0256:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_93 = V_9;
		NullCheck(L_92);
		bool L_94;
		L_94 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, L_92, L_93);
		if (!L_94)
		{
			goto IL_027f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_95 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_96 = V_9;
		NullCheck(L_95);
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_97;
		L_97 = InterfaceFuncInvoker1< ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t7767BB08DBDACFA64CD2B18B9EE012D70C26A3A4_il2cpp_TypeInfo_var, L_95, L_96);
		V_11 = L_97;
		ExporterFunc_t038490167D2D4D7D435C03C6A31F10D5F35837AC * L_98 = V_11;
		RuntimeObject * L_99 = ___obj0;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_100 = ___writer1;
		NullCheck(L_98);
		ExporterFunc_Invoke_m31097DE9B125F96BA2CB2264133210E6CD0C6008(L_98, L_99, L_100, /*hidden argument*/NULL);
		return;
	}

IL_027f:
	{
		RuntimeObject * L_101 = ___obj0;
		if (!((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)IsInstClass((RuntimeObject*)L_101, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var)))
		{
			goto IL_02e4;
		}
	}
	{
		Type_t * L_102 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		Type_t * L_103;
		L_103 = Enum_GetUnderlyingType_m8BD5EDDA4C9A15C2988B27DD48314AC3C16F7A53(L_102, /*hidden argument*/NULL);
		V_12 = L_103;
		Type_t * L_104 = V_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_105 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106;
		L_106 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_105, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_104) == ((RuntimeObject*)(Type_t *)L_106)))
		{
			goto IL_02c6;
		}
	}
	{
		Type_t * L_107 = V_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_108 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_109;
		L_109 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_108, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_107) == ((RuntimeObject*)(Type_t *)L_109)))
		{
			goto IL_02c6;
		}
	}
	{
		Type_t * L_110 = V_12;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_111 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_112;
		L_112 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_111, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_110) == ((RuntimeObject*)(Type_t *)L_112))))
		{
			goto IL_02d7;
		}
	}

IL_02c6:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_113 = ___writer1;
		RuntimeObject * L_114 = ___obj0;
		NullCheck(L_113);
		JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E(L_113, ((*(uint64_t*)((uint64_t*)UnBox(L_114, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		goto IL_02e3;
	}

IL_02d7:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_115 = ___writer1;
		RuntimeObject * L_116 = ___obj0;
		NullCheck(L_115);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_115, ((*(int32_t*)((int32_t*)UnBox(L_116, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_02e3:
	{
		return;
	}

IL_02e4:
	{
		Type_t * L_117 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m2C7CEB008D0266763A423E39587545C08F8F9DAB(L_117, /*hidden argument*/NULL);
		RuntimeObject* L_118 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_119 = V_9;
		NullCheck(L_118);
		RuntimeObject* L_120;
		L_120 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(!0) */, IDictionary_2_t0329F1DCB6CE767150A2B1906BA88242EFA4451E_il2cpp_TypeInfo_var, L_118, L_119);
		V_13 = L_120;
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_121 = ___writer1;
		NullCheck(L_121);
		JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9(L_121, /*hidden argument*/NULL);
		RuntimeObject* L_122 = V_13;
		NullCheck(L_122);
		RuntimeObject* L_123;
		L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_t53A330CCCA62BDDF7BDD3CA6BBB5917A285026C6_il2cpp_TypeInfo_var, L_122);
		V_14 = L_123;
	}

IL_0308:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 3);
		{
			goto IL_0394;
		}

IL_030d:
		{
			CHECK_PAUSE_POINT;
			RuntimeObject* L_124 = V_14;
			NullCheck(L_124);
			PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  L_125;
			L_125 = InterfaceFuncInvoker0< PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_tBF8348C5EC180245FA7E9CB28699FB9FD5A414E7_il2cpp_TypeInfo_var, L_124);
			V_15 = L_125;
			bool L_126 = (&V_15)->get_IsField_1();
			if (!L_126)
			{
				goto IL_0355;
			}
		}

IL_0322:
		{
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_127 = ___writer1;
			MemberInfo_t * L_128 = (&V_15)->get_Info_0();
			NullCheck(L_128);
			String_t* L_129;
			L_129 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_128);
			NullCheck(L_127);
			JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2(L_127, L_129, /*hidden argument*/NULL);
			MemberInfo_t * L_130 = (&V_15)->get_Info_0();
			RuntimeObject * L_131 = ___obj0;
			NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_130, FieldInfo_t_il2cpp_TypeInfo_var)));
			RuntimeObject * L_132;
			L_132 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_130, FieldInfo_t_il2cpp_TypeInfo_var)), L_131);
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_133 = ___writer1;
			bool L_134 = ___writer_is_private2;
			int32_t L_135 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768(L_132, L_133, L_134, ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)), /*hidden argument*/NULL);
			goto IL_0394;
		}

IL_0355:
		{
			MemberInfo_t * L_136 = (&V_15)->get_Info_0();
			V_16 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_136, PropertyInfo_t_il2cpp_TypeInfo_var));
			PropertyInfo_t * L_137 = V_16;
			NullCheck(L_137);
			bool L_138;
			L_138 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_137);
			if (!L_138)
			{
				goto IL_0394;
			}
		}

IL_036f:
		{
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_139 = ___writer1;
			MemberInfo_t * L_140 = (&V_15)->get_Info_0();
			NullCheck(L_140);
			String_t* L_141;
			L_141 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_140);
			NullCheck(L_139);
			JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2(L_139, L_141, /*hidden argument*/NULL);
			PropertyInfo_t * L_142 = V_16;
			RuntimeObject * L_143 = ___obj0;
			NullCheck(L_142);
			RuntimeObject * L_144;
			L_144 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_142, L_143, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_145 = ___writer1;
			bool L_146 = ___writer_is_private2;
			int32_t L_147 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768(L_144, L_145, L_146, ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0394:
		{
			RuntimeObject* L_148 = V_14;
			NullCheck(L_148);
			bool L_149;
			L_149 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_148);
			if (L_149)
			{
				goto IL_030d;
			}
		}

IL_03a0:
		{
			IL2CPP_LEAVE(0x3B4, FINALLY_03a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03a5;
	}

FINALLY_03a5:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			RuntimeObject* L_150 = V_14;
			if (!L_150)
			{
				goto IL_03b3;
			}
		}

IL_03ac:
		{
			RuntimeObject* L_151 = V_14;
			NullCheck(L_151);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_151);
		}

IL_03b3:
		{
			IL2CPP_END_FINALLY(933)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(933)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B4, IL_03b4)
	}

IL_03b4:
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_152 = ___writer1;
		NullCheck(L_152);
		JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3(L_152, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_mF4E9BE233A39C7412AB51E6DFA2B3206FA508D35 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToJson_mF4E9BE233A39C7412AB51E6DFA2B3206FA508D35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_ToJson_mF4E9BE233A39C7412AB51E6DFA2B3206FA508D35_RuntimeMethod_var);
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_ToJson_mF4E9BE233A39C7412AB51E6DFA2B3206FA508D35_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_static_writer_lock_15();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_2 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_static_writer_14();
			NullCheck(L_2);
			JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5(L_2, /*hidden argument*/NULL);
			RuntimeObject * L_3 = ___obj0;
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_4 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_static_writer_14();
			JsonMapper_WriteValue_m49D99C470D6D2040848130FDCDB321DBB3881768(L_3, L_4, (bool)1, 0, /*hidden argument*/NULL);
			JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_5 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_static_writer_14();
			NullCheck(L_5);
			String_t* L_6;
			L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
			V_1 = L_6;
			IL2CPP_LEAVE(0x3F, FINALLY_0038);
		}

IL_0033:
		{
			; // IL_0033: leave IL_003f
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		STORE_TRY_ID(methodExecutionContext, -1);
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
	}

IL_003f:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456 (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2 (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9(L_0, ((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_1, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928 (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4 (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E (RuntimeObject * ___obj0, JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644(((*(double*)((double*)UnBox(L_0, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90 (RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_3);
		return L_4;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter__ctor_m7BC5C15EECE15D143BD8A15D0A5985AD52B7B37C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_10(L_2);
		JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m7BE69CFB78CA47BDF1B1E0F0AB738E228E44F4EA_RuntimeMethod_var)));
	}

IL_0017:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___writer0;
		__this->set_writer_10(L_2);
		JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m95FA593DD1861B4734FF3CBDCFEBEA2991F90EA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter__cctor_m95FA593DD1861B4734FF3CBDCFEBEA2991F90EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter__cctor_m95FA593DD1861B4734FF3CBDCFEBEA2991F90EA3_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter__cctor_m95FA593DD1861B4734FF3CBDCFEBEA2991F90EA3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		((JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get_writer_10();
		return L_0;
	}
}
// System.Boolean LitJson.JsonWriter::get_Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->get_validate_9();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_2 = __this->get_context_1();
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0023:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_7 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var)));
	}

IL_0045:
	{
		int32_t L_8 = ___cond0;
		V_0 = L_8;
		int32_t L_9 = V_0;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00e6;
			}
			case 4:
			{
				goto IL_0116;
			}
		}
	}
	{
		goto IL_0156;
	}

IL_0066:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_10 = __this->get_context_1();
		NullCheck(L_10);
		bool L_11 = L_10->get_InArray_1();
		if (L_11)
		{
			goto IL_0081;
		}
	}
	{
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_12 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var)));
	}

IL_0081:
	{
		goto IL_0156;
	}

IL_0086:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_13 = __this->get_context_1();
		NullCheck(L_13);
		bool L_14 = L_13->get_InObject_2();
		if (!L_14)
		{
			goto IL_00a6;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_15 = __this->get_context_1();
		NullCheck(L_15);
		bool L_16 = L_15->get_ExpectingValue_3();
		if (!L_16)
		{
			goto IL_00b1;
		}
	}

IL_00a6:
	{
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_17 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var)));
	}

IL_00b1:
	{
		goto IL_0156;
	}

IL_00b6:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_18 = __this->get_context_1();
		NullCheck(L_18);
		bool L_19 = L_18->get_InObject_2();
		if (!L_19)
		{
			goto IL_00e1;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_20 = __this->get_context_1();
		NullCheck(L_20);
		bool L_21 = L_20->get_ExpectingValue_3();
		if (L_21)
		{
			goto IL_00e1;
		}
	}
	{
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_22 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var)));
	}

IL_00e1:
	{
		goto IL_0156;
	}

IL_00e6:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_23 = __this->get_context_1();
		NullCheck(L_23);
		bool L_24 = L_23->get_InObject_2();
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_25 = __this->get_context_1();
		NullCheck(L_25);
		bool L_26 = L_25->get_ExpectingValue_3();
		if (!L_26)
		{
			goto IL_0111;
		}
	}

IL_0106:
	{
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_27 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var)));
	}

IL_0111:
	{
		goto IL_0156;
	}

IL_0116:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_28 = __this->get_context_1();
		NullCheck(L_28);
		bool L_29 = L_28->get_InArray_1();
		if (L_29)
		{
			goto IL_0151;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_30 = __this->get_context_1();
		NullCheck(L_30);
		bool L_31 = L_30->get_InObject_2();
		if (!L_31)
		{
			goto IL_0146;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_32 = __this->get_context_1();
		NullCheck(L_32);
		bool L_33 = L_32->get_ExpectingValue_3();
		if (L_33)
		{
			goto IL_0151;
		}
	}

IL_0146:
	{
		JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB * L_34 = (JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t7B9FC020044D7720D0B28709A64E64AC50A8F0DB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m568071738BAE977E3AD44167ACAE83DCC0C4250C(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197_RuntimeMethod_var)));
	}

IL_0151:
	{
		goto IL_0156;
	}

IL_0156:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m2D1A6B11F9A11EB9A317B918F697C3DBB0118967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Init_mFA6CA9E82330F11ABC40580AB7D8B281D1D8502A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_1 = (Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 *)il2cpp_codegen_object_new(Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2D1A6B11F9A11EB9A317B918F697C3DBB0118967(L_1, /*hidden argument*/Stack_1__ctor_m2D1A6B11F9A11EB9A317B918F697C3DBB0118967_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_2 = (WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 *)il2cpp_codegen_object_new(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_3 = __this->get_ctx_stack_2();
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9(L_3, L_4, /*hidden argument*/Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		CHECK_PAUSE_POINT;
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = __this->get_writer_10();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_003f:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = __this->get_writer_10();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = __this->get_writer_10();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_0034:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = __this->get_writer_10();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_005c:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_1 = __this->get_writer_10();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = __this->get_writer_10();
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_3);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_4 = __this->get_writer_10();
		NullCheck(L_4);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_4, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
	}

IL_001e:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m1123C16A4C93485B3C520120225013F1FD20F18E (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_ToString_m1123C16A4C93485B3C520120225013F1FD20F18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_ToString_m1123C16A4C93485B3C520120225013F1FD20F18E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_ToString_m1123C16A4C93485B3C520120225013F1FD20F18E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m5EFCE1DB4C712F6029539FC78605DB20445EEB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Reset_m1F0D6DA880B809AB23AE1829489BBD23C9D240E5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->set_has_reached_end_3((bool)0);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Clear_m5EFCE1DB4C712F6029539FC78605DB20445EEB2F(L_0, /*hidden argument*/Stack_1_Clear_m5EFCE1DB4C712F6029539FC78605DB20445EEB2F_RuntimeMethod_var);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1 = (WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 *)il2cpp_codegen_object_new(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_2 = __this->get_ctx_stack_2();
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9(L_2, L_3, /*hidden argument*/Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		StringBuilder_t * L_4 = __this->get_inst_string_builder_7();
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get_inst_string_builder_7();
		StringBuilder_t * L_6 = __this->get_inst_string_builder_7();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_5, 0, L_7, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___boolean0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_m3F4F70687F07A8829122AFE520D5ACBE3AFF90A6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * G_B2_0 = NULL;
	JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_mC27BBEE28DBAB52794475DEDB90997493F08B5F9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, double ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920_RuntimeMethod_var);
	String_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_m5CBDE8117F1F3EB6E119E3DAD45C7B1A10DAF920_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		double L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_4, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_6, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = __this->get_writer_10();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_004c:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		L_9->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_m462A6189ADC2FA0BBE8B708AD0182038656FBFA4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_m5B0A24C07C7D8C167819A2E70FC421D0330E7D25_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m96D69564ADA9ACFD81958A9AB178D27D7BFECB4E(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_m36735FAE9AF9E7958A3AE6FB5D27D12C351C8BA3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0023:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4(__this, L_1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_WriteArrayEnd_mE14D2C712CE6E52E79350C0DA15BD46B79868905_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 0, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1;
		L_1 = Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8(L_0, /*hidden argument*/Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8_RuntimeMethod_var);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_2 = __this->get_ctx_stack_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_inline(L_2, /*hidden argument*/Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_4 = __this->get_ctx_stack_2();
		NullCheck(L_4);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_5;
		L_5 = Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB(L_4, /*hidden argument*/Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB_RuntimeMethod_var);
		__this->set_context_1(L_5);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_6 = __this->get_context_1();
		NullCheck(L_6);
		L_6->set_ExpectingValue_3((bool)0);
	}

IL_0054:
	{
		JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_WriteArrayStart_m8CD464796109655C34700B7B0DE194B0EA327C7A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_0 = (WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 *)il2cpp_codegen_object_new(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InArray_1((bool)1);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_2 = __this->get_ctx_stack_2();
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9(L_2, L_3, /*hidden argument*/Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_WriteObjectEnd_mD76F0EC8E1B73CB1937BE258D3A30F5383125BF3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 1, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mB62C42D21771FF8C15155946FFE87FB14F5D24E6(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1;
		L_1 = Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8(L_0, /*hidden argument*/Stack_1_Pop_mED15474C96DD6735FDBA74CFECD0634C3D2775D8_RuntimeMethod_var);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_2 = __this->get_ctx_stack_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_inline(L_2, /*hidden argument*/Stack_1_get_Count_mC6F6E54CFF977310E4B9AF85DB9A9A9F49430EB4_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_4 = __this->get_ctx_stack_2();
		NullCheck(L_4);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_5;
		L_5 = Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB(L_4, /*hidden argument*/Stack_1_Peek_m1BEF3F63A304EFFD2E400C312D59FE1BD5797ADB_RuntimeMethod_var);
		__this->set_context_1(L_5);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_6 = __this->get_context_1();
		NullCheck(L_6);
		L_6->set_ExpectingValue_3((bool)0);
	}

IL_0054:
	{
		JsonWriter_Unindent_mE834CD4782DA9EBB84E2C3C35303C7A42A85CFC8(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_WriteObjectStart_m4CD8EE857B7AD5F5DA78DD0B5EA6E76B777CDEC9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m5130DC38FB64159D7B7DB464C27F48863F5F6A6E(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_0 = (WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 *)il2cpp_codegen_object_new(WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200_il2cpp_TypeInfo_var);
		WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InObject_2((bool)1);
		Stack_1_t27777B0F99A2C127ED9A57CF569B62C5550E4B74 * L_2 = __this->get_ctx_stack_2();
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9(L_2, L_3, /*hidden argument*/Stack_1_Push_m5AFFD06134B6135958AFB730487F041DAE7A2FC9_RuntimeMethod_var);
		JsonWriter_Indent_m421C803DED6E45BE0DCBB3B0E5C18E7749521652(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2 (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, String_t* ___property_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2_RuntimeMethod_var);
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_WritePropertyName_m19B9FE3980AD8243A0EF285AA49DE4D18F3CB3F2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		JsonWriter_DoValidation_m6DD39201D9C8ED75C4957CE488606D43B3AFB197(__this, 3, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mFD200B4BB8ADAB63C296F7BAA49346B2ED5EA03F(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___property_name0;
		JsonWriter_PutString_m688BF5AE3905DD5F5ABDD5ADC50455835D223AE4(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = __this->get_pretty_print_8();
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_4 = __this->get_context_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Padding_4();
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_6 = __this->get_context_1();
		String_t* L_7 = ___property_name0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_Padding_4(L_8);
	}

IL_0046:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Padding_4();
		String_t* L_11 = ___property_name0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_12));
		goto IL_006f;
	}

IL_005e:
	{
		CHECK_PAUSE_POINT;
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_13 = __this->get_writer_10();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)32));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_16 = __this->get_writer_10();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_0098;
	}

IL_008b:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_17 = __this->get_writer_10();
		NullCheck(L_17);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)58));
	}

IL_0098:
	{
		WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * L_18 = __this->get_context_1();
		NullCheck(L_18);
		L_18->set_ExpectingValue_3((bool)1);
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
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshal_pinvoke(const ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25& unmarshaled, ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshal_pinvoke_back(const ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_pinvoke& marshaled, ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshal_pinvoke_cleanup(ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshal_com(const ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25& unmarshaled, ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshal_com_back(const ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_com& marshaled, ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshal_com_cleanup(ObjectMetadata_t8E9EE413C87DF00EFAB9FDEE318CCD2E53538D25_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator__ctor_m4AB2E078A6B95C7DC0D2A2232AF28D8CCD2F916D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->set_list_enumerator_0(L_0);
		return;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Current_m54BE8568814512C4B61038881D22B643FC0BF928 (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_get_Current_m54BE8568814512C4B61038881D22B643FC0BF928_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator_get_Current_m54BE8568814512C4B61038881D22B643FC0BF928_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator_get_Current_m54BE8568814512C4B61038881D22B643FC0BF928_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_0;
		L_0 = OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2(__this, /*hidden argument*/NULL);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_1 = L_0;
		RuntimeObject * L_2 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2 (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2_RuntimeMethod_var);
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator_get_Entry_m12C2370BEE832A9FDECED0F488FDDFB2427ED1A2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_3;
		L_3 = KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_RuntimeMethod_var);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Key_mC39C422060E4600882CDCF44AE800CD4F58A167B (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_get_Key_mC39C422060E4600882CDCF44AE800CD4F58A167B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator_get_Key_mC39C422060E4600882CDCF44AE800CD4F58A167B_RuntimeMethod_var);
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator_get_Key_mC39C422060E4600882CDCF44AE800CD4F58A167B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m27CF0AA039C2456934EAD7B137B7C69B77931082_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Value_m5F77EB7AAE8D844BFB6298B27B4693781B458C15 (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_get_Value_m5F77EB7AAE8D844BFB6298B27B4693781B458C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator_get_Value_m5F77EB7AAE8D844BFB6298B27B4693781B458C15_RuntimeMethod_var);
	KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator_get_Value_m5F77EB7AAE8D844BFB6298B27B4693781B458C15_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_tD84B46B46515D6D19B896EDB67AD0D9AAD143E6B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * L_2;
		L_2 = KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_inline((KeyValuePair_2_tA3D471286D36593F48C6765215607DFDC7C36827 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4BB9785FCC7A8472930C1743B5E46BEF64A8DDD2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m4315460DFF47D650A6B50BBBCF1311D1937DFAEC (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_MoveNext_m4315460DFF47D650A6B50BBBCF1311D1937DFAEC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator_MoveNext_m4315460DFF47D650A6B50BBBCF1311D1937DFAEC_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator_MoveNext_m4315460DFF47D650A6B50BBBCF1311D1937DFAEC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m66D786001772AFBB6F1742A5BA777D360961AB1E (OrderedDictionaryEnumerator_tA7F9AD9CDAD310D2C60BABEE6377653D58729B31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_Reset_m66D786001772AFBB6F1742A5BA777D360961AB1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(OrderedDictionaryEnumerator_Reset_m66D786001772AFBB6F1742A5BA777D360961AB1E_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OrderedDictionaryEnumerator_Reset_m66D786001772AFBB6F1742A5BA777D360961AB1E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
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
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshal_pinvoke(const PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B& unmarshaled, PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshal_pinvoke_back(const PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_pinvoke& marshaled, PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshal_pinvoke_cleanup(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshal_com(const PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B& unmarshaled, PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshal_com_back(const PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_com& marshaled, PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshal_com_cleanup(PropertyMetadata_tB298D9D5AEB2B2FA2D1F45FCB69CFDB66D17722B_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0 (WriterContext_tA826682255FF1ED685A8F5EB428F81F55E074200 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0_RuntimeMethod_var);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WriterContext__ctor_m5580A551AA38876BDEE4F45BDFE10EF6A8A6E0B0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_inline (JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonData_GetJsonType_mA969FD75A6478C73F272786420F97DFF44068025_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_type_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_inline (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_set_Validate_mAAAC1EE08B657ADCEB8C5F2914754C454B2392D5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_inline (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_get_Validate_m2BE08398FE199E9B382F8BB4423A55A288DBB3E6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->get_validate_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_inline (JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JsonWriter_get_TextWriter_m2FDC839F61F0520D1DC4F0C3EA40C570DBA68D53_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get_writer_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
