﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode>
struct Dictionary_2_tC2F17B4EBFD9F0FDFFCDED4E70FD0B5EBA0CF7EE;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct IEnumerable_1_t2D634810B70BA60D058556A5B02CC70943B13FBD;
// System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct IEnumerator_1_t709344B44EB10AADCDAB1765E9ABBE3252E7E3E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler>
struct List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>
struct List_1_t4F3133982BFC53A2508E8212590377CE60E9596C;
// System.Collections.Generic.List`1<Meta.WitAi.Json.WitResponseNode>
struct List_1_t9CEE2998D6E0D27CA64916B517759F8657596864;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>
struct UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8;
// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>
struct UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>
struct WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Meta.WitAi.Data.Info.ComposerGraph[]
struct ComposerGraphU5BU5D_t0BB5CF7F79C326E2D5DC0E30FA07EDFC0C7155D3;
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E;
// Meta.WitAi.Data.Entities.WitDynamicEntitiesData[]
struct WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36;
// Meta.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499;
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;
// Meta.WitAi.Data.Intents.WitIntentData[]
struct WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Meta.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Meta.WitAi.Data.Entities.DynamicEntityDataProvider
struct DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F;
// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry
struct DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28;
// Meta.WitAi.Data.Entities.DynamicEntityProvider
struct DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t9DB0F42120182B87787DF6413D5A8A57F1B136DB;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14;
// Meta.WitAi.IWitRequestEndpointInfo
struct IWitRequestEndpointInfo_t836AC4A0D91400BEBDE46EAFC27047094F6DADAE;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
struct OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
struct RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// Meta.WitAi.CallbackHandlers.SimpleIntentHandler
struct SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4;
// Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler
struct SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309;
// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E;
// System.String
struct String_t;
// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201;
// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC;
// Meta.WitAi.Attributes.TooltipBoxAttribute
struct TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9;
// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E;
// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497;
// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// Meta.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38;
// Meta.WitAi.Data.Entities.WitDynamicEntitiesData
struct WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146;
// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D;
// Meta.WitAi.Data.Entities.WitEntityData
struct WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B;
// Meta.WitAi.Data.Entities.WitEntityFloatData
struct WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8;
// Meta.WitAi.Data.Entities.WitEntityIntData
struct WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2;
// Meta.WitAi.Data.Intents.WitIntentData
struct WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515;
// Meta.WitAi.CallbackHandlers.WitIntentMatcher
struct WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B;
// Meta.WitAi.Json.WitResponseArray
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A;
// Meta.WitAi.Json.WitResponseClass
struct WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25;
// Meta.WitAi.CallbackHandlers.WitResponseErrorEvent
struct WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B;
// Meta.WitAi.CallbackHandlers.WitResponseEvent
struct WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA;
// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1;
// Meta.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;
// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581;
// Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1;
// Meta.WitAi.Data.WitStringValue
struct WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739;
// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C;
// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC;

IL2CPP_EXTERN_C RuntimeClass* DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316;
IL2CPP_EXTERN_C String_t* _stringLiteral09D70245F3500CCD8237A0140F73164F286401D5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral11AD741CBC6F6810EF049BB36B42BB4C32C2CB40;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB086973FB6A2E7A02B81F80EC5E8066A9F65D8;
IL2CPP_EXTERN_C String_t* _stringLiteral293FEA1788CBA62C70BB50A2D66B4CF52162FD84;
IL2CPP_EXTERN_C String_t* _stringLiteral2EC4BDD76EA1B8DF254C40F3CA06D3C59FECB5E1;
IL2CPP_EXTERN_C String_t* _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral493F2C980EC99D04772AED0654F76A3ED491B938;
IL2CPP_EXTERN_C String_t* _stringLiteral4D19773218A7935AA0D38A8938C871D229F73665;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral50DC73D47DBEF200FCB895315FB80FD4568558D6;
IL2CPP_EXTERN_C String_t* _stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53;
IL2CPP_EXTERN_C String_t* _stringLiteral76B984902098D790B36C506477F43BF329D2E00E;
IL2CPP_EXTERN_C String_t* _stringLiteral7767C46BE8F952DEC905B39693FC67366C25C4A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7DCA7A6024F48FADFB3A49018CB138C4995119A4;
IL2CPP_EXTERN_C String_t* _stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D;
IL2CPP_EXTERN_C String_t* _stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE65ED37F28B0054DF33BDE6B0D1B05F0B7952AD0;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m1E0A6A00550E2AB8689A6D574580FADA47E9B869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_m21E86F2EB8C93DABE3552DACFD523A0FF9FA3201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m86C7EFEC0D8323CBBFD02141033C4CB0337652D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var;
struct ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_com;
struct ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke;

struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E;
struct WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36;
struct WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F;
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;
struct WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95* ____entries_1;
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
	KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>
struct List_1_t4F3133982BFC53A2508E8212590377CE60E9596C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* ___s_emptyArray_5;
};

// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C  : public RuntimeObject
{
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_2;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___U3COptionsU3Ek__BackingField_3;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___U3CEventsU3Ek__BackingField_4;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* ___U3CResultsU3Ek__BackingField_5;
};

// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Meta.WitAi.Data.Entities.WitEntityDataBase`1::value
	int32_t ___value_8;
	// System.Single Meta.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Meta.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};

// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Meta.WitAi.Data.Entities.WitEntityDataBase`1::value
	float ___value_8;
	// System.Single Meta.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Meta.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};

// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>
struct WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Meta.WitAi.Data.Entities.WitEntityDataBase`1::value
	String_t* ___value_8;
	// System.Single Meta.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Meta.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Meta.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8  : public RuntimeObject
{
	// System.Single Meta.WitAi.CallbackHandlers.ConfidenceRange::minConfidence
	float ___minConfidence_0;
	// System.Single Meta.WitAi.CallbackHandlers.ConfidenceRange::maxConfidence
	float ___maxConfidence_1;
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.ConfidenceRange::onWithinConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onWithinConfidenceRange_2;
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.ConfidenceRange::onOutsideConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onOutsideConfidenceRange_3;
};

// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____overriddenCallbacksHash_1;
};

// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.FormattedValueEvents::format
	String_t* ___format_0;
	// Meta.WitAi.CallbackHandlers.ValueEvent Meta.WitAi.CallbackHandlers.FormattedValueEvents::onFormattedValueEvent
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* ___onFormattedValueEvent_1;
};

// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6  : public RuntimeObject
{
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanRead>k__BackingField
	bool ___U3CCanReadU3Ek__BackingField_0;
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanWrite>k__BackingField
	bool ___U3CCanWriteU3Ek__BackingField_1;
};

// Meta.Conduit.Manifest
struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB  : public RuntimeObject
{
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler> Meta.Conduit.Manifest::ErrorHandlers
	List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* ___ErrorHandlers_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::_methodLookup
	Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* ____methodLookup_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::<CustomEntityTypes>k__BackingField
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___U3CCustomEntityTypesU3Ek__BackingField_7;
};

struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.Manifest::WitResponseMatcherIntents
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___WitResponseMatcherIntents_8;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::path
	String_t* ___path_0;
	// Meta.WitAi.Data.WitValue Meta.WitAi.CallbackHandlers.ValuePathMatcher::witValueReference
	WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* ___witValueReference_1;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::contentRequired
	bool ___contentRequired_2;
	// Meta.WitAi.CallbackHandlers.MatchMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchMethod
	int32_t ___matchMethod_3;
	// Meta.WitAi.CallbackHandlers.ComparisonMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::comparisonMethod
	int32_t ___comparisonMethod_4;
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchValue
	String_t* ___matchValue_5;
	// System.Double Meta.WitAi.CallbackHandlers.ValuePathMatcher::floatingPointComparisonTolerance
	double ___floatingPointComparisonTolerance_6;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_7;
	// Meta.WitAi.CallbackHandlers.ConfidenceRange[] Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidenceRanges
	ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges_8;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::pathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___pathReference_9;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidencePathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___confidencePathReference_10;
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

// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B  : public RuntimeObject
{
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::entities
	List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* ___entities_0;
};

// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntity::entity
	String_t* ___entity_0;
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo> Meta.WitAi.Data.Entities.WitDynamicEntity::keywords
	List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* ___keywords_1;
};

// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D  : public RuntimeObject
{
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_uriScheme
	String_t* ____uriScheme_0;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_authority
	String_t* ____authority_1;
	// System.Int32 Meta.WitAi.Configuration.WitEndpointConfig::_port
	int32_t ____port_2;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_witApiVersion
	String_t* ____witApiVersion_3;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_message
	String_t* ____message_4;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_speech
	String_t* ____speech_5;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_dictation
	String_t* ____dictation_6;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_synthesize
	String_t* ____synthesize_7;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_event
	String_t* ____event_8;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_converse
	String_t* ____converse_9;
};

struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_StaticFields
{
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Configuration.WitEndpointConfig::defaultEndpointConfig
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___defaultEndpointConfig_10;
};

// Meta.WitAi.Data.Intents.WitIntentData
struct WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Intents.WitIntentData::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Intents.WitIntentData::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Intents.WitIntentData::name
	String_t* ___name_2;
	// System.Single Meta.WitAi.Data.Intents.WitIntentData::confidence
	float ___confidence_3;
};

// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};

// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581  : public RuntimeObject
{
	// Meta.WitAi.WitResponseReference Meta.WitAi.WitResponseReference::child
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___child_0;
	// System.String Meta.WitAi.WitResponseReference::path
	String_t* ___path_1;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20  : public RuntimeObject
{
	// Meta.WitAi.Data.Entities.WitDynamicEntity Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::dynamicEntity
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___dynamicEntity_0;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::entityName
	String_t* ___entityName_0;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::entityName
	String_t* ___entityName_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value_1;
};

// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963  : public VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_6;
};

// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>
struct UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 UnityEngine.PropertyAttribute::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E  : public EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE
{
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.SpeechEvents::_onRequestOptionSetup
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* ____onRequestOptionSetup_3;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onRequestInitialized
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onRequestInitialized_4;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.SpeechEvents::_onRequestCreated
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* ____onRequestCreated_5;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onSend
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onSend_6;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onMinimumWakeThresholdHit_8;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onMicDataSent_9;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToDeactivation_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToInactivity_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToTimeout_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAborting_14;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAborted_15;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onCanceled
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onCanceled_16;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onPartialResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ____onPartialResponse_18;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ____onResponse_19;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::_onError
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* ____onError_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onRequestCompleted_21;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onComplete
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onComplete_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStartListening_24;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListening_25;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::_onMicLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ____onMicLevelChanged_26;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onPartialTranscription_28;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onFullTranscription_29;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents> Meta.WitAi.Events.SpeechEvents::_listeners
	HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* ____listeners_30;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7 
{
	// Meta.WitAi.Data.Info.ComposerGraph[] Meta.WitAi.Data.Info.WitComposerInfo::canvases
	ComposerGraphU5BU5D_t0BB5CF7F79C326E2D5DC0E30FA07EDFC0C7155D3* ___canvases_0;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_pinvoke
{
	ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_pinvoke* ___canvases_0;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitComposerInfo
struct WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_com
{
	ComposerGraph_t1AEED7052A249877C3A05B265FDC790A35F7EFC6_marshaled_com* ___canvases_0;
};

// Meta.WitAi.Data.Entities.WitEntityData
struct WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B  : public WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4
{
};

// Meta.WitAi.Data.Entities.WitEntityFloatData
struct WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8  : public WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960
{
};

// Meta.WitAi.Data.Entities.WitEntityIntData
struct WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C  : public WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507
{
};

// Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B 
{
	// System.String Meta.WitAi.Data.Info.WitEntityKeywordInfo::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Info.WitEntityKeywordInfo::synonyms
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke
{
	char* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com
{
	Il2CppChar* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};

// Meta.WitAi.Json.WitResponseArray
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	// System.Collections.Generic.List`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray::m_List
	List_1_t9CEE2998D6E0D27CA64916B517759F8657596864* ___m_List_0;
};

// Meta.WitAi.Json.WitResponseClass
struct WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::m_Dict
	Dictionary_2_tC2F17B4EBFD9F0FDFFCDED4E70FD0B5EBA0CF7EE* ___m_Dict_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25  : public TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06  : public UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Attributes.TooltipBoxAttribute
struct TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Meta.WitAi.Attributes.TooltipBoxAttribute::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
};

// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9  : public SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E
{
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataReady
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ____onByteDataReady_32;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataSent
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ____onByteDataSent_33;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::_onValidatePartialResponse
	WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* ____onValidatePartialResponse_34;
};

// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13  : public UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2
{
};

// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 
{
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC* ___voices_12;
	// Meta.WitAi.Data.Info.WitComposerInfo Meta.WitAi.Data.Info.WitAppInfo::composer
	WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7 ___composer_13;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke* ___voices_12;
	WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_pinvoke ___composer_13;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com* ___voices_12;
	WitComposerInfo_tC5EC9DE899984DE5F6E7D3BFC45A7EC1BFA8EEE7_marshaled_com ___composer_13;
};

// Meta.WitAi.CallbackHandlers.WitResponseErrorEvent
struct WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B  : public UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9
{
};

// Meta.WitAi.CallbackHandlers.WitResponseEvent
struct WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C  : public UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA
{
};

// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323  : public NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25
{
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_7;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_8;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// System.Predicate`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>
struct UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536  : public NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323
{
};

// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 ____appInfo_5;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_6;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_7;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___endpointConfiguration_8;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_10;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_11;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___excludedAssemblies_12;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::relaxedResolution
	bool ___relaxedResolution_13;
};

// Meta.WitAi.Data.Entities.WitDynamicEntitiesData
struct WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntitiesData::entities
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* ___entities_4;
};

// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::reference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___reference_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.WitAi.Data.WitStringValue
struct WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805  : public WitValue_t62896259CA1F095F305381482D891DC0E1ED1092
{
};

// Meta.WitAi.Data.Entities.DynamicEntityDataProvider
struct DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Entities.WitDynamicEntitiesData[] Meta.WitAi.Data.Entities.DynamicEntityDataProvider::entitiesDefinition
	WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* ___entitiesDefinition_4;
};

// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry
struct DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::entities
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* ___entities_5;
};

struct DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields
{
	// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::instance
	DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* ___instance_4;
};

// Meta.WitAi.Data.Entities.DynamicEntityProvider
struct DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityProvider::entities
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* ___entities_4;
};

// Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
struct RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::entity
	String_t* ___entity_4;
	// Meta.WitAi.Data.Info.WitEntityKeywordInfo Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::keyword
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword_5;
};

// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::_conduitParameterProvider
	RuntimeObject* ____conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ___events_6;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::telemetryEvents
	TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___telemetryEvents_7;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.VoiceService::_requests
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ____requests_9;
};

// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.VoiceService Meta.WitAi.CallbackHandlers.WitResponseHandler::Voice
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___Voice_4;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::ValidateEarly
	bool ___ValidateEarly_5;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::_validated
	bool ____validated_6;
};

// Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::entityName
	String_t* ___entityName_4;
	// System.String[] Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::keywords
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords_5;
};

// Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
struct OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::onOutOfDomain
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onOutOfDomain_7;
};

// Meta.WitAi.CallbackHandlers.WitIntentMatcher
struct WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::intent
	String_t* ___intent_7;
	// System.Single Meta.WitAi.CallbackHandlers.WitIntentMatcher::confidenceThreshold
	float ___confidenceThreshold_8;
};

// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_7;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_8;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_9;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onUtteranceMatched_10;
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex_11;
};

// Meta.WitAi.CallbackHandlers.SimpleIntentHandler
struct SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.SimpleIntentHandler::onIntentTriggered
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onIntentTriggered_9;
	// System.Boolean Meta.WitAi.CallbackHandlers.SimpleIntentHandler::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_10;
	// Meta.WitAi.CallbackHandlers.ConfidenceRange[] Meta.WitAi.CallbackHandlers.SimpleIntentHandler::confidenceRanges
	ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges_11;
};

// Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler
struct SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// System.String Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::entity
	String_t* ___entity_9;
	// System.String Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::format
	String_t* ___format_10;
	// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::onIntentEntityTriggered
	StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* ___onIntentEntityTriggered_11;
};

// Meta.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// Meta.WitAi.CallbackHandlers.ValuePathMatcher[] Meta.WitAi.CallbackHandlers.WitResponseMatcher::valueMatchers
	ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* ___valueMatchers_9;
	// Meta.WitAi.CallbackHandlers.FormattedValueEvents[] Meta.WitAi.CallbackHandlers.WitResponseMatcher::formattedValueEvents
	FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* ___formattedValueEvents_10;
	// Meta.WitAi.CallbackHandlers.MultiValueEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onMultiValueEvent
	MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* ___onMultiValueEvent_11;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onDidNotMatch
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onDidNotMatch_12;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onOutOfDomain
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onOutOfDomain_13;
};

struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields
{
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitResponseMatcher::valueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___valueRegex_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* m_Items[1];

	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Entities.WitDynamicEntitiesData[]
struct WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36  : public RuntimeArray
{
	ALIGN_FIELD (8) WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* m_Items[1];

	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F  : public RuntimeArray
{
	ALIGN_FIELD (8) WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* m_Items[1];

	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Intents.WitIntentData[]
struct WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4  : public RuntimeArray
{
	ALIGN_FIELD (8) WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* m_Items[1];

	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583  : public RuntimeArray
{
	ALIGN_FIELD (8) ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* m_Items[1];

	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E  : public RuntimeArray
{
	ALIGN_FIELD (8) ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* m_Items[1];

	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5  : public RuntimeArray
{
	ALIGN_FIELD (8) FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* m_Items[1];

	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811  : public RuntimeArray
{
	ALIGN_FIELD (8) WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B m_Items[1];

	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
};


// System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject<System.Object>(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonConvert_DeserializeIntoObject_TisRuntimeObject_mD0F0FB7B9C8052AD1842B057A2D55154264E9339_gshared (RuntimeObject** ___instance0, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___jsonToken1, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters2, bool ___suppressWarnings3, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB785B35A5407068979C269B25532380F897AF875_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_gshared (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_gshared (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken<System.Object>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* JsonConvert_SerializeToken_TisRuntimeObject_m48C4A9545199E7BF1744D400B450A2B252428D4B_gshared (RuntimeObject* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m5C970DAB1C9B01D04F0BD6D9B2FCE291BF11ACF9_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* WitEntityDataBase_1_FromEntityWitResponseNode_m86F61120798C478643AF4031DE9CC7CE890E7DF1_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.String Meta.WitAi.Data.WitStringValue::GetStringValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346 (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitResultUtilities_GetWitResponseReference_m824208DEEFF3A147FFD0AB46CF3F8ABD31AD4799 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Intents.WitIntentData Meta.WitAi.Data.Intents.WitIntentData::FromIntentWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* WitIntentData_FromIntentWitResponseNode_mB687AA0C44E85F971879661C1E1450DA70CB122D (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject<Meta.WitAi.Data.Intents.WitIntentData>(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline bool JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m1E0A6A00550E2AB8689A6D574580FADA47E9B869 (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515** ___instance0, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___jsonToken1, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters2, bool ___suppressWarnings3, const RuntimeMethod* method)
{
	return ((  bool (*) (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mD0F0FB7B9C8052AD1842B057A2D55154264E9339_gshared)(___instance0, ___jsonToken1, ___customConverters2, ___suppressWarnings3, method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Merge(Meta.WitAi.Interfaces.IDynamicEntitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m19DC180CB06F978BC5C8F876DD6737560EC76142 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* DynamicEntityKeywordRegistry_get_Instance_mB8A11F5221C55891BD99546D19DFC4F64FF711FE (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry>()
inline DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m86C7EFEC0D8323CBBFD02141033C4CB0337652D2 (const RuntimeMethod* method)
{
	return ((  DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::AddKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_AddKeyword_mCDF7E57A3B696A71CBE004DDB5E4784607A30601 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::RemoveKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_RemoveKeyword_m3AFEBE51C4699E7CEEBD4CCCF4C7FDC3754AEC15 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m6EEC8B4AEED277CC580566374A571A3793681B8B (const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::RegisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_RegisterDynamicEntity_m63DBCF5420BF9B10FD9B0DC0981E8F69F6E5534F (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m878B376CCE791D170CA238533BBD3778475A8594 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::UnregisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mE35F6AB0A5E6BEBCBEDC3CF2E0265DB3701A0255 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::.ctor()
inline void List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Meta.WitAi.Json.WitResponseClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47 (WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::GetEnumerator()
inline Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>::Dispose()
inline void Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3 (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>::get_Current()
inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_inline (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994* __this, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* (*) (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitDynamicEntity::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* WitDynamicEntity_get_AsJson_mA7E4CB0E4036B333116C1897C8565D1FCFB2262C (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>::MoveNext()
inline bool Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Meta.WitAi.Json.WitResponseClass Meta.WitAi.Data.Entities.WitDynamicEntities::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* WitDynamicEntities_get_AsJson_mBA5640F8C7834C711FCDA6AF2675DC56EE31B48B (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_GetEnumerator_m2798D5D10E2C24F46BED3D60814622BE9BBB2338 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m8625D0F6873C66DEE7735131A8B75C1367016622 (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::Add(T)
inline void List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::Remove(T)
inline bool List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m654A4DE466127276F04E0102A64462482FB3F906 (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::Find(System.Predicate`1<T>)
inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* ___match0, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58 (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Add(T)
inline void List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B, const RuntimeMethod*))List_1_Add_mB785B35A5407068979C269B25532380F897AF875_gshared_inline)(__this, ___item0, method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mCCCA1A6056023A410E46737A7DF6D7EA0957D6E0 (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::get_Item(System.Int32)
inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Remove(T)
inline bool List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89 (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B, const RuntimeMethod*))List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::get_Count()
inline int32_t List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, const RuntimeMethod*))List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::.ctor()
inline void List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, const RuntimeMethod*))List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_inline (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_inline (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_inline (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken<System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_m21E86F2EB8C93DABE3552DACFD523A0FF9FA3201 (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_SerializeToken_TisRuntimeObject_m48C4A9545199E7BF1744D400B450A2B252428D4B_gshared)(___inObject0, ___customConverters1, ___suppressWarnings2, method);
}
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>::.ctor()
inline void WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831 (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m5C970DAB1C9B01D04F0BD6D9B2FCE291BF11ACF9_gshared)(__this, method);
}
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
inline WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52 (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* (*) (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m86F61120798C478643AF4031DE9CC7CE890E7DF1_gshared)(__this, ___node0, method);
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Inequality_m937C1B2C6FCD8D9E59FFF0C52844049B50775D50 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
inline void WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_gshared)(__this, method);
}
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
inline WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0 (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* (*) (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_gshared)(__this, ___node0, method);
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mF31CBBF2D51E39ACA4EF7EDF5229BCC9DCE39599 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m98096B41FAF57FB4D8CD4ED4CC72AD2EC16917E4 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
inline void WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_gshared)(__this, method);
}
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
inline WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* (*) (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_gshared)(__this, ___node0, method);
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Equality(Meta.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_m2FECE305AF67D1AC2519F9EAF74E55472C5B22F4 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(Meta.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m7EFFDBF350D1BB930547DD8073093A2DF42D6AC7 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ___entity0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Configuration.WitEndpointConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetApplicationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetApplicationId_m9A06C8C514C88B5B1B783611EA60F6A7D8B80A65 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Json.WitResponseNode::op_Equality(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Equality_m5973BD0E47BBAEE1966B4A6CA314A87E45556B1C (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.String Meta.WitAi.WitResultUtilities::GetTranscription(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResultUtilities_GetTranscription_m2522C60134FF9DD4940F96C811AF0B8737AF0DD3 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Meta.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3 (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::UpdateRanges(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Intents.WitIntentData[] Meta.WitAi.WitResultUtilities::GetIntents(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* WitResultUtilities_GetIntents_m1B0756A21CE224E3BD1E2A8E8FA108D02270FF09 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::RefreshConfidenceRange(System.Single,Meta.WitAi.CallbackHandlers.ConfidenceRange[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseHandler_RefreshConfidenceRange_m64CCDF7F32ECA32BE9DB37B83C2CCA9BC32D9E7D (float ___confidence0, ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges1, bool ___allowConfidenceOverlap2, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) ;
// System.String Meta.WitAi.WitResultUtilities::GetFirstEntityValue(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResultUtilities_GetFirstEntityValue_m0C75EC2F5BB63952FB06B7537D7F3F439D0B459C (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, String_t* ___name1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mB87FF57138D7C56DE31EE2D5BAB057329B8C781B (StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::.ctor()
inline void UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>::.ctor()
inline void UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA (UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.VoiceService>()
inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F (const RuntimeMethod* method)
{
	return ((  VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m063A8F2A17CA4676719A7D14D1AB8BD0663E9137 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnSend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82 (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::get_OnValidatePartialResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22 (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::get_OnResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395 (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.WitResultUtilities::EntityCount(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitResultUtilities_EntityCount_mF21BA342617BCAA8A26175D18685EBAD9A905C91 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, int32_t ___count2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94 (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Escape_m2E4E071ABAFAE1BF55932725F28F4194CD56D7DE (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::.ctor()
inline void UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Attributes.TooltipBoxAttribute::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5_inline (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Meta.WitAi.Data.WitStringValue::GetValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitStringValue_GetValue_mBAAA5656D5FDCAFC99B4B93450ED365D01CAAE1B (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	{
		// return GetStringValue(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		String_t* L_1;
		L_1 = WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean Meta.WitAi.Data.WitStringValue::Equals(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitStringValue_Equals_m36FCADFC319649A5271DDC9896E298FF1AAE230A (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (value is string sValue)
		RuntimeObject* L_0 = ___value1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return GetStringValue(response) == sValue;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		String_t* L_3;
		L_3 = WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346(__this, L_2, NULL);
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
		return L_5;
	}

IL_0018:
	{
		// return "" + value == GetStringValue(response);
		RuntimeObject* L_6 = ___value1;
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0024;
	}

IL_001e:
	{
		RuntimeObject* L_7 = ___value1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		G_B5_0 = L_8;
	}

IL_0024:
	{
		String_t* L_9 = G_B5_0;
		G_B6_0 = L_9;
		if (L_9)
		{
			G_B7_0 = L_9;
			goto IL_002d;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_10 = ___response0;
		String_t* L_11;
		L_11 = WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346(__this, L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(G_B7_0, L_11, NULL);
		return L_12;
	}
}
// System.String Meta.WitAi.Data.WitStringValue::GetStringValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346 (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0;
		L_0 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(__this, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Data.WitStringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitStringValue__ctor_m330B81FC5269BD22D38AD8B8859651A7973A46AC (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, const RuntimeMethod* method) 
{
	{
		WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF(__this, NULL);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) 
{
	{
		// if (null == reference)
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0 = __this->___reference_5;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// reference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_1 = __this->___path_4;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_2;
		L_2 = WitResultUtilities_GetWitResponseReference_m824208DEEFF3A147FFD0AB46CF3F8ABD31AD4799(L_1, NULL);
		__this->___reference_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reference_5), (void*)L_2);
	}

IL_0019:
	{
		// return reference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3 = __this->___reference_5;
		return L_3;
	}
}
// System.String Meta.WitAi.Data.WitValue::ToString(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitValue_ToString_mE3D4BFC7B64196907B23F57D1E88ADDE365BF933 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0;
		L_0 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(__this, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Meta.WitAi.Data.Intents.WitIntentData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentData__ctor_mF0243D5D49565F21DF1D083D4FECFFA5E51F6E61 (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, const RuntimeMethod* method) 
{
	{
		// public WitIntentData() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public WitIntentData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Intents.WitIntentData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentData__ctor_m674B42115D8DDEDCCFEB02CC8A39D2331DB3DE03 (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	{
		// public WitIntentData(WitResponseNode node)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// FromIntentWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_1;
		L_1 = WitIntentData_FromIntentWitResponseNode_mB687AA0C44E85F971879661C1E1450DA70CB122D(__this, L_0, NULL);
		// }
		return;
	}
}
// Meta.WitAi.Data.Intents.WitIntentData Meta.WitAi.Data.Intents.WitIntentData::FromIntentWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* WitIntentData_FromIntentWitResponseNode_mB687AA0C44E85F971879661C1E1450DA70CB122D (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m1E0A6A00550E2AB8689A6D574580FADA47E9B869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_0 = NULL;
	{
		// WitIntentData result = this;
		V_0 = __this;
		// JsonConvert.DeserializeIntoObject(ref result, node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m1E0A6A00550E2AB8689A6D574580FADA47E9B869((&V_0), L_0, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)0, JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m1E0A6A00550E2AB8689A6D574580FADA47E9B869_RuntimeMethod_var);
		// return result;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_2 = V_0;
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityDataProvider::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* DynamicEntityDataProvider_GetDynamicEntities_mE5EE05A3882CF96D385EDC89E6584D4535ECC599 (DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* V_1 = NULL;
	int32_t V_2 = 0;
	WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* V_3 = NULL;
	{
		// WitDynamicEntities entities = new WitDynamicEntities();
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1(L_0, NULL);
		V_0 = L_0;
		// foreach (var entity in entitiesDefinition)
		WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* L_1 = __this->___entitiesDefinition_4;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0020;
	}

IL_0011:
	{
		// foreach (var entity in entitiesDefinition)
		WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// entities.Merge(entity);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_6 = V_0;
		WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* L_7 = V_3;
		NullCheck(L_6);
		WitDynamicEntities_Merge_m19DC180CB06F978BC5C8F876DD6737560EC76142(L_6, L_7, NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		// foreach (var entity in entitiesDefinition)
		int32_t L_9 = V_2;
		WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_11 = V_0;
		return L_11;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityDataProvider__ctor_mD48AC3F8B4A10A9C3D67B1D0BDE4B534DC786CCA (DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityProvider::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* DynamicEntityProvider_GetDynamicEntities_m83D2AF52EA89E6406CAC85DCB0356C0AD1E95BCF (DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3* __this, const RuntimeMethod* method) 
{
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_4;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityProvider__ctor_m5BBF87D176E912C879194207F8F68B8BE96972D4 (DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m6EEC8B4AEED277CC580566374A571A3793681B8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool HasDynamicEntityRegistry => Instance;
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_0;
		L_0 = DynamicEntityKeywordRegistry_get_Instance_mB8A11F5221C55891BD99546D19DFC4F64FF711FE(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		return L_1;
	}
}
// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* DynamicEntityKeywordRegistry_get_Instance_mB8A11F5221C55891BD99546D19DFC4F64FF711FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m86C7EFEC0D8323CBBFD02141033C4CB0337652D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instance)
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_0 = ((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// instance = FindObjectOfType<DynamicEntityKeywordRegistry>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_2;
		L_2 = Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m86C7EFEC0D8323CBBFD02141033C4CB0337652D2(Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m86C7EFEC0D8323CBBFD02141033C4CB0337652D2_RuntimeMethod_var);
		((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4), (void*)L_2);
	}

IL_0016:
	{
		// return instance;
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_3 = ((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4;
		return L_3;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_OnEnable_mED63D83A1C156D31A48562B63D3F6D444EB10173 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_OnDisable_mEAD665F70BC7BCA7E611CDEE5B84E8E7E23CA02F (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4 = (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4), (void*)(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28*)NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::RegisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_RegisterDynamicEntity_m63DBCF5420BF9B10FD9B0DC0981E8F69F6E5534F (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	{
		// entities.AddKeyword(entity, keyword);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_5;
		String_t* L_1 = ___entity0;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_2 = ___keyword1;
		NullCheck(L_0);
		WitDynamicEntities_AddKeyword_mCDF7E57A3B696A71CBE004DDB5E4784607A30601(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::UnregisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mE35F6AB0A5E6BEBCBEDC3CF2E0265DB3701A0255 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	{
		// entities.RemoveKeyword(entity, keyword);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_5;
		String_t* L_1 = ___entity0;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_2 = ___keyword1;
		NullCheck(L_0);
		WitDynamicEntities_RemoveKeyword_m3AFEBE51C4699E7CEEBD4CCCF4C7FDC3754AEC15(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* DynamicEntityKeywordRegistry_GetDynamicEntities_m2CFE783C9BFF6E281BF46ACFCE7DBB2315855901 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_5;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry__ctor_mCBEA6DE1668C0A14BB899C1DB49C086ED5FD52E5 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WitDynamicEntities entities = new WitDynamicEntities();
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1(L_0, NULL);
		__this->___entities_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword_OnEnable_m76DA0BF4478EE9035AB467CCEE63A7D31B0716D4 (RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DCA7A6024F48FADFB3A49018CB138C4995119A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE65ED37F28B0054DF33BDE6B0D1B05F0B7952AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* L_0 = (&__this->___keyword_5);
		String_t* L_1 = L_0->___keyword_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		return;
	}

IL_0013:
	{
		// if (string.IsNullOrEmpty(entity)) return;
		String_t* L_3 = __this->___entity_4;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// if (string.IsNullOrEmpty(entity)) return;
		return;
	}

IL_0021:
	{
		// if (DynamicEntityKeywordRegistry.HasDynamicEntityRegistry)
		bool L_5;
		L_5 = DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m6EEC8B4AEED277CC580566374A571A3793681B8B(NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// DynamicEntityKeywordRegistry.Instance.RegisterDynamicEntity(entity, keyword);
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_6;
		L_6 = DynamicEntityKeywordRegistry_get_Instance_mB8A11F5221C55891BD99546D19DFC4F64FF711FE(NULL);
		String_t* L_7 = __this->___entity_4;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8 = __this->___keyword_5;
		NullCheck(L_6);
		DynamicEntityKeywordRegistry_RegisterDynamicEntity_m63DBCF5420BF9B10FD9B0DC0981E8F69F6E5534F(L_6, L_7, L_8, NULL);
		return;
	}

IL_003f:
	{
		// VLog.W($"Cannot register {name}: No dynamic entity registry present in the scene." +
		//                  $"Please add one and try again.");
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE65ED37F28B0054DF33BDE6B0D1B05F0B7952AD0, L_9, _stringLiteral7DCA7A6024F48FADFB3A49018CB138C4995119A4, NULL);
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(L_10, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword_OnDisable_m5D93BDDE4713A818A581DD133DA1352FCF52A639 (RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4* __this, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* L_0 = (&__this->___keyword_5);
		String_t* L_1 = L_0->___keyword_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		return;
	}

IL_0013:
	{
		// if (string.IsNullOrEmpty(entity)) return;
		String_t* L_3 = __this->___entity_4;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// if (string.IsNullOrEmpty(entity)) return;
		return;
	}

IL_0021:
	{
		// if (DynamicEntityKeywordRegistry.HasDynamicEntityRegistry)
		bool L_5;
		L_5 = DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m6EEC8B4AEED277CC580566374A571A3793681B8B(NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// DynamicEntityKeywordRegistry.Instance.UnregisterDynamicEntity(entity, keyword);
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_6;
		L_6 = DynamicEntityKeywordRegistry_get_Instance_mB8A11F5221C55891BD99546D19DFC4F64FF711FE(NULL);
		String_t* L_7 = __this->___entity_4;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8 = __this->___keyword_5;
		NullCheck(L_6);
		DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mE35F6AB0A5E6BEBCBEDC3CF2E0265DB3701A0255(L_6, L_7, L_8, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword__ctor_m6062F128C531D2C2D12D3357ECD4EF1A1AC29999 (RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_0, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_mDB510CF26362A6E6C68D96960499BC3CD3AF5153 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_0, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities(IEnumerable<WitDynamicEntity> entity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// entities.AddRange(entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___entity0;
		NullCheck(L_1);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_1, L_2, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(Meta.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m7EFFDBF350D1BB930547DD8073093A2DF42D6AC7 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_0, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities(params WitDynamicEntity[] entity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// entities.AddRange(entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* L_2 = ___entity0;
		NullCheck(L_1);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_1, (RuntimeObject*)L_2, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		// }
		return;
	}
}
// Meta.WitAi.Json.WitResponseClass Meta.WitAi.Data.Entities.WitDynamicEntities::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* WitDynamicEntities_get_AsJson_mBA5640F8C7834C711FCDA6AF2675DC56EE31B48B (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* V_0 = NULL;
	Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* V_2 = NULL;
	{
		// WitResponseClass json = new WitResponseClass();
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_0 = (WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25*)il2cpp_codegen_object_new(WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47(L_0, NULL);
		V_0 = L_0;
		// foreach (var entity in entities)
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		NullCheck(L_1);
		Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 L_2;
		L_2 = List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2(L_1, List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3((&V_1), Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_0014_1:
			{
				// foreach (var entity in entities)
				WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_3;
				L_3 = Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_inline((&V_1), Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_RuntimeMethod_var);
				V_2 = L_3;
				// json.Add(entity.entity, entity.AsJson);
				WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_4 = V_0;
				WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = L_5->___entity_0;
				WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_7 = V_2;
				NullCheck(L_7);
				WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_8;
				L_8 = WitDynamicEntity_get_AsJson_mA7E4CB0E4036B333116C1897C8565D1FCFB2262C(L_7, NULL);
				NullCheck(L_4);
				VirtualActionInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.Void Meta.WitAi.Json.WitResponseNode::Add(System.String,Meta.WitAi.Json.WitResponseNode) */, L_4, L_6, L_8);
			}

IL_002e_1:
			{
				// foreach (var entity in entities)
				bool L_9;
				L_9 = Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A((&V_1), Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// return json;
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_10 = V_0;
		return L_10;
	}
}
// System.String Meta.WitAi.Data.Entities.WitDynamicEntities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitDynamicEntities_ToString_m2C5050CFB0D365838A0E17C8C913F9FF76E61DCB (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	{
		// return AsJson.ToString();
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_0;
		L_0 = WitDynamicEntities_get_AsJson_mBA5640F8C7834C711FCDA6AF2675DC56EE31B48B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_GetEnumerator_m2798D5D10E2C24F46BED3D60814622BE9BBB2338 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<WitDynamicEntity> GetEnumerator() => entities.GetEnumerator();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = __this->___entities_0;
		NullCheck(L_0);
		Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 L_1;
		L_1 = List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2(L_0, List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Meta.WitAi.Data.Entities.WitDynamicEntities::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_System_Collections_IEnumerable_GetEnumerator_m422A7EE85A3B3CE496403875B7DBBE8F5ADE2BD2 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = WitDynamicEntities_GetEnumerator_m2798D5D10E2C24F46BED3D60814622BE9BBB2338(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntities::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitDynamicEntities_GetDynamicEntities_mD56F7BA966CB00B78B97008A71ED57EA93CDEA8D (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	{
		// return this;
		return __this;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Merge(Meta.WitAi.Interfaces.IDynamicEntitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m19DC180CB06F978BC5C8F876DD6737560EC76142 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == provider) return;
		RuntimeObject* L_0 = ___provider0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (null == provider) return;
		return;
	}

IL_0004:
	{
		// entities.AddRange(provider.GetDynamicEntities());
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___provider0;
		NullCheck(L_2);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_3;
		L_3 = InterfaceFuncInvoker0< WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* >::Invoke(0 /* Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Interfaces.IDynamicEntitiesProvider::GetDynamicEntities() */, IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_1, L_3, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Merge(System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_mBE6394E6A847703A623D9218D753815105F77C7A (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___mergeEntities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == mergeEntities) return;
		RuntimeObject* L_0 = ___mergeEntities0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (null == mergeEntities) return;
		return;
	}

IL_0004:
	{
		// entities.AddRange(mergeEntities);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___mergeEntities0;
		NullCheck(L_1);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_1, L_2, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Add(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Add_mA982C93622B421F48CA0D74D96C78019FD872692 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___dynamicEntity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_0 = (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m8625D0F6873C66DEE7735131A8B75C1367016622(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_1 = V_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_2 = ___dynamicEntity0;
		NullCheck(L_1);
		L_1->___dynamicEntity_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___dynamicEntity_0), (void*)L_2);
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_4 = V_0;
		Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* L_5 = (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*)il2cpp_codegen_object_new(Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A(L_3, L_5, List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		// if(index < 0) entities.Add(dynamicEntity);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		// if(index < 0) entities.Add(dynamicEntity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_7 = __this->___entities_0;
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_8 = V_0;
		NullCheck(L_8);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_9 = L_8->___dynamicEntity_0;
		NullCheck(L_7);
		List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline(L_7, L_9, List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		return;
	}

IL_0039:
	{
		// else VLog.W($"Cannot add entity, registry already has an entry for {dynamicEntity.entity}");
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_10 = V_0;
		NullCheck(L_10);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_11 = L_10->___dynamicEntity_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___entity_0;
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2, L_12, NULL);
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(L_13, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Remove(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Remove_m3434D4F1593AB52345E99DA9DA9A1B0117F1486E (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___dynamicEntity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entities.Remove(dynamicEntity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = __this->___entities_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_1 = ___dynamicEntity0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B(L_0, L_1, List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::AddKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_AddKeyword_mCDF7E57A3B696A71CBE004DDB5E4784607A30601 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* V_0 = NULL;
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_0 = (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m654A4DE466127276F04E0102A64462482FB3F906(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_1 = V_0;
		String_t* L_2 = ___entityName0;
		NullCheck(L_1);
		L_1->___entityName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entityName_0), (void*)L_2);
		// var entity = entities.Find(e => entityName == e.entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_4 = V_0;
		Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* L_5 = (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*)il2cpp_codegen_object_new(Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_6;
		L_6 = List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9(L_3, L_5, List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9_RuntimeMethod_var);
		V_1 = L_6;
		// if (null == entity)
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_7 = V_1;
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		// entity = new WitDynamicEntity(entityName);
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___entityName_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline(Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_11 = (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)il2cpp_codegen_object_new(WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58(L_11, L_9, L_10, NULL);
		V_1 = L_11;
		// entities.Add(entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_12 = __this->___entities_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_13 = V_1;
		NullCheck(L_12);
		List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline(L_12, L_13, List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
	}

IL_0045:
	{
		// entity.keywords.Add(keyword);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_14 = V_1;
		NullCheck(L_14);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_15 = L_14->___keywords_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_16 = ___keyword1;
		NullCheck(L_15);
		List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_15, L_16, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::RemoveKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_RemoveKeyword_m3AFEBE51C4699E7CEEBD4CCCF4C7FDC3754AEC15 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* L_0 = (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_mCCCA1A6056023A410E46737A7DF6D7EA0957D6E0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* L_1 = V_0;
		String_t* L_2 = ___entityName0;
		NullCheck(L_1);
		L_1->___entityName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entityName_0), (void*)L_2);
		// int index = entities.FindIndex(e => e.entity == entityName);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* L_4 = V_0;
		Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* L_5 = (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*)il2cpp_codegen_object_new(Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A(L_3, L_5, List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		V_1 = L_6;
		// if (index >= 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		// entities[index].keywords.Remove(keyword);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_8 = __this->___entities_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_10;
		L_10 = List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56(L_8, L_9, List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_11 = L_10->___keywords_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_12 = ___keyword1;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89(L_11, L_12, List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_RuntimeMethod_var);
		// if(entities[index].keywords.Count == 0) entities.RemoveAt(index);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_14 = __this->___entities_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_16;
		L_16 = List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56(L_14, L_15, List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var);
		NullCheck(L_16);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_17 = L_16->___keywords_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_inline(L_17, List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		// if(entities[index].keywords.Count == 0) entities.RemoveAt(index);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_19 = __this->___entities_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164(L_19, L_20, List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164_RuntimeMethod_var);
	}

IL_0065:
	{
		// }
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m8625D0F6873C66DEE7735131A8B75C1367016622 (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::<Add>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514 (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___e0, const RuntimeMethod* method) 
{
	{
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___entity_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_2 = __this->___dynamicEntity_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___entity_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m654A4DE466127276F04E0102A64462482FB3F906 (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::<AddKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___e0, const RuntimeMethod* method) 
{
	{
		// var entity = entities.Find(e => entityName == e.entity);
		String_t* L_0 = __this->___entityName_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___entity_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_2, NULL);
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mCCCA1A6056023A410E46737A7DF6D7EA0957D6E0 (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::<RemoveKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___e0, const RuntimeMethod* method) 
{
	{
		// int index = entities.FindIndex(e => e.entity == entityName);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___entity_0;
		String_t* L_2 = __this->___entityName_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntitiesData::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitDynamicEntitiesData_GetDynamicEntities_m0A320C1B3BE69926729D203A0EE6FB9E84CF9EC8 (WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* __this, const RuntimeMethod* method) 
{
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_4;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntitiesData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntitiesData__ctor_m1A0932A0FA489DCE01CB2E39C360C053E311F398 (WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m0FD5BF7530DF8CE33CCD5C7B84AEDD3356EFA2E6 (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m583895EB52E6165E929FC5E81264314754F26D7C (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, WitEntityKeywordInfo keyword)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// this.keywords.Add(keyword);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_2 = __this->___keywords_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_3 = ___keyword1;
		NullCheck(L_2);
		List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_2, L_3, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58 (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, params string[] keywords)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// foreach (var keyword in keywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___keywords1;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0058;
	}

IL_001e:
	{
		// foreach (var keyword in keywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// this.keywords.Add(new WitEntityKeywordInfo()
		// {
		//     keyword = keyword,
		//     synonyms = new List<string>(new string[] { keyword })
		// });
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_7 = __this->___keywords_1;
		il2cpp_codegen_initobj((&V_3), sizeof(WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B));
		String_t* L_8 = V_2;
		(&V_3)->___keyword_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___keyword_0), (void*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_12, (RuntimeObject*)L_10, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		(&V_3)->___synonyms_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___synonyms_1), (void*)L_12);
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_13 = V_3;
		NullCheck(L_7);
		List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_7, L_13, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0058:
	{
		// foreach (var keyword in keywords)
		int32_t L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m192A8305D35A6C2DF9C1398D09D6FCE117976A5A (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___keywordsToSynonyms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, Dictionary<string, List<string>> keywordsToSynonyms)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// foreach (var synonym in keywordsToSynonyms)
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = ___keywordsToSynonyms1;
		NullCheck(L_2);
		Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 L_3;
		L_3 = Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE(L_2, Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44((&V_0), Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0059_1;
			}

IL_0021_1:
			{
				// foreach (var synonym in keywordsToSynonyms)
				KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 L_4;
				L_4 = Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_inline((&V_0), Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var);
				V_1 = L_4;
				// keywords.Add(new WitEntityKeywordInfo()
				// {
				//     keyword = synonym.Key,
				//     synonyms = synonym.Value
				// });
				List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_5 = __this->___keywords_1;
				il2cpp_codegen_initobj((&V_2), sizeof(WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B));
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_inline((&V_1), KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var);
				(&V_2)->___keyword_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___keyword_0), (void*)L_6);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
				L_7 = KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_inline((&V_1), KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var);
				(&V_2)->___synonyms_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___synonyms_1), (void*)L_7);
				WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8 = V_2;
				NullCheck(L_5);
				List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_5, L_8, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
			}

IL_0059_1:
			{
				// foreach (var synonym in keywordsToSynonyms)
				bool L_9;
				L_9 = Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656((&V_0), Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitDynamicEntity::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* WitDynamicEntity_get_AsJson_mA7E4CB0E4036B333116C1897C8565D1FCFB2262C (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_m21E86F2EB8C93DABE3552DACFD523A0FF9FA3201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonConvert.SerializeToken(keywords).AsArray;
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = __this->___keywords_1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_m21E86F2EB8C93DABE3552DACFD523A0FF9FA3201(L_0, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)0, JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_m21E86F2EB8C93DABE3552DACFD523A0FF9FA3201_RuntimeMethod_var);
		NullCheck(L_1);
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_2;
		L_2 = VirtualFuncInvoker0< WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* >::Invoke(26 /* Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseNode::get_AsArray() */, L_1);
		return L_2;
	}
}
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitDynamicEntity_GetDynamicEntities_mC5C56494E038AF78DE89514A5103A5D07B6D1E6E (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WitDynamicEntities()
		// {
		//     entities = new List<WitDynamicEntity>
		//     {
		//         this
		//     }
		// };
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1(L_0, NULL);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_1 = L_0;
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_2 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_2, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline(L_3, __this, List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___entities_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entities_0), (void*)L_3);
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
// System.Void Meta.WitAi.Data.Entities.WitEntityData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityData__ctor_m58DBC0B0D1F0F7317866CF547004DF2E0BBA5BBA (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityData() {}
		WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831(__this, WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		// public WitEntityData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitEntityData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityData__ctor_m8B64CFF96F87A0D9D658DC556D85D45487C412C0 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831(__this, WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Implicit_m0D1F6CFADA92A1646F6E8AB2212ECFFFCAF98A52 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator bool(WitEntityData data) => null != data && !string.IsNullOrEmpty(data.value);
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		bool L_1;
		L_1 = WitEntityData_op_Inequality_m937C1B2C6FCD8D9E59FFF0C52844049B50775D50((WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_2 = ___data0;
		NullCheck(L_2);
		String_t* L_3 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_2)->___value_8;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.String Meta.WitAi.Data.Entities.WitEntityData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityData_op_Implicit_m4B700FC6C36DEAD7994AC25CF4D17257CD663149 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator string(WitEntityData data) => data.value;
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_0)->___value_8;
		return L_1;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Equality(Meta.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Equality_m35416784BD7329C4F30BF1AE8D35C4DE6FA230BF (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// public static bool operator ==(WitEntityData data, object value) => Equals(data?.value, value);
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_1)->___value_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___value1;
		bool L_4;
		L_4 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(G_B3_0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Inequality_m937C1B2C6FCD8D9E59FFF0C52844049B50775D50 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// public static bool operator !=(WitEntityData data, object value) => !Equals(data?.value, value);
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_1)->___value_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___value1;
		bool L_4;
		L_4 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(G_B3_0, L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_Equals_m7166F48BDCA468DB6DE9231CE70FF73C6D0F8220 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (obj is string s) return s == value;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (obj is string s) return s == value;
		String_t* L_2 = V_0;
		String_t* L_3 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)__this)->___value_8;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return base.Equals(obj);
		RuntimeObject* L_5 = ___obj0;
		bool L_6;
		L_6 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_5, NULL);
		return L_6;
	}
}
// System.Int32 Meta.WitAi.Data.Entities.WitEntityData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityData_GetHashCode_m5281E85F460F5B200F3C8D831D1ABB37D7A0FAB8 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
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
// System.Void Meta.WitAi.Data.Entities.WitEntityFloatData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityFloatData__ctor_m53756D5DEC028BB909A00DEBA4730AE9B60146A0 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityFloatData() {}
		WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F(__this, WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		// public WitEntityFloatData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitEntityFloatData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityFloatData__ctor_m00100779B3A814A136389B06171048AE41A4A7D9 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityFloatData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F(__this, WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Implicit_m46A6673147DEBFC93ABE55FBAD1C8D177C1926AC (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, const RuntimeMethod* method) 
{
	{
		// null != data && data.hasData;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data0;
		NullCheck(L_1);
		bool L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___hasData_10;
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_Approximately_m7DDD2B08CD75EFA83FD4C834E7E65C2526A799A9 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, float ___v0, float ___tolerance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Approximately(float v, float tolerance = .001f) => Math.Abs(v - value) < tolerance;
		float L_0 = ___v0;
		float L_1 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)__this)->___value_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___tolerance1;
		return (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mF31CBBF2D51E39ACA4EF7EDF5229BCC9DCE39599 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, float ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(WitEntityFloatData data, float value) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data0;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		float L_3 = ___value1;
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m3960C9024BFE0A6EC9AC1B2005433695D66492AE (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, float ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityFloatData data, float value) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		float L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mF31CBBF2D51E39ACA4EF7EDF5229BCC9DCE39599(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m98096B41FAF57FB4D8CD4ED4CC72AD2EC16917E4 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(WitEntityFloatData data, int value) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data0;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		int32_t L_3 = ___value1;
		return (bool)((((float)L_2) == ((float)((float)L_3)))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_mCF9E71DD74048A12CC992D8DC3E8118F75334347 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityFloatData data, int value) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_m98096B41FAF57FB4D8CD4ED4CC72AD2EC16917E4(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(System.Single,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m138B2628F9264AB2EFA30D030AA347628768501A (float ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(float value, WitEntityFloatData data) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data1;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		float L_3 = ___value0;
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(System.Single,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m6E0EC532BCA77167384F8EEC775D0F17E165284B (float ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(float value, WitEntityFloatData data) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		float L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mF31CBBF2D51E39ACA4EF7EDF5229BCC9DCE39599(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(System.Int32,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mB67283DD525DDE1DB36E18098BF0F2B370843A2A (int32_t ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(int value, WitEntityFloatData data) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data1;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		int32_t L_3 = ___value0;
		return (bool)((((float)L_2) == ((float)((float)L_3)))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(System.Int32,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m5EEC9A30F453097F2353E61258850007D72CBBBB (int32_t ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(int value, WitEntityFloatData data) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		int32_t L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_m98096B41FAF57FB4D8CD4ED4CC72AD2EC16917E4(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_Equals_m902C004A5959B44F61F28A01F587D76DAD99E98D (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (obj is float f) return f == value;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_1, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		// if (obj is float f) return f == value;
		float L_2 = V_0;
		float L_3 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)__this)->___value_8;
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}

IL_0019:
	{
		// return base.Equals(obj);
		RuntimeObject* L_4 = ___obj0;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Meta.WitAi.Data.Entities.WitEntityFloatData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityFloatData_GetHashCode_m33671ACF7634FE16AEBB1D3E000D8ACFBF41F040 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
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
// System.Void Meta.WitAi.Data.Entities.WitEntityIntData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityIntData__ctor_m5CC79C1DBC589C765FCEDB7C7954A23A50CA7AD6 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityIntData() {}
		WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D(__this, WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		// public WitEntityIntData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitEntityIntData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityIntData__ctor_mE13B7B014816D3A18F3A025D994949EF43D4F3D8 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityIntData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D(__this, WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Implicit_m2119C23DE9564D10BF94C651119B75E64A3A8992 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, const RuntimeMethod* method) 
{
	{
		// null != data && data.hasData;
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_1 = ___data0;
		NullCheck(L_1);
		bool L_2 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)L_1)->___hasData_10;
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Equality(Meta.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_m2FECE305AF67D1AC2519F9EAF74E55472C5B22F4 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(WitEntityIntData data, int value) => data?.value == value;
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_1 = ___data0;
		NullCheck(L_1);
		int32_t L_2 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)L_1)->___value_8;
		int32_t L_3 = ___value1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Inequality_mAF96D49C83DFB770DEAB6A29CEA06A158FC8DE53 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityIntData data, int value) => !(data == value);
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityIntData_op_Equality_m2FECE305AF67D1AC2519F9EAF74E55472C5B22F4(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Equality(System.Int32,Meta.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_mF0CC4D7300E5E80321A3FF33358DFA3EF6A25BBE (int32_t ___value0, WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(int value, WitEntityIntData data) => data?.value == value;
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_1 = ___data1;
		NullCheck(L_1);
		int32_t L_2 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)L_1)->___value_8;
		int32_t L_3 = ___value0;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Inequality(System.Int32,Meta.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Inequality_m74208866E6CB31663ADD86BF399E48ECBD95145A (int32_t ___value0, WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(int value, WitEntityIntData data) => !(data == value);
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data1;
		int32_t L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityIntData_op_Equality_m2FECE305AF67D1AC2519F9EAF74E55472C5B22F4(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_Equals_m13EE815AB437EEDD9640744A6F4B2E99877507E0 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (obj is int i) return i == value;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// if (obj is int i) return i == value;
		int32_t L_2 = V_0;
		int32_t L_3 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)__this)->___value_8;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_0019:
	{
		// return base.Equals(obj);
		RuntimeObject* L_4 = ___obj0;
		bool L_5;
		L_5 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Meta.WitAi.Data.Entities.WitEntityIntData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityIntData_GetHashCode_m211CC04167F2DC2321B64F07975EECBB8DDA2B40 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitSimpleDynamicEntity_GetDynamicEntities_mA07B170F7F57E513F38146962F09F746342A7D88 (WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* V_0 = NULL;
	{
		// var entity = new WitDynamicEntity(entityName, keywords);
		String_t* L_0 = __this->___entityName_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___keywords_5;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_2 = (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)il2cpp_codegen_object_new(WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// var entities = new WitDynamicEntities(entity);
		WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* L_3 = (WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F*)(WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F*)SZArrayNew(WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F_il2cpp_TypeInfo_var, (uint32_t)1);
		WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* L_4 = L_3;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)L_5);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_6 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WitDynamicEntities__ctor_m7EFFDBF350D1BB930547DD8073093A2DF42D6AC7(L_6, L_4, NULL);
		// return entities;
		return L_6;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitSimpleDynamicEntity__ctor_m2E77AC09DAB63D5291E39CDCA2BE243B3738C39F (WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::get_ManifestLocalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_get_ManifestLocalPath_m82FD26F09A51C2FF2FA8FD09BC8F61BE6588B799 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// return _manifestLocalPath;
		String_t* L_0 = __this->____manifestLocalPath_11;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.Configuration.WitConfiguration::ResetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration_ResetData_m18857D2ADA8777E1A18459BE1DCDEDC76F011A71 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _configurationId = null;
		__this->____configurationId_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configurationId_6), (void*)(String_t*)NULL);
		// _appInfo = new WitAppInfo();
		WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8* L_0 = (&__this->____appInfo_5);
		il2cpp_codegen_initobj(L_0, sizeof(WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8));
		// endpointConfiguration = new WitEndpointConfig();
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_1 = (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D*)il2cpp_codegen_object_new(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12(L_1, NULL);
		__this->___endpointConfiguration_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endpointConfiguration_8), (void*)L_1);
		// }
		return;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetLoggerAppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetLoggerAppId_m320C33D2DC3EF5956C053F588C67CF7154F04728 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D70245F3500CCD8237A0140F73164F286401D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string applicationId = GetApplicationId();
		String_t* L_0;
		L_0 = WitConfiguration_GetApplicationId_m9A06C8C514C88B5B1B783611EA60F6A7D8B80A65(__this, NULL);
		V_0 = L_0;
		// if (String.IsNullOrEmpty(applicationId))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// string clientAccessToken = GetClientAccessToken();
		String_t* L_3;
		L_3 = WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline(__this, NULL);
		// if (!string.IsNullOrEmpty(clientAccessToken))
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return INVALID_APP_ID_WITH_CLIENT_TOKEN;
		return _stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53;
	}

IL_0022:
	{
		// return INVALID_APP_ID_NO_CLIENT_TOKEN;
		return _stringLiteral09D70245F3500CCD8237A0140F73164F286401D5;
	}

IL_0028:
	{
		// return applicationId;
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetConfigurationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetConfigurationId_m59AD9B7FF6CA98BA466861967C7820DAD50EE6E2 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// return _configurationId;
		String_t* L_0 = __this->____configurationId_6;
		return L_0;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetApplicationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetApplicationId_m9A06C8C514C88B5B1B783611EA60F6A7D8B80A65 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public string GetApplicationId() => _appInfo.id;
		WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8* L_0 = (&__this->____appInfo_5);
		String_t* L_1 = L_0->___id_1;
		return L_1;
	}
}
// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::GetApplicationInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 WitConfiguration_GetApplicationInfo_m0F8F809EBD0CE210AE0F1959AC0B1476EE6F9ED4 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public WitAppInfo GetApplicationInfo() => _appInfo;
		WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 L_0 = __this->____appInfo_5;
		return L_0;
	}
}
// Meta.WitAi.IWitRequestEndpointInfo Meta.WitAi.Data.Configuration.WitConfiguration::GetEndpointInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitConfiguration_GetEndpointInfo_mF60F512344B2E6E9C4F952AC961A5CBCC4156213 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public IWitRequestEndpointInfo GetEndpointInfo() => endpointConfiguration;
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_0 = __this->___endpointConfiguration_8;
		return L_0;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// return _clientAccessToken;
		String_t* L_0 = __this->____clientAccessToken_4;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.Configuration.WitConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration__ctor_mDE814CE102C9F736C0DCFACB0C6C412586FFB1AC (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11AD741CBC6F6810EF049BB36B42BB4C32C2CB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D19773218A7935AA0D38A8938C871D229F73665);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public int timeoutMS = 10000;
		__this->___timeoutMS_7 = ((int32_t)10000);
		// [SerializeField] public WitEndpointConfig endpointConfiguration = new WitEndpointConfig();
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_0 = (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D*)il2cpp_codegen_object_new(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12(L_0, NULL);
		__this->___endpointConfiguration_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endpointConfiguration_8), (void*)L_0);
		// [SerializeField] public bool useConduit = true;
		__this->___useConduit_10 = (bool)1;
		// [SerializeField] public List<string> excludedAssemblies = new List<string>
		// {
		//     "Oculus.Voice.Demo, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null",
		//     "Meta.WitAi.Samples, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null"
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteral11AD741CBC6F6810EF049BB36B42BB4C32C2CB40, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral4D19773218A7935AA0D38A8938C871D229F73665, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___excludedAssemblies_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___excludedAssemblies_12), (void*)L_3);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Meta.WitAi.CallbackHandlers.ConfidenceRange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfidenceRange__ctor_mB266B7DEE86144481F95FDA0413052F3CB4969E7 (ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent onWithinConfidenceRange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onWithinConfidenceRange_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onWithinConfidenceRange_2), (void*)L_0);
		// public UnityEvent onOutsideConfidenceRange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onOutsideConfidenceRange_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutsideConfidenceRange_3), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutOfScopeUtteranceHandler_OnValidateResponse_m7E10CD1EC2E4E3D7B53A0B38FD8D7B0BC244A445 (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AB086973FB6A2E7A02B81F80EC5E8066A9F65D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7767C46BE8F952DEC905B39693FC67366C25C4A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (response == null)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseNode_op_Equality_m5973BD0E47BBAEE1966B4A6CA314A87E45556B1C(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return "Response is null";
		return _stringLiteral1AB086973FB6A2E7A02B81F80EC5E8066A9F65D8;
	}

IL_000f:
	{
		// if (response["intents"].Count > 0)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		NullCheck(L_2);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3;
		L_3 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_2, _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// return "Intents found";
		return _stringLiteral7767C46BE8F952DEC905B39693FC67366C25C4A1;
	}

IL_0028:
	{
		// return string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_5;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler_OnResponseInvalid_m252717596FB935DA9DA424EDB2015C5B342AF85E (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error) {}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler_OnResponseSuccess_m200A4A0A33EF7C2BA65BF3C0ED54B1496824EE60 (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B2_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B1_0 = NULL;
	{
		// onOutOfDomain?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = __this->___onOutOfDomain_7;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		String_t* L_3;
		L_3 = WitResultUtilities_GetTranscription_m2522C60134FF9DD4940F96C811AF0B8737AF0DD3(L_2, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_3, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler__ctor_m02838A509E141EA1C59BF9A97D039A50525D7865 (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private StringEvent onOutOfDomain = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_0, NULL);
		__this->___onOutOfDomain_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutOfDomain_7), (void*)L_0);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
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
// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.SimpleIntentHandler::get_OnIntentTriggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SimpleIntentHandler_get_OnIntentTriggered_m54396EB3E29DFFA585CC4F097ED6BF82EB89EE84 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnIntentTriggered => onIntentTriggered;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onIntentTriggered_9;
		return L_0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_OnResponseSuccess_m5DE8C9A8E94A44DFAB1D47238D41859BAD04E05B (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	{
		// onIntentTriggered.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onIntentTriggered_9;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// UpdateRanges(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_OnResponseInvalid_m99EC71E38EE84E806346717DD140D60E061EECB3 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// UpdateRanges(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::UpdateRanges(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_0 = NULL;
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_1 = NULL;
	int32_t V_2 = 0;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_3 = NULL;
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* G_B3_0 = NULL;
	{
		// var intents = response?.GetIntents();
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_2;
		L_2 = WitResultUtilities_GetIntents_m1B0756A21CE224E3BD1E2A8E8FA108D02270FF09(L_1, NULL);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		// if (intents == null)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_3 = V_0;
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_4 = V_0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_004c;
	}

IL_0017:
	{
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (string.Equals(intent, intentData.name, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_9 = ((WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D*)__this)->___intent_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11 = L_10->___name_2;
		bool L_12;
		L_12 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_9, L_11, 1, NULL);
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		// RefreshConfidenceRange(intentData.confidence, confidenceRanges, allowConfidenceOverlap);
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_13 = V_3;
		NullCheck(L_13);
		float L_14 = L_13->___confidence_3;
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_15 = __this->___confidenceRanges_11;
		bool L_16 = __this->___allowConfidenceOverlap_10;
		bool L_17;
		L_17 = WitResponseHandler_RefreshConfidenceRange_m64CCDF7F32ECA32BE9DB37B83C2CCA9BC32D9E7D(L_14, L_15, L_16, NULL);
		// return;
		return;
	}

IL_0048:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004c:
	{
		// foreach (var intentData in intents)
		int32_t L_19 = V_2;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// RefreshConfidenceRange(0, confidenceRanges, allowConfidenceOverlap);
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_21 = __this->___confidenceRanges_11;
		bool L_22 = __this->___allowConfidenceOverlap_10;
		bool L_23;
		L_23 = WitResponseHandler_RefreshConfidenceRange_m64CCDF7F32ECA32BE9DB37B83C2CCA9BC32D9E7D((0.0f), L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler__ctor_mF6D654FDE93151A7ECFBF5E3F5C24D07FE6E31A2 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private UnityEvent onIntentTriggered = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onIntentTriggered_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onIntentTriggered_9), (void*)L_0);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
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
// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::get_OnIntentEntityTriggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* SimpleStringEntityHandler_get_OnIntentEntityTriggered_m9FB7E92BA03C15F3023676F5D52C82799EE674AB (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, const RuntimeMethod* method) 
{
	{
		// public StringEntityMatchEvent OnIntentEntityTriggered => onIntentEntityTriggered;
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_0 = __this->___onIntentEntityTriggered_11;
		return L_0;
	}
}
// System.String Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleStringEntityHandler_OnValidateResponse_m60DF5E2AB6B67BBB39856C12D89D30E121CD7B7C (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493F2C980EC99D04772AED0654F76A3ED491B938);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = base.OnValidateResponse(response, isEarlyResponse);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1 = ___isEarlyResponse1;
		String_t* L_2;
		L_2 = WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(result))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		String_t* L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		// var entityValue = response.GetFirstEntityValue(entity);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_6 = ___response0;
		String_t* L_7 = __this->___entity_9;
		String_t* L_8;
		L_8 = WitResultUtilities_GetFirstEntityValue_m0C75EC2F5BB63952FB06B7537D7F3F439D0B459C(L_6, L_7, NULL);
		// if (string.IsNullOrEmpty(entityValue))
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return $"Missing required entity: {entity}";
		String_t* L_10 = __this->___entity_9;
		String_t* L_11;
		L_11 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral493F2C980EC99D04772AED0654F76A3ED491B938, L_10, NULL);
		return L_11;
	}

IL_0037:
	{
		// return string.Empty;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_12;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler_OnResponseInvalid_m731996E1C29F19A0A93D82A598A80338A02C60B9 (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error) { }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler_OnResponseSuccess_m19602DEC9500413B33EC522150A63605EA7C09D2 (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var entityValue = response.GetFirstEntityValue(entity);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		String_t* L_1 = __this->___entity_9;
		String_t* L_2;
		L_2 = WitResultUtilities_GetFirstEntityValue_m0C75EC2F5BB63952FB06B7537D7F3F439D0B459C(L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(format))
		String_t* L_3 = __this->___format_10;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		// onIntentEntityTriggered.Invoke(format.Replace("{value}", entityValue));
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_5 = __this->___onIntentEntityTriggered_11;
		String_t* L_6 = __this->___format_10;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, L_7, NULL);
		NullCheck(L_5);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_5, L_8, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		return;
	}

IL_0037:
	{
		// onIntentEntityTriggered.Invoke(entityValue);
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_9 = __this->___onIntentEntityTriggered_11;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_9, L_10, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler__ctor_mD9819FBE0562322424303A800ECF3EBBA41DB7DC (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private StringEntityMatchEvent onIntentEntityTriggered
		//     = new StringEntityMatchEvent();
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_0 = (StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201*)il2cpp_codegen_object_new(StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEntityMatchEvent__ctor_mB87FF57138D7C56DE31EE2D5BAB057329B8C781B(L_0, NULL);
		__this->___onIntentEntityTriggered_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onIntentEntityTriggered_11), (void*)L_0);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
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
// System.Void Meta.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mB87FF57138D7C56DE31EE2D5BAB057329B8C781B (StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293FEA1788CBA62C70BB50A2D66B4CF52162FD84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EC4BDD76EA1B8DF254C40F3CA06D3C59FECB5E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DC73D47DBEF200FCB895315FB80FD4568558D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76B984902098D790B36C506477F43BF329D2E00E);
		s_Il2CppMethodInitialized = true;
	}
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_0 = NULL;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_1 = NULL;
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_2 = NULL;
	int32_t V_3 = 0;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_4 = NULL;
	{
		// if (response == null)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseNode_op_Equality_m5973BD0E47BBAEE1966B4A6CA314A87E45556B1C(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return "No response";
		return _stringLiteral2EC4BDD76EA1B8DF254C40F3CA06D3C59FECB5E1;
	}

IL_000f:
	{
		// WitIntentData[] intents = response.GetIntents();
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_3;
		L_3 = WitResultUtilities_GetIntents_m1B0756A21CE224E3BD1E2A8E8FA108D02270FF09(L_2, NULL);
		V_0 = L_3;
		// if (intents == null || intents.Length == 0)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_0023;
		}
	}

IL_001d:
	{
		// return "No intents found";
		return _stringLiteral293FEA1788CBA62C70BB50A2D66B4CF52162FD84;
	}

IL_0023:
	{
		// WitIntentData found = null;
		V_1 = (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515*)NULL;
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_004e;
	}

IL_002b:
	{
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// if (string.Equals(intent, intentData.name, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_11 = __this->___intent_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_12 = V_4;
		NullCheck(L_12);
		String_t* L_13 = L_12->___name_2;
		bool L_14;
		L_14 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_11, L_13, 1, NULL);
		if (!L_14)
		{
			goto IL_004a;
		}
	}
	{
		// found = intentData;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_15 = V_4;
		V_1 = L_15;
		// break;
		goto IL_0054;
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004e:
	{
		// foreach (var intentData in intents)
		int32_t L_17 = V_3;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_0054:
	{
		// if (found == null)
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_19 = V_1;
		if (L_19)
		{
			goto IL_006d;
		}
	}
	{
		// return $"Missing required intent '{intent}'";
		String_t* L_20 = __this->___intent_7;
		String_t* L_21;
		L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral50DC73D47DBEF200FCB895315FB80FD4568558D6, L_20, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		return L_21;
	}

IL_006d:
	{
		// if (found.confidence < confidenceThreshold)
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___confidence_3;
		float L_24 = __this->___confidenceThreshold_8;
		if ((!(((float)L_23) < ((float)L_24))))
		{
			goto IL_00a2;
		}
	}
	{
		// return $"Required intent '{intent}' confidence too low: {found.confidence:0.000}\nRequired: {confidenceThreshold:0.000}";
		String_t* L_25 = __this->___intent_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->___confidence_3;
		float L_28 = L_27;
		RuntimeObject* L_29 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_28);
		float L_30 = __this->___confidenceThreshold_8;
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral76B984902098D790B36C506477F43BF329D2E00E, L_25, L_29, L_32, NULL);
		return L_33;
	}

IL_00a2:
	{
		// return string.Empty;
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_34;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher_OnEnable_mDFB5071E0690A799B3BC07CF9BF43CD559FCD1CB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manifest.WitResponseMatcherIntents.Add(intent);
		il2cpp_codegen_runtime_class_init_inline(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8;
		String_t* L_1 = __this->___intent_7;
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_1, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// base.OnEnable();
		WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher_OnDisable_m047761450D71B676D48FA3C3A2734EFA68CF1D11 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manifest.WitResponseMatcherIntents.Remove(intent);
		il2cpp_codegen_runtime_class_init_inline(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8;
		String_t* L_1 = __this->___intent_7;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_0, L_1, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// base.OnDisable();
		WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0, 1f), SerializeField] public float confidenceThreshold = .6f;
		__this->___confidenceThreshold_8 = (0.600000024f);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_mEB8A2107D62FCF3E539D8C46674E3657EE53351D (WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F(__this, UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseErrorEvent__ctor_mC2D1603CF552BD5D67B1D38F1B798ABED8718CBD (WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA(__this, UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnValidate_m726AB689BA0091CCDDE1041DBDEC8DE9C346B4A8 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F_RuntimeMethod_var);
		__this->___Voice_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_4), (void*)L_2);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2;
		L_2 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mD4766D9FAAC30989A292F80A28EE558598D4456F_RuntimeMethod_var);
		__this->___Voice_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_4), (void*)L_2);
	}

IL_0018:
	{
		// if (!Voice)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_3 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0057;
		}
	}
	{
		// VLog.E($"VoiceService not found in scene.\nDisabling {GetType().Name} on {gameObject.name}");
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760, L_6, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_8, NULL);
		VLog_E_m063A8F2A17CA4676719A7D14D1AB8BD0663E9137(L_9, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0057:
	{
		// Voice.VoiceEvents.OnSend.AddListener(OnRequestSend);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_10 = __this->___Voice_4;
		NullCheck(L_10);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11;
		L_11 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_10);
		NullCheck(L_11);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_12;
		L_12 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_11, NULL);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_13 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_12);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_12, L_13, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// Voice.VoiceEvents.OnValidatePartialResponse.AddListener(HandleValidateEarlyResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_14 = __this->___Voice_4;
		NullCheck(L_14);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_15;
		L_15 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_14);
		NullCheck(L_15);
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_16;
		L_16 = VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline(L_15, NULL);
		UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* L_17 = (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*)il2cpp_codegen_object_new(UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22(L_17, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F(L_16, L_17, UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var);
		// Voice.VoiceEvents.OnResponse.AddListener(HandleFinalResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_18 = __this->___Voice_4;
		NullCheck(L_18);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_19;
		L_19 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_18);
		NullCheck(L_19);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_20;
		L_20 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(L_19, NULL);
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_21 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_21, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_20);
		UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55(L_20, L_21, UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Voice)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// Voice.VoiceEvents.OnSend.RemoveListener(OnRequestSend);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_2 = __this->___Voice_4;
		NullCheck(L_2);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_3;
		L_3 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_2);
		NullCheck(L_3);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_4;
		L_4 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_3, NULL);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_5 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_4, L_5, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// Voice.VoiceEvents.OnValidatePartialResponse.RemoveListener(HandleValidateEarlyResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_6 = __this->___Voice_4;
		NullCheck(L_6);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_7;
		L_7 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_6);
		NullCheck(L_7);
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_8;
		L_8 = VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline(L_7, NULL);
		UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* L_9 = (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*)il2cpp_codegen_object_new(UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_8);
		UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395(L_8, L_9, UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var);
		// Voice.VoiceEvents.OnResponse.RemoveListener(HandleFinalResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_10 = __this->___Voice_4;
		NullCheck(L_10);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_11;
		L_11 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(30 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_10);
		NullCheck(L_11);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_12;
		L_12 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(L_11, NULL);
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_13 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_12);
		UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54(L_12, L_13, UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnRequestSend(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnRequestSend_mF64C9124E1403D3B1DD07586112BD9D40E015D33 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	{
		// _validated = false;
		__this->____validated_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::HandleValidateEarlyResponse(Meta.WitAi.Data.VoiceSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleValidateEarlyResponse_m4EA66386A19F9C6F5FA6ED7E18A2129BDD6E55CA (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* ___session0, const RuntimeMethod* method) 
{
	{
		// if (ValidateEarly && !_validated)
		bool L_0 = __this->___ValidateEarly_5;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = __this->____validated_6;
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		// string invalidReason = OnValidateResponse(session.response, true);
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_2 = ___session0;
		NullCheck(L_2);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3 = L_2->___response_1;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, bool >::Invoke(9 /* System.String Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean) */, __this, L_3, (bool)1);
		// if (string.IsNullOrEmpty(invalidReason))
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// _validated = true;
		__this->____validated_6 = (bool)1;
		// OnResponseSuccess(session.response);
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_6 = ___session0;
		NullCheck(L_6);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = L_6->___response_1;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(11 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode) */, __this, L_7);
		// session.validResponse = true;
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_8 = ___session0;
		NullCheck(L_8);
		L_8->___validResponse_2 = (bool)1;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::HandleFinalResponse(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleFinalResponse_mA72C4C58DE375B3A6B091F98E0A4658F6F0B0E1D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// if (!_validated)
		bool L_0 = __this->____validated_6;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		// string invalidReason = OnValidateResponse(response, false);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, bool >::Invoke(9 /* System.String Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean) */, __this, L_1, (bool)0);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(invalidReason))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		// OnResponseInvalid(response, invalidReason);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_5 = ___response0;
		String_t* L_6 = V_0;
		VirtualActionInvoker2< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(10 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String) */, __this, L_5, L_6);
		goto IL_002a;
	}

IL_0023:
	{
		// OnResponseSuccess(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(11 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode) */, __this, L_7);
	}

IL_002a:
	{
		// _validated = true;
		__this->____validated_6 = (bool)1;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::RefreshConfidenceRange(System.Single,Meta.WitAi.CallbackHandlers.ConfidenceRange[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseHandler_RefreshConfidenceRange_m64CCDF7F32ECA32BE9DB37B83C2CCA9BC32D9E7D (float ___confidence0, ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges1, bool ___allowConfidenceOverlap2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* V_3 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B6_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B10_0 = NULL;
	{
		// bool foundIn = false;
		V_0 = (bool)0;
		// bool foundOut = false;
		V_1 = (bool)0;
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		V_2 = 0;
		goto IL_005a;
	}

IL_0008:
	{
		// var range = confidenceRanges[i];
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_0 = ___confidenceRanges1;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = L_3;
		// if (confidence >= range.minConfidence &&
		//     confidence <= range.maxConfidence)
		float L_4 = ___confidence0;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_5 = V_3;
		NullCheck(L_5);
		float L_6 = L_5->___minConfidence_0;
		if ((!(((float)L_4) >= ((float)L_6))))
		{
			goto IL_003b;
		}
	}
	{
		float L_7 = ___confidence0;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_8 = V_3;
		NullCheck(L_8);
		float L_9 = L_8->___maxConfidence_1;
		if ((!(((float)L_7) <= ((float)L_9))))
		{
			goto IL_003b;
		}
	}
	{
		// if (!allowConfidenceOverlap && foundIn)
		bool L_10 = ___allowConfidenceOverlap2;
		bool L_11 = V_0;
		if (((int32_t)(((((int32_t)L_10) == ((int32_t)0))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0056;
		}
	}
	{
		// range.onWithinConfidenceRange?.Invoke();
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_12 = V_3;
		NullCheck(L_12);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = L_12->___onWithinConfidenceRange_2;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_14 = L_13;
		G_B5_0 = L_14;
		if (L_14)
		{
			G_B6_0 = L_14;
			goto IL_0032;
		}
	}
	{
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B6_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B6_0, NULL);
	}

IL_0037:
	{
		// foundIn = true;
		V_0 = (bool)1;
		goto IL_0056;
	}

IL_003b:
	{
		// if (!allowConfidenceOverlap && foundOut)
		bool L_15 = ___allowConfidenceOverlap2;
		bool L_16 = V_1;
		if (((int32_t)(((((int32_t)L_15) == ((int32_t)0))? 1 : 0)&(int32_t)L_16)))
		{
			goto IL_0056;
		}
	}
	{
		// range.onOutsideConfidenceRange?.Invoke();
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_17 = V_3;
		NullCheck(L_17);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = L_17->___onOutsideConfidenceRange_3;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_19 = L_18;
		G_B10_0 = L_19;
		if (L_19)
		{
			G_B11_0 = L_19;
			goto IL_004f;
		}
	}
	{
		goto IL_0054;
	}

IL_004f:
	{
		NullCheck(G_B11_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B11_0, NULL);
	}

IL_0054:
	{
		// foundOut = true;
		V_1 = (bool)1;
	}

IL_0056:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005a:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_21 = ___confidenceRanges1;
		if (!L_21)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_22 = V_2;
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_23 = ___confidenceRanges1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0008;
		}
	}

IL_0063:
	{
		// return foundIn;
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseMatcher_OnValidateResponse_m370C2401BB4867D568DC09F2FD73C3AF676FBDBE (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = base.OnValidateResponse(response, isEarlyResponse);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1 = ___isEarlyResponse1;
		String_t* L_2;
		L_2 = WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(result))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		String_t* L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		// if (isEarlyResponse && !ValueMatches(response))
		bool L_6 = ___isEarlyResponse1;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		bool L_8;
		L_8 = WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA(__this, L_7, NULL);
		if (L_8)
		{
			goto IL_0025;
		}
	}
	{
		// return "No value matches";
		return _stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D;
	}

IL_0025:
	{
		// return string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_9;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnResponseInvalid_m6BBA9D0C9A3CEB80A84D86C8C7ECE14AB7D84599 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B4_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B3_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B8_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B7_0 = NULL;
	{
		// if (response.GetIntents().Length > 0 || response.EntityCount() > 0)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_1;
		L_1 = WitResultUtilities_GetIntents_m1B0756A21CE224E3BD1E2A8E8FA108D02270FF09(L_0, NULL);
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		int32_t L_3;
		L_3 = WitResultUtilities_EntityCount_mF21BA342617BCAA8A26175D18685EBAD9A905C91(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0012:
	{
		// onDidNotMatch?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_4 = __this->___onDidNotMatch_12;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_001e;
		}
	}
	{
		goto IL_0029;
	}

IL_001e:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_6 = ___response0;
		String_t* L_7;
		L_7 = WitResultUtilities_GetTranscription_m2522C60134FF9DD4940F96C811AF0B8737AF0DD3(L_6, NULL);
		NullCheck(G_B4_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B4_0, L_7, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0029:
	{
		// if (response.GetIntents().Length == 0)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_8 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_9;
		L_9 = WitResultUtilities_GetIntents_m1B0756A21CE224E3BD1E2A8E8FA108D02270FF09(L_8, NULL);
		NullCheck(L_9);
		if ((((RuntimeArray*)L_9)->max_length))
		{
			goto IL_0048;
		}
	}
	{
		// onOutOfDomain?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_10 = __this->___onOutOfDomain_13;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_11 = L_10;
		G_B7_0 = L_11;
		if (L_11)
		{
			G_B8_0 = L_11;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_12 = ___response0;
		String_t* L_13;
		L_13 = WitResultUtilities_GetTranscription_m2522C60134FF9DD4940F96C811AF0B8737AF0DD3(L_12, NULL);
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B8_0, L_13, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnResponseSuccess_m2DEB51AE589F7EB483BF2935963387580C247CCC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* V_6 = NULL;
	int32_t V_7 = 0;
	ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* V_8 = NULL;
	String_t* V_9 = NULL;
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* G_B13_0 = NULL;
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* G_B12_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B19_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B18_0 = NULL;
	float G_B25_0 = 0.0f;
	{
		// if (ValueMatches(response))
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_00f0;
		}
	}
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		V_1 = 0;
		goto IL_00e0;
	}

IL_0013:
	{
		// var formatEvent = formattedValueEvents[j];
		FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* L_2 = __this->___formattedValueEvents_10;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var result = formatEvent.format;
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7 = L_6->___format_0;
		V_3 = L_7;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_4 = 0;
		goto IL_00b3;
	}

IL_002b:
	{
		// var reference = valueMatchers[i].Reference;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_8 = __this->___valueMatchers_9;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_12;
		L_12 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_11, NULL);
		// var value = reference.GetStringValue(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_13 = ___response0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_12, L_13);
		V_5 = L_14;
		// if (!string.IsNullOrEmpty(formatEvent.format))
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_15 = V_2;
		NullCheck(L_15);
		String_t* L_16 = L_15->___format_0;
		bool L_17;
		L_17 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_16, NULL);
		if (L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// if (!string.IsNullOrEmpty(value))
		String_t* L_18 = V_5;
		bool L_19;
		L_19 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_18, NULL);
		if (L_19)
		{
			goto IL_0087;
		}
	}
	{
		// result = valueRegex.Replace(result, value, 1);
		il2cpp_codegen_runtime_class_init_inline(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_20 = ((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_14;
		String_t* L_21 = V_3;
		String_t* L_22 = V_5;
		NullCheck(L_20);
		String_t* L_23;
		L_23 = Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492(L_20, L_21, L_22, 1, NULL);
		V_3 = L_23;
		// result = result.Replace("{" + i + "}", value);
		String_t* L_24 = V_3;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_26;
		L_26 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_25, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		String_t* L_27 = V_5;
		NullCheck(L_24);
		String_t* L_28;
		L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_24, L_26, L_27, NULL);
		V_3 = L_28;
		goto IL_00ad;
	}

IL_0087:
	{
		// else if (result.Contains("{" + i + "}"))
		String_t* L_29 = V_3;
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_31;
		L_31 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_30, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_29);
		bool L_32;
		L_32 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00ad;
		}
	}
	{
		// result = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_00c2;
	}

IL_00ad:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b3:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_34 = V_4;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_35 = __this->___valueMatchers_9;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_00c2:
	{
		// if (!string.IsNullOrEmpty(result))
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_36, NULL);
		if (L_37)
		{
			goto IL_00dc;
		}
	}
	{
		// formatEvent.onFormattedValueEvent?.Invoke(result);
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_38 = V_2;
		NullCheck(L_38);
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_39 = L_38->___onFormattedValueEvent_1;
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_40 = L_39;
		G_B12_0 = L_40;
		if (L_40)
		{
			G_B13_0 = L_40;
			goto IL_00d6;
		}
	}
	{
		goto IL_00dc;
	}

IL_00d6:
	{
		String_t* L_41 = V_3;
		NullCheck(G_B13_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B13_0, L_41, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00dc:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e0:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_43 = V_1;
		FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* L_44 = __this->___formattedValueEvents_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0107;
	}

IL_00f0:
	{
		// onDidNotMatch?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_45 = __this->___onDidNotMatch_12;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_46 = L_45;
		G_B18_0 = L_46;
		if (L_46)
		{
			G_B19_0 = L_46;
			goto IL_00fc;
		}
	}
	{
		goto IL_0107;
	}

IL_00fc:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_47 = ___response0;
		String_t* L_48;
		L_48 = WitResultUtilities_GetTranscription_m2522C60134FF9DD4940F96C811AF0B8737AF0DD3(L_47, NULL);
		NullCheck(G_B19_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B19_0, L_48, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0107:
	{
		// List<string> values = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_49, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_49;
		// foreach (var matcher in valueMatchers)
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_50 = __this->___valueMatchers_9;
		V_6 = L_50;
		V_7 = 0;
		goto IL_017a;
	}

IL_011a:
	{
		// foreach (var matcher in valueMatchers)
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_51 = V_6;
		int32_t L_52 = V_7;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_8 = L_54;
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_55 = V_8;
		NullCheck(L_55);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_56;
		L_56 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_55, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_57 = ___response0;
		NullCheck(L_56);
		String_t* L_58;
		L_58 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_56, L_57);
		V_9 = L_58;
		// values.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = V_0;
		String_t* L_60 = V_9;
		NullCheck(L_59);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_59, L_60, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (matcher.ConfidenceReference != null)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_61 = V_8;
		NullCheck(L_61);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_62;
		L_62 = ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382(L_61, NULL);
		if (!L_62)
		{
			goto IL_0174;
		}
	}
	{
		// float confidenceValue = ValueMatches(response, matcher)
		//     ? matcher.ConfidenceReference.GetFloatValue(response)
		//     : 0f;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_63 = ___response0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_64 = V_8;
		bool L_65;
		L_65 = WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2(__this, L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_0153;
		}
	}
	{
		G_B25_0 = (0.0f);
		goto IL_0160;
	}

IL_0153:
	{
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_66 = V_8;
		NullCheck(L_66);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_67;
		L_67 = ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382(L_66, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_68 = ___response0;
		NullCheck(L_67);
		float L_69;
		L_69 = VirtualFuncInvoker1< float, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(6 /* System.Single Meta.WitAi.WitResponseReference::GetFloatValue(Meta.WitAi.Json.WitResponseNode) */, L_67, L_68);
		G_B25_0 = L_69;
	}

IL_0160:
	{
		// RefreshConfidenceRange(confidenceValue, matcher.confidenceRanges, matcher.allowConfidenceOverlap);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_70 = V_8;
		NullCheck(L_70);
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_71 = L_70->___confidenceRanges_8;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_72 = V_8;
		NullCheck(L_72);
		bool L_73 = L_72->___allowConfidenceOverlap_7;
		bool L_74;
		L_74 = WitResponseHandler_RefreshConfidenceRange_m64CCDF7F32ECA32BE9DB37B83C2CCA9BC32D9E7D(G_B25_0, L_71, L_73, NULL);
	}

IL_0174:
	{
		int32_t L_75 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_017a:
	{
		// foreach (var matcher in valueMatchers)
		int32_t L_76 = V_7;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_77 = V_6;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_011a;
		}
	}
	{
		// onMultiValueEvent.Invoke(values.ToArray());
		MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* L_78 = __this->___onMultiValueEvent_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_79 = V_0;
		NullCheck(L_79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80;
		L_80 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_79, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_78);
		UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94(L_78, L_80, UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool matches = true;
		V_0 = (bool)1;
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_0006:
	{
		// matches &= ValueMatches(response, valueMatchers[i]);
		bool L_0 = V_0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_2 = __this->___valueMatchers_9;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2(__this, L_1, L_5, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_0&(int32_t)L_6));
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001c:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_8 = V_1;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_9 = __this->___valueMatchers_9;
		NullCheck(L_9);
		bool L_10 = V_0;
		if (((int32_t)(((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0)&(int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		// return matches;
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_0 = ___matcher1;
		NullCheck(L_0);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_1;
		L_1 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_0, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_1, L_2);
		V_0 = L_3;
		// bool result = !matcher.contentRequired || !string.IsNullOrEmpty(value);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_4 = ___matcher1;
		NullCheck(L_4);
		bool L_5 = L_4->___contentRequired_2;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_1 = (bool)G_B3_0;
		// switch (matcher.matchMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_8 = ___matcher1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___matchMethod_3;
		V_2 = L_9;
		int32_t L_10 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)))
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_0047:
	{
		// result &= Regex.Match(value, matcher.matchValue).Success;
		bool L_11 = V_1;
		String_t* L_12 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_13 = ___matcher1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___matchValue_5;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_15;
		L_15 = Regex_Match_m49DD7357B4C9A9BCBCF686DAB3B5598B1BC688D7(L_12, L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_15, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_11&(int32_t)L_16));
		// break;
		goto IL_0093;
	}

IL_005d:
	{
		// result &= value == matcher.matchValue;
		bool L_17 = V_1;
		String_t* L_18 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_19 = ___matcher1;
		NullCheck(L_19);
		String_t* L_20 = L_19->___matchValue_5;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, L_20, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_17&(int32_t)L_21));
		// break;
		goto IL_0093;
	}

IL_006e:
	{
		// result &= CompareInt(value, matcher);
		bool L_22 = V_1;
		String_t* L_23 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_24 = ___matcher1;
		bool L_25;
		L_25 = WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC(__this, L_23, L_24, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_22&(int32_t)L_25));
		// break;
		goto IL_0093;
	}

IL_007b:
	{
		// result &= CompareFloat(value, matcher);
		bool L_26 = V_1;
		String_t* L_27 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_28 = ___matcher1;
		bool L_29;
		L_29 = WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4(__this, L_27, L_28, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_26&(int32_t)L_29));
		// break;
		goto IL_0093;
	}

IL_0088:
	{
		// result &= CompareDouble(value, matcher);
		bool L_30 = V_1;
		String_t* L_31 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_32 = ___matcher1;
		bool L_33;
		L_33 = WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7(__this, L_31, L_32, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_30&(int32_t)L_33));
	}

IL_0093:
	{
		// return result;
		bool L_34 = V_1;
		return L_34;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Double_TryParse_m6939FA2B8DCF60C46E0B859746DD9622450E7DD9(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// double dMatchValue = double.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		double L_4;
		L_4 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_006b;
			}
			case 4:
			{
				goto IL_0066;
			}
			case 5:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) < matcher.floatingPointComparisonTolerance;
		double L_8 = V_0;
		double L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_10) < ((double)L_12))? 1 : 0);
	}

IL_0050:
	{
		// return Math.Abs(dValue - dMatchValue) > matcher.floatingPointComparisonTolerance;
		double L_13 = V_0;
		double L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(((double)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)L_15) > ((double)L_17))? 1 : 0);
	}

IL_0061:
	{
		// return dValue > dMatchValue;
		double L_18 = V_0;
		double L_19 = V_1;
		return (bool)((((double)L_18) > ((double)L_19))? 1 : 0);
	}

IL_0066:
	{
		// return dValue < dMatchValue;
		double L_20 = V_0;
		double L_21 = V_1;
		return (bool)((((double)L_20) < ((double)L_21))? 1 : 0);
	}

IL_006b:
	{
		// return dValue >= dMatchValue;
		double L_22 = V_0;
		double L_23 = V_1;
		return (bool)((((int32_t)((!(((double)L_22) >= ((double)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0073:
	{
		// return dValue <= dMatchValue;
		double L_24 = V_0;
		double L_25 = V_1;
		return (bool)((((int32_t)((!(((double)L_24) <= ((double)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// float dMatchValue = float.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		float L_4;
		L_4 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0068;
			}
			case 5:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_003f:
	{
		// return Math.Abs(dValue - dMatchValue) <
		//        matcher.floatingPointComparisonTolerance;
		float L_8 = V_0;
		float L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_8, L_9)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_11 = ___matcher1;
		NullCheck(L_11);
		double L_12 = L_11->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_10)) < ((double)L_12))? 1 : 0);
	}

IL_0051:
	{
		// return Math.Abs(dValue - dMatchValue) >
		//        matcher.floatingPointComparisonTolerance;
		float L_13 = V_0;
		float L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract(L_13, L_14)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_16 = ___matcher1;
		NullCheck(L_16);
		double L_17 = L_16->___floatingPointComparisonTolerance_6;
		return (bool)((((double)((double)L_15)) > ((double)L_17))? 1 : 0);
	}

IL_0063:
	{
		// return dValue > dMatchValue;
		float L_18 = V_0;
		float L_19 = V_1;
		return (bool)((((float)L_18) > ((float)L_19))? 1 : 0);
	}

IL_0068:
	{
		// return dValue < dMatchValue;
		float L_20 = V_0;
		float L_21 = V_1;
		return (bool)((((float)L_20) < ((float)L_21))? 1 : 0);
	}

IL_006d:
	{
		// return dValue >= dMatchValue;
		float L_22 = V_0;
		float L_23 = V_1;
		return (bool)((((int32_t)((!(((float)L_22) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		// return dValue <= dMatchValue;
		float L_24 = V_0;
		float L_25 = V_1;
		return (bool)((((int32_t)((!(((float)L_24) <= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_0, (&V_0), NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		return (bool)0;
	}

IL_000c:
	{
		// int dMatchValue = int.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_2 = ___matcher1;
		NullCheck(L_2);
		String_t* L_3 = L_2->___matchValue_5;
		int32_t L_4;
		L_4 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_3, NULL);
		V_1 = L_4;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = ___matcher1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___comparisonMethod_4;
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_005e;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_003f:
	{
		// return dValue == dMatchValue;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0044:
	{
		// return dValue != dMatchValue;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		return (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004c:
	{
		// return dValue > dMatchValue;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		return (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
	}

IL_0051:
	{
		// return dValue < dMatchValue;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		return (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
	}

IL_0056:
	{
		// return dValue >= dMatchValue;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		return (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		// return dValue <= dMatchValue;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		return (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__ctor_m15B71CF2202B13D134164FA1679EB8242D1C39CE (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private MultiValueEvent onMultiValueEvent = new MultiValueEvent();
		MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* L_0 = (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06*)il2cpp_codegen_object_new(MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6(L_0, NULL);
		__this->___onMultiValueEvent_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMultiValueEvent_11), (void*)L_0);
		// [SerializeField] private StringEvent onDidNotMatch = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_1 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_1, NULL);
		__this->___onDidNotMatch_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDidNotMatch_12), (void*)L_1);
		// [SerializeField] private StringEvent onOutOfDomain = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_2 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_2, NULL);
		__this->___onOutOfDomain_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutOfDomain_13), (void*)L_2);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__cctor_mA0C72CDC1686028BC6D2577F2A28F2CC26463DD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Regex valueRegex = new Regex(Regex.Escape("{value}"), RegexOptions.Compiled);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Regex_Escape_m2E4E071ABAFAE1BF55932725F28F4194CD56D7DE(_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, 8, NULL);
		((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_14), (void*)L_1);
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
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D(__this, UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.FormattedValueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedValueEvents__ctor_m4F5464C9A565D08A0E4FAFCC55DD1B6444CEBD91 (FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueEvent onFormattedValueEvent = new ValueEvent();
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_0 = (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32*)il2cpp_codegen_object_new(ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7(L_0, NULL);
		__this->___onFormattedValueEvent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFormattedValueEvent_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B4_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0 = __this->___confidencePathReference_10;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_1 = __this->___confidencePathReference_10;
		return L_1;
	}

IL_000f:
	{
		// var confidencePath = Reference?.path;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_2;
		L_2 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(__this, NULL);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		String_t* L_4 = G_B4_0->___path_1;
		G_B5_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(confidencePath))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		// confidencePath = confidencePath.Substring(0, confidencePath.LastIndexOf("."));
		String_t* L_7 = V_0;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_9, NULL);
		V_0 = L_10;
		// confidencePath += ".confidence";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E, NULL);
		V_0 = L_12;
		// confidencePathReference = WitResultUtilities.GetWitResponseReference(confidencePath);
		String_t* L_13 = V_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_14;
		L_14 = WitResultUtilities_GetWitResponseReference_m824208DEEFF3A147FFD0AB46CF3F8ABD31AD4799(L_13, NULL);
		__this->___confidencePathReference_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___confidencePathReference_10), (void*)L_14);
	}

IL_0055:
	{
		// return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_15 = __this->___confidencePathReference_10;
		return L_15;
	}
}
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_0 = __this->___witValueReference_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_2 = __this->___witValueReference_1;
		NullCheck(L_2);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3;
		L_3 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// if (null == pathReference || pathReference.path != path)
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_4 = __this->___pathReference_9;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_5 = __this->___pathReference_9;
		NullCheck(L_5);
		String_t* L_6 = L_5->___path_1;
		String_t* L_7 = __this->___path_0;
		bool L_8;
		L_8 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_0039:
	{
		// pathReference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_9 = __this->___path_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_10;
		L_10 = WitResultUtilities_GetWitResponseReference_m824208DEEFF3A147FFD0AB46CF3F8ABD31AD4799(L_9, NULL);
		__this->___pathReference_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathReference_9), (void*)L_10);
	}

IL_004a:
	{
		// return pathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_11 = __this->___pathReference_9;
		return L_11;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.ValuePathMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuePathMatcher__ctor_m217C778A08D77714D81C3168B0DEFA6A9075613C (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	{
		// public bool contentRequired = true;
		__this->___contentRequired_2 = (bool)1;
		// public double floatingPointComparisonTolerance = .0001f;
		__this->___floatingPointComparisonTolerance_6 = (9.9999997473787516E-05);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUtteranceMatcher_OnValidateResponse_m2551E293B3A7FCCEE25F5252D8177CBB2C0D7125 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (!IsMatch(text))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return "Required utterance does not match";
		return _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
	}

IL_0020:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseInvalid_m298720942103F62B7413E24A7CB99B544406DA0E (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error){}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseSuccess_mD0D71280596EB5A9DAA364A89918326221411165 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B2_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B1_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// onUtteranceMatched?.Invoke(text);
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_3 = __this->___onUtteranceMatched_10;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_5, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	{
		// if (useRegex)
		bool L_0 = __this->___useRegex_9;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (null == regex)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = __this->___regex_11;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_2 = __this->___searchText_7;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_3, L_2, ((int32_t)9), NULL);
		__this->___regex_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_11), (void*)L_3);
	}

IL_0023:
	{
		// var match = regex.Match(text);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->___regex_11;
		String_t* L_5 = ___text0;
		NullCheck(L_4);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_6;
		L_6 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_4, L_5, NULL);
		V_0 = L_6;
		// if (match.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_7, NULL);
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_9 = __this->___exactMatch_8;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_10, NULL);
		String_t* L_12 = ___text0;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, L_12, NULL);
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_14 = __this->___exactMatch_8;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_15 = ___text0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_15, NULL);
		String_t* L_17 = __this->___searchText_7;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0073:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_20 = ___text0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_20, NULL);
		String_t* L_22 = __this->___searchText_7;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_008d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_m4C14137AA9E9CCE83EA0033E58813FD8FA07D59B (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->___exactMatch_8 = (bool)1;
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_0, NULL);
		__this->___onUtteranceMatched_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUtteranceMatched_10), (void*)L_0);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
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
// System.String Meta.WitAi.Attributes.TooltipBoxAttribute::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TooltipBoxAttribute_get_Text_mB54DDB968D09F1A168D9B7E70FDD518583C8A0EB (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.Attributes.TooltipBoxAttribute::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5 (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.Attributes.TooltipBoxAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipBoxAttribute__ctor_m56F263B8BCC8AA94D9E3F2DA6E12852572E73F8E (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// public TooltipBoxAttribute(string text)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Text = text;
		String_t* L_0 = ___text0;
		TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5_inline(__this, L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// return _clientAccessToken;
		String_t* L_0 = __this->____clientAccessToken_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnSend => _onSend;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onSend_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) 
{
	{
		// public WitValidationEvent OnValidatePartialResponse => _onValidatePartialResponse;
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_0 = __this->____onValidatePartialResponse_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseEvent OnResponse => _onResponse;
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_0 = __this->____onResponse_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5_inline (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB785B35A5407068979C269B25532380F897AF875_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method) 
{
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_1 = (WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_6 = V_0;
		int32_t L_7 = V_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B)L_8);
		return;
	}

IL_0034:
	{
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_9 = ___item0;
		((  void (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
