#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781;
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0574E31B2E15797E57C51DEC554AE14E00CCB9CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC2A6DFBAD242B7CE1A74ACA9D3224CE2E0163D;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral57186E11345D0E246E80500DE17B8C941EF8A38F;
IL2CPP_EXTERN_C String_t* _stringLiteral706336A4F6F53F903F6BD416474754F528D2A13B;
IL2CPP_EXTERN_C String_t* _stringLiteral9EAFE4F84FECC3407E28F6C22DC663D4A31C78D0;
IL2CPP_EXTERN_C String_t* _stringLiteralB1FAE4F904170535BC9DC23FF347B1D0603313EA;
IL2CPP_EXTERN_C String_t* _stringLiteralC01DE08865A1C5D9A0B7F1023D8CD55C8685904B;
IL2CPP_EXTERN_C String_t* _stringLiteralC51F74D9F7385459B7E90865166418A267D9A62B;
IL2CPP_EXTERN_C String_t* _stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct AudioPlayableBinding_tCEBDA2DEB832C1B7A2698EC9DAB066F7D6D85D3F  : public RuntimeObject
{
};
struct AudioPlayableGraphExtensions_tFE52BCEBCCE023697BAC3291D42A6659E973F50E  : public RuntimeObject
{
};
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	String_t* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject;
	Type_t* ___m_SourceBindingType;
	Il2CppMethodPointer ___m_CreateOutputMethod;
};
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable;
};
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None;
	double ___DefaultDuration;
};
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_gshared (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_playable, double ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_CreateHandle_mD7CA217BC6DE899D586272C372456EBB7ED2A825 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
inline void PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_playable, double ___1_value, const RuntimeMethod* method)
{
	((  void (*) (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0, double, const RuntimeMethod*))PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_gshared)(___0_playable, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___3_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
inline bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_volume, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_stereoPan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_spatialBlend, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_startTime, double ___1_startDelay, double ___2_duration, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_CreateHandle_mCA2A6EF1CC490A8E59C8EE2020D3304D66B96852 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, bool ___2_normalizeInputVolumes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, bool ___1_normalizeInputVolumes, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_sourceObject, Type_t* ___2_sourceType, CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___3_createFunction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_Create_m90DF38B28813932D4246094FD4DB6105572619D2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___2_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableOutput_op_Implicit_mD2D35763126BDE08E10CA74D8E8C49988477F428 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 ___0_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_get_Null_m8404386CE6506C8C0574B74023EB1BC17A45F205 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___1_target, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		bool L_3 = ___0_deviceWasChanged;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
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
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenInst(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_deviceWasChanged));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_data;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback;
		int32_t L_3 = ___0_position;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
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
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	float* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<float*>((___0_data)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_data_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenInst(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_position);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)");
	float icallRetVal = _il2cpp_icall_func(___0_source);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, float ___1_pitch, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_pitch);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, uint64_t);
	static AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)");
	_il2cpp_icall_func(___0_source, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, bool);
	static AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_stopOneShots);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, float);
	static AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioSource_GetPitch_m80F6D2BAF966F669253E9231AFCFFC303779913D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		AudioSource_SetPitch_mE75DEDF8F37301BDA63E0F545A7A00850C24F53E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___0_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, ((int64_t)0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Pause()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_UnPause_mC4A6A1E71439A3ADB4664B62DABDF4D79D3B21B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::UnPause()");
	_il2cpp_icall_func(__this);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 AudioClipPlayable_Create_m0B42D1553D2752E7E98D10677B2A7DE8CE4DEFD8 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___1_clip;
		bool L_2 = ___2_looping;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = AudioClipPlayable_CreateHandle_mD7CA217BC6DE899D586272C372456EBB7ED2A825(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4 = V_0;
		AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751((&V_1), L_4, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___1_clip;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_8 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___1_clip;
		NullCheck(L_9);
		float L_10;
		L_10 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_9, NULL);
		PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E(L_8, ((double)L_10), PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m67FC8BE5E310D54C91DB1D492F7393237401332E_RuntimeMethod_var);
	}

IL_002b:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_11 = V_1;
		V_3 = L_11;
		goto IL_002f;
	}

IL_002f:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_CreateHandle_mD7CA217BC6DE899D586272C372456EBB7ED2A825 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___1_clip;
		bool L_2 = ___2_looping;
		bool L_3;
		L_3 = AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616((&___0_graph), L_1, L_2, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5;
		L_5 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_5;
		goto IL_0025;
	}

IL_0021:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E((&___0_handle), PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57186E11345D0E246E80500DE17B8C941EF8A38F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AudioClipPlayable_op_Implicit_m49C31C8D61799E247CA509124B3E6E8F4009D237 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_playable, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_playable), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 AudioClipPlayable_op_Explicit_mA9B643768436960809DB09A469A0DF09B716446B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___0_playable), NULL);
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0574E31B2E15797E57C51DEC554AE14E00CCB9CC)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_7 = ___0_value;
		AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(-1.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FC2A6DFBAD242B7CE1A74ACA9D3224CE2E0163D)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_7 = ___0_value;
		AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral706336A4F6F53F903F6BD416474754F528D2A13B)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		float L_7 = ___0_value;
		AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___0_startTime, double ___1_startDelay, double ___2_duration, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_1 = ___1_startDelay;
		AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD(L_0, L_1, NULL);
		double L_2 = ___2_duration;
		V_0 = (bool)((((double)L_2) > ((double)(0.0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		double L_4 = ___1_startDelay;
		double L_5 = ___2_duration;
		V_1 = ((double)il2cpp_codegen_add(L_4, L_5));
		double L_6 = V_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_7 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_8;
		L_8 = PlayableHandle_GetDuration_mE3CF9C12CA5A186288A7F1981A92F043100E02A7(L_7, NULL);
		V_2 = (bool)((((int32_t)((!(((double)L_6) >= ((double)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_10 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49(L_10, (bool)1, NULL);
	}

IL_0045:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_11 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_12 = ___2_duration;
		double L_13 = ___0_startTime;
		PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(L_11, ((double)il2cpp_codegen_add(L_12, L_13)), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_14 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_15 = ___1_startDelay;
		double L_16 = ___2_duration;
		AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1(L_14, ((double)il2cpp_codegen_add(L_15, L_16)), NULL);
		goto IL_009f;
	}

IL_0066:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_17 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		PlayableHandle_SetDone_mE04197A8D1657035DC6C70AF7291715557A9FB49(L_17, (bool)1, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_18 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(L_18, (1.7976931348623157E+308), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_19 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1(L_19, (0.0), NULL);
	}

IL_009f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_20 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		double L_21 = ___0_startTime;
		PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4(L_20, L_21, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_22 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle);
		PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D(L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391_AdjustorThunk (RuntimeObject* __this, double ___0_startTime, double ___1_startDelay, double ___2_duration, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391(_thisAdjusted, ___0_startTime, ___1_startDelay, ___2_duration, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_volume, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetVolumeInternal_m71EFEE49486AACBE4F9C936F4898448AB071B55F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetVolumeInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0_hdl, ___1_volume);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_stereoPan, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStereoPanInternal_m206A1B777709E25F42C9EF0BEAF3A84D622D4A90_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStereoPanInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0_hdl, ___1_stereoPan);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, float ___1_spatialBlend, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetSpatialBlendInternal_mBAE4A56ACEE90D4732C5D2C5D2D721C65B3DD55B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetSpatialBlendInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___0_hdl, ___1_spatialBlend);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStartDelayInternal_m1A3816547BF61B7448654300EF078D464A5618CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0_hdl, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_hdl, double ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetPauseDelayInternal_m803360EBD0BB692C31D31D620AAB9C8D0CD7A9D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___0_hdl, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, bool ___2_looping, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___3_handle, const RuntimeMethod* method) 
{
	typedef bool (*AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, bool, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_InternalCreateAudioClipPlayable_mBDAA54F35207F6C62F87CAE268732072C7287616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_clip, ___2_looping, ___3_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer__ctor_m8BB9BFC96DB436EE4CECE0BECECD5DFC7559058D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_0 = ___0_snapshot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EAFE4F84FECC3407E28F6C22DC663D4A31C78D0)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var)));
	}

IL_0027:
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_6 = ___0_snapshot;
		NullCheck(L_6);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_7;
		L_7 = AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, __this, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC01DE08865A1C5D9A0B7F1023D8CD55C8685904B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_13 = ___0_snapshot;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB1FAE4F904170535BC9DC23FF347B1D0603313EA)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D_RuntimeMethod_var)));
	}

IL_0072:
	{
		AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* L_21 = ___0_snapshot;
		float L_22 = ___1_timeToReach;
		AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0(__this, L_21, L_22, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* ___0_snapshot, float ___1_timeToReach, const RuntimeMethod* method) 
{
	typedef void (*AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781*, float);
	static AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_TransitionToSnapshotInternal_m9D07330A3EF997CC4BB165829D8D2AD6187A8DD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::TransitionToSnapshotInternal(UnityEngine.Audio.AudioMixerSnapshot,System.Single)");
	_il2cpp_icall_func(__this, ___0_snapshot, ___1_timeToReach);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*, float);
	static AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name, ___1_value);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float* ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9_ftn) (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04*, String_t*, float*);
	static AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixer_GetFloat_mAED8D277AD30D0346292555CBF81D8961117AEC9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixer::GetFloat(System.String,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name, ___1_value);
	return icallRetVal;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C AudioMixerPlayable_Create_m323B71EBE332DAF5B2632BAB657BEA33F5870E71 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, bool ___2_normalizeInputVolumes, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		int32_t L_1 = ___1_inputCount;
		bool L_2 = ___2_normalizeInputVolumes;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = AudioMixerPlayable_CreateHandle_mCA2A6EF1CC490A8E59C8EE2020D3304D66B96852(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4 = V_0;
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_5;
		memset((&L_5), 0, sizeof(L_5));
		AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47((&L_5), L_4, NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_CreateHandle_mCA2A6EF1CC490A8E59C8EE2020D3304D66B96852 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, bool ___2_normalizeInputVolumes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		bool L_1 = ___2_normalizeInputVolumes;
		bool L_2;
		L_2 = AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9((&___0_graph), L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_5 = ___1_inputCount;
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_5, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB((&___0_handle), PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC51F74D9F7385459B7E90865166418A267D9A62B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AudioMixerPlayable_op_Implicit_m479542341C4CAEE00B4F7DD0B68E39F8E4388974 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_playable, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_playable), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, bool ___1_normalizeInputVolumes, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, bool, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerPlayable_CreateAudioMixerPlayableInternal_mB91DD585A6A2903F01F49719CA0045C8727B5AA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_normalizeInputVolumes, ___2_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, const RuntimeMethod* method) 
{
	typedef AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* (*AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn) (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781*);
	static AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerSnapshot::get_audioMixer()");
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerSnapshot_TransitionTo_mABDDC418B89323A930A900E55336B5989CFD4AC8 (AudioMixerSnapshot_tB9A62E6CFA52643B938E4FBFFAE1A5ED30907781* __this, float ___0_timeToReach, const RuntimeMethod* method) 
{
	{
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_0;
		L_0 = AudioMixerSnapshot_get_audioMixer_mCC13199F7F9EBB2C5510DFA750A501747229CBF5(__this, NULL);
		float L_1 = ___0_timeToReach;
		NullCheck(L_0);
		AudioMixer_TransitionToSnapshot_m308E8D50A4573EFDD381ED7DEC23162F8CD0EB5D(L_0, __this, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 AudioPlayableBinding_Create_m4E506BD0649ADAB9D1C2D924D2767FBB0C63DACB (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_name;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___1_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_4 = (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*)il2cpp_codegen_object_new(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4(L_4, NULL, (intptr_t)((void*)AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5;
		L_5 = PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableBinding_CreateAudioOutput_m2BE0EDC74ADA082B5CD6247ACD78EFCBDB85ADC3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		String_t* L_1 = ___1_name;
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2;
		L_2 = AudioPlayableOutput_Create_m90DF38B28813932D4246094FD4DB6105572619D2(L_0, L_1, (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)NULL, NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_3;
		L_3 = AudioPlayableOutput_op_Implicit_mD2D35763126BDE08E10CA74D8E8C49988477F428(L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_4 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_name, ___2_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_Create_m90DF38B28813932D4246094FD4DB6105572619D2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___2_target, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = AudioPlayableGraphExtensions_InternalCreateAudioOutput_m5EF8B18878AFFE0B462E615C8243C2433A3F5E78((&___0_graph), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_3;
		L_3 = AudioPlayableOutput_get_Null_m8404386CE6506C8C0574B74023EB1BC17A45F205(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&V_1), L_4, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___2_target;
		AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04((&V_1), L_5, NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_7 = V_3;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6((&___0_handle), PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_handle;
		__this->___m_Handle = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409(_thisAdjusted, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_get_Null_m8404386CE6506C8C0574B74023EB1BC17A45F205 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableOutput_op_Implicit_mD2D35763126BDE08E10CA74D8E8C49988477F428 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 ___0_output, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE((&___0_output), NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_op_Explicit_mC51D8736040715BAA8AC5FA22B6E89F9CDBF25C1 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_output, const RuntimeMethod* method) 
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___0_output), NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_value;
		AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04_AdjustorThunk (RuntimeObject* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_value, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		bool L_1 = ___0_value;
		AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___1_target, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetTarget_m3A9912A00BC052FCEDEBB5EB75DCBE5B2B9DA86E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)");
	_il2cpp_icall_func(___0_output, ___1_target);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, bool);
	static AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_output, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_sampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable;
		int32_t L_3 = ___0_sampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_droppedSampleFrameCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow;
		int32_t L_3 = ___0_droppedSampleFrameCount;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
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
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
