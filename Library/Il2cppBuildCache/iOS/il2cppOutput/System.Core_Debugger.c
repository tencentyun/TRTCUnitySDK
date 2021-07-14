#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[66] = 
{
	{ 0, 0 } /* 0x06000001 System.Exception System.Linq.Error::ArgumentNull(System.String) */,
	{ 0, 0 } /* 0x06000002 System.Exception System.Linq.Error::MoreThanOneMatch() */,
	{ 0, 0 } /* 0x06000003 System.Exception System.Linq.Error::NoElements() */,
	{ 0, 0 } /* 0x06000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000006 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0 } /* 0x06000007 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000008 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0 } /* 0x06000009 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600000A System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0 } /* 0x0600000B System.Void System.Linq.Enumerable/Iterator`1::.ctor() */,
	{ 0, 0 } /* 0x0600000C TSource System.Linq.Enumerable/Iterator`1::get_Current() */,
	{ 0, 0 } /* 0x0600000D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone() */,
	{ 0, 0 } /* 0x0600000E System.Void System.Linq.Enumerable/Iterator`1::Dispose() */,
	{ 0, 0 } /* 0x0600000F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator() */,
	{ 0, 0 } /* 0x06000010 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext() */,
	{ 0, 0 } /* 0x06000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000012 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0 } /* 0x06000013 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator() */,
	{ 0, 0 } /* 0x06000014 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset() */,
	{ 0, 0 } /* 0x06000015 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000016 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone() */,
	{ 0, 0 } /* 0x06000017 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose() */,
	{ 0, 0 } /* 0x06000018 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext() */,
	{ 0, 0 } /* 0x06000019 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone() */,
	{ 0, 0 } /* 0x0600001C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext() */,
	{ 0, 0 } /* 0x0600001D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x0600001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone() */,
	{ 0, 0 } /* 0x06000020 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext() */,
	{ 0, 0 } /* 0x06000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0 } /* 0x06000022 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor() */,
	{ 0, 0 } /* 0x06000023 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource) */,
	{ 0, 0 } /* 0x06000024 System.Void System.Collections.Generic.HashSet`1::.ctor() */,
	{ 0, 0 } /* 0x06000025 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>) */,
	{ 0, 0 } /* 0x06000026 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */,
	{ 0, 0 } /* 0x06000027 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T) */,
	{ 0, 0 } /* 0x06000028 System.Void System.Collections.Generic.HashSet`1::Clear() */,
	{ 0, 0 } /* 0x06000029 System.Boolean System.Collections.Generic.HashSet`1::Contains(T) */,
	{ 0, 0 } /* 0x0600002A System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32) */,
	{ 0, 0 } /* 0x0600002B System.Boolean System.Collections.Generic.HashSet`1::Remove(T) */,
	{ 0, 0 } /* 0x0600002C System.Int32 System.Collections.Generic.HashSet`1::get_Count() */,
	{ 0, 0 } /* 0x0600002D System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly() */,
	{ 0, 0 } /* 0x0600002E System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator() */,
	{ 0, 0 } /* 0x0600002F System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator() */,
	{ 0, 0 } /* 0x06000030 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator() */,
	{ 0, 0 } /* 0x06000031 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */,
	{ 0, 0 } /* 0x06000032 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object) */,
	{ 0, 0 } /* 0x06000033 System.Boolean System.Collections.Generic.HashSet`1::Add(T) */,
	{ 0, 0 } /* 0x06000034 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[]) */,
	{ 0, 0 } /* 0x06000035 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000036 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32) */,
	{ 0, 0 } /* 0x06000037 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity() */,
	{ 0, 0 } /* 0x06000038 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32) */,
	{ 0, 0 } /* 0x06000039 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T) */,
	{ 0, 0 } /* 0x0600003A System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T) */,
	{ 0, 0 } /* 0x0600003B System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>) */,
	{ 0, 0 } /* 0x0600003C System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose() */,
	{ 0, 0 } /* 0x0600003D System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext() */,
	{ 0, 0 } /* 0x0600003E T System.Collections.Generic.HashSet`1/Enumerator::get_Current() */,
	{ 0, 0 } /* 0x0600003F System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0 } /* 0x06000040 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset() */,
	{ 0, 0 } /* 0x06000041 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>) */,
	{ 0, 0 } /* 0x06000042 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsSystem_Core[];
Il2CppSequencePoint g_sequencePointsSystem_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsSystem_Core[];
Il2CppSequencePoint g_sequencePointsSystem_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[66] = 
{
	{ 0, 0, 0 } /* System.Exception System.Linq.Error::ArgumentNull(System.String) */,
	{ 0, 0, 0 } /* System.Exception System.Linq.Error::MoreThanOneMatch() */,
	{ 0, 0, 0 } /* System.Exception System.Linq.Error::NoElements() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0, 0 } /* TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/Iterator`1::.ctor() */,
	{ 0, 0, 0 } /* TSource System.Linq.Enumerable/Iterator`1::get_Current() */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/Iterator`1::Dispose() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0, 0 } /* System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>) */,
	{ 0, 0, 0 } /* System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor() */,
	{ 0, 0, 0 } /* System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::.ctor() */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::Clear() */,
	{ 0, 0, 0 } /* System.Boolean System.Collections.Generic.HashSet`1::Contains(T) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean System.Collections.Generic.HashSet`1::Remove(T) */,
	{ 0, 0, 0 } /* System.Int32 System.Collections.Generic.HashSet`1::get_Count() */,
	{ 0, 0, 0 } /* System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly() */,
	{ 0, 0, 0 } /* System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator() */,
	{ 0, 0, 0 } /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator() */,
	{ 0, 0, 0 } /* System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator() */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object) */,
	{ 0, 0, 0 } /* System.Boolean System.Collections.Generic.HashSet`1::Add(T) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::CopyTo(T[]) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity() */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T) */,
	{ 0, 0, 0 } /* System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>) */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose() */,
	{ 0, 0, 0 } /* System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext() */,
	{ 0, 0, 0 } /* T System.Collections.Generic.HashSet`1/Enumerator::get_Current() */,
	{ 0, 0, 0 } /* System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current() */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset() */,
	{ 0, 0, 0 } /* System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>) */,
	{ 0, 0, 0 } /* T[] System.Collections.Generic.ICollectionDebugView`1::get_Items() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Core;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationSystem_Core = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsSystem_Core,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
