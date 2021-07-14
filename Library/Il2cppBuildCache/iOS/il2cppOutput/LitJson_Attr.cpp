#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.CLSCompliantAttribute
struct CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;

IL2CPP_EXTERN_C const RuntimeMethod* RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.CLSCompliantAttribute::m_compliant
	bool ___m_compliant_0;

public:
	inline static int32_t get_offset_of_m_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249, ___m_compliant_0)); }
	inline bool get_m_compliant_0() const { return ___m_compliant_0; }
	inline bool* get_address_of_m_compliant_0() { return &___m_compliant_0; }
	inline void set_m_compliant_0(bool value)
	{
		___m_compliant_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.CLSCompliantAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270 (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * __this, bool ___isCompliant0, const RuntimeMethod* method);
static void LitJson_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[0];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache11(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache12(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache13(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache14(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache15(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache16(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache17(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache18(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache19(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache20(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache21(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache22(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache23(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache24(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache25(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_CustomAttributesCacheGenerator_JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_LitJson_AttributeGenerators[];
const CustomAttributesCacheGenerator g_LitJson_AttributeGenerators[45] = 
{
	JsonData_t1A4AA7A54C824C8E588DDF5D864204ED8692053C_CustomAttributesCacheGenerator,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache11,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache12,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache13,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache14,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache15,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache16,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache17,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache18,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache19,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1A,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1B,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1C,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1D,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1E,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache1F,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache20,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache21,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache22,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache23,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache24,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache25,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__0_mE601C858F492117D948BE42204656FBB5E5CC456,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__1_m3744DEAF43B9B3E82610D88039CD12C5D01E57CD,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__2_m19F7CA759FBC7D261C85B7D8C92085DE298A00C2,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__3_m555D4279F3F4C00DAB1444446860B9F8FF455C1E,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__4_m9A684CA327619A7E84ABAC7E5F9FEE91A6312928,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__5_mDB7103C71FE41FBDF36AF0B043433C89FBFFD3A4,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__6_mC17043179176E3FC3647BD8236D59B1AE18CABFD,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__7_m4C351E1661100741E823C9A43D28F75D1D1200EA,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseExportersU3Em__8_m198A0A8F58E3E8909CB27584818DBDBC76A56D4E,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__9_mB223378FD1F6BD14B3B3B920C057B23EF99E82A6,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__A_m3465C6FFD2979ACABF0C0184748DF194A898756B,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__B_mB81E47F27884EDF4E02729CADEB8479A7479A7C1,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__C_m074B408170D5EFDB23F57F7A3319BCC48725FE1D,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__D_m6C2DA450CC70C7D75B14C28266F7FAA04DF6D148,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__E_m6A5E31B01B067D09D0DC0B6D7F9438F52A14760E,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__F_m02074563A3292661EDA06C158DA86FE381336B2A,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__10_mEA8F12C4E830C8AEA7BE7C58A0F077D592C3B31F,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__11_mEDD84F0EEAB540CDAD07C6DDD2843E025EDC8214,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__12_m6235DE4D873F6C76C116386749ECB15501FC2209,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__13_m101B5A960C03792CE6B4330542B62FC1BC9BF56A,
	JsonMapper_tFBBD06F8B7F57B66081DFB9C6A152221470D1138_CustomAttributesCacheGenerator_JsonMapper_U3CRegisterBaseImportersU3Em__14_m828BD75311B0045475709B03840A51332827DB90,
	JsonWriter_t4540243047B4F62B7C9014EF6AFFE2DA9B1EBB77_CustomAttributesCacheGenerator_JsonWriter_Write_m0F86BDC825A0420CBC5ADEC64C7AE3EE19C6103E,
	LitJson_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
