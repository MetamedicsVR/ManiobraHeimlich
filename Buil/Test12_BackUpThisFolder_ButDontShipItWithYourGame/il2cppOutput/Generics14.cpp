﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>
struct Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>
struct Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>
struct Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.Vector2Int>
struct IDictionary_2_t0D3EEC0A481445634F102A2E5D298732BD54D681;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.Vector4>
struct IDictionary_2_t0959C298F81191EC4B391D10911BF65A77C6CB6F;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct IDictionary_2_t1C61574D1EC234130D5C9D5F818E4CFFCC937878;
// System.Collections.Generic.IDictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct IDictionary_2_tA175B43E20066291656F128B5B707E85E1630410;
// System.Collections.Generic.IDictionary`2<System.Int32Enum,System.Boolean>
struct IDictionary_2_t1E4EFBAF8A48B2915CACF542C9BDCB06EF7997A5;
// System.Collections.Generic.IDictionary`2<System.Int32Enum,System.Int32>
struct IDictionary_2_tE66B36BC0260AF665716B53A2BD8FD968560B4D0;
// System.Collections.Generic.IDictionary`2<System.Int32Enum,System.Int32Enum>
struct IDictionary_2_t189483B0D8E162E6F61B5113C530D77240FB356E;
// System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct IEnumerable_1_tCCB99926BE5278BECD80577410ACD86F0F2F9921;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2Int>
struct IEnumerable_1_t8845214D7CADFAAD7AB98132A368905184A79DDF;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct IEnumerable_1_tA9F5F5C17A9667E2D7F571DF6A7F7AF03B89F07B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>>
struct IEnumerator_1_t37E8828B77AB001D0F3D509258EB5F548FD343DA;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>>
struct IEnumerator_1_t537633C841BF98E20A60BF553441B720F4F7787B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>>
struct IEnumerator_1_t2B14781DB05B4AB67C9DB2C149D28DE9F729002C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>>
struct IEnumerator_1_t401A8958EE08B101B9CEE255FA1905F89C12288A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>>
struct IEnumerator_1_tEC9954C20DF91AB4171BDD020E63F678639F89E3;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>>
struct IEnumerator_1_t5FAB3CFA43402DB1A6C96E9BDBEB9DEFC52F2F79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>>
struct IEnumerator_1_t27771A7319D2520B4F15723B7B749B9B3E230BFA;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>
struct IEqualityComparer_1_t4537FF5E9634FC142F7BF26B48CA727CCA436047;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector2Int>
struct KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector4>
struct KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Boolean>
struct KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Int32>
struct KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Int32Enum>
struct KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector2Int>
struct ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector4>
struct ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Boolean>
struct ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Int32>
struct ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Int32Enum>
struct ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector2Int>[]
struct EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector4>[]
struct EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>[]
struct EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>[]
struct EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Boolean>[]
struct EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Int32>[]
struct EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Int32Enum>[]
struct EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>[]
struct KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>[]
struct KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>[]
struct KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>[]
struct KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>[]
struct KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.TextCore.Text.FontAsset
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D;
struct EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694;
struct EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20;
struct EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A;
struct EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA;
struct EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B;
struct EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A;
struct KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A;
struct KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233;
struct KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54;
struct KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19;
struct KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E;
struct KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448;
struct KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>
struct Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>
struct Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>
struct Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>
struct Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5  : public RuntimeObject
{
};

struct EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};

struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};

struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};

struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED  : public RuntimeObject
{
};

struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49  : public RuntimeObject
{
};

struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323  : public RuntimeObject
{
};

struct EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* ___defaultComparer_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector2Int>
struct KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector4>
struct KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Boolean>
struct KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Int32>
struct KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32Enum,System.Int32Enum>
struct KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector2Int>
struct ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector4>
struct ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Boolean>
struct ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Int32>
struct ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Int32Enum>
struct ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Boolean>
struct Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	bool ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Int32>
struct Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Int32Enum>
struct Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	int32_t ___value_3;
};

// Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>
struct JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 
{
	// TSourceJointId Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo::SourceJointId
	int32_t ___SourceJointId_0;
	// TSourceJointId Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo::ParentJointId
	int32_t ___ParentJointId_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>
struct KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>
struct KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>
struct KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 
{
	// System.Int32 UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef::nameHashCode
	int32_t ___nameHashCode_0;
	// System.Int32 UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef::familyNameHashCode
	int32_t ___familyNameHashCode_1;
	// System.Int32 UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef::styleNameHashCode
	int32_t ___styleNameHashCode_2;
	// System.Int64 UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef::familyNameAndStyleHashCode
	int64_t ___familyNameAndStyleHashCode_3;
	// UnityEngine.TextCore.Text.FontAsset UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef::fontAsset
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_pinvoke
{
	int32_t ___nameHashCode_0;
	int32_t ___familyNameHashCode_1;
	int32_t ___styleNameHashCode_2;
	int64_t ___familyNameAndStyleHashCode_3;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_4;
};
// Native definition for COM marshalling of UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_com
{
	int32_t ___nameHashCode_0;
	int32_t ___familyNameHashCode_1;
	int32_t ___styleNameHashCode_2;
	int64_t ___familyNameAndStyleHashCode_3;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset_4;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector2Int>
struct Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector4>
struct Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Boolean>
struct Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Int32>
struct Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Int32Enum>
struct Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>
struct KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>
struct KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Vector2Int>
struct Enumerator_t24DED0061495979D025145F5EE685308256D604D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Vector4>
struct Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>
struct Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>
struct Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector2Int>[]
struct EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 m_Items[1];

	inline Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>[]
struct KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE m_Items[1];

	inline KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector4>[]
struct EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A m_Items[1];

	inline Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>[]
struct KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 m_Items[1];

	inline KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>[]
struct EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 m_Items[1];

	inline Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___fontAsset_4), (void*)NULL);
	}
	inline Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___fontAsset_4), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>[]
struct KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A m_Items[1];

	inline KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___fontAsset_4), (void*)NULL);
	}
	inline KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___fontAsset_4), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>[]
struct EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999 m_Items[1];

	inline Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>[]
struct KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 m_Items[1];

	inline KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Boolean>[]
struct EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 m_Items[1];

	inline Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 m_Items[1];

	inline KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Int32>[]
struct EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 m_Items[1];

	inline Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>[]
struct KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C m_Items[1];

	inline KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32Enum,System.Int32Enum>[]
struct EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A m_Items[1];

	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>[]
struct KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 m_Items[1];

	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 value)
	{
		m_Items[index] = value;
	}
};


// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_gshared_inline (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_gshared_inline (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74643C96A6892FDA466D0F04BF90078D695C70AC_gshared (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395_gshared (Enumerator_t24DED0061495979D025145F5EE685308256D604D* __this, Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_gshared_inline (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_gshared_inline (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mA41124DE88303520A8709C93C38B0401BB71BF76_gshared (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Vector4>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE_gshared (Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B* __this, Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_gshared_inline (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_gshared_inline (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mEA6445563986938E020972AA0022C778160FFFF8_gshared (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890_gshared (Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C* __this, Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_gshared_inline (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_gshared_inline (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mC3AF044FBDB0A9ED260E922C7064DAC637C5C043_gshared (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D_gshared (Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F* __this, Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_gshared_inline (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_gshared_inline (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m955E02156D4009994AA1E0AA04AFA3B201F34D4F_gshared (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E_gshared (Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A* __this, Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8F404829E7AC9C8E687CF26A1A76269887DB6306_gshared (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875_gshared (Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A* __this, Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189_gshared (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Int32Enum>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725_gshared (Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE*, const RuntimeMethod*))KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>::get_Value()
inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_inline (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, const RuntimeMethod* method)
{
	return ((  Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A (*) (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE*, const RuntimeMethod*))KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0 (RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22 (int32_t ___resource0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m74643C96A6892FDA466D0F04BF90078D695C70AC (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))KeyValuePair_2__ctor_m74643C96A6892FDA466D0F04BF90078D695C70AC_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395 (Enumerator_t24DED0061495979D025145F5EE685308256D604D* __this, Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t24DED0061495979D025145F5EE685308256D604D*, Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E (int32_t ___min0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D (RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowSerializationException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8 (int32_t ___resource0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65 (int32_t ___oldSize0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2 (RuntimeObject* ___value0, Type_t* ___targetType1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804 (RuntimeObject* ___key0, Type_t* ___targetType1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55*, const RuntimeMethod*))KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>::get_Value()
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_inline (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mA41124DE88303520A8709C93C38B0401BB71BF76 (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))KeyValuePair_2__ctor_mA41124DE88303520A8709C93C38B0401BB71BF76_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Vector4>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE (Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B* __this, Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B*, Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Value()
inline FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_inline (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, const RuntimeMethod* method)
{
	return ((  FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 (*) (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mEA6445563986938E020972AA0022C778160FFFF8 (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, const RuntimeMethod*))KeyValuePair_2__ctor_mEA6445563986938E020972AA0022C778160FFFF8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890 (Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C* __this, Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C*, Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855*, const RuntimeMethod*))KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Value()
inline JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_inline (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, const RuntimeMethod* method)
{
	return ((  JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 (*) (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC3AF044FBDB0A9ED260E922C7064DAC637C5C043 (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, const RuntimeMethod*))KeyValuePair_2__ctor_mC3AF044FBDB0A9ED260E922C7064DAC637C5C043_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D (Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F* __this, Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F*, Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934*, const RuntimeMethod*))KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_inline (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934*, const RuntimeMethod*))KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m955E02156D4009994AA1E0AA04AFA3B201F34D4F (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934*, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m955E02156D4009994AA1E0AA04AFA3B201F34D4F_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E (Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A* __this, Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A*, Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C*, const RuntimeMethod*))KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m8F404829E7AC9C8E687CF26A1A76269887DB6306 (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C*, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m8F404829E7AC9C8E687CF26A1A76269887DB6306_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875 (Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A* __this, Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A*, Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3*, const RuntimeMethod*))KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189 (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3*, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Int32Enum>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725 (Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04* __this, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* ___dictionary0, int32_t ___getEnumeratorRetType1, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725_gshared)(__this, ___dictionary0, ___getEnumeratorRetType1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6F08421248A34497AABE64516BB661B9719E2227_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B9EDCA6A6AB12D102642080DC308EA7E5763545_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBF356EA48A897E0ADD0394FF211A45F7493F7AB2_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDAD5FCF9A5485062290DF931EB62F3B5D5331E81_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD450D24F49B337CDF736E396CFDDAD07E95D0DEF_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9CF0CCF4D0291CF0F009A77DD64A59F16A209DFA_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* G_B2_0 = NULL;
	Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* L_11 = ((Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_13 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_22 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector2Int>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_33;
				L_33 = KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D74E8FC18C069A38C31CCF3F31A4EBDFF964FEF_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD2C877BC7BF1A0191333731934948700B85F6E25_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* Dictionary_2_get_Keys_m4FD5A1BA278DCF713F5D66F2EFD5D11FBAA0004F_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* L_0 = (KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* L_1 = (KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B*, Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* L_2 = (KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* Dictionary_2_get_Values_m2D241C380E8A3EAEEE4A939FF233B1B42EFA8073_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* L_0 = (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* L_1 = (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*, Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* L_2 = (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m725ABB86F4E9FC1415777994959FAAF0F7746D39_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* L_0 = (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* L_1 = (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*, Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08* L_2 = (ValueCollection_t9D6BD0E38F05788BE4676E5739DFBF222F41CD08*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Dictionary_2_get_Item_m566420D25F2C4103CEE5F6BBB6DF415595BCD117_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_3 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m824C62AE381465271FBCE77563C6E43679F47152_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m84361C1ECE7CE03139CCF955FACE3F6CA50B6401_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m79BA9D645D2E9E77891E446832BA2ECC530FB4C1_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60261840FFC15AAD1522C2641ED58E278694A085_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_3;
		L_3 = ((  EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_4 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7;
		L_7 = KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1D3CC9358B287E72B110C1E94594665C13FCED95_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_3;
		L_3 = ((  EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_4 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7;
		L_7 = KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m7297B23EB42752916EFA7473360207BAF3B74CB2_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_4 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m99E5D49A10C8A10CDC9FCA0CFC6B357285B6CD9D_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m0123DDAF93E0831A8F9523A404DDB3E857CFEC73_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_0 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_15;
		L_15 = ((  EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_24;
		L_24 = ((  EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_28 = V_4;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_31 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mF54A60C7FD019FBC54081AAD3772768EBF93E8C3_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_7 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m74643C96A6892FDA466D0F04BF90078D695C70AC((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t24DED0061495979D025145F5EE685308256D604D Dictionary_2_GetEnumerator_mB5EB823E831FAB1EEB71EC4AB5BCC8EAE34949E5_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBBCE367C9F20069C8DCBE2631AB2EBCAC538185F_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m49D8C66CB4FCFFBAC715C65CFEA4F698EE7C0320_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_14 = (KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*)(KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_15 = V_0;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m79FB6455353236A4830C2171070330D404D948B5_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_2 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_31;
		L_31 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_38 = V_7;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA46ED23C6D6903E457D6B1EFC495E310DC049AD7_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_5 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)(EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m035E516B60422D713563AB83218951E504AA74F5_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_4 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_44;
		L_44 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_51 = V_12;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_105 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_123 = V_10;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m7702A0BE72248C3DDCB2A912EED177A1A1EB7D86_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_27;
		L_27 = KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m21836B4C3CC40111027DB504E98EA504E11A4515_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7C3DE053D684C4D6BBB0196FEC7B3A58CF319B5E_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_3 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)(EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_5 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5089EFD12BCD7A6EEF7242475061169DB293D77B_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_13 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_34 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_43 = V_4;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_44 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD548D931AE2CF386722EBD5674E015327817074E_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_3 = ___value1;
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_4 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFC0BE7F97D885C5E4634B5F6EB3AD9A59E3611DA_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, int32_t ___key0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1A2280676489B5D211A702328C3E106AADAD9B83_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3A07EE4BD9ED997E9EBAA398919A7B29079ECBB6_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m62BDE6D832CB3D10242678B7486F0FC58291E597_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, KeyValuePair_2U5BU5D_t202762757E275B4E3A6680756B1099BC35C0F20A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_18 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_32 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_42 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_54 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m74643C96A6892FDA466D0F04BF90078D695C70AC((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFB2E1CA1041EC1736B4F9F663522A6F124796B20_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mABCF8116D9E3CDBC7A0E1DCF50A611EE195383B8_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m76CD74C9AD8FA93F9C81B98383A9EA81B26E7953_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* L_0;
		L_0 = ((  KeyCollection_t345F55E555F7A5166402EDA5086EAB8086BB184B* (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mD1A6D371B4648A065923844D8F600FD390124B4B_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D* L_5 = (EntryU5BU5D_t718A030046AAAA47E1322BB35AC6413A79C7E21D*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m7F5E7FFAC43262F7FAEDC2AED29CF9CD13191228_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mC1BAD13534ED8D967EDC649CE76C15F764E157C3_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2FDB5136B55C46D69223087B3EB6BDB84E56DE2E_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2Int>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD1FB8C8BF0563E28E6C075CBB05E07293CF5A75E_gshared (Dictionary_2_t33145CB3CB36DD50D39C1BC1C5E82CEC9F0987F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9857D1FF40BCD97D2A5D7805C2736BF2728FF395((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t24DED0061495979D025145F5EE685308256D604D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m037E111709BC4694353DD8EDDA8DBCBFBED941A8_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m54AB0B3D9A5E24F797E6002203095E8F6B6614C0_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m940B3366DA4627F1099DC115206812A1BA1B0D82_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m61B131C2774B54446FDE7595780A1714EDA08E7D_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m28ED450CFA35E112ED4FB2329A7996DF37F39FFC_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFC7F0746770F196DAD2907996392FB890BD33142_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* G_B2_0 = NULL;
	Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* L_11 = ((Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_13 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Vector4>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
				L_33 = KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m43B1FFB79E98C415ED95C1C261F4940EB6A30A8B_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mCF5E349CB236B832237318AF20242E6EF75C815E_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* Dictionary_2_get_Keys_m85554366576478DEF4E6716C6028AEDFCF67D30C_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* L_0 = (KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* L_1 = (KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3*, Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* L_2 = (KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* Dictionary_2_get_Values_m1DBC1258E66F5DAEECA45CE51B1E8E740C4D1090_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* L_0 = (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* L_1 = (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*, Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* L_2 = (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m1533812232C15541EC9C532E1833F25646236DAC_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* L_0 = (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* L_1 = (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*, Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88* L_2 = (ValueCollection_tD3A6C27C765A169197804A564B0D1921EE5F6F88*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Dictionary_2_get_Item_mD915CEC6128C947B4C6AD9382F42763879F95413_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_3 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1425B667567C33888D63D03CA0683EB30D57E8CF_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7810005131176D8408CF347E9270C499B3E66381_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19C5C5FA9394070E7DC19D31F049540033A84267_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3283488D037EED7EC5A7116D7718DAB9E80D3A2B_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_3;
		L_3 = ((  EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_4 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mFB8362E8C6F500CB79936886E4AE672A6D4B752A_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_3;
		L_3 = ((  EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_4 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mB8765A050BD63D1C591079B7C7F21D4DB7977263_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_4 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE56620990C11E501D60CF78DBE24534A6226D402_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m646A87D525A444E3F102AD9EFC7B8A2CF0310686_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_0 = NULL;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_0 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_15;
		L_15 = ((  EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_24;
		L_24 = ((  EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* L_28 = V_4;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mC8D816C52D9657677B4DAD0FC46FDE1CD6A89C75_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_7 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mA41124DE88303520A8709C93C38B0401BB71BF76((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B Dictionary_2_GetEnumerator_m69E719E44E48F4DFD78FC8BC4A2F513537DD7B4A_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9EE818C4352ABA8807149337D3CC17CF19AE0C96_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m5CB18DAC7AE88AF628C60D4B20DD17105BDA3967_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_14 = (KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*)(KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_15 = V_0;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m956C6EBC2315A809138FA4C69D18B8AB43CB08D1_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_2 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_31;
		L_31 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_38 = V_7;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7FF61BDF1DB3BAE75E758D44D6AF7597AB652B96_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_5 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)(EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m56EBFE5E3D44C1EF996D8168BC96E13862435C98_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_4 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_44;
		L_44 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_51 = V_12;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_105 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_123 = V_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mF78535D0AD412D3C9AC7A21921FA566B72A840DA_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		L_27 = KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m53A48C8A7B4508005BA07600CED334A924D26A2E_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C0C4367AD6466BBEDB1C0E202B17AEA3F6DD8BB_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_3 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)(EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_5 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mBBABC880E9EF15EA34353297E46DCA00A8FF6B62_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_13 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_34 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_43 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_44 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t8C7B304855EF8908B42E4E5470A57C55BD36864A* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3EC43ADA4BD4A1E931EA489BE45702557B2D2230_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = ___value1;
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_4 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6AD97E5EA8C1F6BB4CCDFB6F6B638E9A5162C482_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, int32_t ___key0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mD6A7795E82441C17B541B9AA73C972E827E65394_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m0ECD377111CABED6912AA9F10D7BCACB69FDF126_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m9E3C656D3BED48E92E9936CC6BF5FC6256094001_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, KeyValuePair_2U5BU5D_tDC5ED21ECDCC9DAD596886F1D96FFA0B78A58233*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_18 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_42 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mA41124DE88303520A8709C93C38B0401BB71BF76((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m00B07CA160BBC6BEA9DC1CC1594125B70AF5B0E2_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mDE003BE508948835EEFAB7E724B29F8761403CCC_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m57B120584C8042D3803BFE6914D4569B35D04332_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* L_0;
		L_0 = ((  KeyCollection_t6EAA7FF2CF000EF8EBB1B2D467889F16C4F55FE3* (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m00219CFAF42CC69CB3056C35DB77B3A63BD7ACA7_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694* L_5 = (EntryU5BU5D_tD51D0D5737E414D2E6C3BCC6F8FE35EBB1EFC694*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m9A0FAF587F115FBCE29972F6427E3417090F7B1D_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mFACCCA9A0CF3DB3D7140604DDF6327CF6B54684C_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m38516953E6D7861B9B04BEB942887E2A2009D378_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector4>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m7C7811571C5FA2DBCB1FA12D400D3667C17D3B2A_gshared (Dictionary_2_t66703E5B5DAC871FEE58F3ED3A50BC6863FC12DC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m6A9080E6538010B08540C3CF90FCFF9FB56CE2BE((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t003DFD482F0AEB3D00498E030D0CE8D8FAE6C71B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m30D6273C60AC1D316B89DCC0D357D06005391778_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m81FFD613BBF1A2E54AB386BD3C8DDDAFD30B8C86_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m010E02847E62DF345B7EE049A7E7456830BC1AAE_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE99EAB1ABD285F5C0E42AD75DB79F2A36327580B_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56240D45FA6E434CCD3E480B50F1521BFDF09CC4_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5E9BC34DD4508FE1BAFA1E7EA11A5CA6814ECC6_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* G_B2_0 = NULL;
	Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* L_11 = ((Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_13 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_22 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_33;
				L_33 = KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m94AA358D6DCAA068601E98B4114AC7A8C76E3657_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m8880A31D491019D405353C70506F4324688A1EA8_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* Dictionary_2_get_Keys_m9783D441538EF24663623E0AA277FDD63060873E_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* L_0 = (KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* L_1 = (KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860*, Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* L_2 = (KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* Dictionary_2_get_Values_m9FAB2830A8308A441850BBA4CD6B567B14CFDB20_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* L_0 = (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* L_1 = (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*, Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* L_2 = (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m987EE8C6A552908E6976AF5C3C699C4359F1232B_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* L_0 = (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* L_1 = (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*, Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC* L_2 = (ValueCollection_tDF1EC77C37E6E161D53DE980D34DC4ED6B468EDC*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 Dictionary_2_get_Item_m05D81CFDC0127C20DE8DFE33E57F27033911A599_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_3 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_5 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m12C816D0701C6F3858D6695450DEEF3B26367F91_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4DA0C5A39A3E0421879CC84D35500A80BFB6C790_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mC2EECF6E2E6735C1A3071C175CCCDB8CBD50A566_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1;
		L_1 = KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mD933966E7CAA5D5ED08AB2AB29DC328A741B13EE_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_3;
		L_3 = ((  EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_4 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_7;
		L_7 = KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m7122570EF64550EC334C12A61FB87074688ABB32_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_3;
		L_3 = ((  EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_4 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_7;
		L_7 = KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mEFB680B74F980C683201E3CF377AC15635B710D3_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_4 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m56B45F8FFF5069D10937FCF6E365B9E4C47F1449_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m75F887F6E4904E4555E2F00A944D1471F9BA3D70_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_0 = NULL;
	int32_t V_1 = 0;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_0 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_7 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_15;
		L_15 = ((  EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_18 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_24;
		L_24 = ((  EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tC81AF0456B0ECB7415E30894699AAB099256D323* L_28 = V_4;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_31 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m969DE7DB2EC6495F0D394E2FE42EEBCF6951EC0E_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_7 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_19 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mEA6445563986938E020972AA0022C778160FFFF8((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C Dictionary_2_GetEnumerator_m2EEC9566B38F159A017148ADE95DED321699F8CB_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m94F6F013BB8E7E495994C4E1942B17E02F4DF0F2_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m365873A70447E1FDCA8BA090369C5A175730B371_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_14 = (KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*)(KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_15 = V_0;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m54FF975FAF51C5002499966FF7B5B5D3F9EB28FD_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_2 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_31;
		L_31 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_38 = V_7;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4ADC9A5D088286947B6106286A6D81A1E782BCD3_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_5 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)(EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m9522692C4EBF19178B97BF0ED9F787FCB8359591_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_4 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___fontAsset_4), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_44;
		L_44 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_51 = V_12;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___fontAsset_4), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___fontAsset_4), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_105 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_123 = V_10;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_124 = ___value1;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___fontAsset_4), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mBD395D79BB6FB43F4D19CE489B5F8196393C4242_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_27;
		L_27 = KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m93FB9F02F584AC07B7F7D9BBD8195089F3B81E44_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mACFD2F7F71C65528511C1C1E376C4D4E26072E38_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_3 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)(EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_5 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m87C0190B06D55EAA05884747D7F5881FE8AC6C97_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___key0), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_13 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_34 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_43 = V_4;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_44 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65ACEA3D87BDAB3021181C0F3475DC4B8A668868_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_3 = ___value1;
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_4 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)L_3)->___fontAsset_4), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m05A20D9E748258A6F49F7E32B0A4557BBA605E0D_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, int32_t ___key0, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m5B17EC62358BE78E9B5E69E6B24EF8C8CAB5AF6B_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34F9627E0FCEE3CF396278DD6CDC71ACC22FEB7F_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m83342406E392A8C1F7182DA008D5F6EB9F6B05E1_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, KeyValuePair_2U5BU5D_t91BE937EA50734F6991A1AD67A397F5B7B347C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_18 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_32 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_42 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_54 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mEA6445563986938E020972AA0022C778160FFFF8((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19FF5B0F2AEBF839FBA0CB0C263F5675D846F58C_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mDDA14BFE5F9AB6EE816A53C3472321EE68F2CC28_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m4B8705EBEFCD2E39C30D6BCFFA97B9E83A05FB39_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* L_0;
		L_0 = ((  KeyCollection_t0515D03A5B3BC21D707C8F3A2079045B74D5B860* (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m56762A31CA9611F18CF18DD2308F85264CD85815_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20* L_5 = (EntryU5BU5D_t1A2CD9285C48598A04F408DAE442164E7A2BFC20*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_7 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mDE04DC5C8968F80755E624958A3DC7F84705826E_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)((FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)(FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9220DF69053F1ED01FF2416B6E05BC17627ECA9D_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m4B344EE76AAE9D0413E55D08C894B01879BBD56D_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF84F10145FDFB1B42CC21146D0942A47DC3EEAE6_gshared (Dictionary_2_t4B29EB34D6BDD7CF67CE77D60AC718EB61186713* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD4366510BEF7ECA0F907C1B915FD6AC7F8039890((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tF2693BFBAEDE29C1C53E7902D8473588EE7AD73C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m91CDA202417A0F81C918C36A126AF8B0486A743C_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1A5F7B9F4F3BD5BA0AB21E5E6CA65D2C9E52CC69_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92ED039E87CD4D3F3D16E261B6504864BE3503CF_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0014F356D249631A9443A2F6A7B8D8F71AB4C6E8_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_5;
		L_5 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF135DC528AE921E5B977471E02AAFB6AE90E58C5_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1C0038D5624D4CE24DE242EBE10550DF57FF7C7A_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* G_B2_0 = NULL;
	Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* L_11 = ((Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_13 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_22 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_33;
				L_33 = KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9FEC90F8D27CC564B0FB1C13B0E054808FD084F_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2C7F9E54135795F7EF35F66FB6B46CD271D21805_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* Dictionary_2_get_Keys_mDBE8ABFD919DF7985ECCCCDBBD91F8AE8E7F919C_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* L_0 = (KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* L_1 = (KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE*, Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* L_2 = (KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* Dictionary_2_get_Values_m38916F7B66C9977B05F88BEB28EA4BC9592029F1_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* L_0 = (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* L_1 = (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*, Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* L_2 = (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m0631BFDC9014CC18C01F1733009669F5F37B8C83_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* L_0 = (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* L_1 = (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*, Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958* L_2 = (ValueCollection_t6EAA4F3EEB04CAA83FFFD7E270C0538B0FA68958*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 Dictionary_2_get_Item_m11ECFD9D85906F5D159AA3BA310010D141FD0B3C_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_3 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_5 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61));
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m336A6390F8BE9A7C74E75DE3C1790EDBF520B32D_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBE1ADF6AAC0878E03FC58C6733A1F6BA2D19D932_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30B84A2F495F83A662DADFB42680213A5799E48C_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_1;
		L_1 = KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1B6E24EE748BB79BABD03B0BC2758F6730AA8E12_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* L_3;
		L_3 = ((  EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_4 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_6 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_7;
		L_7 = KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mDC6258410C8C64C6850B2483B99375B9CD9F01AF_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* L_3;
		L_3 = ((  EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_4 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_6 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_7;
		L_7 = KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m71A3BBA51C049FFD5B5EB9905CB3CC98C438294F_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_4 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m41042ADB93B1A45DA9CB9B4F0222A7E7B060827F_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6D706A956AF0C513E1C4D2968F13E4937CAB6903_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_0 = NULL;
	int32_t V_1 = 0;
	JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_0 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_7 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* L_15;
		L_15 = ((  EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_18 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* L_24;
		L_24 = ((  EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t3A7C0A8B875545A024FAB4C94036BB5F272E29D5* L_28 = V_4;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_31 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE54FAE3D79315F075AD8F4ED63AC602359966DD9_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_7 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_19 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mC3AF044FBDB0A9ED260E922C7064DAC637C5C043((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F Dictionary_2_GetEnumerator_m525FE0E0A4F33A4BCF7966D99466C6AAFEAD8F9B_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF24639AEE4AF3ADC3493E81795E2FD08D382F90A_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m73D439121F1445790E30D6256157B992F04E3BEE_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_14 = (KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*)(KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_15 = V_0;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m89E708A3AF9885AD449DF9B7D8D25566913517AD_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_2 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_19;
		L_19 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_31;
		L_31 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_38 = V_7;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m191C367D5DF9ED783C6873D5074826EF46E7079A_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_5 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)(EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m22A386203C2121C417FA1D7AA4FE214B24E13BD9_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_4 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_44;
		L_44 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_51 = V_12;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_105 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_123 = V_10;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m64A6411A09C4460838DD1DCBD810E143CDBFBDA1_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_27;
		L_27 = KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m70F84FE7C4AEF01A77A5C8D7D2EA5B8F996E4F85_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3BD4C60F4E911D5ED591444DD10C29A924283551_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_3 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)(EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_5 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2E42F113DC83E3FB2EC44BA7906737605CEF6FE9_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_13 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_20;
		L_20 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_34 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_43 = V_4;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61* L_44 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tC012802A38FC1F7AE9CBBF260830CD8415F7D999* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBA596C9EAEAF8AB5739E52B5275F6AD2AB511200_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61* L_3 = ___value1;
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_4 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_6 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFAF8AA6B1BECA91590EDA8A635316BA1CA78C4EB_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, int32_t ___key0, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mCB014FC6937DD18853AF3EC9ED555CB0C224E863_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m572E0261305CF569ABC851B664A92E08A258F513_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m96E6435202F082B9525D4824C5A8E568EB5B8D2D_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, KeyValuePair_2U5BU5D_t3231CBC16085BD50FB59F11F001D9EE7E5562B19*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_18 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_32 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_42 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_54 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mC3AF044FBDB0A9ED260E922C7064DAC637C5C043((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE63CAE36B26A86F99BB6324C487EB9BB321768CA_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7EDD1B3D344A4DA8880D683E7D86C196ABD638E5_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m9DBC80CD132D7A0D94658379535307B1AFAA1C23_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* L_0;
		L_0 = ((  KeyCollection_tB08EA1F6D91115FC77C755571ED4412136A7EDBE* (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mBBF18EF3F3E3882291DB178D0B8341491B1014A8_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A* L_5 = (EntryU5BU5D_tF0A5371FCC7C07B70274733A481401D3C467D23A*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_7 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m389EA0322A75C1A5E364155A32482C1CCDDAA984_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61*)((JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61*)(JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m9E4A85D08DB0B73B9826D939571F6363ED441803_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m102FC393D3D37DD13AD32CEBFEE49BACCBA05019_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,Oculus.Interaction.Body.Input.BodySkeletonMapping`1/JointInfo<System.Int32Enum>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mB53D7556A031285F4E4C7B5BDBE7CF86D518679E_gshared (Dictionary_2_tEAE68258BA99E8C22B36E7E3ED7522492F24E40B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0BCAC52F6DD34ED7E05618F9C8E4CF2FFAF7E00D((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tB22734833D40C45D3A3FE4B2188140AA84EF375F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC81B3286B4DBF9DDE1A3E8310363C88CA934CAA2_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AA4093AF07B6AEFEC7432628906109CE2CB2B5C_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5A2F3C94F956B894D8CA3B5737946C6B7BBC41B_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80ABF2C36AEA642F96B3E6399AC89925B3783F7C_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_5;
		L_5 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE8B208DF5292242E4E124AEA769DD2E4B615008F_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1DD22471589C37D52F6657884209851F38060FCA_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* G_B2_0 = NULL;
	Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* L_11 = ((Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_13 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		bool L_22 = (bool)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				bool L_33;
				L_33 = KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA32009BCB7693455DC7600BF558CF7B3B67BAEF9_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB40FAD27BFB4FF901FEA90B35A0E8C53EB3B7D61_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* Dictionary_2_get_Keys_m4E1F4A60D193E5DC4C52F5D590B38F2DF33383A8_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* L_0 = (KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* L_1 = (KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885*, Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* L_2 = (KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* Dictionary_2_get_Values_mAA3216699C86355E6D25693975D0D967DAB749D8_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* L_0 = (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* L_1 = (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*, Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* L_2 = (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m8DA9532826C12F0D6C3D0D472F1D92A1039BA9C9_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* L_0 = (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* L_1 = (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*, Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961* L_2 = (ValueCollection_tC25EE00B20BF2F83E75829833409544FEA23D961*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_m2E1B26D0396F7F9EA4D076E44BFBED0C928D10AA_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_3 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = (bool)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5913C37203F0EB1707B1654ED44F5341C900D2B2_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		bool L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE08D7E943DDE0B5B07E902FE4BF0FE16E186B1EA_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		bool L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44D45EA7E9A50B6538A4242DC52DE3710B541D65_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_1;
		L_1 = KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4C3EBAACA1D84214EAEFB2DC1C01270D39C31235_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_4 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m39508A8AB333857C269BBDDE9308FE2C9CB1B2E4_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_4 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m415A0C2F18F75E8BBCB229B0AC7E63F01E8BF137_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_4 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2EE0AEB543F7B31A0268E6FF7C27DF6B01903833_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9029F4F15D01C85439C71A220DCA6FD4E3DE4203_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, bool ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_0 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		bool L_7 = (bool)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_15;
		L_15 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		bool L_18 = (bool)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		bool L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_24;
		L_24 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_28 = V_4;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		bool L_31 = (bool)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		bool L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m907F6CE5126E51CA4A7B4E7B81A39C208B711C51_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_7 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		bool L_19 = (bool)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m955E02156D4009994AA1E0AA04AFA3B201F34D4F((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A Dictionary_2_GetEnumerator_m4EEFD95E7AC7A1B4C5FB93C8B9058633B254D6AF_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1B3C91529E0CCCAF09CB0085BDBA7EB5330B3164_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m68F071C0EE7C035FED547CFA3023568BA514D03B_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_14 = (KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*)(KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_15 = V_0;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6501DA36076D3AE0BF4D833EF2C5CE12E7809C72_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_2 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_19;
		L_19 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_31;
		L_31 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_38 = V_7;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m79A0DEA7B0FE8F54504FDF2422ED36F8BCABFAF7_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_5 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)(EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m5BB7F746BA9847058C34C0A95E129409C2893858_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, bool ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_4 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		bool L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_44;
		L_44 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_51 = V_12;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		bool L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		bool L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_105 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_123 = V_10;
		bool L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mDEEDEA9FA580CF51A203F8582856964742BE826F_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		bool L_27;
		L_27 = KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m72D6BB8BAB641D9397490EF122C0A482B1F12565_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1A11C94D5F78EE6387BDACD7707DD4A9ABB15AC7_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_3 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)(EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_5 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m969DC473441268A26FACD6900D9D61CCD5920B5A_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_13 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_20;
		L_20 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_34 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_43 = V_4;
		bool* L_44 = (bool*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(bool));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t7B3861A33B85B48715972326859F7104EAEFDF50* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3A84CC6B1A3DBCAD24EBFF94E71F1BCEEA441D2B_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, bool* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___value1;
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_4 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = (bool)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFFAC755C81C581CC3C71E97E9A2B603B5441F318_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		bool L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mAA9D479DCA22C6E2A35A99AECDB03C9C825F9CE1_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9B2D94A14B85729C7C49D6F9FE50B1CCAAF22382_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mEC3A9EA11AAD0857C116086ACE2756287E6E0219_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, KeyValuePair_2U5BU5D_tF7CBFAF1839297054EA6223F4DB8458613BCE72E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_18 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		bool L_32 = (bool)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		bool L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_42 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			bool L_54 = (bool)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m955E02156D4009994AA1E0AA04AFA3B201F34D4F((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28B068448DF3409378C6FDCA42BB2DE9EB76A453_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mCF854A539B5120E48717230D3973016BB21C5DC7_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mCB21DB0F39471EA135272AF98B56DD48E954A9CB_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* L_0;
		L_0 = ((  KeyCollection_t1C1105D8D578C9E85823FC2AC61FD7344A31E885* (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5B5E1321D7B4138F7E60DD8881032B0AF8563A1B_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA* L_5 = (EntryU5BU5D_tE14467D2438A024662CB5769B4C67675D5751EDA*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = (bool)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m9E5036F578933948FF402EDD9289EB472051D4F4_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(bool*)((bool*)(bool*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m13ABBA814816E66E5EA50B4C19DA4D6DDFFF6A17_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mC01F077093CEBDFF14BEBE1C86BC3C3D0C6519C9_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0868585999488147D9AB32DD5A482C2903CDA0AE_gshared (Dictionary_2_tF5AD295CF9A7806ED3FB7698E9F1E9E0D0DC20E4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m029258EE0A4B56EAF49E713BCAB5325FF3C4981E((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8EBF6C28E5A1964395771052B9A8E838D3EC7E8A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E03E419C7EAE999D440A625A0C6110AF2EB0F86_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBDD3C4F189DAF3FE2B78969C78097D896EF01079_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9176CFAEABE387A16BC4500A9ACE30FB0433B892_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m950BE8EE6ED6078FF75B55CA05D05C321C5E1303_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_5;
		L_5 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7A818AF180482B7431F48C234C3A9C61BA601499_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDC8714A600BD0DDF23AEEDA7FCE1B93861E70A5C_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* G_B2_0 = NULL;
	Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* L_11 = ((Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_13 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9BF9EBAA614EA260DA77C56FA76CBBB50A138F0F_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mCBF1EE8C643110A99CC7E69786D390A7C3E56DCA_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* Dictionary_2_get_Keys_m6A63A7ACF1E63AEA31CB91A7452E7F2477BE3825_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* L_0 = (KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* L_1 = (KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D*, Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* L_2 = (KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* Dictionary_2_get_Values_mE349C115BB980CE5C8CCDFD768F092B07346F28F_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* L_0 = (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* L_1 = (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*, Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* L_2 = (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m94F1CA6733112F6A4A2FA9CD8F0E24A5FC7A3DD6_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* L_0 = (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* L_1 = (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*, Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A* L_2 = (ValueCollection_t5E7EF3C136B159A4CF0729AD867F85E3BB368C2A*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m978CAD767E166B6BD2E111732F513A1398B0B974_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_3 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF15B35814458562DB2AD3BC4ACC3EEBE3B35E8C4_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDC87F07779BF25B3A4D29BE8B2C0992C42ADFDD_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m85CAD798BAD6998F6FDD4141AAA2FA19CDADA421_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mBE7C232C93AF3CE53A94DF5D7D317FEB4EE372D7_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_4 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m70143358A2A6CBFCD0B03FCE7BA9013A9F7B955B_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_4 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1B803B86A53FC1C520619F6EE49BF5F3383B9C6F_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_4 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA76074F0BF8021567A981473C6681B6DCDC43E2B_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m093D9670F43031E16608CB00117855E587D033FF_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_0 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_15;
		L_15 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_28 = V_4;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = (int32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m2EF070A4DA713967E6CAC930AF79A239D663BB3B_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_7 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m8F404829E7AC9C8E687CF26A1A76269887DB6306((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A Dictionary_2_GetEnumerator_m3F34B328374AAC0B9166EFF8B61DBB8E41250811_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mAC930A744F7EE67955DBAEBFDA7BABBB59E02328_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEBF646429C27B2BCF4AA44F542CE28BF10B6868F_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_14 = (KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*)(KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_15 = V_0;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m76122861A380A3B3C6833003F75F3AB6B41DE5F6_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_2 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_19;
		L_19 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_31;
		L_31 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_38 = V_7;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mF8AF9BEC66ACC150BCB7BBCDA6989FBA190F5229_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_5 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)(EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA4249DD68B7AEDE26AFE10EAB7A11D3913F2C09C_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, int32_t ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_4 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_44;
		L_44 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_51 = V_12;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		int32_t L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_105 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_123 = V_10;
		int32_t L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCBDCA49CED373204BE3139D6B14C3C096DADBE81_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5F2618905B1F54C2FA1B15225AB23D65E08CFEA9_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m215EE3454991B38FCAED9D15CB1FB98ADF745080_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_3 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)(EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_5 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m300695E3A7E74B17A03FDA52A3856CB8DA8C04CA_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_13 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_20;
		L_20 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_34 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2F800649FDE2B1FDC0905381145EB5AECA43546A_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___value1;
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_4 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m1A4AE180E77E178ECC7B65D6F9E1E4464D6EAA44_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4742BEB33074A6444482E79307CC8ECC9839BA74_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA4417AE22E66D3D0BDFD7424452BD09B2BC495F0_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE23F378424770C2CE5DF7590162DE31B32D6F8E2_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, KeyValuePair_2U5BU5D_tFCAFF20F0E2891FCEAE51C48164C1D75C6912448*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_18 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = (int32_t)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_42 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m8F404829E7AC9C8E687CF26A1A76269887DB6306((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7A2029923F661D168976D7505E2ED7099A9C31D1_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8D0F92720D1E140992B8E0D50B2D7478150A20CB_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m8991BF094773B02BCD2003D5F5F15DA6F29324BD_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* L_0;
		L_0 = ((  KeyCollection_t27CF43D44B3CB233E2AB0B984BC4F040C36EC05D* (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m10FF802E16EDC5DF3ECE9C84F1973C4AF36429EB_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B* L_5 = (EntryU5BU5D_tD52BB614B1A3926BCD58815471C1753516F2602B*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0E9E13B801E563BA1D24CA29486E14054CDC7702_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m04F100C361E38662CCF416278D59145F4DA8F252_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD249843BD040B23FA1D1BFFCEC513911EBC706E0_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD0548997003DA99A77031292956B5E6A12882DD7_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB538E22C22DC79C8FC59C2EDE35532DB6890F875((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t628F4A89865D78D3344C93277ACECBDE97BE739A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F4FDC32CBD28A6AAC85284DEF64CE9BF8DE582_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD439CCB19BEB9F88378AB7A1F58876D5D6B919BF_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6A0F417FC75C9691DA886BBF2283305D332B045_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAFA7C663A7429D759B0D5A09A97DDF9D66E32743_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___capacity0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___capacity0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___comparer1;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_5;
		L_5 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___comparer1;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDF76C50B1C9074EA4167B40CCFF9691FCC81D03_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___dictionary0;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD753079B350B56B5E595C361CF07B15FD9FCDD08_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___dictionary0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* G_B2_0 = NULL;
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___dictionary0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___comparer1;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___dictionary0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___dictionary0;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___dictionary0;
		Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* L_11 = ((Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = (int32_t)L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_13 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___dictionary0;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Int32Enum>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				int32_t L_33;
				L_33 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5DD743D955CB6747FA136F4D33B5CBCBA9F7465_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3DD3087D4805D1008B9C3F1F1A289C118F5CE7B6_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		int32_t L_1 = (int32_t)__this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* Dictionary_2_get_Keys_mE030F89B8616A432D36BA5A0DCA6E00BD0D83CA0_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_0 = (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA*)__this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_1 = (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_2 = (KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA*)__this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* Dictionary_2_get_Values_mF25DEA20D6F09577BAF5C574324DCE1E11C6A8EB_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_0 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_1 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_2 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)__this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mA67AA3C9EBEC11905238AB6074236CBD9B106B48_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_0 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)__this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_1 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*, Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C* L_2 = (ValueCollection_t798C1DA5F9E16D05777CD24B2A2AA7905B322B3C*)__this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m2AD6E76220E3D39F0898141D91D3D0CD814B31CE_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_3 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___key0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m5E4FF6CB92A8043FE70A0F462E06374A5F077DC0(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0A9199AFF8ECF787A819DA70C4A4F0044E2A0933_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAEAF04AB4A1511F9DDAB58DC19E3AAC3CA5B727B_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1EA5F21815E6879E75CE2F0851B6A46B46C3368F_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___keyValuePair0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1BEF18E07CB5502879CADC82B661105AC90FA7F5_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5F8AEE59B23C3216F19A8B5F739BD2B37AAFAFFD_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___keyValuePair0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3;
		L_3 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline((&___keyValuePair0), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF7DD09BF8F406C01CCE92872A10A1D600CCF2889_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA9988CDC49C4859A6C9555C8CE9C693EA0AF768C_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2F55D025BEA856A80D16FA2FF4D39D43A3C760C9_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_0 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)__this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_15;
		L_15 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		int32_t L_19 = ___value0;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = (int32_t)__this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_28 = V_4;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = (int32_t)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		int32_t L_32 = ___value0;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = (int32_t)__this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m1F08608E9E567A677E30DF26569BEFA7C211BAFB_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___index1;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_2 = ___array0;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4 = ___index1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = (int32_t)__this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_7 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = (int32_t)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_11 = ___array0;
		int32_t L_12 = ___index1;
		int32_t L_13 = L_12;
		___index1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = (int32_t)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = (int32_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 Dictionary_2_GetEnumerator_m6498FC8C759DE310B06B2CA41BF4C93D6B493624_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA5183AAA7DC8C5BD37964CF288C9B06FE1751951_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB2F80C69940F61938F7C583C5CFAD7580BE1525D_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		int32_t L_2 = (int32_t)__this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___info0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_6;
		L_6 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_14 = (KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)(KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_15 = V_0;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7520794A7EFA2A6CA28D4391985F3977BA8C5222_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_2 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_19;
		L_19 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_31;
		L_31 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = (int32_t)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_38 = V_7;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___key0;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___key0;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = (int32_t)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___key0;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = (int32_t)((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m8FCB94C0B76C1582D86A9174A585F484307D9270_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___capacity0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)(EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mCA3352BB9CE8A0EE18F07435CD2EFE538BB2CBEC_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t ___value1, uint8_t ___behavior2, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = (RuntimeObject*)__this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___key0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = (int32_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_24;
		L_24 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___key0;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___behavior2;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ___value1;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___behavior2;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___key0;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = (int32_t)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_44;
		L_44 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_51 = V_12;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___key0;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___behavior2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		int32_t L_60 = ___value1;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___behavior2;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___key0;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = (int32_t)((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = (int32_t)((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = (int32_t)((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___key0;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___behavior2;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		int32_t L_86 = ___value1;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___behavior2;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___key0;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_mA8745638CD7D4651C757AC34718E95DC2A084C1D(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = (int32_t)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_m4434EC2773AD517D012244B08605B93DF42F90EC(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = (int32_t)__this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = (int32_t)__this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = (int32_t)__this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_105 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_114 = V_10;
		int32_t L_115 = (int32_t)L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_121 = V_10;
		int32_t L_122 = ___key0;
		L_121->___key_2 = L_122;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_123 = V_10;
		int32_t L_124 = ___value1;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m37E7E5D9EF129A4F360C797606CF4C68F439FAC4_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_mD75FA8E2CDA8661BCFD4D469DAB8A7A07CA0DBA8((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m47AA56AB8E01461257D3A8AD32DAEAC86063639A_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(L_0, NULL);
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m99C824085DD0513A9C8AB6D9AFDFE9E48B8F5C00_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___newSize0, bool ___forceNewHashCodes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___newSize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___newSize0;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_3 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)(EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = (int32_t)__this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___forceNewHashCodes1;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = (int32_t)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___newSize0;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9F72B0FFEAFD16160C8B7498A1EC43ACF25CC0C6_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)(&___key0), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___key0;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_13 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_15 = V_4;
		int32_t L_16 = (int32_t)L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = (RuntimeObject*)__this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_20;
		L_20 = ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_21 = V_4;
		int32_t L_22 = (int32_t)L_21->___key_2;
		int32_t L_23 = ___key0;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_25 = V_4;
		int32_t L_26 = (int32_t)L_25->___key_2;
		int32_t L_27 = ___key0;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32Enum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_32 = V_4;
		int32_t L_33 = (int32_t)L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_34 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_36 = V_4;
		int32_t L_37 = (int32_t)L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_39 = V_4;
		int32_t L_40 = (int32_t)__this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_43 = V_4;
		int32_t* L_44 = (int32_t*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(int32_t));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = (int32_t)__this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = (int32_t)__this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A* L_49 = V_4;
		int32_t L_50 = (int32_t)L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCB2C582038648B7DC723E339D5FE3FEC3FCC8610_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___value1;
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_4 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___value1;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mD76AAFF5F25C562D9AF6A67311A70401A54E8CB4_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64C1BA61BD330F34C3EE5262D664ECDFDB1C9622_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8876B16FB1DD52E6148B63FE1D39EDC7BA23C984_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m15A409F1DB9684182D59A57BB81ADB5F67A60954_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___array0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___index1;
		RuntimeArray* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m61CF6173DF6333DA7CF010545C5BDED2DC50841C(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___array0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_mA1936DCE00E072FC1E59DDBC0D38D58B1725DC22((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___array0;
		V_0 = ((KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F* L_14 = V_0;
		int32_t L_15 = ___index1;
		((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, KeyValuePair_2U5BU5D_tC7E1241752D3938233F4232553B8BF255A92C37F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___array0;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_18 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___index1;
		int32_t L_24 = L_23;
		___index1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = (int32_t)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = (int32_t)__this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___array0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = (int32_t)__this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_42 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = (int32_t)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___index1;
			int32_t L_48 = L_47;
			___index1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = (int32_t)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			int32_t L_54 = (int32_t)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE1CFBC2A63CC5A38A31CF657F1D6AC90DF854189((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_mBE22AFE68937344044EC89112DA89153DC8A1EC0(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3B6375D170852ED8BA17A06BC6973DB70A659C96_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m6840C1F5927D19805711C55B8F3A8C714EB4FE77_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = (RuntimeObject*)__this->____syncRoot_9;
		return L_4;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m5C7EA63C3830FA90F964ED66F446156FC5611628_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* L_0;
		L_0 = ((  KeyCollection_t79027F87B7997304298371B3F4E410423B6C61FA* (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return (RuntimeObject*)L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB71D33377208F2DFB46F3187D3A8B6CDAD090CA1_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A* L_5 = (EntryU5BU5D_t74DBBEDFEA84979EC7428ADBFE28C5FA3A7DB67A*)__this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = (int32_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4E38E5289D0AB7084D96F1D195AF0CA2E9FBEFB4_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value1;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___key0;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___value1;
			((  void (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)))(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 52));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___value1;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_m971044D3F876A3095C2087451D83E9425C14BFD2(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___key0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 54)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m8C4D4D79E5E0584802FCE6D38FC717A3FBEAD804(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1CDADB0E24E91C5E00938703B8D829E25F9372CE_gshared (RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___key0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m35261CE5474A75F48EE2212987F64797464AE9FE_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___key0;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32Enum>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mAD8693CCDD89E5DE834F86A8ED6899869789849A_gshared (Dictionary_2_t1BADE94A7E53FAAFB3B9C0BB4DF061F13C8A1298* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF1011A53EA20BACF511E6B232A5E32E7B60AD725((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t8DF1CA72CF7DFF457C48D34AD99CED4444D65D04 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m46AAAAE3FB1DEF3F9B68CAE9BD0BC8DF3219FA77_gshared_inline (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A KeyValuePair_2_get_Value_m22C0F0F1E095CECC221A48F072C7542A95014140_gshared_inline (KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE* __this, const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m56F44B52E64617D5CE2CF77ABE36C6BF07A3009C_gshared_inline (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 KeyValuePair_2_get_Value_mD760A4CEB0F5BDC4C5CE9236CCB30BD34555EEB4_gshared_inline (KeyValuePair_2_t80C4C5AFB26EFE61A559DFB22B7FC8BE95DA3B55* __this, const RuntimeMethod* method) 
{
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mC7CEB95BDD69D10EDB4060F583D26ABB5C4677B6_gshared_inline (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 KeyValuePair_2_get_Value_mBB5CDB5AABD7B2A569D6C15624BB42AEB29A9CB1_gshared_inline (KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A* __this, const RuntimeMethod* method) 
{
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_0 = (FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m7F8F8C82D057FE3085CEAA93D209797D9D942CA3_gshared_inline (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 KeyValuePair_2_get_Value_m2D907B8CA3BA36E297A38113774090189227AB0D_gshared_inline (KeyValuePair_2_tDEA3C1BC01D679C9F3B771948623994EE8B62855* __this, const RuntimeMethod* method) 
{
	{
		JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61 L_0 = (JointInfo_t9A1D52B5AC07F31BFEA2D57D19EFFDEFD8CE5F61)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m6A81EC1535585F56C455EB2E44F6ED5C3B49D1AC_gshared_inline (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m722F6476E3D7CFEDD15BC194D7E2E8118C2519FB_gshared_inline (KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m380DA6E4F786B9C61012C4427405FC5FD48413A1_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m3F5DAA82C39D5EFEAE4B1F8389E1DD38732777CC_gshared_inline (KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m428D836E017E96271B63C841FF3DFC8BA0AADCDD_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m49FC446A15F58E545BDC28BC240CCD70699A4C2F_gshared_inline (KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
