#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6;
// System.Collections.Generic.Dictionary`2/Entry<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>[]
struct EntryU5BU5D_t07149A4D20FD5A476EFD00975478DFEF7366312A;
// System.Collections.Generic.Dictionary`2/Entry<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>[]
struct EntryU5BU5D_t1E283573728191F91B5167D73692BAD91E8E9847;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct KeyCollection_t9199374BCF60F026305D9EA033249DA30D6EF000;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct KeyCollection_tA4B6C788450AE9E49D27FADD4ECB4400C3138E17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct ValueCollection_t82F8866DD60EF045E429F313FB2FFE18DD78615F;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct ValueCollection_t7D42E9BB105B6B2EE695264B0A485DEC72EDFF95;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383;
// System.Collections.Generic.Dictionary`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>
struct IEqualityComparer_1_tD113407623901350E1C4B0EB1EEAAD7A8763346E;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>
struct IEqualityComparer_1_t3162AF66D1C216AD9E3A462DE13A010231F972DD;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Tuple`2<System.Object,System.Object>>
struct Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Func`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432;
// System.Func`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct Func_2_tD70835D335B0DA35B85273A279475ECB974A4517;
// System.Func`2<Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>,System.Boolean>
struct Func_2_t669B5AA8A096EA772EBF43E5B933F17CF755876C;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811;
// Vuforia.Newtonsoft.Json.Utilities.EnumUtils/<>c__2`1<System.Int32Enum>
struct U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3;
// Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.Int64>
struct EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6;
// Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>
struct EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C;
// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_t3EA2E961E38AC3FF922B90F73476D038D1B879E9;
// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils/<>c__52`2<System.Object,System.Object>
struct U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D;
// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils/<>c__DisplayClass52_0`2<System.Object,System.Object>
struct U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass4_0`1<System.Object>
struct U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass5_0`1<System.Object>
struct U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass6_0`1<System.Object>
struct U3CU3Ec__DisplayClass6_0_1_tD091EEDEEF40224991627DE7888048F94012143F;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass7_0`1<System.Object>
struct U3CU3Ec__DisplayClass7_0_1_tF8DD6041B083420C15ACFBE82748E53E880FBBA5;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass8_0`1<System.Object>
struct U3CU3Ec__DisplayClass8_0_1_tC13E8CFF800B138400CB23BE94530C2DAA17DB3F;
// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass9_0`1<System.Object>
struct U3CU3Ec__DisplayClass9_0_1_tA0B61FAA861BBB30B7820367B7DB82C5D207A15C;
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D;
// Vuforia.Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass15_0`1<System.Object>
struct U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82;
// Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>
struct ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99;
// Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>
struct ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528;
// Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2;
IL2CPP_EXTERN_C const RuntimeMethod* EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_mE4B2359504CEA5FD886366D3EE0A0579DC9FA318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeStore_2__ctor_m17B29A6E35AF71617EE739DE68D0DD5D79783BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeStore_2__ctor_m91A852F6A8F4721D2C22F3315783BA65205831E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeStore_2__ctor_mE856EF9B4DAB7C185730A0F7D9A8DE4913A85D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ThreadSafeStore_2__ctor_m17B29A6E35AF71617EE739DE68D0DD5D79783BC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeStore_2__ctor_m91A852F6A8F4721D2C22F3315783BA65205831E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadSafeStore_2__ctor_mE856EF9B4DAB7C185730A0F7D9A8DE4913A85D84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__2_1_U3CGetFlagsValuesU3Eb__2_0_m8DE3B85121683A9B5D9ACECDB1192CBB554C911E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass52_0_2_U3CBuildMapCreatorU3Eb__0_mD7D8CA89A4B9C6D9E01320271EEE81202FCD301A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>
struct  Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t07149A4D20FD5A476EFD00975478DFEF7366312A* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9199374BCF60F026305D9EA033249DA30D6EF000 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t82F8866DD60EF045E429F313FB2FFE18DD78615F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___entries_1)); }
	inline EntryU5BU5D_t07149A4D20FD5A476EFD00975478DFEF7366312A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t07149A4D20FD5A476EFD00975478DFEF7366312A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t07149A4D20FD5A476EFD00975478DFEF7366312A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___keys_7)); }
	inline KeyCollection_t9199374BCF60F026305D9EA033249DA30D6EF000 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9199374BCF60F026305D9EA033249DA30D6EF000 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9199374BCF60F026305D9EA033249DA30D6EF000 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ___values_8)); }
	inline ValueCollection_t82F8866DD60EF045E429F313FB2FFE18DD78615F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t82F8866DD60EF045E429F313FB2FFE18DD78615F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t82F8866DD60EF045E429F313FB2FFE18DD78615F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>
struct  Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1E283573728191F91B5167D73692BAD91E8E9847* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA4B6C788450AE9E49D27FADD4ECB4400C3138E17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7D42E9BB105B6B2EE695264B0A485DEC72EDFF95 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___entries_1)); }
	inline EntryU5BU5D_t1E283573728191F91B5167D73692BAD91E8E9847* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1E283573728191F91B5167D73692BAD91E8E9847** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1E283573728191F91B5167D73692BAD91E8E9847* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___keys_7)); }
	inline KeyCollection_tA4B6C788450AE9E49D27FADD4ECB4400C3138E17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA4B6C788450AE9E49D27FADD4ECB4400C3138E17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA4B6C788450AE9E49D27FADD4ECB4400C3138E17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ___values_8)); }
	inline ValueCollection_t7D42E9BB105B6B2EE695264B0A485DEC72EDFF95 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7D42E9BB105B6B2EE695264B0A485DEC72EDFF95 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7D42E9BB105B6B2EE695264B0A485DEC72EDFF95 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
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


// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1<System.Int32Enum>
struct  U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1<T> Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1::<>9
	U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>,System.Boolean> Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1::<>9__2_0
	Func_2_t669B5AA8A096EA772EBF43E5B933F17CF755876C * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t669B5AA8A096EA772EBF43E5B933F17CF755876C * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t669B5AA8A096EA772EBF43E5B933F17CF755876C ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t669B5AA8A096EA772EBF43E5B933F17CF755876C * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.Int64>
struct  EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6  : public RuntimeObject
{
public:
	// System.String Vuforia.Newtonsoft.Json.Utilities.EnumValue`1::_name
	String_t* ____name_0;
	// T Vuforia.Newtonsoft.Json.Utilities.EnumValue`1::_value
	int64_t ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6, ____value_1)); }
	inline int64_t get__value_1() const { return ____value_1; }
	inline int64_t* get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(int64_t value)
	{
		____value_1 = value;
	}
};


// Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>
struct  EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C  : public RuntimeObject
{
public:
	// System.String Vuforia.Newtonsoft.Json.Utilities.EnumValue`1::_name
	String_t* ____name_0;
	// T Vuforia.Newtonsoft.Json.Utilities.EnumValue`1::_value
	uint64_t ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C, ____value_1)); }
	inline uint64_t get__value_1() const { return ____value_1; }
	inline uint64_t* get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(uint64_t value)
	{
		____value_1 = value;
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>
struct  U3CU3Ec__DisplayClass7_0_1_t3EA2E961E38AC3FF922B90F73476D038D1B879E9  : public RuntimeObject
{
public:
	// System.Type Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory_<>c__DisplayClass7_0`1::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_1_t3EA2E961E38AC3FF922B90F73476D038D1B879E9, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2<System.Object,System.Object>
struct  U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2::<>9
	U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,System.Tuple`2<TKey,TValue>> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2::<>9__52_1
	Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * ___U3CU3E9__52_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__52_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields, ___U3CU3E9__52_1_1)); }
	inline Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * get_U3CU3E9__52_1_1() const { return ___U3CU3E9__52_1_1; }
	inline Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C ** get_address_of_U3CU3E9__52_1_1() { return &___U3CU3E9__52_1_1; }
	inline void set_U3CU3E9__52_1_1(Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * value)
	{
		___U3CU3E9__52_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__52_1_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__DisplayClass52_0`2<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__DisplayClass52_0`2::ctorDelegate
	ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * ___ctorDelegate_0;

public:
	inline static int32_t get_offset_of_ctorDelegate_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3, ___ctorDelegate_0)); }
	inline ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * get_ctorDelegate_0() const { return ___ctorDelegate_0; }
	inline ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 ** get_address_of_ctorDelegate_0() { return &___ctorDelegate_0; }
	inline void set_ctorDelegate_0(ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * value)
	{
		___ctorDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorDelegate_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>
struct  U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1::c
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___c_0;
	// System.Reflection.MethodBase Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57, ___c_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>
struct  U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014  : public RuntimeObject
{
public:
	// System.Type Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1::type
	Type_t * ___type_0;
	// System.Reflection.ConstructorInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1::constructorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___constructorInfo_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_constructorInfo_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014, ___constructorInfo_1)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_constructorInfo_1() const { return ___constructorInfo_1; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_constructorInfo_1() { return &___constructorInfo_1; }
	inline void set_constructorInfo_1(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___constructorInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constructorInfo_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1<System.Object>
struct  U3CU3Ec__DisplayClass6_0_1_tD091EEDEEF40224991627DE7888048F94012143F  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_1_tD091EEDEEF40224991627DE7888048F94012143F, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>
struct  U3CU3Ec__DisplayClass7_0_1_tF8DD6041B083420C15ACFBE82748E53E880FBBA5  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_1_tF8DD6041B083420C15ACFBE82748E53E880FBBA5, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1<System.Object>
struct  U3CU3Ec__DisplayClass8_0_1_tC13E8CFF800B138400CB23BE94530C2DAA17DB3F  : public RuntimeObject
{
public:
	// System.Reflection.FieldInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1::fieldInfo
	FieldInfo_t * ___fieldInfo_0;

public:
	inline static int32_t get_offset_of_fieldInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_1_tC13E8CFF800B138400CB23BE94530C2DAA17DB3F, ___fieldInfo_0)); }
	inline FieldInfo_t * get_fieldInfo_0() const { return ___fieldInfo_0; }
	inline FieldInfo_t ** get_address_of_fieldInfo_0() { return &___fieldInfo_0; }
	inline void set_fieldInfo_0(FieldInfo_t * value)
	{
		___fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldInfo_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1<System.Object>
struct  U3CU3Ec__DisplayClass9_0_1_tA0B61FAA861BBB30B7820367B7DB82C5D207A15C  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1::propertyInfo
	PropertyInfo_t * ___propertyInfo_0;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_1_tA0B61FAA861BBB30B7820367B7DB82C5D207A15C, ___propertyInfo_0)); }
	inline PropertyInfo_t * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInfo_t ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInfo_t * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyInfo_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass15_0`1<System.Object>
struct  U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82  : public RuntimeObject
{
public:
	// System.Func`2<TSource,System.String> Vuforia.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass15_0`1::valueSelector
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ___valueSelector_0;
	// System.String Vuforia.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass15_0`1::testValue
	String_t* ___testValue_1;

public:
	inline static int32_t get_offset_of_valueSelector_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82, ___valueSelector_0)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get_valueSelector_0() const { return ___valueSelector_0; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of_valueSelector_0() { return &___valueSelector_0; }
	inline void set_valueSelector_0(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		___valueSelector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueSelector_0), (void*)value);
	}

	inline static int32_t get_offset_of_testValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82, ___testValue_1)); }
	inline String_t* get_testValue_1() const { return ___testValue_1; }
	inline String_t** get_address_of_testValue_1() { return &___testValue_1; }
	inline void set_testValue_1(String_t* value)
	{
		___testValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testValue_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>
struct  ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99  : public RuntimeObject
{
public:
	// System.Object Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ____store_1;
	// System.Func`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99, ____store_1)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_1), (void*)value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99, ____creator_2)); }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * get__creator_2() const { return ____creator_2; }
	inline Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____creator_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>
struct  ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528  : public RuntimeObject
{
public:
	// System.Object Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * ____store_1;
	// System.Func`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528, ____store_1)); }
	inline Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_1), (void*)value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528, ____creator_2)); }
	inline Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * get__creator_2() const { return ____creator_2; }
	inline Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____creator_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>
struct  ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C  : public RuntimeObject
{
public:
	// System.Object Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * ____store_1;
	// System.Func`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C, ____store_1)); }
	inline Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * get__store_1() const { return ____store_1; }
	inline Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____store_1), (void*)value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C, ____creator_2)); }
	inline Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * get__creator_2() const { return ____creator_2; }
	inline Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____creator_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey
struct  TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 
{
public:
	// System.String Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
};

// Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey
struct  TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 
{
public:
	// System.Type Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initialType_0), (void*)value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Vuforia.Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Tuple`2<System.Object,System.Object>>
struct  Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.String>
struct  Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>
struct  Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>
struct  Func_2_tD70835D335B0DA35B85273A279475ECB974A4517  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct  ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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


// T Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint64_t EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_gshared_inline (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Object Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_mE4B2359504CEA5FD886366D3EE0A0579DC9FA318_gshared (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// T Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>::get_Value()
inline uint64_t EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_inline (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C *, const RuntimeMethod*))EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_gshared_inline)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Object Vuforia.Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_mE4B2359504CEA5FD886366D3EE0A0579DC9FA318 (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))ObjectConstructor_1_Invoke_mE4B2359504CEA5FD886366D3EE0A0579DC9FA318_gshared)(__this, ___args0, method);
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m1A3302D7214F75FB06302101934BF3EE9282AA43 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1<System.Int32Enum>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__2_1__cctor_m878477EC0163B3A1765EDB827853D5DE52C7F462_gshared (const RuntimeMethod* method)
{
	{
		U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 * L_0 = (U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__2_1__ctor_m327C7F6EFAFE2130F14F491511F9AA9C66FDAC1C_gshared (U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.EnumUtils_<>c__2`1<System.Int32Enum>::<GetFlagsValues>b__2_0(Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__2_1_U3CGetFlagsValuesU3Eb__2_0_m8DE3B85121683A9B5D9ACECDB1192CBB554C911E_gshared (U3CU3Ec__2_1_tDD7CC8F5956C9B81AA488FAEC20446C3C9D938B3 * __this, EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__2_1_U3CGetFlagsValuesU3Eb__2_0_m8DE3B85121683A9B5D9ACECDB1192CBB554C911E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * L_0 = ___v0;
		NullCheck((EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C *)L_0);
		uint64_t L_1 = EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_inline((EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C *)L_0, /*hidden argument*/EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_RuntimeMethod_var);
		return (bool)((((int64_t)L_1) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
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
// System.String Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.Int64>::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumValue_1_get_Name_mCF753A2426B488AE53DA7F6066D8B54970D45358_gshared (EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get__name_0();
		return L_0;
	}
}
// T Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EnumValue_1_get_Value_mC8B18D57FEF5DF8F7DDD11913122530354A6C8CF_gshared (EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get__value_1();
		return L_0;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.Int64>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumValue_1__ctor_m7DF711372D79BCC948FFC3C67BFBB5C321618DF9_gshared (EnumValue_1_t4D6768215235BB8F80B6A3EC0ECC614973850DA6 * __this, String_t* ___name0, int64_t ___value1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set__name_0(L_0);
		int64_t L_1 = ___value1;
		__this->set__value_1(L_1);
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
// System.String Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumValue_1_get_Name_m80E78883730D5CC30882FA6CCB1574C31164748B_gshared (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get__name_0();
		return L_0;
	}
}
// T Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_gshared (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = (uint64_t)__this->get__value_1();
		return L_0;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.EnumValue`1<System.UInt64>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumValue_1__ctor_m368BECC7E91AFE84C569854918B53343502D7D94_gshared (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set__name_0(L_0);
		uint64_t L_1 = ___value1;
		__this->set__value_1(L_1);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_1__ctor_mD7FC181E211A65BA6DFFFEF1E089EA83B9FF8E78_gshared (U3CU3Ec__DisplayClass7_0_1_t3EA2E961E38AC3FF922B90F73476D038D1B879E9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::<CreateDefaultConstructor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass7_0_1_U3CCreateDefaultConstructorU3Eb__0_m0118ECD3270D58FEF8BC23B77ABB8793F16C347F_gshared (U3CU3Ec__DisplayClass7_0_1_t3EA2E961E38AC3FF922B90F73476D038D1B879E9 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = (Type_t *)__this->get_type_0();
		RuntimeObject * L_1 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_0, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
	}
}
// T Vuforia.Newtonsoft.Json.Utilities.ExpressionReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::<CreateDefaultConstructor>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass7_0_1_U3CCreateDefaultConstructorU3Eb__1_m3C11041D8561BAD6FC0C0D9CE6C8D4C1B29C6A23_gshared (U3CU3Ec__DisplayClass7_0_1_t3EA2E961E38AC3FF922B90F73476D038D1B879E9 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = (Type_t *)__this->get_type_0();
		RuntimeObject * L_1 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_0, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2<System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__52_2__cctor_m2C515C40D16AF01A8C8DFB618992F442D1E771FE_gshared (const RuntimeMethod* method)
{
	{
		U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * L_0 = (U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__52_2__ctor_m5E25884DF9EF05366F9D7A9F9FD0A967CF1ED8F7_gshared (U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Tuple`2<TKey,TValue> Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__52`2<System.Object,System.Object>::<BuildMapCreator>b__52_1(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * U3CU3Ec__52_2_U3CBuildMapCreatorU3Eb__52_1_m0E4C49932874A1AD37C1108F95BFAA98141FB87C_gshared (U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___kv0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_inline((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(&___kv0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		RuntimeObject * L_1 = KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_inline((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(&___kv0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 * L_2 = (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (Tuple_2_t66BEEC45F61266028F5253B4045F569CB4C812F5 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_2;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__DisplayClass52_0`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_2__ctor_m2C6C398BD53CF19ADACF4D2BA2EC1CB0F502052F_gshared (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.FSharpUtils_<>c__DisplayClass52_0`2<System.Object,System.Object>::<BuildMapCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass52_0_2_U3CBuildMapCreatorU3Eb__0_mD7D8CA89A4B9C6D9E01320271EEE81202FCD301A_gshared (U3CU3Ec__DisplayClass52_0_2_t304144583688FC93E1FCA2BC152CC627520BCDF3 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass52_0_2_U3CBuildMapCreatorU3Eb__0_mD7D8CA89A4B9C6D9E01320271EEE81202FCD301A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * L_3 = ((U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_U3CU3E9__52_1_1();
		Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * L_4 = (Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C *)L_3;
		G_B1_0 = L_4;
		G_B1_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D * L_5 = ((U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->get_U3CU3E9_0();
		Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * L_6 = (Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_6, (RuntimeObject *)L_5, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C * L_7 = (Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C *)L_6;
		((U3CU3Ec__52_2_tBAFF78157F3E94BC3259C3BE712F5795A59DF61D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)))->set_U3CU3E9__52_1_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		RuntimeObject* L_8 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)G_B2_1, (Func_2_t075F6DCC29C2CADF8E374054ABF5FBB6DC84272C *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject*)L_8;
		ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 * L_9 = (ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)__this->get_ctorDelegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_10;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		NullCheck((ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)L_9);
		RuntimeObject * L_13 = ObjectConstructor_1_Invoke_mE4B2359504CEA5FD886366D3EE0A0579DC9FA318((ObjectConstructor_1_t0389964EB6B22EBCBF3DD343BCAD181FE5394811 *)L_9, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_11, /*hidden argument*/ObjectConstructor_1_Invoke_mE4B2359504CEA5FD886366D3EE0A0579DC9FA318_RuntimeMethod_var);
		return L_13;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_1__ctor_mF181B966AF10E2985042D6F988312571BBC3B8C5_gshared (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>::<CreateMethodCall>b__0(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass4_0_1_U3CCreateMethodCallU3Eb__0_m6D36A7AE280BACC8D67895965C7DF29D7215DF6F_gshared (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * __this, RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___a1, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_0 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)__this->get_c_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___a1;
		NullCheck((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0);
		RuntimeObject * L_2 = ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass4_0`1<System.Object>::<CreateMethodCall>b__1(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass4_0_1_U3CCreateMethodCallU3Eb__1_mCD23CEDB42CA53D7D3FB5F19652015880C1B7A5F_gshared (U3CU3Ec__DisplayClass4_0_1_tA7907A696628F94D814091A08AE14298A71A1A57 * __this, RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___a1, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = (MethodBase_t *)__this->get_method_1();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___a1;
		NullCheck((MethodBase_t *)L_0);
		RuntimeObject * L_3 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674((MethodBase_t *)L_0, (RuntimeObject *)L_1, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_1__ctor_m52FCF3DE067F18ECA00E150FB40DC76673FC1E98_gshared (U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>::<CreateDefaultConstructor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass5_0_1_U3CCreateDefaultConstructorU3Eb__0_m66C7A2BBC3DF2EAB1955B5331F5079D215F31163_gshared (U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = (Type_t *)__this->get_type_0();
		RuntimeObject * L_1 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_0, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
	}
}
// T Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass5_0`1<System.Object>::<CreateDefaultConstructor>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass5_0_1_U3CCreateDefaultConstructorU3Eb__1_m29961143E081C26E6D6370EB2C2F3D1AB1810C94_gshared (U3CU3Ec__DisplayClass5_0_1_t553B38EE62A75599659FF0AE4430A80768E20014 * __this, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * L_0 = (ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)__this->get_constructorInfo_1();
		NullCheck((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0);
		RuntimeObject * L_1 = ConstructorInfo_Invoke_m9E7A03EC2DDACA7A9C1E1609D4AB2BE90CD2E2AF((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_1__ctor_m0D1A8D97921E6F77AC29C5BCD06121B9363F50FB_gshared (U3CU3Ec__DisplayClass6_0_1_tD091EEDEEF40224991627DE7888048F94012143F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass6_0`1<System.Object>::<CreateGet>b__0(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass6_0_1_U3CCreateGetU3Eb__0_m1C26CC2BAEE6C60936418978A01002ADF910EA53_gshared (U3CU3Ec__DisplayClass6_0_1_tD091EEDEEF40224991627DE7888048F94012143F * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = (PropertyInfo_t *)__this->get_propertyInfo_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck((PropertyInfo_t *)L_0);
		RuntimeObject * L_2 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(26 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, (PropertyInfo_t *)L_0, (RuntimeObject *)L_1, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		return L_2;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_1__ctor_m754B42F9521968CAB7EB346D328D011B059462F8_gshared (U3CU3Ec__DisplayClass7_0_1_tF8DD6041B083420C15ACFBE82748E53E880FBBA5 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass7_0`1<System.Object>::<CreateGet>b__0(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass7_0_1_U3CCreateGetU3Eb__0_m3B86A1948279C4EB480D89D2DF8098FDA9E058AD_gshared (U3CU3Ec__DisplayClass7_0_1_tF8DD6041B083420C15ACFBE82748E53E880FBBA5 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = (FieldInfo_t *)__this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck((FieldInfo_t *)L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)L_0, (RuntimeObject *)L_1);
		return L_2;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_1__ctor_m3282DFC0618FDBC3DE3C2583ED2A868BBCF22B9A_gshared (U3CU3Ec__DisplayClass8_0_1_tC13E8CFF800B138400CB23BE94530C2DAA17DB3F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass8_0`1<System.Object>::<CreateSet>b__0(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_1_U3CCreateSetU3Eb__0_mF44B59607A7391338B2A44893027332C5536DEA4_gshared (U3CU3Ec__DisplayClass8_0_1_tC13E8CFF800B138400CB23BE94530C2DAA17DB3F * __this, RuntimeObject * ___o0, RuntimeObject * ___v1, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = (FieldInfo_t *)__this->get_fieldInfo_0();
		RuntimeObject * L_1 = ___o0;
		RuntimeObject * L_2 = ___v1;
		NullCheck((FieldInfo_t *)L_0);
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41((FieldInfo_t *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/NULL);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_1__ctor_m3BB7D23DE182393B7885867879F2D8449A056E49_gshared (U3CU3Ec__DisplayClass9_0_1_tA0B61FAA861BBB30B7820367B7DB82C5D207A15C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass9_0`1<System.Object>::<CreateSet>b__0(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_1_U3CCreateSetU3Eb__0_mB25C27AE5A76FA1E128C9A8C3D0304F60BC46244_gshared (U3CU3Ec__DisplayClass9_0_1_tA0B61FAA861BBB30B7820367B7DB82C5D207A15C * __this, RuntimeObject * ___o0, RuntimeObject * ___v1, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = (PropertyInfo_t *)__this->get_propertyInfo_0();
		RuntimeObject * L_1 = ___o0;
		RuntimeObject * L_2 = ___v1;
		NullCheck((PropertyInfo_t *)L_0);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(28 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, (PropertyInfo_t *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2__ctor_mF9C34A4C7A3E921B492104479A86867802432556_gshared (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TResult Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m583A592850545D6C09A51FC057AC186FD7C331A5_gshared (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___target0, ___args1);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___target0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___args1) - 1), targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___target0, ___args1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___target0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___target0, ___args1);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___target0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___target0) - 1), ___args1, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___target0, ___args1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::BeginInvoke(T,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodCall_2_BeginInvoke_mF6F624878ADC61DEA1088F031F0230758326CD71_gshared (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * __this, RuntimeObject * ___target0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___target0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// TResult Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_EndInvoke_mA7F6DD0052B1FEBD1D158886D6E5B571EBF4CC46_gshared (MethodCall_2_t4396C12CBA4E227C008C6CDCF25EFB5C8D05161D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass15_0`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_1__ctor_mB8449C63564B5EF8915C76107008163475093673_gshared (U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass15_0`1<System.Object>::<ForgivingCaseSensitiveFind>b__0(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_1_U3CForgivingCaseSensitiveFindU3Eb__0_m253C4E181EF65A9476535169D82E849F60A56E40_gshared (U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_0 = (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)__this->get_valueSelector_0();
		RuntimeObject * L_1 = ___s0;
		NullCheck((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0);
		String_t* L_2 = ((  String_t* (*) (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		String_t* L_3 = (String_t*)__this->get_testValue_1();
		bool L_4 = String_Equals_m1A3302D7214F75FB06302101934BF3EE9282AA43((String_t*)L_2, (String_t*)L_3, (int32_t)5, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.StringUtils_<>c__DisplayClass15_0`1<System.Object>::<ForgivingCaseSensitiveFind>b__1(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_1_U3CForgivingCaseSensitiveFindU3Eb__1_m5AAE967B1A622CBE79016FA576C0FD7C050B5413_gshared (U3CU3Ec__DisplayClass15_0_1_t00C2B12FFD3EF220240E6C6A602A644E31C04C82 * __this, RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_0 = (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)__this->get_valueSelector_0();
		RuntimeObject * L_1 = ___s0;
		NullCheck((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0);
		String_t* L_2 = ((  String_t* (*) (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		String_t* L_3 = (String_t*)__this->get_testValue_1();
		bool L_4 = String_Equals_m1A3302D7214F75FB06302101934BF3EE9282AA43((String_t*)L_2, (String_t*)L_3, (int32_t)4, /*hidden argument*/NULL);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::.ctor(System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeStore_2__ctor_mE856EF9B4DAB7C185730A0F7D9A8DE4913A85D84_gshared (ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99 * __this, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___creator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeStore_2__ctor_mE856EF9B4DAB7C185730A0F7D9A8DE4913A85D84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__lock_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_1 = ___creator0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, (String_t*)_stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThreadSafeStore_2__ctor_mE856EF9B4DAB7C185730A0F7D9A8DE4913A85D84_RuntimeMethod_var);
	}

IL_001f:
	{
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_3 = ___creator0;
		__this->set__creator_2(L_3);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_4 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__store_1(L_4);
		return;
	}
}
// TValue Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::Get(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_Get_m6F5C5C9B6F74CD6161D75D035886DD7418188FCD_gshared (ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
		RuntimeObject * L_1 = ___key0;
		NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_3 = ___key0;
		NullCheck((ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99 *)__this);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99 *)__this, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0018:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// TValue Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::AddValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_AddValue_mD8585715AE2F55D0619CCC3CCE3A190BEB36A305_gshared (ThreadSafeStore_2_t90D34E1A7CCFB24F9A40259D9C173E7EA83E8C99 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * L_0 = (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)__this->get__creator_2();
		RuntimeObject * L_1 = ___key0;
		NullCheck((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = (RuntimeObject *)__this->get__lock_0();
		V_1 = (RuntimeObject *)L_3;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_4 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5((RuntimeObject *)L_4, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_5 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			if (L_5)
			{
				goto IL_0040;
			}
		}

IL_0026:
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_6 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			__this->set__store_1(L_6);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_7 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			RuntimeObject * L_8 = ___key0;
			RuntimeObject * L_9 = V_0;
			NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_7);
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			goto IL_0073;
		}

IL_0040:
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_10 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			RuntimeObject * L_11 = ___key0;
			NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_10);
			bool L_12 = ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_10, (RuntimeObject *)L_11, (RuntimeObject **)(RuntimeObject **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			RuntimeObject * L_13 = V_3;
			V_5 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x82, FINALLY_0078);
		}

IL_0055:
		{
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_14 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)__this->get__store_1();
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_15 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_15, (RuntimeObject*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_4 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_15;
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_16 = V_4;
			RuntimeObject * L_17 = ___key0;
			RuntimeObject * L_18 = V_0;
			NullCheck((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_16);
			((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_16, (RuntimeObject *)L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_19 = V_4;
			__this->set__store_1(L_19);
		}

IL_0073:
		{
			RuntimeObject * L_20 = V_0;
			V_5 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x82, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_0081;
			}
		}

IL_007b:
		{
			RuntimeObject * L_22 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)L_22, /*hidden argument*/NULL);
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(120)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0082:
	{
		RuntimeObject * L_23 = V_5;
		return L_23;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>::.ctor(System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeStore_2__ctor_m17B29A6E35AF71617EE739DE68D0DD5D79783BC7_gshared (ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528 * __this, Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * ___creator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeStore_2__ctor_m17B29A6E35AF71617EE739DE68D0DD5D79783BC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__lock_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * L_1 = ___creator0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, (String_t*)_stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThreadSafeStore_2__ctor_m17B29A6E35AF71617EE739DE68D0DD5D79783BC7_RuntimeMethod_var);
	}

IL_001f:
	{
		Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * L_3 = ___creator0;
		__this->set__creator_2(L_3);
		Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_4 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__store_1(L_4);
		return;
	}
}
// TValue Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>::Get(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_Get_mDECB4E231D0B0F21039DBFFCA4E6A5B3B8767CD0_gshared (ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528 * __this, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_0 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)__this->get__store_1();
		TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  L_1 = ___key0;
		NullCheck((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_0, (TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  L_3 = ___key0;
		NullCheck((ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528 *)__this);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528 *, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528 *)__this, (TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0018:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// TValue Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey,System.Object>::AddValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_AddValue_mD537E4B51212FEF8F1E3DF51DFD06E28B93C04F5_gshared (ThreadSafeStore_2_t8DA9780A9E12CEE8C792C38AB2C3F7437762B528 * __this, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 * L_0 = (Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 *)__this->get__creator_2();
		TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  L_1 = ___key0;
		NullCheck((Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 *, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tA69920FD349330C05AC2D70A5CCE1AC973162432 *)L_0, (TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = (RuntimeObject *)__this->get__lock_0();
		V_1 = (RuntimeObject *)L_3;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_4 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5((RuntimeObject *)L_4, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_5 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)__this->get__store_1();
			if (L_5)
			{
				goto IL_0040;
			}
		}

IL_0026:
		{
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_6 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			__this->set__store_1(L_6);
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_7 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)__this->get__store_1();
			TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  L_8 = ___key0;
			RuntimeObject * L_9 = V_0;
			NullCheck((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_7);
			((  void (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_7, (TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			goto IL_0073;
		}

IL_0040:
		{
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_10 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)__this->get__store_1();
			TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  L_11 = ___key0;
			NullCheck((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_10);
			bool L_12 = ((  bool (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_10, (TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 )L_11, (RuntimeObject **)(RuntimeObject **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			RuntimeObject * L_13 = V_3;
			V_5 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x82, FINALLY_0078);
		}

IL_0055:
		{
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_14 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)__this->get__store_1();
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_15 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_15, (RuntimeObject*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_4 = (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_15;
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_16 = V_4;
			TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8  L_17 = ___key0;
			RuntimeObject * L_18 = V_0;
			NullCheck((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_16);
			((  void (*) (Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *, TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 *)L_16, (TypeNameKey_tE2D0403A2AC225EFA769FF395D19E8EF4DE74EA8 )L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			Dictionary_2_t51C0EE6C43F3E28FB1AFCB1099F6B21196668383 * L_19 = V_4;
			__this->set__store_1(L_19);
		}

IL_0073:
		{
			RuntimeObject * L_20 = V_0;
			V_5 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x82, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_0081;
			}
		}

IL_007b:
		{
			RuntimeObject * L_22 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)L_22, /*hidden argument*/NULL);
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(120)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0082:
	{
		RuntimeObject * L_23 = V_5;
		return L_23;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>::.ctor(System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeStore_2__ctor_m91A852F6A8F4721D2C22F3315783BA65205831E3_gshared (ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C * __this, Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * ___creator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadSafeStore_2__ctor_m91A852F6A8F4721D2C22F3315783BA65205831E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set__lock_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * L_1 = ___creator0;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, (String_t*)_stringLiteralCA0DD83451C629DB7EE96129D150EE1750A05BA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThreadSafeStore_2__ctor_m91A852F6A8F4721D2C22F3315783BA65205831E3_RuntimeMethod_var);
	}

IL_001f:
	{
		Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * L_3 = ___creator0;
		__this->set__creator_2(L_3);
		Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_4 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set__store_1(L_4);
		return;
	}
}
// TValue Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>::Get(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_Get_mDA00441842AF3A5A9739D860A840090E2F0E91F0_gshared (ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C * __this, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_0 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)__this->get__store_1();
		TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  L_1 = ___key0;
		NullCheck((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_0, (TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 )L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  L_3 = ___key0;
		NullCheck((ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C *)__this);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C *, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C *)__this, (TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_4;
	}

IL_0018:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// TValue Vuforia.Newtonsoft.Json.Utilities.ThreadSafeStore`2<Vuforia.Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey,System.Object>::AddValue(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeStore_2_AddValue_mD3E2B0E2E3C1B6AE4D29092E6E6331566BC9C671_gshared (ThreadSafeStore_2_t54C7101E326CAF247D63BD5242347A2109E4CB2C * __this, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 * L_0 = (Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 *)__this->get__creator_2();
		TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  L_1 = ___key0;
		NullCheck((Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 *, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD70835D335B0DA35B85273A279475ECB974A4517 *)L_0, (TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = (RuntimeObject *)__this->get__lock_0();
		V_1 = (RuntimeObject *)L_3;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_4 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5((RuntimeObject *)L_4, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_5 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)__this->get__store_1();
			if (L_5)
			{
				goto IL_0040;
			}
		}

IL_0026:
		{
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_6 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
			__this->set__store_1(L_6);
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_7 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)__this->get__store_1();
			TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  L_8 = ___key0;
			RuntimeObject * L_9 = V_0;
			NullCheck((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_7);
			((  void (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_7, (TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 )L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			goto IL_0073;
		}

IL_0040:
		{
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_10 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)__this->get__store_1();
			TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  L_11 = ___key0;
			NullCheck((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_10);
			bool L_12 = ((  bool (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 , RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_10, (TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 )L_11, (RuntimeObject **)(RuntimeObject **)(&V_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			RuntimeObject * L_13 = V_3;
			V_5 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x82, FINALLY_0078);
		}

IL_0055:
		{
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_14 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)__this->get__store_1();
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_15 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
			((  void (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_15, (RuntimeObject*)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
			V_4 = (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_15;
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_16 = V_4;
			TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36  L_17 = ___key0;
			RuntimeObject * L_18 = V_0;
			NullCheck((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_16);
			((  void (*) (Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *, TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A *)L_16, (TypeConvertKey_t5D3E16F6D2E7CB9A77370F4D17EDDD1233051D36 )L_17, (RuntimeObject *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
			Dictionary_2_tAB5CDFEE86E44006934EDE8864B339B041872A0A * L_19 = V_4;
			__this->set__store_1(L_19);
		}

IL_0073:
		{
			RuntimeObject * L_20 = V_0;
			V_5 = (RuntimeObject *)L_20;
			IL2CPP_LEAVE(0x82, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_0081;
			}
		}

IL_007b:
		{
			RuntimeObject * L_22 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2((RuntimeObject *)L_22, /*hidden argument*/NULL);
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(120)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0082:
	{
		RuntimeObject * L_23 = V_5;
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint64_t EnumValue_1_get_Value_mFB3D8FBA076969F5891AF5EDCFF0FBE177F5A65B_gshared_inline (EnumValue_1_tC5F3B8D6ABE834C1836DE5F7FE07AAD7EB0B463C * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = (uint64_t)__this->get__value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
