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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<WinRT.EventSource/_Invoke>
struct Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4;
// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A;
// WinRT.Interop.DelegateProperty`1<System.Object>
struct DelegateProperty_1_t36241B1220ED95442776F10AA8450D04F25B7A4D;
// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3;
// System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>
struct EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>
struct EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC;
// WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,System.Object,System.Object>
struct EventSource_3_tD12FE7A3FE1D14119E5112008EC616D5CDD2244B;
// System.Func`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<WinRT.WinrtModule>
struct Func_1_t7325D8BB83456A302626BA1649143787656EB47D;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.HashSet`1<System.IntPtr>
struct HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyCollection_t8D542B6A37F5822B0BC4E77896CA1CB47D1D9022;
// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6;
// System.Lazy`1<System.Boolean>
struct Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06;
// System.Lazy`1<System.Object>
struct Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948;
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>
struct ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E;
// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>
struct ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572;
// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>
struct ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3;
// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>
struct ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56;
// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>
struct ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8;
// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>
struct ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<WinRT.Interop.VoidResult>
struct TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC;
// System.Threading.Tasks.Task`1<WinRT.Interop.VoidResult>
struct Task_1_tBC2D32BE115BCD9D8D7325053C05645D5ED525FE;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>
struct UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732;
// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,System.Object,System.Object>
struct UnmarshalArgs_tDDD818417FA7811C7E75C72F38F42F063060E025;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct ValueCollection_tE0DA7FCF1634AD9CD7B73BB9446D6961DA4782F0;
// WinRT.WeakLazy`1<System.Object>
struct WeakLazy_1_t08891E6CE990043324839879BDEAB619D138FE23;
// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16;
// System.WeakReference`1<WinRT.DllModule>
struct WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// System.WeakReference`1<WinRT.WinrtModule>
struct WeakReference_1_tEE0253F39CDC66AE9CCB9AFA2561042E69CD5E1A;
// WinRT.Interop._IAsyncOperation`2<System.Object,WinRT.Interop.VoidResult>
struct _IAsyncOperation_2_tC389E448595D08F3821E2AA3D786055E0018A6B5;
// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task,WinRT.Interop.VoidResult>
struct _IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct EntryU5BU5D_t305006B9BC07BEB8879F47A824C724A9DC1D55B4;
// System.Collections.Generic.HashSet`1/Slot<System.IntPtr>[]
struct SlotU5BU5D_t503C881E18B73A9CA2AD1E1833FF8D5493907809;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// WinRT.Delegate
struct Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// WinRT.DllModule
struct DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1;
// WinRT.EventSource
struct EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// WinRT.HString
struct HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A;
// WinRT.Interop.IAsyncAction
struct IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C;
// WinRT.Interop.IAsyncInfo
struct IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29;
// WinRT.Interop.IAsyncOperation
struct IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// WinRT.Interop.IDelegate2_Obj_Enum
struct IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802;
// WinRT.Interop.IDelegate2_Obj_Obj
struct IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82;
// Microsoft.MixedReality.Input.IMotionController
struct IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3;
// Microsoft.MixedReality.Input.IMotionControllerReading
struct IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400;
// Microsoft.MixedReality.Input.IMotionControllerWatcher
struct IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC;
// WinRT.IObjectReference
struct IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043;
// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WinRT.Interop.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078;
// Microsoft.MixedReality.Input.MotionController
struct MotionController_tC07D829713E1599CF51DA2E9478F931657E67761;
// Microsoft.MixedReality.Input.MotionControllerReading
struct MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA;
// Microsoft.MixedReality.Input.MotionControllerWatcher
struct MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// WinRT.WinrtModule
struct WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F;
// WinRT.Interop._add_EventHandler
struct _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6;
// WinRT.Interop._get_PropertyAsDateTime
struct _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA;
// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066;
// WinRT.Interop._get_PropertyAsInt
struct _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C;
// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726;
// WinRT.Interop._get_PropertyAsTimeSpan
struct _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06;
// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3;
// WinRT.Interop._get_PropertyAsUShort
struct _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF;
// WinRT.Interop._method0
struct _method0_t63421535F6121EE6954023CD0356085E5A6A8B32;
// WinRT.Interop._put_PropertyAsObject
struct _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545;
// WinRT.Interop._remove_EventHandler
struct _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816;
// WinRT.Delegate/InitialReference
struct InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55;
// WinRT.DllModule/DllGetActivationFactory
struct DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7;
// WinRT.EventSource/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16;
// WinRT.EventSource/_Invoke
struct _Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102;
// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance
struct _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9;
// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8;
// WinRT.Interop.IAsyncOperation/CompletedHandler
struct CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8;
// Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c
struct U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t5E373D5F2713F88800A00AC29C398E679178043A;
// WinRT.Mono/<>c
struct U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229;
// WinRT.Mono/ThreadContext
struct ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026;
// WinRT.Mono/mono_thread_cleanup_initialize
struct mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D;
// WinRT.Mono/mono_thread_cleanup_register
struct mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB;
// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C;
// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351;
// WinRT.Platform/IPlatformLinkage
struct IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs
struct _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF;
// Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput
struct _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590;
// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime
struct _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193;
// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime
struct _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295;
// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue
struct _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB;
// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues
struct _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797;
// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value
struct _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F;
// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values
struct _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C;
// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync
struct _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5;
// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop
struct _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ActivationFactory_1_t506A3EB8C9CAAA52FB31B85EC8AA324C2B1B7ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncStatus_t20EA1365C133747175AAEA6A99CA403E4197559D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MotionController_tC07D829713E1599CF51DA2E9478F931657E67761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96;
IL2CPP_EXTERN_C String_t* _stringLiteral1F7E940B2021E8BF65852F73C3E2CECACCD01456;
IL2CPP_EXTERN_C String_t* _stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C;
IL2CPP_EXTERN_C String_t* _stringLiteral4535E88AFD16EB73A1C33E88E92D77F5476E9CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral885E8980C78A0F622B164E0FA16B56B9CF8B06B5;
IL2CPP_EXTERN_C String_t* _stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72;
IL2CPP_EXTERN_C String_t* _stringLiteralA32285E57C5E37519691CDF44133FC9D59D7069B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA6BAAB39B5BB41CD8225E955B5AA330AEE81227A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mCBB21ECD057ECA77601FA2C34C9EF2D21944CAD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_m7BA0A1EEF6F9DD479756387D1F0D9EDEC27D2E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateProperty_1__ctor_m5A472DDDB6028B09CD3D4BC8CF74EB2D34D8FBBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateProperty_1_set_Value_mBC95CA83F3182AC7DCAC86687C5F6A4D2CCB9275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_MarshalInvoke_TisCompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8_m69A87B3F3006DF293CEABC97BA260E815A95AC84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_MarshalInvoke_Tis_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102_mC163731B28D12E983BCF1E55E90AFEB10EA6B8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7EED326AA464107018F9444CA41BC7277555B797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD54A210AE4DC60DA46BFD1736864CCF03F7A2F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA9953DEEFD00B3B191AE3C6FC9F1A0A8359259DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetDelegateForFunctionPointer_Tis_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_m4AC353FFEC4E0547C1A6AF86A9424281AC326BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_m463B2ED57155BCF5D26CD9802FEA82AFA6465E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_m4F936BB52F59AB5F2A225188723B396358129FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_m3CA9094075AB4242A3D7D879E4FB19871B63D0A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_Release_t5E373D5F2713F88800A00AC29C398E679178043A_mA080B91B26661D0F640442D929C1E6F9A690F483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D_mF294A2A281428CDE542BC9C2C092BCC20193CA8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_GetProcAddress_Tismono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB_m457EDB8CBA3EB5764CD1A0C6E6FB35E31D881560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_TryGetProcAddress_TisDllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7_m74A4E80317EE3E2BC2B569A624A9475507C0C93A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m519E5BD123DCE4E43CA4D8EB36FCF300E034296C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_0_m294D6F52AB0A19E289D407B41E2F2E33124208E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_1_m4F5F51ED5F8220DA0E68B3F62FFF20FE1B793C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m8051FBB44797C2E9B2CE20A8C83702D4E466A505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m4006340DE007DD0B2E0D3FE419555471ABEDE0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_m6ED03463903ECF538C41B59DBF658C08D76FC23F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_m344F6BA5489F8F559057FF30D6865BA8B8537524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m684121294B8A136791F4ED7BF7ACF9B57273D6E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_m7F386C4AA6575948F47C5A5C42B29795133AC408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _IAsyncOperation_2_AsTask_mB9383F56B0C5A1C82052D22EF2F6B1F53B84A1F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _IAsyncOperation_2__ctor_m5240F9043F7CC4A76B7531458B839067173F1C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IAsyncActionCompletedHandler_t736AFA34238BBB11BCB8944DF95E7F8D33D46EAC_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82;;
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com;
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com;;
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke;
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke;;
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D;;
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com;
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com;;
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke;
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke;;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBCF0F411265AC7E50DC1A5D621E5A1E7ACF66164 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t305006B9BC07BEB8879F47A824C724A9DC1D55B4* ___entries_1;
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
	KeyCollection_t8D542B6A37F5822B0BC4E77896CA1CB47D1D9022 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE0DA7FCF1634AD9CD7B73BB9446D6961DA4782F0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___entries_1)); }
	inline EntryU5BU5D_t305006B9BC07BEB8879F47A824C724A9DC1D55B4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t305006B9BC07BEB8879F47A824C724A9DC1D55B4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t305006B9BC07BEB8879F47A824C724A9DC1D55B4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___keys_7)); }
	inline KeyCollection_t8D542B6A37F5822B0BC4E77896CA1CB47D1D9022 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8D542B6A37F5822B0BC4E77896CA1CB47D1D9022 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8D542B6A37F5822B0BC4E77896CA1CB47D1D9022 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ___values_8)); }
	inline ValueCollection_tE0DA7FCF1634AD9CD7B73BB9446D6961DA4782F0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE0DA7FCF1634AD9CD7B73BB9446D6961DA4782F0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE0DA7FCF1634AD9CD7B73BB9446D6961DA4782F0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.IntPtr>
struct HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t503C881E18B73A9CA2AD1E1833FF8D5493907809* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____slots_8)); }
	inline SlotU5BU5D_t503C881E18B73A9CA2AD1E1833FF8D5493907809* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t503C881E18B73A9CA2AD1E1833FF8D5493907809** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t503C881E18B73A9CA2AD1E1833FF8D5493907809* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6, ___m_valueFactory_2)); }
	inline Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t7BF6745EE916470BFF08C7347625CC864061D9E2 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Lazy`1<System.Boolean>
struct Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06, ___m_valueFactory_2)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<WinRT.Interop.VoidResult>
struct TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tBC2D32BE115BCD9D8D7325053C05645D5ED525FE * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC, ___m_task_0)); }
	inline Task_1_tBC2D32BE115BCD9D8D7325053C05645D5ED525FE * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tBC2D32BE115BCD9D8D7325053C05645D5ED525FE ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tBC2D32BE115BCD9D8D7325053C05645D5ED525FE * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16  : public RuntimeObject
{
public:
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_t7325D8BB83456A302626BA1649143787656EB47D * ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_tEE0253F39CDC66AE9CCB9AFA2561042E69CD5E1A * ____instance_1;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16, ____constructor_0)); }
	inline Func_1_t7325D8BB83456A302626BA1649143787656EB47D * get__constructor_0() const { return ____constructor_0; }
	inline Func_1_t7325D8BB83456A302626BA1649143787656EB47D ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(Func_1_t7325D8BB83456A302626BA1649143787656EB47D * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16, ____instance_1)); }
	inline WeakReference_1_tEE0253F39CDC66AE9CCB9AFA2561042E69CD5E1A * get__instance_1() const { return ____instance_1; }
	inline WeakReference_1_tEE0253F39CDC66AE9CCB9AFA2561042E69CD5E1A ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakReference_1_tEE0253F39CDC66AE9CCB9AFA2561042E69CD5E1A * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// WinRT.EventSource
struct EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4  : public RuntimeObject
{
public:

public:
};

struct EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4_StaticFields
{
public:
	// WinRT.Interop.IDelegate2_Obj_Obj WinRT.EventSource::_invokeDelegate
	IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * ____invokeDelegate_0;

public:
	inline static int32_t get_offset_of__invokeDelegate_0() { return static_cast<int32_t>(offsetof(EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4_StaticFields, ____invokeDelegate_0)); }
	inline IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * get__invokeDelegate_0() const { return ____invokeDelegate_0; }
	inline IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 ** get_address_of__invokeDelegate_0() { return &____invokeDelegate_0; }
	inline void set__invokeDelegate_0(IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * value)
	{
		____invokeDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invokeDelegate_0), (void*)value);
	}
};


// WinRT.Interop.IAsyncInfo
struct IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl> WinRT.Interop.IAsyncInfo::_obj
	ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29, ____obj_0)); }
	inline ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// WinRT.Interop.IAsyncOperation
struct IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl> WinRT.Interop.IAsyncOperation::_obj
	ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ____obj_0;
	// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler> WinRT.Interop.IAsyncOperation::_Completed
	DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * ____Completed_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478, ____obj_0)); }
	inline ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__Completed_2() { return static_cast<int32_t>(offsetof(IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478, ____Completed_2)); }
	inline DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * get__Completed_2() const { return ____Completed_2; }
	inline DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 ** get_address_of__Completed_2() { return &____Completed_2; }
	inline void set__Completed_2(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * value)
	{
		____Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Completed_2), (void*)value);
	}
};

struct IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_StaticFields
{
public:
	// WinRT.Interop.IDelegate2_Obj_Enum WinRT.Interop.IAsyncOperation::_OnCompletedDelegate
	IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * ____OnCompletedDelegate_1;

public:
	inline static int32_t get_offset_of__OnCompletedDelegate_1() { return static_cast<int32_t>(offsetof(IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_StaticFields, ____OnCompletedDelegate_1)); }
	inline IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * get__OnCompletedDelegate_1() const { return ____OnCompletedDelegate_1; }
	inline IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 ** get_address_of__OnCompletedDelegate_1() { return &____OnCompletedDelegate_1; }
	inline void set__OnCompletedDelegate_1(IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * value)
	{
		____OnCompletedDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OnCompletedDelegate_1), (void*)value);
	}
};


// Microsoft.MixedReality.Input.IMotionController
struct IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl> Microsoft.MixedReality.Input.IMotionController::_obj
	ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3, ____obj_0)); }
	inline ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.MixedReality.Input.IMotionControllerReading
struct IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl> Microsoft.MixedReality.Input.IMotionControllerReading::_obj
	ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400, ____obj_0)); }
	inline ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.MixedReality.Input.IMotionControllerWatcher
struct IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl> Microsoft.MixedReality.Input.IMotionControllerWatcher::_obj
	ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ____obj_0;
	// WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController> Microsoft.MixedReality.Input.IMotionControllerWatcher::MotionControllerAdded
	EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * ___MotionControllerAdded_1;
	// WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController> Microsoft.MixedReality.Input.IMotionControllerWatcher::MotionControllerRemoved
	EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * ___MotionControllerRemoved_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC, ____obj_0)); }
	inline ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of_MotionControllerAdded_1() { return static_cast<int32_t>(offsetof(IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC, ___MotionControllerAdded_1)); }
	inline EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * get_MotionControllerAdded_1() const { return ___MotionControllerAdded_1; }
	inline EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC ** get_address_of_MotionControllerAdded_1() { return &___MotionControllerAdded_1; }
	inline void set_MotionControllerAdded_1(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * value)
	{
		___MotionControllerAdded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MotionControllerAdded_1), (void*)value);
	}

	inline static int32_t get_offset_of_MotionControllerRemoved_2() { return static_cast<int32_t>(offsetof(IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC, ___MotionControllerRemoved_2)); }
	inline EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * get_MotionControllerRemoved_2() const { return ___MotionControllerRemoved_2; }
	inline EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC ** get_address_of_MotionControllerRemoved_2() { return &___MotionControllerRemoved_2; }
	inline void set_MotionControllerRemoved_2(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * value)
	{
		___MotionControllerRemoved_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MotionControllerRemoved_2), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// WinRT.Mono
struct Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784  : public RuntimeObject
{
public:

public:
};

struct Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_StaticFields
{
public:
	// System.Lazy`1<System.Boolean> WinRT.Mono::_usingMono
	Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * ____usingMono_0;

public:
	inline static int32_t get_offset_of__usingMono_0() { return static_cast<int32_t>(offsetof(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_StaticFields, ____usingMono_0)); }
	inline Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * get__usingMono_0() const { return ____usingMono_0; }
	inline Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 ** get_address_of__usingMono_0() { return &____usingMono_0; }
	inline void set__usingMono_0(Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * value)
	{
		____usingMono_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____usingMono_0), (void*)value);
	}
};


// Microsoft.MixedReality.Input.MotionController
struct MotionController_tC07D829713E1599CF51DA2E9478F931657E67761  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Input.IMotionController Microsoft.MixedReality.Input.MotionController::_interface
	IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(MotionController_tC07D829713E1599CF51DA2E9478F931657E67761, ____interface_0)); }
	inline IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * get__interface_0() const { return ____interface_0; }
	inline IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// Microsoft.MixedReality.Input.MotionControllerReading
struct MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Input.IMotionControllerReading Microsoft.MixedReality.Input.MotionControllerReading::_interface
	IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA, ____interface_0)); }
	inline IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * get__interface_0() const { return ____interface_0; }
	inline IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// Microsoft.MixedReality.Input.MotionControllerWatcher
struct MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Input.IMotionControllerWatcher Microsoft.MixedReality.Input.MotionControllerWatcher::_interface
	IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09, ____interface_0)); }
	inline IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * get__interface_0() const { return ____interface_0; }
	inline IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
	}
};


// WinRT.Platform
struct Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1  : public RuntimeObject
{
public:

public:
};

struct Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields
{
public:
	// WinRT.Platform/IPlatformLinkage WinRT.Platform::_platformLinkage
	RuntimeObject* ____platformLinkage_0;

public:
	inline static int32_t get_offset_of__platformLinkage_0() { return static_cast<int32_t>(offsetof(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields, ____platformLinkage_0)); }
	inline RuntimeObject* get__platformLinkage_0() const { return ____platformLinkage_0; }
	inline RuntimeObject** get_address_of__platformLinkage_0() { return &____platformLinkage_0; }
	inline void set__platformLinkage_0(RuntimeObject* value)
	{
		____platformLinkage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____platformLinkage_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// WinRT.Delegate/InitialReference
struct InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55  : public RuntimeObject
{
public:
	// WinRT.Delegate WinRT.Delegate/InitialReference::_delegate
	Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55, ____delegate_0)); }
	inline Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delegate_0), (void*)value);
	}
};


// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8  : public RuntimeObject
{
public:
	// System.Int32 WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::status
	int32_t ___status_0;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}
};


// Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c
struct U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields
{
public:
	// Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<>9
	U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * ___U3CU3E9_0;
	// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController> Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<>9__4_0
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * ___U3CU3E9__4_0_1;
	// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController> Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<>9__4_1
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * ___U3CU3E9__4_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields, ___U3CU3E9__4_0_1)); }
	inline UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields, ___U3CU3E9__4_1_2)); }
	inline UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * get_U3CU3E9__4_1_2() const { return ___U3CU3E9__4_1_2; }
	inline UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 ** get_address_of_U3CU3E9__4_1_2() { return &___U3CU3E9__4_1_2; }
	inline void set_U3CU3E9__4_1_2(UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * value)
	{
		___U3CU3E9__4_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_2), (void*)value);
	}
};


// WinRT.Mono/<>c
struct U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_StaticFields
{
public:
	// WinRT.Mono/<>c WinRT.Mono/<>c::<>9
	U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C  : public RuntimeObject
{
public:

public:
};


// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351  : public RuntimeObject
{
public:

public:
};


// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task,WinRT.Interop.VoidResult>
struct _IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D  : public IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
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
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// WinRT.Interop.EventRegistrationToken
struct EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 
{
public:
	// System.Int64 WinRT.Interop.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// WinRT.Interop.IAsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t736AFA34238BBB11BCB8944DF95E7F8D33D46EAC 
{
public:
	static const Il2CppGuid CLSID;

public:
	union
	{
		struct
		{
		};
		uint8_t IAsyncActionCompletedHandler_t736AFA34238BBB11BCB8944DF95E7F8D33D46EAC__padding[1];
	};

public:
};


// Microsoft.MixedReality.Input.IMotionControllerHandler
struct IMotionControllerHandler_t56D0E4B3B11DAC691B356E4A1473BA3D87E2BEBB 
{
public:
	static const Il2CppGuid CLSID;

public:
	union
	{
		struct
		{
		};
		uint8_t IMotionControllerHandler_t56D0E4B3B11DAC691B356E4A1473BA3D87E2BEBB__padding[1];
	};

public:
};


// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t5E373D5F2713F88800A00AC29C398E679178043A * ___Release_2;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D, ___QueryInterface_0)); }
	inline _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 ** get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * value)
	{
		___QueryInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D, ___AddRef_1)); }
	inline _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * get_AddRef_1() const { return ___AddRef_1; }
	inline _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 ** get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * value)
	{
		___AddRef_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddRef_1), (void*)value);
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D, ___Release_2)); }
	inline _Release_t5E373D5F2713F88800A00AC29C398E679178043A * get_Release_2() const { return ___Release_2; }
	inline _Release_t5E373D5F2713F88800A00AC29C398E679178043A ** get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(_Release_t5E373D5F2713F88800A00AC29C398E679178043A * value)
	{
		___Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Release_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// WinRT.Interop.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type WinRT.Interop.MonoPInvokeCallbackAttribute::<DelegateType>k__BackingField
	Type_t * ___U3CDelegateTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDelegateTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078, ___U3CDelegateTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CDelegateTypeU3Ek__BackingField_0() const { return ___U3CDelegateTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CDelegateTypeU3Ek__BackingField_0() { return &___U3CDelegateTypeU3Ek__BackingField_0; }
	inline void set_U3CDelegateTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CDelegateTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDelegateTypeU3Ek__BackingField_0), (void*)value);
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
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
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// System.Numerics.Vector2
struct Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B 
{
public:
	// System.Single System.Numerics.Vector2::X
	float ___X_0;
	// System.Single System.Numerics.Vector2::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// WinRT.Interop.VoidResult
struct VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1__padding[1];
	};

public:
};


// WinRT.Interop._DateTime
struct _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D 
{
public:
	// System.Int64 WinRT.Interop._DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// WinRT.Interop._TimeSpan
struct _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 
{
public:
	// System.Int64 WinRT.Interop._TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(_TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};


// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73  : public RuntimeObject
{
public:
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.DelegateProperty`1::_get_Delegate
	_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * ____get_Delegate_0;
	// WinRT.Interop._put_PropertyAsObject WinRT.Interop.DelegateProperty`1::_put_Delegate
	_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * ____put_Delegate_1;
	// System.Guid WinRT.Interop.DelegateProperty`1::_iid
	Guid_t  ____iid_2;
	// WinRT.IObjectReference WinRT.Interop.DelegateProperty`1::_obj
	IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ____obj_3;
	// System.IntPtr WinRT.Interop.DelegateProperty`1::_invokerPtr
	intptr_t ____invokerPtr_4;
	// T WinRT.Interop.DelegateProperty`1::_delegate
	CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * ____delegate_5;
	// System.IntPtr WinRT.Interop.DelegateProperty`1::_delegatePtr
	intptr_t ____delegatePtr_6;

public:
	inline static int32_t get_offset_of__get_Delegate_0() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____get_Delegate_0)); }
	inline _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * get__get_Delegate_0() const { return ____get_Delegate_0; }
	inline _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 ** get_address_of__get_Delegate_0() { return &____get_Delegate_0; }
	inline void set__get_Delegate_0(_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * value)
	{
		____get_Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____get_Delegate_0), (void*)value);
	}

	inline static int32_t get_offset_of__put_Delegate_1() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____put_Delegate_1)); }
	inline _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * get__put_Delegate_1() const { return ____put_Delegate_1; }
	inline _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 ** get_address_of__put_Delegate_1() { return &____put_Delegate_1; }
	inline void set__put_Delegate_1(_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * value)
	{
		____put_Delegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____put_Delegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__iid_2() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____iid_2)); }
	inline Guid_t  get__iid_2() const { return ____iid_2; }
	inline Guid_t * get_address_of__iid_2() { return &____iid_2; }
	inline void set__iid_2(Guid_t  value)
	{
		____iid_2 = value;
	}

	inline static int32_t get_offset_of__obj_3() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____obj_3)); }
	inline IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * get__obj_3() const { return ____obj_3; }
	inline IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 ** get_address_of__obj_3() { return &____obj_3; }
	inline void set__obj_3(IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * value)
	{
		____obj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_3), (void*)value);
	}

	inline static int32_t get_offset_of__invokerPtr_4() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____invokerPtr_4)); }
	inline intptr_t get__invokerPtr_4() const { return ____invokerPtr_4; }
	inline intptr_t* get_address_of__invokerPtr_4() { return &____invokerPtr_4; }
	inline void set__invokerPtr_4(intptr_t value)
	{
		____invokerPtr_4 = value;
	}

	inline static int32_t get_offset_of__delegate_5() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____delegate_5)); }
	inline CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * get__delegate_5() const { return ____delegate_5; }
	inline CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 ** get_address_of__delegate_5() { return &____delegate_5; }
	inline void set__delegate_5(CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * value)
	{
		____delegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__delegatePtr_6() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73, ____delegatePtr_6)); }
	inline intptr_t get__delegatePtr_6() const { return ____delegatePtr_6; }
	inline intptr_t* get_address_of__delegatePtr_6() { return &____delegatePtr_6; }
	inline void set__delegatePtr_6(intptr_t value)
	{
		____delegatePtr_6 = value;
	}
};


// WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>
struct EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC  : public EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4
{
public:
	// S WinRT.EventSource`3::Sender
	MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * ___Sender_1;
	// WinRT.IObjectReference WinRT.EventSource`3::_obj
	IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ____obj_2;
	// WinRT.Interop._add_EventHandler WinRT.EventSource`3::_addHandler
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * ____addHandler_3;
	// WinRT.Interop._remove_EventHandler WinRT.EventSource`3::_removeHandler
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * ____removeHandler_4;
	// WinRT.EventSource`3/UnmarshalArgs<I,S,A> WinRT.EventSource`3::_unmarshalArgs
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * ____unmarshalArgs_5;
	// WinRT.EventSource/_Invoke WinRT.EventSource`3::_invoker
	_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * ____invoker_6;
	// WinRT.Interop.EventRegistrationToken WinRT.EventSource`3::_token
	EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  ____token_7;
	// System.EventHandler`1<A> WinRT.EventSource`3::_event
	EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ____event_8;

public:
	inline static int32_t get_offset_of_Sender_1() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ___Sender_1)); }
	inline MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * get_Sender_1() const { return ___Sender_1; }
	inline MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 ** get_address_of_Sender_1() { return &___Sender_1; }
	inline void set_Sender_1(MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * value)
	{
		___Sender_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sender_1), (void*)value);
	}

	inline static int32_t get_offset_of__obj_2() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____obj_2)); }
	inline IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * get__obj_2() const { return ____obj_2; }
	inline IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 ** get_address_of__obj_2() { return &____obj_2; }
	inline void set__obj_2(IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * value)
	{
		____obj_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_2), (void*)value);
	}

	inline static int32_t get_offset_of__addHandler_3() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____addHandler_3)); }
	inline _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * get__addHandler_3() const { return ____addHandler_3; }
	inline _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 ** get_address_of__addHandler_3() { return &____addHandler_3; }
	inline void set__addHandler_3(_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * value)
	{
		____addHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of__removeHandler_4() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____removeHandler_4)); }
	inline _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * get__removeHandler_4() const { return ____removeHandler_4; }
	inline _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 ** get_address_of__removeHandler_4() { return &____removeHandler_4; }
	inline void set__removeHandler_4(_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * value)
	{
		____removeHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____removeHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of__unmarshalArgs_5() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____unmarshalArgs_5)); }
	inline UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * get__unmarshalArgs_5() const { return ____unmarshalArgs_5; }
	inline UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 ** get_address_of__unmarshalArgs_5() { return &____unmarshalArgs_5; }
	inline void set__unmarshalArgs_5(UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * value)
	{
		____unmarshalArgs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unmarshalArgs_5), (void*)value);
	}

	inline static int32_t get_offset_of__invoker_6() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____invoker_6)); }
	inline _Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * get__invoker_6() const { return ____invoker_6; }
	inline _Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 ** get_address_of__invoker_6() { return &____invoker_6; }
	inline void set__invoker_6(_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * value)
	{
		____invoker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invoker_6), (void*)value);
	}

	inline static int32_t get_offset_of__token_7() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____token_7)); }
	inline EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  get__token_7() const { return ____token_7; }
	inline EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * get_address_of__token_7() { return &____token_7; }
	inline void set__token_7(EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  value)
	{
		____token_7 = value;
	}

	inline static int32_t get_offset_of__event_8() { return static_cast<int32_t>(offsetof(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC, ____event_8)); }
	inline EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * get__event_8() const { return ____event_8; }
	inline EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 ** get_address_of__event_8() { return &____event_8; }
	inline void set__event_8(EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * value)
	{
		____event_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_8), (void*)value);
	}
};


// System.WeakReference`1<WinRT.DllModule>
struct WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031, ___handle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// WinRT.AsyncStatus
struct AsyncStatus_t20EA1365C133747175AAEA6A99CA403E4197559D 
{
public:
	// System.Int32 WinRT.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t20EA1365C133747175AAEA6A99CA403E4197559D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// Microsoft.MixedReality.Input.ControllerInput
struct ControllerInput_t1EA4993F53A1F5F8223B35C6C63099FB01A3D0B4 
{
public:
	// System.Int32 Microsoft.MixedReality.Input.ControllerInput::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControllerInput_t1EA4993F53A1F5F8223B35C6C63099FB01A3D0B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Threading.EventResetMode
struct EventResetMode_tB7B112299A76E5476A66C3EBCBACC1870EB342A8 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventResetMode_tB7B112299A76E5476A66C3EBCBACC1870EB342A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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

// WinRT.HString
struct HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.HString::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Microsoft.MixedReality.Input.Handedness
struct Handedness_tA4426268CC171D8C69513F92150F99A280EB950A 
{
public:
	// System.Int32 Microsoft.MixedReality.Input.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA4426268CC171D8C69513F92150F99A280EB950A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IAgileObjectVftbl::IUnknownVftbl
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ___IUnknownVftbl_0;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		___IUnknownVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_pinvoke
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke ___IUnknownVftbl_0;
};
// Native definition for COM marshalling of WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_com
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com ___IUnknownVftbl_0;
};

// WinRT.Interop.IAsyncAction
struct IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C  : public _IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D
{
public:
	// WinRT.Interop._method0 WinRT.Interop.IAsyncAction::_GetResults
	_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * ____GetResults_3;

public:
	inline static int32_t get_offset_of__GetResults_3() { return static_cast<int32_t>(offsetof(IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C, ____GetResults_3)); }
	inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * get__GetResults_3() const { return ____GetResults_3; }
	inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 ** get_address_of__GetResults_3() { return &____GetResults_3; }
	inline void set__GetResults_3(_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * value)
	{
		____GetResults_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GetResults_3), (void*)value);
	}
};


// WinRT.Interop.IDelegateVftbl
struct IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164 
{
public:
	// System.IntPtr WinRT.Interop.IDelegateVftbl::QueryInterface
	intptr_t ___QueryInterface_0;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::AddRef
	intptr_t ___AddRef_1;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::Release
	intptr_t ___Release_2;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::Invoke
	intptr_t ___Invoke_3;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164, ___QueryInterface_0)); }
	inline intptr_t get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline intptr_t* get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(intptr_t value)
	{
		___QueryInterface_0 = value;
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164, ___AddRef_1)); }
	inline intptr_t get_AddRef_1() const { return ___AddRef_1; }
	inline intptr_t* get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(intptr_t value)
	{
		___AddRef_1 = value;
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164, ___Release_2)); }
	inline intptr_t get_Release_2() const { return ___Release_2; }
	inline intptr_t* get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(intptr_t value)
	{
		___Release_2 = value;
	}

	inline static int32_t get_offset_of_Invoke_3() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164, ___Invoke_3)); }
	inline intptr_t get_Invoke_3() const { return ___Invoke_3; }
	inline intptr_t* get_address_of_Invoke_3() { return &___Invoke_3; }
	inline void set_Invoke_3(intptr_t value)
	{
		___Invoke_3 = value;
	}
};


// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl/_GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl/_GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * ___GetTrustLevel_3;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		___IUnknownVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetIids_1() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82, ___GetIids_1)); }
	inline _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * get_GetIids_1() const { return ___GetIids_1; }
	inline _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A ** get_address_of_GetIids_1() { return &___GetIids_1; }
	inline void set_GetIids_1(_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * value)
	{
		___GetIids_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetIids_1), (void*)value);
	}

	inline static int32_t get_offset_of_GetRuntimeClassName_2() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82, ___GetRuntimeClassName_2)); }
	inline _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * get_GetRuntimeClassName_2() const { return ___GetRuntimeClassName_2; }
	inline _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF ** get_address_of_GetRuntimeClassName_2() { return &___GetRuntimeClassName_2; }
	inline void set_GetRuntimeClassName_2(_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * value)
	{
		___GetRuntimeClassName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRuntimeClassName_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrustLevel_3() { return static_cast<int32_t>(offsetof(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82, ___GetTrustLevel_3)); }
	inline _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * get_GetTrustLevel_3() const { return ___GetTrustLevel_3; }
	inline _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 ** get_address_of_GetTrustLevel_3() { return &___GetTrustLevel_3; }
	inline void set_GetTrustLevel_3(_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * value)
	{
		___GetTrustLevel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrustLevel_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};

// WinRT.ModuleReference
struct ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 
{
public:
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject * ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543, ____module_0)); }
	inline RuntimeObject * get__module_0() const { return ____module_0; }
	inline RuntimeObject ** get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(RuntimeObject * value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____module_0), (void*)value);
	}

	inline static int32_t get_offset_of__refCountPtr_1() { return static_cast<int32_t>(offsetof(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543, ____refCountPtr_1)); }
	inline int32_t* get__refCountPtr_1() const { return ____refCountPtr_1; }
	inline int32_t** get_address_of__refCountPtr_1() { return &____refCountPtr_1; }
	inline void set__refCountPtr_1(int32_t* value)
	{
		____refCountPtr_1 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_2() { return static_cast<int32_t>(offsetof(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543, ____nativeHandle_2)); }
	inline intptr_t get__nativeHandle_2() const { return ____nativeHandle_2; }
	inline intptr_t* get_address_of__nativeHandle_2() { return &____nativeHandle_2; }
	inline void set__nativeHandle_2(intptr_t value)
	{
		____nativeHandle_2 = value;
	}
};

// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// WinRT.TrustLevel
struct TrustLevel_tA12630A98EA69E05C487F31CB929299EF46F157E 
{
public:
	// System.Int32 WinRT.TrustLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrustLevel_tA12630A98EA69E05C487F31CB929299EF46F157E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WinRT.VftblPtr
struct VftblPtr_t88FFF6F0429229A881FB642BE9E2045AE3C87069 
{
public:
	// System.IntPtr WinRT.VftblPtr::Vftbl
	intptr_t ___Vftbl_0;

public:
	inline static int32_t get_offset_of_Vftbl_0() { return static_cast<int32_t>(offsetof(VftblPtr_t88FFF6F0429229A881FB642BE9E2045AE3C87069, ___Vftbl_0)); }
	inline intptr_t get_Vftbl_0() const { return ___Vftbl_0; }
	inline intptr_t* get_address_of_Vftbl_0() { return &___Vftbl_0; }
	inline void set_Vftbl_0(intptr_t value)
	{
		___Vftbl_0 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// WinRT.Delegate/UnmanagedObject
struct UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B 
{
public:
	// System.IntPtr WinRT.Delegate/UnmanagedObject::_vftblPtr
	intptr_t ____vftblPtr_0;
	// System.IntPtr WinRT.Delegate/UnmanagedObject::_gchandlePtr
	intptr_t ____gchandlePtr_1;

public:
	inline static int32_t get_offset_of__vftblPtr_0() { return static_cast<int32_t>(offsetof(UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B, ____vftblPtr_0)); }
	inline intptr_t get__vftblPtr_0() const { return ____vftblPtr_0; }
	inline intptr_t* get_address_of__vftblPtr_0() { return &____vftblPtr_0; }
	inline void set__vftblPtr_0(intptr_t value)
	{
		____vftblPtr_0 = value;
	}

	inline static int32_t get_offset_of__gchandlePtr_1() { return static_cast<int32_t>(offsetof(UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B, ____gchandlePtr_1)); }
	inline intptr_t get__gchandlePtr_1() const { return ____gchandlePtr_1; }
	inline intptr_t* get_address_of__gchandlePtr_1() { return &____gchandlePtr_1; }
	inline void set__gchandlePtr_1(intptr_t value)
	{
		____gchandlePtr_1 = value;
	}
};


// WinRT.EventSource/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.EventSource/<>c__DisplayClass1_0::senderPtr
	intptr_t ___senderPtr_0;
	// System.IntPtr WinRT.EventSource/<>c__DisplayClass1_0::argsPtr
	intptr_t ___argsPtr_1;

public:
	inline static int32_t get_offset_of_senderPtr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16, ___senderPtr_0)); }
	inline intptr_t get_senderPtr_0() const { return ___senderPtr_0; }
	inline intptr_t* get_address_of_senderPtr_0() { return &___senderPtr_0; }
	inline void set_senderPtr_0(intptr_t value)
	{
		___senderPtr_0 = value;
	}

	inline static int32_t get_offset_of_argsPtr_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16, ___argsPtr_1)); }
	inline intptr_t get_argsPtr_1() const { return ___argsPtr_1; }
	inline intptr_t* get_address_of_argsPtr_1() { return &___argsPtr_1; }
	inline void set_argsPtr_1(intptr_t value)
	{
		___argsPtr_1 = value;
	}
};


// WinRT.Mono/ThreadContext
struct ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026  : public RuntimeObject
{
public:

public:
};

struct ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields
{
public:
	// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>> WinRT.Mono/ThreadContext::_foreignThreads
	Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * ____foreignThreads_0;
	// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>> WinRT.Mono/ThreadContext::_presumedNonForeignThreads
	Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * ____presumedNonForeignThreads_1;
	// System.Threading.EventWaitHandle WinRT.Mono/ThreadContext::_threadCleanupRequested
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ____threadCleanupRequested_2;
	// System.Threading.EventWaitHandle WinRT.Mono/ThreadContext::_threadCleanupCompleted
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ____threadCleanupCompleted_3;
	// System.IntPtr WinRT.Mono/ThreadContext::_monoSupportHandle
	intptr_t ____monoSupportHandle_4;
	// WinRT.Mono/mono_thread_cleanup_register WinRT.Mono/ThreadContext::_cleanupRegister
	mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * ____cleanupRegister_5;

public:
	inline static int32_t get_offset_of__foreignThreads_0() { return static_cast<int32_t>(offsetof(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields, ____foreignThreads_0)); }
	inline Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * get__foreignThreads_0() const { return ____foreignThreads_0; }
	inline Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 ** get_address_of__foreignThreads_0() { return &____foreignThreads_0; }
	inline void set__foreignThreads_0(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * value)
	{
		____foreignThreads_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____foreignThreads_0), (void*)value);
	}

	inline static int32_t get_offset_of__presumedNonForeignThreads_1() { return static_cast<int32_t>(offsetof(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields, ____presumedNonForeignThreads_1)); }
	inline Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * get__presumedNonForeignThreads_1() const { return ____presumedNonForeignThreads_1; }
	inline Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 ** get_address_of__presumedNonForeignThreads_1() { return &____presumedNonForeignThreads_1; }
	inline void set__presumedNonForeignThreads_1(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * value)
	{
		____presumedNonForeignThreads_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____presumedNonForeignThreads_1), (void*)value);
	}

	inline static int32_t get_offset_of__threadCleanupRequested_2() { return static_cast<int32_t>(offsetof(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields, ____threadCleanupRequested_2)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get__threadCleanupRequested_2() const { return ____threadCleanupRequested_2; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of__threadCleanupRequested_2() { return &____threadCleanupRequested_2; }
	inline void set__threadCleanupRequested_2(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		____threadCleanupRequested_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadCleanupRequested_2), (void*)value);
	}

	inline static int32_t get_offset_of__threadCleanupCompleted_3() { return static_cast<int32_t>(offsetof(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields, ____threadCleanupCompleted_3)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get__threadCleanupCompleted_3() const { return ____threadCleanupCompleted_3; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of__threadCleanupCompleted_3() { return &____threadCleanupCompleted_3; }
	inline void set__threadCleanupCompleted_3(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		____threadCleanupCompleted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadCleanupCompleted_3), (void*)value);
	}

	inline static int32_t get_offset_of__monoSupportHandle_4() { return static_cast<int32_t>(offsetof(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields, ____monoSupportHandle_4)); }
	inline intptr_t get__monoSupportHandle_4() const { return ____monoSupportHandle_4; }
	inline intptr_t* get_address_of__monoSupportHandle_4() { return &____monoSupportHandle_4; }
	inline void set__monoSupportHandle_4(intptr_t value)
	{
		____monoSupportHandle_4 = value;
	}

	inline static int32_t get_offset_of__cleanupRegister_5() { return static_cast<int32_t>(offsetof(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields, ____cleanupRegister_5)); }
	inline mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * get__cleanupRegister_5() const { return ____cleanupRegister_5; }
	inline mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB ** get_address_of__cleanupRegister_5() { return &____cleanupRegister_5; }
	inline void set__cleanupRegister_5(mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * value)
	{
		____cleanupRegister_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cleanupRegister_5), (void*)value);
	}
};


// WinRT.Delegate
struct Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1  : public RuntimeObject
{
public:
	// System.Int32 WinRT.Delegate::_refs
	int32_t ____refs_0;
	// System.IntPtr WinRT.Delegate::ThisPtr
	intptr_t ___ThisPtr_1;
	// System.Guid WinRT.Delegate::_iid
	Guid_t  ____iid_2;
	// WinRT.ModuleReference WinRT.Delegate::_module
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ____module_7;
	// System.Runtime.InteropServices.GCHandle WinRT.Delegate::_thisHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____thisHandle_8;
	// System.WeakReference WinRT.Delegate::_weakInvoker
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ____weakInvoker_9;
	// WinRT.Delegate/UnmanagedObject WinRT.Delegate::_unmanagedObj
	UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  ____unmanagedObj_10;

public:
	inline static int32_t get_offset_of__refs_0() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ____refs_0)); }
	inline int32_t get__refs_0() const { return ____refs_0; }
	inline int32_t* get_address_of__refs_0() { return &____refs_0; }
	inline void set__refs_0(int32_t value)
	{
		____refs_0 = value;
	}

	inline static int32_t get_offset_of_ThisPtr_1() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ___ThisPtr_1)); }
	inline intptr_t get_ThisPtr_1() const { return ___ThisPtr_1; }
	inline intptr_t* get_address_of_ThisPtr_1() { return &___ThisPtr_1; }
	inline void set_ThisPtr_1(intptr_t value)
	{
		___ThisPtr_1 = value;
	}

	inline static int32_t get_offset_of__iid_2() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ____iid_2)); }
	inline Guid_t  get__iid_2() const { return ____iid_2; }
	inline Guid_t * get_address_of__iid_2() { return &____iid_2; }
	inline void set__iid_2(Guid_t  value)
	{
		____iid_2 = value;
	}

	inline static int32_t get_offset_of__module_7() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ____module_7)); }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  get__module_7() const { return ____module_7; }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * get_address_of__module_7() { return &____module_7; }
	inline void set__module_7(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  value)
	{
		____module_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____module_7))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__thisHandle_8() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ____thisHandle_8)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__thisHandle_8() const { return ____thisHandle_8; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__thisHandle_8() { return &____thisHandle_8; }
	inline void set__thisHandle_8(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____thisHandle_8 = value;
	}

	inline static int32_t get_offset_of__weakInvoker_9() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ____weakInvoker_9)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get__weakInvoker_9() const { return ____weakInvoker_9; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of__weakInvoker_9() { return &____weakInvoker_9; }
	inline void set__weakInvoker_9(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		____weakInvoker_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____weakInvoker_9), (void*)value);
	}

	inline static int32_t get_offset_of__unmanagedObj_10() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1, ____unmanagedObj_10)); }
	inline UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  get__unmanagedObj_10() const { return ____unmanagedObj_10; }
	inline UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B * get_address_of__unmanagedObj_10() { return &____unmanagedObj_10; }
	inline void set__unmanagedObj_10(UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  value)
	{
		____unmanagedObj_10 = value;
	}
};

struct Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields
{
public:
	// WinRT.Interop.IUnknownVftbl/_QueryInterface WinRT.Delegate::_QueryInterface
	_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * ____QueryInterface_3;
	// WinRT.Interop.IUnknownVftbl/_AddRef WinRT.Delegate::_AddRef
	_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * ____AddRef_4;
	// WinRT.Interop.IUnknownVftbl/_Release WinRT.Delegate::_Release
	_Release_t5E373D5F2713F88800A00AC29C398E679178043A * ____Release_5;
	// WinRT.Interop.IDelegateVftbl WinRT.Delegate::_vftblTemplate
	IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  ____vftblTemplate_6;

public:
	inline static int32_t get_offset_of__QueryInterface_3() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields, ____QueryInterface_3)); }
	inline _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * get__QueryInterface_3() const { return ____QueryInterface_3; }
	inline _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 ** get_address_of__QueryInterface_3() { return &____QueryInterface_3; }
	inline void set__QueryInterface_3(_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * value)
	{
		____QueryInterface_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____QueryInterface_3), (void*)value);
	}

	inline static int32_t get_offset_of__AddRef_4() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields, ____AddRef_4)); }
	inline _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * get__AddRef_4() const { return ____AddRef_4; }
	inline _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 ** get_address_of__AddRef_4() { return &____AddRef_4; }
	inline void set__AddRef_4(_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * value)
	{
		____AddRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AddRef_4), (void*)value);
	}

	inline static int32_t get_offset_of__Release_5() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields, ____Release_5)); }
	inline _Release_t5E373D5F2713F88800A00AC29C398E679178043A * get__Release_5() const { return ____Release_5; }
	inline _Release_t5E373D5F2713F88800A00AC29C398E679178043A ** get_address_of__Release_5() { return &____Release_5; }
	inline void set__Release_5(_Release_t5E373D5F2713F88800A00AC29C398E679178043A * value)
	{
		____Release_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Release_5), (void*)value);
	}

	inline static int32_t get_offset_of__vftblTemplate_6() { return static_cast<int32_t>(offsetof(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields, ____vftblTemplate_6)); }
	inline IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  get__vftblTemplate_6() const { return ____vftblTemplate_6; }
	inline IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164 * get_address_of__vftblTemplate_6() { return &____vftblTemplate_6; }
	inline void set__vftblTemplate_6(IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  value)
	{
		____vftblTemplate_6 = value;
	}
};


// WinRT.DllModule
struct DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1  : public RuntimeObject
{
public:
	// System.String WinRT.DllModule::_fileName
	String_t* ____fileName_0;
	// WinRT.ModuleReference WinRT.DllModule::_moduleHandle
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ____moduleHandle_1;
	// WinRT.DllModule/DllGetActivationFactory WinRT.DllModule::_GetActivationFactory
	DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * ____GetActivationFactory_2;

public:
	inline static int32_t get_offset_of__fileName_0() { return static_cast<int32_t>(offsetof(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1, ____fileName_0)); }
	inline String_t* get__fileName_0() const { return ____fileName_0; }
	inline String_t** get_address_of__fileName_0() { return &____fileName_0; }
	inline void set__fileName_0(String_t* value)
	{
		____fileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_0), (void*)value);
	}

	inline static int32_t get_offset_of__moduleHandle_1() { return static_cast<int32_t>(offsetof(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1, ____moduleHandle_1)); }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  get__moduleHandle_1() const { return ____moduleHandle_1; }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * get_address_of__moduleHandle_1() { return &____moduleHandle_1; }
	inline void set__moduleHandle_1(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  value)
	{
		____moduleHandle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____moduleHandle_1))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__GetActivationFactory_2() { return static_cast<int32_t>(offsetof(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1, ____GetActivationFactory_2)); }
	inline DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * get__GetActivationFactory_2() const { return ____GetActivationFactory_2; }
	inline DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 ** get_address_of__GetActivationFactory_2() { return &____GetActivationFactory_2; }
	inline void set__GetActivationFactory_2(DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * value)
	{
		____GetActivationFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GetActivationFactory_2), (void*)value);
	}
};

struct DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>> WinRT.DllModule::_cache
	Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * ____cache_3;

public:
	inline static int32_t get_offset_of__cache_3() { return static_cast<int32_t>(offsetof(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_StaticFields, ____cache_3)); }
	inline Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * get__cache_3() const { return ____cache_3; }
	inline Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 ** get_address_of__cache_3() { return &____cache_3; }
	inline void set__cache_3(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * value)
	{
		____cache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cache_3), (void*)value);
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IActivationFactoryVftbl::IInspectableVftbl
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  ___IInspectableVftbl_0;
	// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance WinRT.Interop.IActivationFactoryVftbl::ActivateInstance
	_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * ___ActivateInstance_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ActivateInstance_1() { return static_cast<int32_t>(offsetof(IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258, ___ActivateInstance_1)); }
	inline _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * get_ActivateInstance_1() const { return ___ActivateInstance_1; }
	inline _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 ** get_address_of_ActivateInstance_1() { return &___ActivateInstance_1; }
	inline void set_ActivateInstance_1(_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * value)
	{
		___ActivateInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActivateInstance_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_pinvoke
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___ActivateInstance_1;
};
// Native definition for COM marshalling of WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_com
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___ActivateInstance_1;
};

// WinRT.IObjectReference
struct IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ___U3CVftblIUnknownU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_ThisPtr_0() { return static_cast<int32_t>(offsetof(IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043, ___ThisPtr_0)); }
	inline intptr_t get_ThisPtr_0() const { return ___ThisPtr_0; }
	inline intptr_t* get_address_of_ThisPtr_0() { return &___ThisPtr_0; }
	inline void set_ThisPtr_0(intptr_t value)
	{
		___ThisPtr_0 = value;
	}

	inline static int32_t get_offset_of_Module_1() { return static_cast<int32_t>(offsetof(IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043, ___Module_1)); }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  get_Module_1() const { return ___Module_1; }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * get_address_of_Module_1() { return &___Module_1; }
	inline void set_Module_1(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  value)
	{
		___Module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Module_1))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CVftblIUnknownU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043, ___U3CVftblIUnknownU3Ek__BackingField_2)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get_U3CVftblIUnknownU3Ek__BackingField_2() const { return ___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of_U3CVftblIUnknownU3Ek__BackingField_2() { return &___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline void set_U3CVftblIUnknownU3Ek__BackingField_2(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		___U3CVftblIUnknownU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___Release_2), (void*)NULL);
		#endif
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
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


// WinRT.WinrtModule
struct WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F  : public RuntimeObject
{
public:
	// WinRT.ModuleReference WinRT.WinrtModule::_module
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ____module_0;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F, ____module_0)); }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  get__module_0() const { return ____module_0; }
	inline ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____module_0))->____module_0), (void*)NULL);
	}
};

struct WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_StaticFields
{
public:
	// WinRT.WeakLazy`1<WinRT.WinrtModule> WinRT.WinrtModule::_instance
	WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_StaticFields, ____instance_1)); }
	inline WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * get__instance_1() const { return ____instance_1; }
	inline WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IAsyncInfo/Vftbl::IInspectableVftbl
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsInt WinRT.Interop.IAsyncInfo/Vftbl::get_Id
	_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * ___get_Id_1;
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IAsyncInfo/Vftbl::get_Status
	_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * ___get_Status_2;
	// WinRT.Interop._get_PropertyAsInt WinRT.Interop.IAsyncInfo/Vftbl::get_ErrorCode
	_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * ___get_ErrorCode_3;
	// WinRT.Interop._method0 WinRT.Interop.IAsyncInfo/Vftbl::Cancel
	_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * ___Cancel_4;
	// WinRT.Interop._method0 WinRT.Interop.IAsyncInfo/Vftbl::Close
	_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * ___Close_5;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_Id_1() { return static_cast<int32_t>(offsetof(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6, ___get_Id_1)); }
	inline _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * get_get_Id_1() const { return ___get_Id_1; }
	inline _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C ** get_address_of_get_Id_1() { return &___get_Id_1; }
	inline void set_get_Id_1(_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * value)
	{
		___get_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Status_2() { return static_cast<int32_t>(offsetof(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6, ___get_Status_2)); }
	inline _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * get_get_Status_2() const { return ___get_Status_2; }
	inline _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 ** get_address_of_get_Status_2() { return &___get_Status_2; }
	inline void set_get_Status_2(_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * value)
	{
		___get_Status_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Status_2), (void*)value);
	}

	inline static int32_t get_offset_of_get_ErrorCode_3() { return static_cast<int32_t>(offsetof(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6, ___get_ErrorCode_3)); }
	inline _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * get_get_ErrorCode_3() const { return ___get_ErrorCode_3; }
	inline _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C ** get_address_of_get_ErrorCode_3() { return &___get_ErrorCode_3; }
	inline void set_get_ErrorCode_3(_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * value)
	{
		___get_ErrorCode_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_ErrorCode_3), (void*)value);
	}

	inline static int32_t get_offset_of_Cancel_4() { return static_cast<int32_t>(offsetof(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6, ___Cancel_4)); }
	inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * get_Cancel_4() const { return ___Cancel_4; }
	inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 ** get_address_of_Cancel_4() { return &___Cancel_4; }
	inline void set_Cancel_4(_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * value)
	{
		___Cancel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cancel_4), (void*)value);
	}

	inline static int32_t get_offset_of_Close_5() { return static_cast<int32_t>(offsetof(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6, ___Close_5)); }
	inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * get_Close_5() const { return ___Close_5; }
	inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 ** get_address_of_Close_5() { return &___Close_5; }
	inline void set_Close_5(_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * value)
	{
		___Close_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Close_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_pinvoke
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_Status_2;
	Il2CppMethodPointer ___get_ErrorCode_3;
	Il2CppMethodPointer ___Cancel_4;
	Il2CppMethodPointer ___Close_5;
};
// Native definition for COM marshalling of WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_com
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_Status_2;
	Il2CppMethodPointer ___get_ErrorCode_3;
	Il2CppMethodPointer ___Cancel_4;
	Il2CppMethodPointer ___Close_5;
};

// WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IAsyncOperation/Vftbl::IInspectableVftbl
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  ___IInspectableVftbl_0;
	// WinRT.Interop._put_PropertyAsObject WinRT.Interop.IAsyncOperation/Vftbl::put_Completed
	_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * ___put_Completed_1;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IAsyncOperation/Vftbl::get_Completed
	_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * ___get_Completed_2;
	// System.IntPtr WinRT.Interop.IAsyncOperation/Vftbl::GetResults
	intptr_t ___GetResults_3;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_put_Completed_1() { return static_cast<int32_t>(offsetof(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE, ___put_Completed_1)); }
	inline _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * get_put_Completed_1() const { return ___put_Completed_1; }
	inline _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 ** get_address_of_put_Completed_1() { return &___put_Completed_1; }
	inline void set_put_Completed_1(_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * value)
	{
		___put_Completed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___put_Completed_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Completed_2() { return static_cast<int32_t>(offsetof(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE, ___get_Completed_2)); }
	inline _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * get_get_Completed_2() const { return ___get_Completed_2; }
	inline _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 ** get_address_of_get_Completed_2() { return &___get_Completed_2; }
	inline void set_get_Completed_2(_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * value)
	{
		___get_Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Completed_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetResults_3() { return static_cast<int32_t>(offsetof(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE, ___GetResults_3)); }
	inline intptr_t get_GetResults_3() const { return ___GetResults_3; }
	inline intptr_t* get_address_of_GetResults_3() { return &___GetResults_3; }
	inline void set_GetResults_3(intptr_t value)
	{
		___GetResults_3 = value;
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_pinvoke
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___put_Completed_1;
	Il2CppMethodPointer ___get_Completed_2;
	intptr_t ___GetResults_3;
};
// Native definition for COM marshalling of WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_com
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___put_Completed_1;
	Il2CppMethodPointer ___get_Completed_2;
	intptr_t ___GetResults_3;
};

// Microsoft.MixedReality.Input.IMotionController/Vftbl
struct Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.Input.IMotionController/Vftbl::IInspectableVftbl
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.MixedReality.Input.IMotionController/Vftbl::get_Handedness
	_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * ___get_Handedness_1;
	// WinRT.Interop._get_PropertyAsUShort Microsoft.MixedReality.Input.IMotionController/Vftbl::get_VendorId
	_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * ___get_VendorId_2;
	// WinRT.Interop._get_PropertyAsUShort Microsoft.MixedReality.Input.IMotionController/Vftbl::get_ProductId
	_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * ___get_ProductId_3;
	// WinRT.Interop._get_PropertyAsUShort Microsoft.MixedReality.Input.IMotionController/Vftbl::get_Version
	_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * ___get_Version_4;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.MixedReality.Input.IMotionController/Vftbl::get_PressableInputsCount
	_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * ___get_PressableInputsCount_5;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs Microsoft.MixedReality.Input.IMotionController/Vftbl::GetPressableInputs
	_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * ___GetPressableInputs_6;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput Microsoft.MixedReality.Input.IMotionController/Vftbl::IsAnalogPressableInput
	_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * ___IsAnalogPressableInput_7;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.MixedReality.Input.IMotionController/Vftbl::get_ProximityInputsCount
	_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * ___get_ProximityInputsCount_8;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs Microsoft.MixedReality.Input.IMotionController/Vftbl::GetProximityInputs
	_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * ___GetProximityInputs_9;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.MixedReality.Input.IMotionController/Vftbl::get_XYInputsCount
	_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * ___get_XYInputsCount_10;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs Microsoft.MixedReality.Input.IMotionController/Vftbl::GetXYInputs
	_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * ___GetXYInputs_11;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime Microsoft.MixedReality.Input.IMotionController/Vftbl::TryGetReadingAtTime
	_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * ___TryGetReadingAtTime_12;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime Microsoft.MixedReality.Input.IMotionController/Vftbl::TryGetReadingAtSystemRelativeTime
	_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * ___TryGetReadingAtSystemRelativeTime_13;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime Microsoft.MixedReality.Input.IMotionController/Vftbl::TryGetReadingAfterTime
	_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * ___TryGetReadingAfterTime_14;
	// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime Microsoft.MixedReality.Input.IMotionController/Vftbl::TryGetReadingAfterSystemRelativeTime
	_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * ___TryGetReadingAfterSystemRelativeTime_15;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_Handedness_1() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_Handedness_1)); }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * get_get_Handedness_1() const { return ___get_Handedness_1; }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 ** get_address_of_get_Handedness_1() { return &___get_Handedness_1; }
	inline void set_get_Handedness_1(_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * value)
	{
		___get_Handedness_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Handedness_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_VendorId_2() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_VendorId_2)); }
	inline _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * get_get_VendorId_2() const { return ___get_VendorId_2; }
	inline _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF ** get_address_of_get_VendorId_2() { return &___get_VendorId_2; }
	inline void set_get_VendorId_2(_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * value)
	{
		___get_VendorId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_VendorId_2), (void*)value);
	}

	inline static int32_t get_offset_of_get_ProductId_3() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_ProductId_3)); }
	inline _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * get_get_ProductId_3() const { return ___get_ProductId_3; }
	inline _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF ** get_address_of_get_ProductId_3() { return &___get_ProductId_3; }
	inline void set_get_ProductId_3(_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * value)
	{
		___get_ProductId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_ProductId_3), (void*)value);
	}

	inline static int32_t get_offset_of_get_Version_4() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_Version_4)); }
	inline _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * get_get_Version_4() const { return ___get_Version_4; }
	inline _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF ** get_address_of_get_Version_4() { return &___get_Version_4; }
	inline void set_get_Version_4(_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * value)
	{
		___get_Version_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Version_4), (void*)value);
	}

	inline static int32_t get_offset_of_get_PressableInputsCount_5() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_PressableInputsCount_5)); }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * get_get_PressableInputsCount_5() const { return ___get_PressableInputsCount_5; }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 ** get_address_of_get_PressableInputsCount_5() { return &___get_PressableInputsCount_5; }
	inline void set_get_PressableInputsCount_5(_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * value)
	{
		___get_PressableInputsCount_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_PressableInputsCount_5), (void*)value);
	}

	inline static int32_t get_offset_of_GetPressableInputs_6() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___GetPressableInputs_6)); }
	inline _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * get_GetPressableInputs_6() const { return ___GetPressableInputs_6; }
	inline _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF ** get_address_of_GetPressableInputs_6() { return &___GetPressableInputs_6; }
	inline void set_GetPressableInputs_6(_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * value)
	{
		___GetPressableInputs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetPressableInputs_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsAnalogPressableInput_7() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___IsAnalogPressableInput_7)); }
	inline _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * get_IsAnalogPressableInput_7() const { return ___IsAnalogPressableInput_7; }
	inline _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 ** get_address_of_IsAnalogPressableInput_7() { return &___IsAnalogPressableInput_7; }
	inline void set_IsAnalogPressableInput_7(_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * value)
	{
		___IsAnalogPressableInput_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsAnalogPressableInput_7), (void*)value);
	}

	inline static int32_t get_offset_of_get_ProximityInputsCount_8() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_ProximityInputsCount_8)); }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * get_get_ProximityInputsCount_8() const { return ___get_ProximityInputsCount_8; }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 ** get_address_of_get_ProximityInputsCount_8() { return &___get_ProximityInputsCount_8; }
	inline void set_get_ProximityInputsCount_8(_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * value)
	{
		___get_ProximityInputsCount_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_ProximityInputsCount_8), (void*)value);
	}

	inline static int32_t get_offset_of_GetProximityInputs_9() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___GetProximityInputs_9)); }
	inline _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * get_GetProximityInputs_9() const { return ___GetProximityInputs_9; }
	inline _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF ** get_address_of_GetProximityInputs_9() { return &___GetProximityInputs_9; }
	inline void set_GetProximityInputs_9(_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * value)
	{
		___GetProximityInputs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetProximityInputs_9), (void*)value);
	}

	inline static int32_t get_offset_of_get_XYInputsCount_10() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___get_XYInputsCount_10)); }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * get_get_XYInputsCount_10() const { return ___get_XYInputsCount_10; }
	inline _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 ** get_address_of_get_XYInputsCount_10() { return &___get_XYInputsCount_10; }
	inline void set_get_XYInputsCount_10(_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * value)
	{
		___get_XYInputsCount_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_XYInputsCount_10), (void*)value);
	}

	inline static int32_t get_offset_of_GetXYInputs_11() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___GetXYInputs_11)); }
	inline _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * get_GetXYInputs_11() const { return ___GetXYInputs_11; }
	inline _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF ** get_address_of_GetXYInputs_11() { return &___GetXYInputs_11; }
	inline void set_GetXYInputs_11(_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * value)
	{
		___GetXYInputs_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetXYInputs_11), (void*)value);
	}

	inline static int32_t get_offset_of_TryGetReadingAtTime_12() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___TryGetReadingAtTime_12)); }
	inline _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * get_TryGetReadingAtTime_12() const { return ___TryGetReadingAtTime_12; }
	inline _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 ** get_address_of_TryGetReadingAtTime_12() { return &___TryGetReadingAtTime_12; }
	inline void set_TryGetReadingAtTime_12(_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * value)
	{
		___TryGetReadingAtTime_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryGetReadingAtTime_12), (void*)value);
	}

	inline static int32_t get_offset_of_TryGetReadingAtSystemRelativeTime_13() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___TryGetReadingAtSystemRelativeTime_13)); }
	inline _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * get_TryGetReadingAtSystemRelativeTime_13() const { return ___TryGetReadingAtSystemRelativeTime_13; }
	inline _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 ** get_address_of_TryGetReadingAtSystemRelativeTime_13() { return &___TryGetReadingAtSystemRelativeTime_13; }
	inline void set_TryGetReadingAtSystemRelativeTime_13(_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * value)
	{
		___TryGetReadingAtSystemRelativeTime_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryGetReadingAtSystemRelativeTime_13), (void*)value);
	}

	inline static int32_t get_offset_of_TryGetReadingAfterTime_14() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___TryGetReadingAfterTime_14)); }
	inline _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * get_TryGetReadingAfterTime_14() const { return ___TryGetReadingAfterTime_14; }
	inline _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 ** get_address_of_TryGetReadingAfterTime_14() { return &___TryGetReadingAfterTime_14; }
	inline void set_TryGetReadingAfterTime_14(_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * value)
	{
		___TryGetReadingAfterTime_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryGetReadingAfterTime_14), (void*)value);
	}

	inline static int32_t get_offset_of_TryGetReadingAfterSystemRelativeTime_15() { return static_cast<int32_t>(offsetof(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0, ___TryGetReadingAfterSystemRelativeTime_15)); }
	inline _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * get_TryGetReadingAfterSystemRelativeTime_15() const { return ___TryGetReadingAfterSystemRelativeTime_15; }
	inline _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 ** get_address_of_TryGetReadingAfterSystemRelativeTime_15() { return &___TryGetReadingAfterSystemRelativeTime_15; }
	inline void set_TryGetReadingAfterSystemRelativeTime_15(_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * value)
	{
		___TryGetReadingAfterSystemRelativeTime_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryGetReadingAfterSystemRelativeTime_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Input.IMotionController/Vftbl
struct Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_pinvoke
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Handedness_1;
	Il2CppMethodPointer ___get_VendorId_2;
	Il2CppMethodPointer ___get_ProductId_3;
	Il2CppMethodPointer ___get_Version_4;
	Il2CppMethodPointer ___get_PressableInputsCount_5;
	Il2CppMethodPointer ___GetPressableInputs_6;
	Il2CppMethodPointer ___IsAnalogPressableInput_7;
	Il2CppMethodPointer ___get_ProximityInputsCount_8;
	Il2CppMethodPointer ___GetProximityInputs_9;
	Il2CppMethodPointer ___get_XYInputsCount_10;
	Il2CppMethodPointer ___GetXYInputs_11;
	Il2CppMethodPointer ___TryGetReadingAtTime_12;
	Il2CppMethodPointer ___TryGetReadingAtSystemRelativeTime_13;
	Il2CppMethodPointer ___TryGetReadingAfterTime_14;
	Il2CppMethodPointer ___TryGetReadingAfterSystemRelativeTime_15;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Input.IMotionController/Vftbl
struct Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_com
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Handedness_1;
	Il2CppMethodPointer ___get_VendorId_2;
	Il2CppMethodPointer ___get_ProductId_3;
	Il2CppMethodPointer ___get_Version_4;
	Il2CppMethodPointer ___get_PressableInputsCount_5;
	Il2CppMethodPointer ___GetPressableInputs_6;
	Il2CppMethodPointer ___IsAnalogPressableInput_7;
	Il2CppMethodPointer ___get_ProximityInputsCount_8;
	Il2CppMethodPointer ___GetProximityInputs_9;
	Il2CppMethodPointer ___get_XYInputsCount_10;
	Il2CppMethodPointer ___GetXYInputs_11;
	Il2CppMethodPointer ___TryGetReadingAtTime_12;
	Il2CppMethodPointer ___TryGetReadingAtSystemRelativeTime_13;
	Il2CppMethodPointer ___TryGetReadingAfterTime_14;
	Il2CppMethodPointer ___TryGetReadingAfterSystemRelativeTime_15;
};

// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
struct Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::IInspectableVftbl
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsDateTime Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::get_InputTime
	_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * ___get_InputTime_1;
	// WinRT.Interop._get_PropertyAsTimeSpan Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::get_SystemRelativeInputTime
	_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * ___get_SystemRelativeInputTime_2;
	// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::GetPressedValues
	_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * ___GetPressedValues_3;
	// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::GetProximityValues
	_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * ___GetProximityValues_4;
	// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::GetXYValues
	_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * ___GetXYValues_5;
	// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::GetPressedValue
	_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * ___GetPressedValue_6;
	// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::GetProximityValue
	_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * ___GetProximityValue_7;
	// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl::GetXYValue
	_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * ___GetXYValue_8;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_InputTime_1() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___get_InputTime_1)); }
	inline _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * get_get_InputTime_1() const { return ___get_InputTime_1; }
	inline _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA ** get_address_of_get_InputTime_1() { return &___get_InputTime_1; }
	inline void set_get_InputTime_1(_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * value)
	{
		___get_InputTime_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_InputTime_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_SystemRelativeInputTime_2() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___get_SystemRelativeInputTime_2)); }
	inline _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * get_get_SystemRelativeInputTime_2() const { return ___get_SystemRelativeInputTime_2; }
	inline _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 ** get_address_of_get_SystemRelativeInputTime_2() { return &___get_SystemRelativeInputTime_2; }
	inline void set_get_SystemRelativeInputTime_2(_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * value)
	{
		___get_SystemRelativeInputTime_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_SystemRelativeInputTime_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetPressedValues_3() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___GetPressedValues_3)); }
	inline _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * get_GetPressedValues_3() const { return ___GetPressedValues_3; }
	inline _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 ** get_address_of_GetPressedValues_3() { return &___GetPressedValues_3; }
	inline void set_GetPressedValues_3(_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * value)
	{
		___GetPressedValues_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetPressedValues_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetProximityValues_4() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___GetProximityValues_4)); }
	inline _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * get_GetProximityValues_4() const { return ___GetProximityValues_4; }
	inline _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 ** get_address_of_GetProximityValues_4() { return &___GetProximityValues_4; }
	inline void set_GetProximityValues_4(_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * value)
	{
		___GetProximityValues_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetProximityValues_4), (void*)value);
	}

	inline static int32_t get_offset_of_GetXYValues_5() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___GetXYValues_5)); }
	inline _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * get_GetXYValues_5() const { return ___GetXYValues_5; }
	inline _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C ** get_address_of_GetXYValues_5() { return &___GetXYValues_5; }
	inline void set_GetXYValues_5(_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * value)
	{
		___GetXYValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetXYValues_5), (void*)value);
	}

	inline static int32_t get_offset_of_GetPressedValue_6() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___GetPressedValue_6)); }
	inline _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * get_GetPressedValue_6() const { return ___GetPressedValue_6; }
	inline _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB ** get_address_of_GetPressedValue_6() { return &___GetPressedValue_6; }
	inline void set_GetPressedValue_6(_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * value)
	{
		___GetPressedValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetPressedValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_GetProximityValue_7() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___GetProximityValue_7)); }
	inline _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * get_GetProximityValue_7() const { return ___GetProximityValue_7; }
	inline _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB ** get_address_of_GetProximityValue_7() { return &___GetProximityValue_7; }
	inline void set_GetProximityValue_7(_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * value)
	{
		___GetProximityValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetProximityValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_GetXYValue_8() { return static_cast<int32_t>(offsetof(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4, ___GetXYValue_8)); }
	inline _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * get_GetXYValue_8() const { return ___GetXYValue_8; }
	inline _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F ** get_address_of_GetXYValue_8() { return &___GetXYValue_8; }
	inline void set_GetXYValue_8(_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * value)
	{
		___GetXYValue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetXYValue_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
struct Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_pinvoke
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_InputTime_1;
	Il2CppMethodPointer ___get_SystemRelativeInputTime_2;
	Il2CppMethodPointer ___GetPressedValues_3;
	Il2CppMethodPointer ___GetProximityValues_4;
	Il2CppMethodPointer ___GetXYValues_5;
	Il2CppMethodPointer ___GetPressedValue_6;
	Il2CppMethodPointer ___GetProximityValue_7;
	Il2CppMethodPointer ___GetXYValue_8;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
struct Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_com
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_InputTime_1;
	Il2CppMethodPointer ___get_SystemRelativeInputTime_2;
	Il2CppMethodPointer ___GetPressedValues_3;
	Il2CppMethodPointer ___GetProximityValues_4;
	Il2CppMethodPointer ___GetXYValues_5;
	Il2CppMethodPointer ___GetPressedValue_6;
	Il2CppMethodPointer ___GetProximityValue_7;
	Il2CppMethodPointer ___GetXYValue_8;
};

// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
struct Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::IInspectableVftbl
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  ___IInspectableVftbl_0;
	// WinRT.Interop._add_EventHandler Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::add_MotionControllerAdded
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * ___add_MotionControllerAdded_1;
	// WinRT.Interop._remove_EventHandler Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::remove_MotionControllerAdded
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * ___remove_MotionControllerAdded_2;
	// WinRT.Interop._add_EventHandler Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::add_MotionControllerRemoved
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * ___add_MotionControllerRemoved_3;
	// WinRT.Interop._remove_EventHandler Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::remove_MotionControllerRemoved
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * ___remove_MotionControllerRemoved_4;
	// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::StartAsync
	_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * ___StartAsync_5;
	// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl::Stop
	_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * ___Stop_6;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_add_MotionControllerAdded_1() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___add_MotionControllerAdded_1)); }
	inline _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * get_add_MotionControllerAdded_1() const { return ___add_MotionControllerAdded_1; }
	inline _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 ** get_address_of_add_MotionControllerAdded_1() { return &___add_MotionControllerAdded_1; }
	inline void set_add_MotionControllerAdded_1(_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * value)
	{
		___add_MotionControllerAdded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___add_MotionControllerAdded_1), (void*)value);
	}

	inline static int32_t get_offset_of_remove_MotionControllerAdded_2() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___remove_MotionControllerAdded_2)); }
	inline _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * get_remove_MotionControllerAdded_2() const { return ___remove_MotionControllerAdded_2; }
	inline _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 ** get_address_of_remove_MotionControllerAdded_2() { return &___remove_MotionControllerAdded_2; }
	inline void set_remove_MotionControllerAdded_2(_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * value)
	{
		___remove_MotionControllerAdded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remove_MotionControllerAdded_2), (void*)value);
	}

	inline static int32_t get_offset_of_add_MotionControllerRemoved_3() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___add_MotionControllerRemoved_3)); }
	inline _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * get_add_MotionControllerRemoved_3() const { return ___add_MotionControllerRemoved_3; }
	inline _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 ** get_address_of_add_MotionControllerRemoved_3() { return &___add_MotionControllerRemoved_3; }
	inline void set_add_MotionControllerRemoved_3(_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * value)
	{
		___add_MotionControllerRemoved_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___add_MotionControllerRemoved_3), (void*)value);
	}

	inline static int32_t get_offset_of_remove_MotionControllerRemoved_4() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___remove_MotionControllerRemoved_4)); }
	inline _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * get_remove_MotionControllerRemoved_4() const { return ___remove_MotionControllerRemoved_4; }
	inline _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 ** get_address_of_remove_MotionControllerRemoved_4() { return &___remove_MotionControllerRemoved_4; }
	inline void set_remove_MotionControllerRemoved_4(_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * value)
	{
		___remove_MotionControllerRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remove_MotionControllerRemoved_4), (void*)value);
	}

	inline static int32_t get_offset_of_StartAsync_5() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___StartAsync_5)); }
	inline _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * get_StartAsync_5() const { return ___StartAsync_5; }
	inline _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 ** get_address_of_StartAsync_5() { return &___StartAsync_5; }
	inline void set_StartAsync_5(_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * value)
	{
		___StartAsync_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartAsync_5), (void*)value);
	}

	inline static int32_t get_offset_of_Stop_6() { return static_cast<int32_t>(offsetof(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666, ___Stop_6)); }
	inline _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * get_Stop_6() const { return ___Stop_6; }
	inline _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA ** get_address_of_Stop_6() { return &___Stop_6; }
	inline void set_Stop_6(_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * value)
	{
		___Stop_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stop_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
struct Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_pinvoke
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___add_MotionControllerAdded_1;
	Il2CppMethodPointer ___remove_MotionControllerAdded_2;
	Il2CppMethodPointer ___add_MotionControllerRemoved_3;
	Il2CppMethodPointer ___remove_MotionControllerRemoved_4;
	Il2CppMethodPointer ___StartAsync_5;
	Il2CppMethodPointer ___Stop_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
struct Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_com
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___add_MotionControllerAdded_1;
	Il2CppMethodPointer ___remove_MotionControllerAdded_2;
	Il2CppMethodPointer ___add_MotionControllerRemoved_3;
	Il2CppMethodPointer ___remove_MotionControllerRemoved_4;
	Il2CppMethodPointer ___StartAsync_5;
	Il2CppMethodPointer ___Stop_6;
};

// System.Action`1<WinRT.EventSource/_Invoke>
struct Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>
struct EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>
struct ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E  : public IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E, ___Vftbl_4)); }
	inline IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___ActivateInstance_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>
struct ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572  : public IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572, ___Vftbl_4)); }
	inline Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Status_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_ErrorCode_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___Cancel_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___Close_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>
struct ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3  : public IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3, ___Vftbl_4)); }
	inline Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___put_Completed_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Completed_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>
struct ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56  : public IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56, ___Vftbl_4)); }
	inline Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Handedness_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_VendorId_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_ProductId_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Version_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_PressableInputsCount_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetPressableInputs_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___IsAnalogPressableInput_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_ProximityInputsCount_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetProximityInputs_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_XYInputsCount_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetXYInputs_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryGetReadingAtTime_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryGetReadingAtSystemRelativeTime_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryGetReadingAfterTime_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryGetReadingAfterSystemRelativeTime_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>
struct ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8  : public IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8, ___Vftbl_4)); }
	inline Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_InputTime_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_SystemRelativeInputTime_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetPressedValues_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetProximityValues_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetXYValues_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetPressedValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetProximityValue_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetXYValue_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>
struct ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A  : public IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A, ___Vftbl_4)); }
	inline Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___add_MotionControllerAdded_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___remove_MotionControllerAdded_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___add_MotionControllerRemoved_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___remove_MotionControllerRemoved_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___StartAsync_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___Stop_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>
struct UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IDelegate2_Obj_Enum
struct IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IDelegate2_Obj_Obj
struct IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// WinRT.Interop._add_EventHandler
struct _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsDateTime
struct _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsInt
struct _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsTimeSpan
struct _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsUShort
struct _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._method0
struct _method0_t63421535F6121EE6954023CD0356085E5A6A8B32  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._put_PropertyAsObject
struct _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._remove_EventHandler
struct _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.DllModule/DllGetActivationFactory
struct DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.EventSource/_Invoke
struct _Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance
struct _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IAsyncOperation/CompletedHandler
struct CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t5E373D5F2713F88800A00AC29C398E679178043A  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Mono/mono_thread_cleanup_initialize
struct mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Mono/mono_thread_cleanup_register
struct mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs
struct _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput
struct _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime
struct _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime
struct _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue
struct _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues
struct _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value
struct _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values
struct _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync
struct _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop
struct _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA  : public MulticastDelegate_t
{
public:

public:
};


// System.DllNotFoundException
struct DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
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

IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke& marshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com& marshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_back(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke& marshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_cleanup(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_back(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com& marshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_cleanup(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com& marshaled);

// !!0 System.Runtime.InteropServices.Marshal::PtrToStructure<WinRT.Delegate/UnmanagedObject>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142_gshared (intptr_t ___ptr0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared (RuntimeObject * ___d0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Interop.IDelegateVftbl>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF_gshared (IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Interop.IDelegateVftbl>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938_gshared (IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Delegate/UnmanagedObject>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F_gshared (UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Delegate/UnmanagedObject>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2_gshared (UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject ** ___target0, const RuntimeMethod* method);
// T WinRT.Platform::TryGetProcAddress<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Platform_TryGetProcAddress_TisRuntimeObject_m02C5A4FBC93B283ADCFFBFDECC2FAD8B799F9E3F_gshared (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Void System.WeakReference`1<System.Object>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared (WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_gshared (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 WinRT.Delegate::MarshalInvoke<System.Object>(System.IntPtr,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_MarshalInvoke_TisRuntimeObject_m70402F286768603A6CB89694E0E09C4233D975E7_gshared (intptr_t ___thisPtr0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___invoke1, const RuntimeMethod* method);
// System.Void WinRT.Interop._IAsyncOperation`2<System.Object,WinRT.Interop.VoidResult>::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IAsyncOperation_2__ctor_mB6981A6C02D281BB2FE20992A0214848461E5231_gshared (_IAsyncOperation_2_tC389E448595D08F3821E2AA3D786055E0018A6B5 * __this, Guid_t  ___iid0, ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ___obj1, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m086EB17437807394055D28AD07BCE2ACC2294558_gshared (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<WinRT.Interop.VoidResult>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA_gshared (TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC * __this, VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1  ___result0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<WinRT.Interop.IAsyncInfo/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97_gshared (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * __this, const RuntimeMethod* method);
// System.Void WinRT.Interop.DelegateProperty`1<System.Object>::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_1__ctor_mF7D0B7E51E109D0850463F56BA744381011E1B76_gshared (DelegateProperty_1_t36241B1220ED95442776F10AA8450D04F25B7A4D * __this, Guid_t  ___iid0, IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ___obj1, _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * ___get_Delegate2, _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * ___put_Delegate3, intptr_t ___invokerPtr4, const RuntimeMethod* method);
// System.Void WinRT.Interop.DelegateProperty`1<System.Object>::set_Value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_1_set_Value_mEB0AE495576A8F8C35499458D4A1CF86D73E111A_gshared (DelegateProperty_1_t36241B1220ED95442776F10AA8450D04F25B7A4D * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968_gshared (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmarshalArgs__ctor_m76F5C12A3555471A7A5638F95963FD3D161C65A7_gshared (UnmarshalArgs_tDDD818417FA7811C7E75C72F38F42F063060E025 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,System.Object,System.Object>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3__ctor_m4F30DD9E108643DEF73C13999B75F7CEE3D63C51_gshared (EventSource_3_tD12FE7A3FE1D14119E5112008EC616D5CDD2244B * __this, IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ___obj0, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * ___addHandler1, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * ___removeHandler2, UnmarshalArgs_tDDD818417FA7811C7E75C72F38F42F063060E025 * ___unmarshalArgs3, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8_gshared (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// TTask WinRT.Interop._IAsyncOperation`2<System.Object,WinRT.Interop.VoidResult>::AsTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _IAsyncOperation_2_AsTask_mAA0B1FA34275136C873D4549C4043D05ED5CB273_gshared (_IAsyncOperation_2_tC389E448595D08F3821E2AA3D786055E0018A6B5 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Boolean>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895_gshared (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___valueFactory0, const RuntimeMethod* method);
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,System.Object,System.Object>::add_Event(System.EventHandler`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3_add_Event_mA59A9CDC5AF1A43EC068BC1221F03B576C62499E_gshared (EventSource_3_tD12FE7A3FE1D14119E5112008EC616D5CDD2244B * __this, EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * ___value0, const RuntimeMethod* method);
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,System.Object,System.Object>::remove_Event(System.EventHandler`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_3_remove_Event_m1305001D357FF72E83A143D640041858CFABAF96_gshared (EventSource_3_tD12FE7A3FE1D14119E5112008EC616D5CDD2244B * __this, EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * ___value0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<!!0> WinRT.ActivationFactory`1<System.Object>::ActivateInstance<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_mE5C536D80F255ED31CE51894511BED715BAAE4C2_gshared (const RuntimeMethod* method);
// T WinRT.WeakLazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakLazy_1_get_Value_mA26FB2B394E3FD0023DCC15973ECD6243A4FA40F_gshared (WeakLazy_1_t08891E6CE990043324839879BDEAB619D138FE23 * __this, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakLazy_1__ctor_mAD64AFE974030FA04FD3F77FD956FC9BA06CAE8F_gshared (WeakLazy_1_t08891E6CE990043324839879BDEAB619D138FE23 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>::FromNativePtrNoRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_gshared (intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m25AF9F2CFB213C652F3BBA9042C2E035AC266C3A_gshared (Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948 * __this, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_gshared (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * __this, const RuntimeMethod* method);
// T WinRT.Platform::GetProcAddress<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Platform_GetProcAddress_TisRuntimeObject_m5B81D5AB7BB522943479FBC54183713A73841222_gshared (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared (Lazy_1_t9AEDA4BDE3E10120674776405939013BDFB29948 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_gshared (HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * __this, intptr_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7_gshared (HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * __this, intptr_t ___item0, const RuntimeMethod* method);

// System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270 (intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745 (intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2 (intptr_t ___thisPtr0, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.Marshal::PtrToStructure<WinRT.Delegate/UnmanagedObject>(System.IntPtr)
inline UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  (*) (intptr_t, const RuntimeMethod*))Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142_gshared)(___ptr0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96 (intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m7D996B90699158496CE474A6D8D7F8854039A573 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, Guid_t * ___iid0, intptr_t* ___obj1, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0 (Guid_t  ___a0, Guid_t  ___b1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF (int32_t* ___location0, const RuntimeMethod* method);
// System.Void WinRT.Delegate::_Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method);
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m1B0E325651385472FBBC5437BC0C0862E69D51C3 (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m8A5FFC9D62D00CFBC99FFBE80849259E06DEEAF1 (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m96990D35E888EA45D144FDE1FD8DD3B5886480EF (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_QueryInterface>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_m3CA9094075AB4242A3D7D879E4FB19871B63D0A9 (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_AddRef>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_m4F936BB52F59AB5F2A225188723B396358129FA9 (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_Release>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_Release_t5E373D5F2713F88800A00AC29C398E679178043A_mA080B91B26661D0F640442D929C1E6F9A690F483 (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_Release_t5E373D5F2713F88800A00AC29C398E679178043A *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  WinrtModule_get_Instance_m94C6A25F3EB29F1AEE04E609D99AE9F010554088 (const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98 (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * __this, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Interop.IDelegateVftbl>(!!0)
inline int32_t Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF (IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164 , const RuntimeMethod*))Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_mDD149E0F9D2CFCA6BF5ACD3558220591A8C97B7E (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Interop.IDelegateVftbl>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938 (IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164 , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Delegate/UnmanagedObject>(!!0)
inline int32_t Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F (UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B , const RuntimeMethod*))Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F_gshared)(___structure0, method);
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Delegate/UnmanagedObject>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2 (UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_mCC0E874C853846E0A82E36971E3FC7BF359C6AA5 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::.ctor()
inline void Dictionary_2__ctor_mD54A210AE4DC60DA46BFD1736864CCF03F7A2F45 (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7EED326AA464107018F9444CA41BC7277555B797 (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * __this, String_t* ___key0, WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 *, String_t*, WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.WeakReference`1<WinRT.DllModule>::TryGetTarget(!0&)
inline bool WeakReference_1_TryGetTarget_m684121294B8A136791F4ED7BF7ACF9B57273D6E0 (WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 * __this, DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 ** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 *, DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 **, const RuntimeMethod*))WeakReference_1_TryGetTarget_mA9F884507AABEFCC394D06FEEB7AD14ECEB5CD6B_gshared)(__this, ___target0, method);
}
// System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// T WinRT.Platform::TryGetProcAddress<WinRT.DllModule/DllGetActivationFactory>(System.IntPtr)
inline DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * Platform_TryGetProcAddress_TisDllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7_m74A4E80317EE3E2BC2B569A624A9475507C0C93A (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	return ((  DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * (*) (intptr_t, const RuntimeMethod*))Platform_TryGetProcAddress_TisRuntimeObject_m02C5A4FBC93B283ADCFFBFDECC2FAD8B799F9E3F_gshared)(___moduleHandle0, method);
}
// System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule/DllGetActivationFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__ctor_m1764FF4C22B06C2171EEA0599C055DC547C8F3E3 (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * __this, String_t* ___fileName0, intptr_t* ___moduleHandle1, DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * ___getActivationFactory2, const RuntimeMethod* method);
// System.Void System.WeakReference`1<WinRT.DllModule>::.ctor(!0)
inline void WeakReference_1__ctor_m7F386C4AA6575948F47C5A5C42B29795133AC408 (WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 * __this, DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 *, DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 *, const RuntimeMethod*))WeakReference_1__ctor_m26CA3930ADE164EA48E474988EE6B82D26E5F9E9_gshared)(__this, ___target0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA9953DEEFD00B3B191AE3C6FC9F1A0A8359259DA (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * __this, String_t* ___key0, WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 *, String_t*, WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ModuleReference_Allocate_m10B82418E7BDDFFAEB5EE600287EA3D9F02E3ECA (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method);
// System.Int32 WinRT.DllModule/DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_m9FA6F8618BF10EEF7CC971DC2A6B3B873F7B6664 (DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB (int32_t ___errorCode0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * (*) (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_gshared)(___module0, ___thisPtr1, method);
}
// System.Int32 WinRT.EventSource::_invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9 (intptr_t ___thisPtr0, intptr_t ___senderPtr1, intptr_t ___argsPtr2, const RuntimeMethod* method);
// System.Void WinRT.EventSource/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m500680DBFAC1D4618C15E76612661550D2717D79 (U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WinRT.EventSource/_Invoke>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCBB21ECD057ECA77601FA2C34C9EF2D21944CAD0 (Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 WinRT.Delegate::MarshalInvoke<WinRT.EventSource/_Invoke>(System.IntPtr,System.Action`1<T>)
inline int32_t Delegate_MarshalInvoke_Tis_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102_mC163731B28D12E983BCF1E55E90AFEB10EA6B8C4 (intptr_t ___thisPtr0, Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4 * ___invoke1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4 *, const RuntimeMethod*))Delegate_MarshalInvoke_TisRuntimeObject_m70402F286768603A6CB89694E0E09C4233D975E7_gshared)(___thisPtr0, ___invoke1, method);
}
// System.Void WinRT.Interop.IDelegate2_Obj_Obj::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Obj__ctor_m75E4D93DBE0AFF24C8003D8FA963F710CC48BAAA (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_WindowsCreateString_m660737A5CD07AF4A8719B1871F25B3C149666941 (String_t* ___sourceString0, int32_t ___length1, const RuntimeMethod* method);
// System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Platform_WindowsGetStringRawBuffer_m6D782A4AFE5BA4B96C6960FBDD15EE48766C400F (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_WindowsDeleteString_mA90605E243EC48929051CE3AC36B495076164481 (intptr_t ___hstring0, const RuntimeMethod* method);
// System.Void WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task,WinRT.Interop.VoidResult>::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
inline void _IAsyncOperation_2__ctor_m5240F9043F7CC4A76B7531458B839067173F1C33 (_IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D * __this, Guid_t  ___iid0, ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ___obj1, const RuntimeMethod* method)
{
	((  void (*) (_IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D *, Guid_t , ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 *, const RuntimeMethod*))_IAsyncOperation_2__ctor_mB6981A6C02D281BB2FE20992A0214848461E5231_gshared)(__this, ___iid0, ___obj1, method);
}
// !!0 System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer<WinRT.Interop._method0>(System.IntPtr)
inline _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * Marshal_GetDelegateForFunctionPointer_Tis_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_m4AC353FFEC4E0547C1A6AF86A9424281AC326BFC (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  _method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * (*) (intptr_t, const RuntimeMethod*))Marshal_GetDelegateForFunctionPointer_TisRuntimeObject_m086EB17437807394055D28AD07BCE2ACC2294558_gshared)(___ptr0, method);
}
// System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_Invoke_mA89A8760402261928A1938DD62356A2C4C3C05BF (_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * __this, intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.Void WinRT.Interop.IAsyncAction::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncAction_GetResults_m8A1462B1578C3A13A6DFE5C003652386AB6C72A9 (IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<WinRT.Interop.VoidResult>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA (TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC * __this, VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1  ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC *, VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1 , const RuntimeMethod*))TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA_gshared)(__this, ___result0, method);
}
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<WinRT.Interop.IAsyncInfo/Vftbl>()
inline ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97 (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * (*) (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97_gshared)(__this, method);
}
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * IAsyncInfo_op_Implicit_m005F86B9BF1D41972112E02A8466A7E5E804FF73 (ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * ___obj0, const RuntimeMethod* method);
// System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo__ctor_m34D20304F8A20A9DF83809423E4C37262BF1649A (IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * __this, ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m77A5D7212015B9F83703EEF1EA96199931E5E6BC (_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method);
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Marshal_GetExceptionForHR_m81353AE9461C02ACF75882B02059E78A99FFAFE4 (int32_t ___errorCode0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0 (intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IDelegate2_Obj_Enum>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_m463B2ED57155BCF5D26CD9802FEA82AFA6465E76 (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m352EF9B202EE82C0ACF5978B202F0F2F5E48D2EE_gshared)(___d0, method);
}
// System.Void WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
inline void DelegateProperty_1__ctor_m5A472DDDB6028B09CD3D4BC8CF74EB2D34D8FBBE (DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * __this, Guid_t  ___iid0, IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ___obj1, _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * ___get_Delegate2, _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * ___put_Delegate3, intptr_t ___invokerPtr4, const RuntimeMethod* method)
{
	((  void (*) (DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 *, Guid_t , IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *, _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 *, _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 *, intptr_t, const RuntimeMethod*))DelegateProperty_1__ctor_mF7D0B7E51E109D0850463F56BA744381011E1B76_gshared)(__this, ___iid0, ___obj1, ___get_Delegate2, ___put_Delegate3, ___invokerPtr4, method);
}
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5F2CA8F17E10CA207D487A86A7BC3378E9715026 (U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA6BAAB39B5BB41CD8225E955B5AA330AEE81227A (Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 WinRT.Delegate::MarshalInvoke<WinRT.Interop.IAsyncOperation/CompletedHandler>(System.IntPtr,System.Action`1<T>)
inline int32_t Delegate_MarshalInvoke_TisCompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8_m69A87B3F3006DF293CEABC97BA260E815A95AC84 (intptr_t ___thisPtr0, Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A * ___invoke1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A *, const RuntimeMethod*))Delegate_MarshalInvoke_TisRuntimeObject_m70402F286768603A6CB89694E0E09C4233D975E7_gshared)(___thisPtr0, ___invoke1, method);
}
// System.Void WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::set_Value(T)
inline void DelegateProperty_1_set_Value_mBC95CA83F3182AC7DCAC86687C5F6A4D2CCB9275 (DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * __this, CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 *, CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 *, const RuntimeMethod*))DelegateProperty_1_set_Value_mEB0AE495576A8F8C35499458D4A1CF86D73E111A_gshared)(__this, ___value0, method);
}
// System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Enum__ctor_m59410F25BA1F4BA3E6BE194F1786C8807E3EFCEC (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.IMotionController::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMotionController__ctor_mECD9FFBD082EFAF5839E3917B5309F0DD5007865 (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * __this, ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m6290F9621850812D13C51AFA7F470E339CEAF38B (_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Void System.DateTimeOffset::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeOffset__ctor_mC17E28F89D4E54D511B30E08D1F56453E677D53F (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method);
// System.Int64 System.DateTimeOffset::ToFileTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeOffset_ToFileTime_mB1301A482EF6635A96D0ED23F3CB88B4C43934F3 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, const RuntimeMethod* method);
// System.Void WinRT.Interop._DateTime::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_inline (_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * __this, int64_t ___universalTime0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::Invoke(System.IntPtr,WinRT.Interop._DateTime,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetReadingAtTime_Invoke_mA9726FD3B6BCF1FE45FF8762C80BFB296F821B58 (_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D  ___timestamp1, intptr_t* ___value2, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968 (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * (*) (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.MixedReality.Input.IMotionControllerReading Microsoft.MixedReality.Input.IMotionControllerReading::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * IMotionControllerReading_op_Implicit_m25C1A9D1A1916E82A8034480094C94B78395CE2B (ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.MotionControllerReading::.ctor(Microsoft.MixedReality.Input.IMotionControllerReading)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerReading__ctor_m93EB4AB64AF0D35AA1FE3DD349B9AA4BA81A3066 (MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * __this, IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * ___reading0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.IMotionControllerReading::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMotionControllerReading__ctor_mC6F8291F98142E25BAFF5C32097FDD87DB72FB64 (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * __this, ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ___obj0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::Invoke(System.IntPtr,System.UInt32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFloatValue_Invoke_m53CA1E2F27B36D9F2B0011B95FC6F57F0814EDB0 (_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * __this, intptr_t ___thisPtr0, uint32_t ___input1, float* ___value2, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::Invoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetVector2Value_Invoke_mCC548729DDD7191524FECE2E9EE5687D3EC63E5A (_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * __this, intptr_t ___thisPtr0, uint32_t ___input1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___value2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMotionControllerWatcher__ctor_m3A0851B07F3D59631E2912699A8DEA487946010C (IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * __this, ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ___obj0, const RuntimeMethod* method);
// System.Void WinRT.EventSource`3/UnmarshalArgs<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>::.ctor(System.Object,System.IntPtr)
inline void UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B (UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnmarshalArgs__ctor_m76F5C12A3555471A7A5638F95963FD3D161C65A7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
inline void EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901 (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * __this, IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ___obj0, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * ___addHandler1, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * ___removeHandler2, UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * ___unmarshalArgs3, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC *, IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 *, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 *, UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 *, const RuntimeMethod*))EventSource_3__ctor_m4F30DD9E108643DEF73C13999B75F7CEE3D63C51_gshared)(__this, ___obj0, ___addHandler1, ___removeHandler2, ___unmarshalArgs3, method);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _StartAsync_Invoke_m65380182C503F11882694E75178222AA429F3E37 (_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * __this, intptr_t ___thisPtr0, intptr_t* ___actionPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8 (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * (*) (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8_gshared)(___module0, ___thisPtr1, method);
}
// System.Void WinRT.Interop.IAsyncAction::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncAction__ctor_mC0E80187A5BBF917B7747E600A48C50E76200AC6 (IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C * __this, ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ___obj0, const RuntimeMethod* method);
// TTask WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task,WinRT.Interop.VoidResult>::AsTask()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * _IAsyncOperation_2_AsTask_mB9383F56B0C5A1C82052D22EF2F6B1F53B84A1F5 (_IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (_IAsyncOperation_2_t9DFC0C395BB6A7C7763DBB921DCD11E1F801922D *, const RuntimeMethod*))_IAsyncOperation_2_AsTask_mAA0B1FA34275136C873D4549C4043D05ED5CB273_gshared)(__this, method);
}
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m564869B62BFFBB8EA983231FFF9DA7557C8A1AA3 (const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method);
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m073063398FF86173826492CB17CD4FA8D8901B64 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<System.Boolean>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895 (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 *, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895_gshared)(__this, ___valueFactory0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m58D611C6D8E5CD65CCD860C39BF9C29B26A2F208_inline (MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078 * __this, Type_t * ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Input.Handedness Microsoft.MixedReality.Input.IMotionController::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMotionController_get_Handedness_mBB1E34AE510F5C9204EB1C9F35A06049E97A026C (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Input.MotionControllerReading Microsoft.MixedReality.Input.IMotionController::TryGetReadingAtTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * IMotionController_TryGetReadingAtTime_m9F576624EC8D416B63FFD5BC9A7034EFEA2D320A (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timestamp0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Input.IMotionControllerReading::GetPressedValue(Microsoft.MixedReality.Input.ControllerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IMotionControllerReading_GetPressedValue_mA31AB0757BA8080FBAF0B7C79AC8D7B36AA490C7 (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * __this, int32_t ___input0, const RuntimeMethod* method);
// System.Numerics.Vector2 Microsoft.MixedReality.Input.IMotionControllerReading::GetXYValue(Microsoft.MixedReality.Input.ControllerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  IMotionControllerReading_GetXYValue_m867878E2D110E38586F406BB4163FF3CCFC8352B (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * __this, int32_t ___input0, const RuntimeMethod* method);
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>::add_Event(System.EventHandler`1<A>)
inline void EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89 (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * __this, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC *, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 *, const RuntimeMethod*))EventSource_3_add_Event_mA59A9CDC5AF1A43EC068BC1221F03B576C62499E_gshared)(__this, ___value0, method);
}
// System.Void WinRT.EventSource`3<Microsoft.MixedReality.Input.IMotionControllerHandler,Microsoft.MixedReality.Input.MotionControllerWatcher,Microsoft.MixedReality.Input.MotionController>::remove_Event(System.EventHandler`1<A>)
inline void EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752 (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * __this, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC *, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 *, const RuntimeMethod*))EventSource_3_remove_Event_m1305001D357FF72E83A143D640041858CFABAF96_gshared)(__this, ___value0, method);
}
// WinRT.ObjectReference`1<!!0> WinRT.ActivationFactory`1<Microsoft.MixedReality.Input.MotionControllerWatcher>::ActivateInstance<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>()
inline ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_m7BA0A1EEF6F9DD479756387D1F0D9EDEC27D2E4F (const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * (*) (const RuntimeMethod*))ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_mE5C536D80F255ED31CE51894511BED715BAAE4C2_gshared)(method);
}
// Microsoft.MixedReality.Input.IMotionControllerWatcher Microsoft.MixedReality.Input.IMotionControllerWatcher::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * IMotionControllerWatcher_op_Implicit_m79FD9FFF4E4D7FCF313ED4168726EB73A10CE516 (ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::.ctor(Microsoft.MixedReality.Input.IMotionControllerWatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher__ctor_m3442EC56BBFF8D6A49CFCFC17C94720427A6EB3F (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * ___watcher0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Input.IMotionControllerWatcher::StartAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * IMotionControllerWatcher_StartAsync_mFA402A5940F9CD443C9A748A78CF04B9CC7818D2 (IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * __this, const RuntimeMethod* method);
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_mBD9E6B197D3045E00A0158AADB51EBDBA7AA696E (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, const RuntimeMethod* method);
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_mDB5A728A3789E6979A3EA4582E7D70A2D7A9E3BD (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, const RuntimeMethod* method);
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mD64DAFE7B45911DAB02E9EE90CE296433C627221 (const RuntimeMethod* method);
// T WinRT.WeakLazy`1<WinRT.WinrtModule>::get_Value()
inline WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F * WeakLazy_1_get_Value_m344F6BA5489F8F559057FF30D6865BA8B8537524 (WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * __this, const RuntimeMethod* method)
{
	return ((  WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F * (*) (WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 *, const RuntimeMethod*))WeakLazy_1_get_Value_mA26FB2B394E3FD0023DCC15973ECD6243A4FA40F_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m2428EF0BA585EB8FBF44DE5A8E4FBC1D48B2FC3C (const RuntimeMethod* method);
// System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_RoGetActivationFactory_mEF99130AD55B64388AF27C28972859DCA17877AE (intptr_t ___runtimeClassId0, Guid_t * ___iid1, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<WinRT.WinrtModule>::.ctor()
inline void WeakLazy_1__ctor_m6ED03463903ECF538C41B59DBF658C08D76FC23F (WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 *, const RuntimeMethod*))WeakLazy_1__ctor_mAD64AFE974030FA04FD3F77FD956FC9BA06CAE8F_gshared)(__this, method);
}
// System.Void WinRT.Mono/ThreadContext::RegisterPossiblyNonForeignThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_RegisterPossiblyNonForeignThread_m6B466F43F61600A4F9C98FE9FAC13C0CD6A3193A (const RuntimeMethod* method);
// System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m85A286E877BF2A7DBE0CD7BCAE440814FC6F62F2 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, Guid_t  ___iid0, intptr_t ___invokePtr1, RuntimeObject * ___invoker2, const RuntimeMethod* method);
// System.Void WinRT.Delegate/InitialReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Dispose_m59F78D25E9B7D090D2CBEB570E4DD4DF4EB27E4B (InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55 * __this, const RuntimeMethod* method);
// System.Void WinRT.EventSource/_Invoke::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Invoke_Invoke_m568FD6E1DAB86996A4E45E37286F71428B24C06F (_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * __this, intptr_t ___senderPtr0, intptr_t ___argsPtr1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::Invoke(WinRT.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_mB73A91A17DB19F9620C1CE8CF953F86259A54303 (CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB9F5DD1485EA278CE80F8D8E198E2201F4913286 (U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>::FromNativePtrNoRef(System.IntPtr)
inline ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * (*) (intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_gshared)(___thisPtr0, method);
}
// Microsoft.MixedReality.Input.IMotionController Microsoft.MixedReality.Input.IMotionController::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * IMotionController_op_Implicit_m9C3E9F1A7E36427E17AEE1ED8AD406B4B9239291 (ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Input.MotionController::.ctor(Microsoft.MixedReality.Input.IMotionController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionController__ctor_m274221CEC806BB1377825829DE7A3639073223EC (MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * __this, IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * ___tracker0, const RuntimeMethod* method);
// System.Void WinRT.Mono/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4B797B032B47F242375EA3CC34CA58F2AD48757B (U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * __this, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>::.ctor()
inline void Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7 (Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 *, const RuntimeMethod*))Lazy_1__ctor_m25AF9F2CFB213C652F3BBA9042C2E035AC266C3A_gshared)(__this, method);
}
// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventWaitHandle__ctor_mCE6FFB98B80A90643A8AE092D5841AF34FF884CE (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, bool ___initialState0, int32_t ___mode1, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Boolean>::get_Value()
inline bool Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 *, const RuntimeMethod*))Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_gshared)(__this, method);
}
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetHRForLastWin32Error_mC4244CDFD16223106A9FDE60850A0C69607C2CAD (const RuntimeMethod* method);
// T WinRT.Platform::GetProcAddress<WinRT.Mono/mono_thread_cleanup_initialize>(System.IntPtr)
inline mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D_mF294A2A281428CDE542BC9C2C092BCC20193CA8D (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	return ((  mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * (*) (intptr_t, const RuntimeMethod*))Platform_GetProcAddress_TisRuntimeObject_m5B81D5AB7BB522943479FBC54183713A73841222_gshared)(___moduleHandle0, method);
}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m013587A92E79AB9DF50E2411C1DC5DB9E60952CC (mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, const RuntimeMethod* method);
// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeWaitHandle__ctor_mABE9A7F29A09ECD2B86643417576C1FF40707601 (SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * __this, intptr_t ___existingHandle0, bool ___ownsHandle1, const RuntimeMethod* method);
// System.Void System.Threading.WaitHandleExtensions::SetSafeWaitHandle(System.Threading.WaitHandle,Microsoft.Win32.SafeHandles.SafeWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandleExtensions_SetSafeWaitHandle_m4D0C815398835849C12A33D0F073CB56DFC4AF2F (WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * ___waitHandle0, SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___value1, const RuntimeMethod* method);
// T WinRT.Platform::GetProcAddress<WinRT.Mono/mono_thread_cleanup_register>(System.IntPtr)
inline mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * Platform_GetProcAddress_Tismono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB_m457EDB8CBA3EB5764CD1A0C6E6FB35E31D881560 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	return ((  mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * (*) (intptr_t, const RuntimeMethod*))Platform_GetProcAddress_TisRuntimeObject_m5B81D5AB7BB522943479FBC54183713A73841222_gshared)(___moduleHandle0, method);
}
// System.IntPtr WinRT.Mono::mono_thread_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_mono_thread_current_m990881A301E53315E3D261299E210D2C2A0390C2 (const RuntimeMethod* method);
// System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mono_mono_thread_is_foreign_m2BADFC870B7E267B0361083E788217810402E4C5 (intptr_t ___threadPtr0, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>::get_Value()
inline HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1 (Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * (*) (Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 *, const RuntimeMethod*))Lazy_1_get_Value_mEE280792E3C774C75081BC21911D6224C453E2DB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Contains(!0)
inline bool HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3 (HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * __this, intptr_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 *, intptr_t, const RuntimeMethod*))HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_gshared)(__this, ___item0, method);
}
// System.Void WinRT.Mono/mono_thread_cleanup_register::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_m976239AACA730E88A2391727F260D058485F4FFE (mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * __this, intptr_t ___threadPtr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Add(!0)
inline bool HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7 (HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * __this, intptr_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 *, intptr_t, const RuntimeMethod*))HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7_gshared)(__this, ___item0, method);
}
// System.IntPtr WinRT.Platform/DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_LoadLibraryExW_mB30B5816FB98FF70E0DFC7BA712F24754875CA64 (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method);
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m243A00A792582F0DB8CDE3C049C00CD4D34BAD5E (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_GetProcAddress_mBBDB58BD5600E8C6AD2C9F5486AD32AA2A3876DE (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_mDCA9FDD51F3DE31332D1F1F0BC65BFDACC788C63 (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mC83A33B8CDF864595D2C13F111E7C0231D4D4CDF (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_RoGetActivationFactory_mDE17FB4DAD6D1EAC6277C7061814DA428D73AD02 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsCreateString_m972417DDF749C045E275A0F656F2FB2CC05C2277 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method);
// System.Char* WinRT.Platform/DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage_WindowsGetStringRawBuffer_m96B61C9E0EA4576425CEF67FE7CB9338392EDB0D (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mAD677667A10B7413B673B9DC4FF13AAA62F39260 (intptr_t ___hstring0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_LoadLibraryExW_m347FB602B9DAD029E04808CF94DB394A881ED0F4 (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method);
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m4582EDC48FA07226297EF1A2616E558A7B4CFE19 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_GetProcAddress_m55D3E9D3F86A9F4C64FD313DF827F58D4FD3E9F7 (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m3C4B68B33657B8BA758F6D76122DDB1888C1FD32 (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m1C0D88B1EA7585D338B72AB849C894C1771E886C (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_RoGetActivationFactory_mFF3526A97BA84119AC4F0FCAE416E235E6726B39 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsCreateString_m65FF390A75C46441E5B1292A9A611E0189633096 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method);
// System.Char* WinRT.Platform/IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage_WindowsGetStringRawBuffer_m7F84FD2082C71AD6B0EBDBC6E45C693A5C9B65B5 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_mA8153EE134A7CB877DAB21FC55CCF4942D3CF1CA (intptr_t ___hstring0, const RuntimeMethod* method);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryExW(Il2CppChar*, intptr_t, uint32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RoGetActivationFactory(intptr_t, Guid_t *, intptr_t*);
IL2CPP_EXTERN_C int32_t STDCALL WindowsCreateString(Il2CppChar*, int32_t, intptr_t*);
IL2CPP_EXTERN_C Il2CppChar* STDCALL WindowsGetStringRawBuffer(intptr_t, uint32_t*);
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL mono_thread_current();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL mono_thread_is_foreign(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryExW(Il2CppChar*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RoGetActivationFactory(intptr_t, Guid_t *, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsCreateString(Il2CppChar*, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C Il2CppChar* STDCALL WindowsGetStringRawBuffer(intptr_t, uint32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270(intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270(___thisPtr0, ___iid1, ___obj2, NULL);

	return returnValue;
}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745(intptr_t ___thisPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	returnValue = Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745(___thisPtr0, NULL);

	return returnValue;
}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2(intptr_t ___thisPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	returnValue = Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2(___thisPtr0, NULL);

	return returnValue;
}
// WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  L_1;
		L_1 = Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142((intptr_t)L_0, /*hidden argument*/Marshal_PtrToStructure_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m0044B210D35B3349CB043446DD9D890AA4E11142_RuntimeMethod_var);
		intptr_t L_2 = L_1.get__gchandlePtr_1();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3;
		L_3 = GCHandle_FromIntPtr_m033776D73699CAC85FAE41FD5A52895EFB9E3AB8((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4;
		L_4 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		return ((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 *)CastclassClass((RuntimeObject*)L_4, Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var));
	}
}
// System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270 (intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_1;
		L_1 = Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96((intptr_t)L_0, /*hidden argument*/NULL);
		Guid_t * L_2 = ___iid1;
		intptr_t* L_3 = ___obj2;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Delegate_QueryInterface_m7D996B90699158496CE474A6D8D7F8854039A573(L_1, (Guid_t *)(Guid_t *)L_2, (intptr_t*)(intptr_t*)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_1;
		L_1 = Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96((intptr_t)L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 WinRT.Delegate::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_1;
		L_1 = Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96((intptr_t)L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m7D996B90699158496CE474A6D8D7F8854039A573 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, Guid_t * ___iid0, intptr_t* ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t * L_0 = ___iid0;
		Guid_t  L_1 = (*(Guid_t *)L_0);
		Guid_t  L_2 = __this->get__iid_2();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		Guid_t * L_4 = ___iid0;
		Guid_t  L_5 = (*(Guid_t *)L_4);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_8;
		L_8 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Guid_t  L_9;
		L_9 = VirtFuncInvoker0< Guid_t  >::Invoke(22 /* System.Guid System.Reflection.TypeInfo::get_GUID() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_5, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0034:
	{
		uint32_t L_11;
		L_11 = Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87(__this, /*hidden argument*/NULL);
		intptr_t* L_12 = ___obj1;
		intptr_t L_13 = __this->get_ThisPtr_1();
		*((intptr_t*)L_12) = (intptr_t)L_13;
		return 0;
	}

IL_0045:
	{
		return ((int32_t)-2147467262);
	}
}
// System.UInt32 WinRT.Delegate::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of__refs_0();
		int32_t L_1;
		L_1 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get__refs_0();
		return L_2;
	}
}
// System.UInt32 WinRT.Delegate::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__refs_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA32285E57C5E37519691CDF44133FC9D59D7069B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t* L_2 = __this->get_address_of__refs_0();
		int32_t L_3;
		L_3 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get__refs_0();
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		int32_t L_5 = __this->get__refs_0();
		return L_5;
	}
}
// System.Void WinRT.Delegate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__cctor_m68E54CB66BA225C8E5FBDBF074EC53B37CC7E2C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_m4F936BB52F59AB5F2A225188723B396358129FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_m3CA9094075AB4242A3D7D879E4FB19871B63D0A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_Tis_Release_t5E373D5F2713F88800A00AC29C398E679178043A_mA080B91B26661D0F640442D929C1E6F9A690F483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * L_0 = (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 *)il2cpp_codegen_object_new(_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var);
		_QueryInterface__ctor_m1B0E325651385472FBBC5437BC0C0862E69D51C3(L_0, NULL, (intptr_t)((intptr_t)Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270_RuntimeMethod_var), /*hidden argument*/NULL);
		((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->set__QueryInterface_3(L_0);
		_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * L_1 = (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 *)il2cpp_codegen_object_new(_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var);
		_AddRef__ctor_m8A5FFC9D62D00CFBC99FFBE80849259E06DEEAF1(L_1, NULL, (intptr_t)((intptr_t)Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745_RuntimeMethod_var), /*hidden argument*/NULL);
		((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->set__AddRef_4(L_1);
		_Release_t5E373D5F2713F88800A00AC29C398E679178043A * L_2 = (_Release_t5E373D5F2713F88800A00AC29C398E679178043A *)il2cpp_codegen_object_new(_Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var);
		_Release__ctor_m96990D35E888EA45D144FDE1FD8DD3B5886480EF(L_2, NULL, (intptr_t)((intptr_t)Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2_RuntimeMethod_var), /*hidden argument*/NULL);
		((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->set__Release_5(L_2);
		_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * L_3 = ((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get__QueryInterface_3();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_m3CA9094075AB4242A3D7D879E4FB19871B63D0A9(L_3, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_m3CA9094075AB4242A3D7D879E4FB19871B63D0A9_RuntimeMethod_var);
		(((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_QueryInterface_0((intptr_t)L_4);
		_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * L_5 = ((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get__AddRef_4();
		intptr_t L_6;
		L_6 = Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_m4F936BB52F59AB5F2A225188723B396358129FA9(L_5, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_Tis_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_m4F936BB52F59AB5F2A225188723B396358129FA9_RuntimeMethod_var);
		(((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_AddRef_1((intptr_t)L_6);
		_Release_t5E373D5F2713F88800A00AC29C398E679178043A * L_7 = ((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get__Release_5();
		intptr_t L_8;
		L_8 = Marshal_GetFunctionPointerForDelegate_Tis_Release_t5E373D5F2713F88800A00AC29C398E679178043A_mA080B91B26661D0F640442D929C1E6F9A690F483(L_7, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_Tis_Release_t5E373D5F2713F88800A00AC29C398E679178043A_mA080B91B26661D0F640442D929C1E6F9A690F483_RuntimeMethod_var);
		(((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_Release_2((intptr_t)L_8);
		(((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_Invoke_3((intptr_t)(0));
		return;
	}
}
// System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m85A286E877BF2A7DBE0CD7BCAE440814FC6F62F2 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, Guid_t  ___iid0, intptr_t ___invokePtr1, RuntimeObject * ___invoker2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_0;
		L_0 = WinrtModule_get_Instance_m94C6A25F3EB29F1AEE04E609D99AE9F010554088(/*hidden argument*/NULL);
		V_0 = L_0;
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_1;
		L_1 = ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98((ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *)(&V_0), /*hidden argument*/NULL);
		__this->set__module_7(L_1);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_2 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m11BFDB039514BDCE23425FD90E8C414D051B2F13(L_2, NULL, /*hidden argument*/NULL);
		__this->set__weakInvoker_9(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Guid_t  L_3 = ___iid0;
		__this->set__iid_2(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  L_4 = ((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get__vftblTemplate_6();
		V_1 = L_4;
		intptr_t L_5 = ___invokePtr1;
		(&V_1)->set_Invoke_3((intptr_t)L_5);
		UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B * L_6 = __this->get_address_of__unmanagedObj_10();
		IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  L_7 = ((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var))->get__vftblTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF(L_7, /*hidden argument*/Marshal_SizeOf_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m0EBE0CB570E823F1B3B66518FA5130D0FADF81AF_RuntimeMethod_var);
		intptr_t L_9;
		L_9 = Marshal_AllocCoTaskMem_mDD149E0F9D2CFCA6BF5ACD3558220591A8C97B7E(L_8, /*hidden argument*/NULL);
		L_6->set__vftblPtr_0((intptr_t)L_9);
		IDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164  L_10 = V_1;
		UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B * L_11 = __this->get_address_of__unmanagedObj_10();
		intptr_t L_12 = L_11->get__vftblPtr_0();
		Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938(L_10, (intptr_t)L_12, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisIDelegateVftbl_t031453133FA5FD41D7E8E1BAE174B5794B6F5164_m091F89FAE94EC00BD1BB481568AABEC58B0A8938_RuntimeMethod_var);
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_13 = __this->get__weakInvoker_9();
		RuntimeObject * L_14 = ___invoker2;
		NullCheck(L_13);
		VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_13, L_14);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_15;
		L_15 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(__this, /*hidden argument*/NULL);
		__this->set__thisHandle_8(L_15);
		UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B * L_16 = __this->get_address_of__unmanagedObj_10();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_17 = __this->get__thisHandle_8();
		intptr_t L_18;
		L_18 = GCHandle_ToIntPtr_m017FBB27407865DD17A269CC03518EC518DE5AEA(L_17, /*hidden argument*/NULL);
		L_16->set__gchandlePtr_1((intptr_t)L_18);
		UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  L_19 = __this->get__unmanagedObj_10();
		int32_t L_20;
		L_20 = Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F(L_19, /*hidden argument*/Marshal_SizeOf_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_mC73734DDA1D733BC7FB94987A339BCAB25D1803F_RuntimeMethod_var);
		intptr_t L_21;
		L_21 = Marshal_AllocCoTaskMem_mDD149E0F9D2CFCA6BF5ACD3558220591A8C97B7E(L_20, /*hidden argument*/NULL);
		__this->set_ThisPtr_1((intptr_t)L_21);
		UnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B  L_22 = __this->get__unmanagedObj_10();
		intptr_t L_23 = __this->get_ThisPtr_1();
		Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2(L_22, (intptr_t)L_23, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisUnmanagedObject_t870DB93939BC8E8587E87D84E033F8C55F417E0B_m23935DF587CF8D0C75444D5A86CC153A557F7BB2_RuntimeMethod_var);
		return;
	}
}
// System.Void WinRT.Delegate::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_Finalize_m8BA08F149F8F12DD003CA82E742D17CEA1D1573D (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		return;
	}
}
// System.Void WinRT.Delegate::_Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834 (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get__refs_0();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4535E88AFD16EB73A1C33E88E92D77F5476E9CAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->get_ThisPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_mCC0E874C853846E0A82E36971E3FC7BF359C6AA5((intptr_t)L_2, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_3 = __this->get__thisHandle_8();
		V_0 = L_3;
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_4 = __this->get__module_7();
		V_1 = L_4;
		ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE((ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
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
// System.Void WinRT.DllModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__cctor_mBBA26DF1B5329291F6FDC7272EF0044B12E3E6FC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD54A210AE4DC60DA46BFD1736864CCF03F7A2F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * L_0 = (Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 *)il2cpp_codegen_object_new(Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD54A210AE4DC60DA46BFD1736864CCF03F7A2F45(L_0, /*hidden argument*/Dictionary_2__ctor_mD54A210AE4DC60DA46BFD1736864CCF03F7A2F45_RuntimeMethod_var);
		((DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var))->set__cache_3(L_0);
		return;
	}
}
// WinRT.DllModule WinRT.DllModule::TryLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * DllModule_TryLoad_mDFFDA00174AFEDD748114C5E712880B06B4A8522 (String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7EED326AA464107018F9444CA41BC7277555B797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA9953DEEFD00B3B191AE3C6FC9F1A0A8359259DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_TryGetProcAddress_TisDllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7_m74A4E80317EE3E2BC2B569A624A9475507C0C93A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_TryGetTarget_m684121294B8A136791F4ED7BF7ACF9B57273D6E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1__ctor_m7F386C4AA6575948F47C5A5C42B29795133AC408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * V_0 = NULL;
	bool V_1 = false;
	WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 * V_2 = NULL;
	DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * V_5 = NULL;
	DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
		Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * L_0 = ((DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var))->get__cache_3();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
			Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * L_2 = ((DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var))->get__cache_3();
			String_t* L_3 = ___fileName0;
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m7EED326AA464107018F9444CA41BC7277555B797(L_2, L_3, (WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m7EED326AA464107018F9444CA41BC7277555B797_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_001f:
		{
			WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 * L_5 = V_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = WeakReference_1_TryGetTarget_m684121294B8A136791F4ED7BF7ACF9B57273D6E0(L_5, (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 **)(&V_3), /*hidden argument*/WeakReference_1_TryGetTarget_m684121294B8A136791F4ED7BF7ACF9B57273D6E0_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_00b4;
			}
		}

IL_002c:
		{
			String_t* L_7 = ___fileName0;
			IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
			intptr_t L_8;
			L_8 = Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C(L_7, (intptr_t)(0), 0, /*hidden argument*/NULL);
			V_4 = (intptr_t)L_8;
			intptr_t L_9 = V_4;
			bool L_10;
			L_10 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005a;
			}
		}

IL_0048:
		{
			String_t* L_11 = ___fileName0;
			IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
			intptr_t L_12;
			L_12 = Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C(L_11, (intptr_t)(0), ((int32_t)4096), /*hidden argument*/NULL);
			V_4 = (intptr_t)L_12;
		}

IL_005a:
		{
		}

IL_005b:
		try
		{ // begin try (depth: 2)
			{
				intptr_t L_13 = V_4;
				bool L_14;
				L_14 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_006e;
				}
			}

IL_0069:
			{
				V_6 = (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 *)NULL;
				IL2CPP_LEAVE(0xC3, FINALLY_009e);
			}

IL_006e:
			{
				intptr_t L_15 = V_4;
				IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
				DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * L_16;
				L_16 = Platform_TryGetProcAddress_TisDllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7_m74A4E80317EE3E2BC2B569A624A9475507C0C93A((intptr_t)L_15, /*hidden argument*/Platform_TryGetProcAddress_TisDllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7_m74A4E80317EE3E2BC2B569A624A9475507C0C93A_RuntimeMethod_var);
				V_5 = L_16;
				DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * L_17 = V_5;
				if (L_17)
				{
					goto IL_0080;
				}
			}

IL_007b:
			{
				V_6 = (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 *)NULL;
				IL2CPP_LEAVE(0xC3, FINALLY_009e);
			}

IL_0080:
			{
				String_t* L_18 = ___fileName0;
				DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * L_19 = V_5;
				DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * L_20 = (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 *)il2cpp_codegen_object_new(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
				DllModule__ctor_m1764FF4C22B06C2171EEA0599C055DC547C8F3E3(L_20, L_18, (intptr_t*)(&V_4), L_19, /*hidden argument*/NULL);
				V_3 = L_20;
				IL2CPP_RUNTIME_CLASS_INIT(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
				Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * L_21 = ((DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var))->get__cache_3();
				String_t* L_22 = ___fileName0;
				DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * L_23 = V_3;
				WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 * L_24 = (WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031 *)il2cpp_codegen_object_new(WeakReference_1_tB9233F30E42F25F02492133FD625DA91EFA8E031_il2cpp_TypeInfo_var);
				WeakReference_1__ctor_m7F386C4AA6575948F47C5A5C42B29795133AC408(L_24, L_23, /*hidden argument*/WeakReference_1__ctor_m7F386C4AA6575948F47C5A5C42B29795133AC408_RuntimeMethod_var);
				NullCheck(L_21);
				Dictionary_2_set_Item_mA9953DEEFD00B3B191AE3C6FC9F1A0A8359259DA(L_21, L_22, L_24, /*hidden argument*/Dictionary_2_set_Item_mA9953DEEFD00B3B191AE3C6FC9F1A0A8359259DA_RuntimeMethod_var);
				IL2CPP_LEAVE(0xB4, FINALLY_009e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009e;
		}

FINALLY_009e:
		{ // begin finally (depth: 2)
			{
				intptr_t L_25 = V_4;
				bool L_26;
				L_26 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_25, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_00b3;
				}
			}

IL_00ac:
			{
				intptr_t L_27 = V_4;
				IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
				Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5((intptr_t)L_27, /*hidden argument*/NULL);
			}

IL_00b3:
			{
				IL2CPP_END_FINALLY(158)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(158)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xC3, FINALLY_00b9);
			IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		}

IL_00b4:
		{
			DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * L_28 = V_3;
			V_6 = L_28;
			IL2CPP_LEAVE(0xC3, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		{
			bool L_29 = V_1;
			if (!L_29)
			{
				goto IL_00c2;
			}
		}

IL_00bc:
		{
			Dictionary_2_t37AF636BADF0A7A5E7BDD04198DCDCDB61B763E3 * L_30 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_30, /*hidden argument*/NULL);
		}

IL_00c2:
		{
			IL2CPP_END_FINALLY(185)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
	}

IL_00c3:
	{
		DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * L_31 = V_6;
		return L_31;
	}
}
// System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule/DllGetActivationFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__ctor_m1764FF4C22B06C2171EEA0599C055DC547C8F3E3 (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * __this, String_t* ___fileName0, intptr_t* ___moduleHandle1, DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * ___getActivationFactory2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___fileName0;
		__this->set__fileName_0(L_0);
		intptr_t* L_1 = ___moduleHandle1;
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_2;
		L_2 = ModuleReference_Allocate_m10B82418E7BDDFFAEB5EE600287EA3D9F02E3ECA(__this, (intptr_t*)L_1, /*hidden argument*/NULL);
		__this->set__moduleHandle_1(L_2);
		DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * L_3 = ___getActivationFactory2;
		__this->set__GetActivationFactory_2(L_3);
		return;
	}
}
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.DllModule::GetActivationFactory(WinRT.HString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * DllModule_GetActivationFactory_m725C684F0AE7B59EE99226F4A18310AD971838F8 (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * __this, HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * ___runtimeClassId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * L_0 = __this->get__GetActivationFactory_2();
		HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * L_1 = ___runtimeClassId0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		NullCheck(L_0);
		int32_t L_3;
		L_3 = DllGetActivationFactory_Invoke_m9FA6F8618BF10EEF7CC971DC2A6B3B873F7B6664(L_0, (intptr_t)L_2, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_3, /*hidden argument*/NULL);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_4 = __this->get__moduleHandle_1();
		ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * L_5;
		L_5 = ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E(L_4, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void WinRT.DllModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule_Finalize_mC42A03CD1740F985115E39BE48B5695072864E00 (DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 * __this, const RuntimeMethod* method)
{
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_0 = __this->get__moduleHandle_1();
		V_0 = L_0;
		ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE((ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9(intptr_t ___thisPtr0, intptr_t ___senderPtr1, intptr_t ___argsPtr2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9(___thisPtr0, ___senderPtr1, ___argsPtr2, NULL);

	return returnValue;
}
// System.Int32 WinRT.EventSource::_invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9 (intptr_t ___thisPtr0, intptr_t ___senderPtr1, intptr_t ___argsPtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mCBB21ECD057ECA77601FA2C34C9EF2D21944CAD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_MarshalInvoke_Tis_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102_mC163731B28D12E983BCF1E55E90AFEB10EA6B8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m8051FBB44797C2E9B2CE20A8C83702D4E466A505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * L_0 = (U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m500680DBFAC1D4618C15E76612661550D2717D79(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * L_1 = V_0;
		intptr_t L_2 = ___senderPtr1;
		NullCheck(L_1);
		L_1->set_senderPtr_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * L_3 = V_0;
		intptr_t L_4 = ___argsPtr2;
		NullCheck(L_3);
		L_3->set_argsPtr_1((intptr_t)L_4);
		intptr_t L_5 = ___thisPtr0;
		U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * L_6 = V_0;
		Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4 * L_7 = (Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4 *)il2cpp_codegen_object_new(Action_1_t9F72025CD1E684F2FDEE65D4C22650C2649212B4_il2cpp_TypeInfo_var);
		Action_1__ctor_mCBB21ECD057ECA77601FA2C34C9EF2D21944CAD0(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m8051FBB44797C2E9B2CE20A8C83702D4E466A505_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mCBB21ECD057ECA77601FA2C34C9EF2D21944CAD0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Delegate_MarshalInvoke_Tis_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102_mC163731B28D12E983BCF1E55E90AFEB10EA6B8C4((intptr_t)L_5, L_7, /*hidden argument*/Delegate_MarshalInvoke_Tis_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102_mC163731B28D12E983BCF1E55E90AFEB10EA6B8C4_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void WinRT.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_m69DB609B14B796733CB615E2F9B86F0F42318403 (EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.EventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__cctor_mA6C83091B197BC4FC88BBF11CF123F02D56A7833 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * L_0 = (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 *)il2cpp_codegen_object_new(IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7_il2cpp_TypeInfo_var);
		IDelegate2_Obj_Obj__ctor_m75E4D93DBE0AFF24C8003D8FA963F710CC48BAAA(L_0, NULL, (intptr_t)((intptr_t)EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9_RuntimeMethod_var), /*hidden argument*/NULL);
		((EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4_StaticFields*)il2cpp_codegen_static_fields_for(EventSource_tADF3F973654CFA85590D8060EED9513BA9E656B4_il2cpp_TypeInfo_var))->set__invokeDelegate_0(L_0);
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
// System.Void WinRT.HString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString__ctor_mF6D16E2BC62CF33D24D0A0756E58D14D25E2BB79 (HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Platform_WindowsCreateString_m660737A5CD07AF4A8719B1871F25B3C149666941(L_0, L_2, /*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_3);
		return;
	}
}
// System.String WinRT.HString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HString_ToString_mF0A5F881ABCDA00CBC9289600BF8E1055A8CA20D (HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		Il2CppChar* L_1;
		L_1 = Platform_WindowsGetStringRawBuffer_m6D782A4AFE5BA4B96C6960FBDD15EE48766C400F((intptr_t)L_0, (uint32_t*)(uint32_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		uint32_t L_2 = V_0;
		String_t* L_3;
		L_3 = String_CreateString_m854F19B67F5E1B63737E096BF53CC56AB12AF777(NULL, (Il2CppChar*)(Il2CppChar*)L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void WinRT.HString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString_Dispose_m5FD752CE9B55D40A798A4CD79CAE33058D23CE59 (HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		Platform_WindowsDeleteString_mA90605E243EC48929051CE3AC36B495076164481((intptr_t)L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshal_pinvoke(const IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258& unmarshaled, IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ActivateInstance_1()));
}
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshal_pinvoke_back(const IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_pinvoke& marshaled, IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_ActivateInstance_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9>(marshaled.___ActivateInstance_1, _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshal_pinvoke_cleanup(IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshal_com(const IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258& unmarshaled, IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ActivateInstance_1()));
}
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshal_com_back(const IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_com& marshaled, IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_ActivateInstance_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9>(marshaled.___ActivateInstance_1, _ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshal_com_cleanup(IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshal_pinvoke(const IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38& unmarshaled, IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
}
IL2CPP_EXTERN_C void IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshal_pinvoke_back(const IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_pinvoke& marshaled, IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38& unmarshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshal_pinvoke_cleanup(IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshal_com(const IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38& unmarshaled, IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_com& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
}
IL2CPP_EXTERN_C void IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshal_com_back(const IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_com& marshaled, IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38& unmarshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshal_com_cleanup(IAgileObjectVftbl_t20A2F316F81635FF16DA0DFF8F5534B4A5D6DC38_marshaled_com& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Interop.IAsyncAction::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncAction__ctor_mC0E80187A5BBF917B7747E600A48C50E76200AC6 (IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C * __this, ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncActionCompletedHandler_t736AFA34238BBB11BCB8944DF95E7F8D33D46EAC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetDelegateForFunctionPointer_Tis_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_m4AC353FFEC4E0547C1A6AF86A9424281AC326BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IAsyncOperation_2__ctor_m5240F9043F7CC4A76B7531458B839067173F1C33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IAsyncActionCompletedHandler_t736AFA34238BBB11BCB8944DF95E7F8D33D46EAC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Guid_t  L_3;
		L_3 = VirtFuncInvoker0< Guid_t  >::Invoke(22 /* System.Guid System.Reflection.TypeInfo::get_GUID() */, L_2);
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_4 = ___obj0;
		_IAsyncOperation_2__ctor_m5240F9043F7CC4A76B7531458B839067173F1C33(__this, L_3, L_4, /*hidden argument*/_IAsyncOperation_2__ctor_m5240F9043F7CC4A76B7531458B839067173F1C33_RuntimeMethod_var);
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_5 = ___obj0;
		NullCheck(L_5);
		Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE * L_6 = L_5->get_address_of_Vftbl_4();
		intptr_t L_7 = L_6->get_GetResults_3();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * L_8;
		L_8 = Marshal_GetDelegateForFunctionPointer_Tis_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_m4AC353FFEC4E0547C1A6AF86A9424281AC326BFC((intptr_t)L_7, /*hidden argument*/Marshal_GetDelegateForFunctionPointer_Tis_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_m4AC353FFEC4E0547C1A6AF86A9424281AC326BFC_RuntimeMethod_var);
		__this->set__GetResults_3(L_8);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncAction::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncAction_GetResults_m8A1462B1578C3A13A6DFE5C003652386AB6C72A9 (IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C * __this, const RuntimeMethod* method)
{
	{
		_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * L_0 = __this->get__GetResults_3();
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_1 = ((IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478 *)__this)->get__obj_0();
		NullCheck(L_1);
		intptr_t L_2 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_1)->get_ThisPtr_0();
		NullCheck(L_0);
		int32_t L_3;
		L_3 = _method0_Invoke_mA89A8760402261928A1938DD62356A2C4C3C05BF(L_0, (intptr_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncAction::OnCompleted(System.Threading.Tasks.TaskCompletionSource`1<WinRT.Interop.VoidResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncAction_OnCompleted_m6FFE3FFE1821CCCF4680D34CF153C7DAD827392D (IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C * __this, TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC * ___taskCompletionSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IAsyncAction_GetResults_m8A1462B1578C3A13A6DFE5C003652386AB6C72A9(__this, /*hidden argument*/NULL);
		TaskCompletionSource_1_t6807C30221BC1DEB0C27921963F503CCF96EF4CC * L_0 = ___taskCompletionSource0;
		il2cpp_codegen_initobj((&V_0), sizeof(VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1 ));
		VoidResult_t2FA0D6CC07D8D221A9072E4E20F36AE291242DF1  L_1 = V_0;
		NullCheck(L_0);
		TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA(L_0, L_1, /*hidden argument*/TaskCompletionSource_1_SetResult_mB9168F733C48E237DCB1EBEC610587CA2F5CA2CA_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * IAsyncInfo_op_Implicit_m5C001870E6C9CE36BFCCA52D0332E76B4546B5E6 (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_1;
		L_1 = IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_m758DF2F34386E23AAE499B4FB70F2CCE59AF1B97_RuntimeMethod_var);
		IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * L_2;
		L_2 = IAsyncInfo_op_Implicit_m005F86B9BF1D41972112E02A8466A7E5E804FF73(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * IAsyncInfo_op_Implicit_m005F86B9BF1D41972112E02A8466A7E5E804FF73 (ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_0 = ___obj0;
		IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * L_1 = (IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 *)il2cpp_codegen_object_new(IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29_il2cpp_TypeInfo_var);
		IAsyncInfo__ctor_m34D20304F8A20A9DF83809423E4C37262BF1649A(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo__ctor_m34D20304F8A20A9DF83809423E4C37262BF1649A (IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * __this, ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Exception WinRT.Interop.IAsyncInfo::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * IAsyncInfo_get_ErrorCode_mF4F077C50AE3BD6224542507F239F26A6E616F34 (IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * L_2 = L_1->get_get_ErrorCode_3();
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsInt_Invoke_m77A5D7212015B9F83703EEF1EA96199931E5E6BC(L_2, (intptr_t)L_4, (int32_t*)(int32_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Exception_t * L_7;
		L_7 = Marshal_GetExceptionForHR_m81353AE9461C02ACF75882B02059E78A99FFAFE4(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void WinRT.Interop.IAsyncInfo::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo_Cancel_m4C3F7B39C79C9732C458A844F37296FF679062A5 (IAsyncInfo_tFB9194B9E9192822BB0C97E0C5AE691B5A311D29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6 * L_1 = L_0->get_address_of_Vftbl_4();
		_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * L_2 = L_1->get_Cancel_4();
		ObjectReference_1_tCA84B902B10E0CC9193EC186FB6FA38261765572 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _method0_Invoke_mA89A8760402261928A1938DD62356A2C4C3C05BF(L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0(intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0(___thisPtr0, ___operationPtr1, ___status2, NULL);

	return returnValue;
}
// System.Void WinRT.Interop.IAsyncOperation::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation__ctor_mE3E2542C7BB3DBB61E928AFA9D90C3CF20D02A2A (IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478 * __this, Guid_t  ___iid0, ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateProperty_1__ctor_m5A472DDDB6028B09CD3D4BC8CF74EB2D34D8FBBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_m463B2ED57155BCF5D26CD9802FEA82AFA6465E76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_0 = ___obj1;
		__this->set__obj_0(L_0);
		Guid_t  L_1 = ___iid0;
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_2 = __this->get__obj_0();
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE * L_4 = L_3->get_address_of_Vftbl_4();
		_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * L_5 = L_4->get_get_Completed_2();
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE * L_7 = L_6->get_address_of_Vftbl_4();
		_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * L_8 = L_7->get_put_Completed_1();
		IL2CPP_RUNTIME_CLASS_INIT(IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_il2cpp_TypeInfo_var);
		IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * L_9 = ((IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_il2cpp_TypeInfo_var))->get__OnCompletedDelegate_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_m463B2ED57155BCF5D26CD9802FEA82AFA6465E76(L_9, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_m463B2ED57155BCF5D26CD9802FEA82AFA6465E76_RuntimeMethod_var);
		DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * L_11 = (DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 *)il2cpp_codegen_object_new(DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73_il2cpp_TypeInfo_var);
		DelegateProperty_1__ctor_m5A472DDDB6028B09CD3D4BC8CF74EB2D34D8FBBE(L_11, L_1, L_2, L_5, L_8, (intptr_t)L_10, /*hidden argument*/DelegateProperty_1__ctor_m5A472DDDB6028B09CD3D4BC8CF74EB2D34D8FBBE_RuntimeMethod_var);
		__this->set__Completed_2(L_11);
		return;
	}
}
// System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0 (intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA6BAAB39B5BB41CD8225E955B5AA330AEE81227A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_MarshalInvoke_TisCompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8_m69A87B3F3006DF293CEABC97BA260E815A95AC84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m4006340DE007DD0B2E0D3FE419555471ABEDE0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * L_0 = (U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m5F2CA8F17E10CA207D487A86A7BC3378E9715026(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * L_1 = V_0;
		int32_t L_2 = ___status2;
		NullCheck(L_1);
		L_1->set_status_0(L_2);
		intptr_t L_3 = ___thisPtr0;
		U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * L_4 = V_0;
		Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A * L_5 = (Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A *)il2cpp_codegen_object_new(Action_1_tC0F273626D41CB076AE0D4651BB2C5D362C4AA2A_il2cpp_TypeInfo_var);
		Action_1__ctor_mA6BAAB39B5BB41CD8225E955B5AA330AEE81227A(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m4006340DE007DD0B2E0D3FE419555471ABEDE0E0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA6BAAB39B5BB41CD8225E955B5AA330AEE81227A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Delegate_MarshalInvoke_TisCompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8_m69A87B3F3006DF293CEABC97BA260E815A95AC84((intptr_t)L_3, L_5, /*hidden argument*/Delegate_MarshalInvoke_TisCompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8_m69A87B3F3006DF293CEABC97BA260E815A95AC84_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void WinRT.Interop.IAsyncOperation::set_Completed(WinRT.Interop.IAsyncOperation/CompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation_set_Completed_mB3E56629943CE5387B1ABCEFD94A2A2C54BEAA23 (IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478 * __this, CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateProperty_1_set_Value_mBC95CA83F3182AC7DCAC86687C5F6A4D2CCB9275_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelegateProperty_1_tE12815C482033ACE7B7C277C11101B03A3990E73 * L_0 = __this->get__Completed_2();
		CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * L_1 = ___value0;
		NullCheck(L_0);
		DelegateProperty_1_set_Value_mBC95CA83F3182AC7DCAC86687C5F6A4D2CCB9275(L_0, L_1, /*hidden argument*/DelegateProperty_1_set_Value_mBC95CA83F3182AC7DCAC86687C5F6A4D2CCB9275_RuntimeMethod_var);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation__cctor_m67C4C4D9AC05F6C1A8296E5D61527CCD9EBC912C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * L_0 = (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 *)il2cpp_codegen_object_new(IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802_il2cpp_TypeInfo_var);
		IDelegate2_Obj_Enum__ctor_m59410F25BA1F4BA3E6BE194F1786C8807E3EFCEC(L_0, NULL, (intptr_t)((intptr_t)IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0_RuntimeMethod_var), /*hidden argument*/NULL);
		((IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_tAEA53FCF8602C1AB94F74DFAE42C825585C21478_il2cpp_TypeInfo_var))->set__OnCompletedDelegate_1(L_0);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * __this, intptr_t ___thisPtr0, intptr_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___arg11, ___arg22);

	return returnValue;
}
// System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Enum__ctor_m59410F25BA1F4BA3E6BE194F1786C8807E3EFCEC (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::Invoke(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Enum_Invoke_m276A7C59B60D3B939801A3B9050934387555A5F6 (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * __this, intptr_t ___thisPtr0, intptr_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___arg11, ___arg22, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___arg11, ___arg22);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___arg11, ___arg22);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___arg11, ___arg22, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IDelegate2_Obj_Enum::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IDelegate2_Obj_Enum_BeginInvoke_mCB45954EA4B493B8EDA491AC04DA77D5E070550D (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * __this, intptr_t ___thisPtr0, intptr_t ___arg11, int32_t ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Enum_EndInvoke_m751BE29AEBDC254D3183AE499C17D4A7640AC2B3 (IDelegate2_Obj_Enum_t6A5AAFF3B5784358DCEB4662C2F4B32044149802 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * __this, intptr_t ___thisPtr0, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___arg11, ___arg22);

	return returnValue;
}
// System.Void WinRT.Interop.IDelegate2_Obj_Obj::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Obj__ctor_m75E4D93DBE0AFF24C8003D8FA963F710CC48BAAA (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Obj::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Obj_Invoke_m21031BA60279F3470B042631035161AEC7CCCD85 (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * __this, intptr_t ___thisPtr0, intptr_t ___arg11, intptr_t ___arg22, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___arg11, ___arg22, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___arg11, ___arg22);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___arg11, ___arg22);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___arg11, ___arg22);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___arg11, ___arg22, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IDelegate2_Obj_Obj::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IDelegate2_Obj_Obj_BeginInvoke_m81A019256933825C375B00DAD57C51FDC14F43E6 (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * __this, intptr_t ___thisPtr0, intptr_t ___arg11, intptr_t ___arg22, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Obj::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Obj_EndInvoke_mC92BE1D268B59348523C96CFA78A4EBA7AF74436 (IDelegate2_Obj_Obj_tC1D49AB8466D293536692298CB69D0F3AE8C8AE7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke& marshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A>(marshaled.___GetIids_1, _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(const IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com& marshaled, IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A>(marshaled.___GetIids_1, _GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshaled_com& marshaled)
{
	IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Input.IMotionController Microsoft.MixedReality.Input.IMotionController::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * IMotionController_op_Implicit_m9C3E9F1A7E36427E17AEE1ED8AD406B4B9239291 (ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_0 = ___obj0;
		IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * L_1 = (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 *)il2cpp_codegen_object_new(IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3_il2cpp_TypeInfo_var);
		IMotionController__ctor_mECD9FFBD082EFAF5839E3917B5309F0DD5007865(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Input.IMotionController::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMotionController__ctor_mECD9FFBD082EFAF5839E3917B5309F0DD5007865 (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * __this, ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.MixedReality.Input.Handedness Microsoft.MixedReality.Input.IMotionController::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IMotionController_get_Handedness_mBB1E34AE510F5C9204EB1C9F35A06049E97A026C (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * L_2 = L_1->get_get_Handedness_1();
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _get_PropertyAsUInt_Invoke_m6290F9621850812D13C51AFA7F470E339CEAF38B(L_2, (intptr_t)L_4, (uint32_t*)(uint32_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		uint32_t L_6 = V_0;
		return (int32_t)(L_6);
	}
}
// Microsoft.MixedReality.Input.MotionControllerReading Microsoft.MixedReality.Input.IMotionController::TryGetReadingAtTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * IMotionController_TryGetReadingAtTime_m9F576624EC8D416B63FFD5BC9A7034EFEA2D320A (IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timestamp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timestamp0;
		DateTimeOffset__ctor_mC17E28F89D4E54D511B30E08D1F56453E677D53F((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_0), L_0, /*hidden argument*/NULL);
		int64_t L_1;
		L_1 = DateTimeOffset_ToFileTime_mB1301A482EF6635A96D0ED23F3CB88B4C43934F3((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_0), /*hidden argument*/NULL);
		_DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_inline((_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D *)(&V_1), L_1, /*hidden argument*/NULL);
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_2 = __this->get__obj_0();
		NullCheck(L_2);
		Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0 * L_3 = L_2->get_address_of_Vftbl_4();
		_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * L_4 = L_3->get_TryGetReadingAtTime_12();
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_5 = __this->get__obj_0();
		NullCheck(L_5);
		intptr_t L_6 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_5)->get_ThisPtr_0();
		_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D  L_7 = V_1;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = _TryGetReadingAtTime_Invoke_mA9726FD3B6BCF1FE45FF8762C80BFB296F821B58(L_4, (intptr_t)L_6, L_7, (intptr_t*)(intptr_t*)((uintptr_t)(&V_2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_8, /*hidden argument*/NULL);
		intptr_t L_9 = V_2;
		bool L_10;
		L_10 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		return (MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA *)NULL;
	}

IL_004e:
	{
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_11 = __this->get__obj_0();
		NullCheck(L_11);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_12 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_11)->get_Module_1();
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_13;
		L_13 = ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968(L_12, (intptr_t*)(&V_2), /*hidden argument*/ObjectReference_1_Attach_m5F08D858CE98F69B9212D0AE2560B08154889968_RuntimeMethod_var);
		IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * L_14;
		L_14 = IMotionControllerReading_op_Implicit_m25C1A9D1A1916E82A8034480094C94B78395CE2B(L_13, /*hidden argument*/NULL);
		MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * L_15 = (MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA *)il2cpp_codegen_object_new(MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA_il2cpp_TypeInfo_var);
		MotionControllerReading__ctor_m93EB4AB64AF0D35AA1FE3DD349B9AA4BA81A3066(L_15, L_14, /*hidden argument*/NULL);
		return L_15;
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
// Microsoft.MixedReality.Input.IMotionControllerReading Microsoft.MixedReality.Input.IMotionControllerReading::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * IMotionControllerReading_op_Implicit_m25C1A9D1A1916E82A8034480094C94B78395CE2B (ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_0 = ___obj0;
		IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * L_1 = (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 *)il2cpp_codegen_object_new(IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400_il2cpp_TypeInfo_var);
		IMotionControllerReading__ctor_mC6F8291F98142E25BAFF5C32097FDD87DB72FB64(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerReading::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMotionControllerReading__ctor_mC6F8291F98142E25BAFF5C32097FDD87DB72FB64 (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * __this, ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Input.IMotionControllerReading::GetPressedValue(Microsoft.MixedReality.Input.ControllerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IMotionControllerReading_GetPressedValue_mA31AB0757BA8080FBAF0B7C79AC8D7B36AA490C7 (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * __this, int32_t ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4 * L_1 = L_0->get_address_of_Vftbl_4();
		_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * L_2 = L_1->get_GetPressedValue_6();
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_3)->get_ThisPtr_0();
		int32_t L_5 = ___input0;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = _GetFloatValue_Invoke_m53CA1E2F27B36D9F2B0011B95FC6F57F0814EDB0(L_2, (intptr_t)L_4, L_5, (float*)(float*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_6, /*hidden argument*/NULL);
		float L_7 = V_0;
		return L_7;
	}
}
// System.Numerics.Vector2 Microsoft.MixedReality.Input.IMotionControllerReading::GetXYValue(Microsoft.MixedReality.Input.ControllerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  IMotionControllerReading_GetXYValue_m867878E2D110E38586F406BB4163FF3CCFC8352B (IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * __this, int32_t ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4 * L_1 = L_0->get_address_of_Vftbl_4();
		_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * L_2 = L_1->get_GetXYValue_8();
		ObjectReference_1_tCFBA03C1B9E1F718EA0783EEA1FD3AEA82AD24A8 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_3)->get_ThisPtr_0();
		int32_t L_5 = ___input0;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = _GetVector2Value_Invoke_mCC548729DDD7191524FECE2E9EE5687D3EC63E5A(L_2, (intptr_t)L_4, L_5, (Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *)(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_6, /*hidden argument*/NULL);
		Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  L_7 = V_0;
		return L_7;
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
// Microsoft.MixedReality.Input.IMotionControllerWatcher Microsoft.MixedReality.Input.IMotionControllerWatcher::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * IMotionControllerWatcher_op_Implicit_m79FD9FFF4E4D7FCF313ED4168726EB73A10CE516 (ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_0 = ___obj0;
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_1 = (IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC *)il2cpp_codegen_object_new(IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC_il2cpp_TypeInfo_var);
		IMotionControllerWatcher__ctor_m3A0851B07F3D59631E2912699A8DEA487946010C(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMotionControllerWatcher__ctor_m3A0851B07F3D59631E2912699A8DEA487946010C (IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * __this, ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_0_m294D6F52AB0A19E289D407B41E2F2E33124208E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_1_m4F5F51ED5F8220DA0E68B3F62FFF20FE1B793C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * G_B2_0 = NULL;
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * G_B2_1 = NULL;
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * G_B2_2 = NULL;
	ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * G_B2_3 = NULL;
	IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * G_B2_4 = NULL;
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * G_B1_0 = NULL;
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * G_B1_1 = NULL;
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * G_B1_2 = NULL;
	ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * G_B1_3 = NULL;
	IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * G_B1_4 = NULL;
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * G_B4_0 = NULL;
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * G_B4_1 = NULL;
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * G_B4_2 = NULL;
	ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * G_B4_3 = NULL;
	IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * G_B4_4 = NULL;
	UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * G_B3_0 = NULL;
	_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * G_B3_1 = NULL;
	_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * G_B3_2 = NULL;
	ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * G_B3_3 = NULL;
	IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * G_B3_4 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_1 = __this->get__obj_0();
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_2 = __this->get__obj_0();
		NullCheck(L_2);
		Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 * L_3 = L_2->get_address_of_Vftbl_4();
		_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * L_4 = L_3->get_add_MotionControllerAdded_1();
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_5 = __this->get__obj_0();
		NullCheck(L_5);
		Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 * L_6 = L_5->get_address_of_Vftbl_4();
		_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * L_7 = L_6->get_remove_MotionControllerAdded_2();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_8 = ((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_7;
		G_B1_2 = L_4;
		G_B1_3 = L_1;
		G_B1_4 = __this;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_7;
			G_B2_2 = L_4;
			G_B2_3 = L_1;
			G_B2_4 = __this;
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * L_10 = ((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_11 = (UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 *)il2cpp_codegen_object_new(UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732_il2cpp_TypeInfo_var);
		UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__4_0_m294D6F52AB0A19E289D407B41E2F2E33124208E3_RuntimeMethod_var), /*hidden argument*/UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B_RuntimeMethod_var);
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_12 = L_11;
		((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_12);
		G_B2_0 = L_12;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
	}

IL_0053:
	{
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_13 = (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC *)il2cpp_codegen_object_new(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC_il2cpp_TypeInfo_var);
		EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901(L_13, G_B2_3, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901_RuntimeMethod_var);
		NullCheck(G_B2_4);
		G_B2_4->set_MotionControllerAdded_1(L_13);
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_14 = __this->get__obj_0();
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_15 = __this->get__obj_0();
		NullCheck(L_15);
		Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 * L_16 = L_15->get_address_of_Vftbl_4();
		_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * L_17 = L_16->get_add_MotionControllerRemoved_3();
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_18 = __this->get__obj_0();
		NullCheck(L_18);
		Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 * L_19 = L_18->get_address_of_Vftbl_4();
		_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * L_20 = L_19->get_remove_MotionControllerRemoved_4();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_21 = ((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->get_U3CU3E9__4_1_2();
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_22 = L_21;
		G_B3_0 = L_22;
		G_B3_1 = L_20;
		G_B3_2 = L_17;
		G_B3_3 = L_14;
		G_B3_4 = __this;
		if (L_22)
		{
			G_B4_0 = L_22;
			G_B4_1 = L_20;
			G_B4_2 = L_17;
			G_B4_3 = L_14;
			G_B4_4 = __this;
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * L_23 = ((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_24 = (UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 *)il2cpp_codegen_object_new(UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732_il2cpp_TypeInfo_var);
		UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__4_1_m4F5F51ED5F8220DA0E68B3F62FFF20FE1B793C88_RuntimeMethod_var), /*hidden argument*/UnmarshalArgs__ctor_m8FE33B80D0BD4D2F6366B123A690EA7DA328DD9B_RuntimeMethod_var);
		UnmarshalArgs_tFEE91F685A856AF900446D36FFFCBE5F1E3C6732 * L_25 = L_24;
		((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->set_U3CU3E9__4_1_2(L_25);
		G_B4_0 = L_25;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
	}

IL_00a3:
	{
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_26 = (EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC *)il2cpp_codegen_object_new(EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC_il2cpp_TypeInfo_var);
		EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901(L_26, G_B4_3, G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/EventSource_3__ctor_m143C3F1A5ED4F16D06E354DE443866C458515901_RuntimeMethod_var);
		NullCheck(G_B4_4);
		G_B4_4->set_MotionControllerRemoved_2(L_26);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Input.IMotionControllerWatcher::StartAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * IMotionControllerWatcher_StartAsync_mFA402A5940F9CD443C9A748A78CF04B9CC7818D2 (IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IAsyncOperation_2_AsTask_mB9383F56B0C5A1C82052D22EF2F6B1F53B84A1F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666 * L_1 = L_0->get_address_of_Vftbl_4();
		_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * L_2 = L_1->get_StartAsync_5();
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5;
		L_5 = _StartAsync_Invoke_m65380182C503F11882694E75178222AA429F3E37(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_7 = ((IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 *)L_6)->get_Module_1();
		ObjectReference_1_t3A6ADA3ACA487CCF3AB6DD6B24F82C504AA067C3 * L_8;
		L_8 = ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m73F71D5BE809C464C448BF6C61FB3DAD6FBBBEE8_RuntimeMethod_var);
		IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C * L_9 = (IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C *)il2cpp_codegen_object_new(IAsyncAction_tC4095B91E08A8B6D09F98A2DF077197B0734518C_il2cpp_TypeInfo_var);
		IAsyncAction__ctor_mC0E80187A5BBF917B7747E600A48C50E76200AC6(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
		L_10 = _IAsyncOperation_2_AsTask_mB9383F56B0C5A1C82052D22EF2F6B1F53B84A1F5(L_9, /*hidden argument*/_IAsyncOperation_2_AsTask_mB9383F56B0C5A1C82052D22EF2F6B1F53B84A1F5_RuntimeMethod_var);
		return L_10;
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
// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  IObjectReference_get_VftblIUnknown_mD1A8899ECFB6F93765488C0B633FC96A58CD4B20 (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * __this, const RuntimeMethod* method)
{
	{
		IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D  L_0 = __this->get_U3CVftblIUnknownU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference__ctor_mA28E1573963C2A8798FC58387472E5045B1B1C7D (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * __this, ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_0;
		L_0 = ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98((ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *)(&___module0), /*hidden argument*/NULL);
		__this->set_Module_1(L_0);
		intptr_t L_1 = ___thisPtr1;
		__this->set_ThisPtr_0((intptr_t)L_1);
		return;
	}
}
// System.Void WinRT.IObjectReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference_Finalize_m06B64F3FB97FE9A1F65581C9CA7FAA103258BE36 (IObjectReference_tD2D4BE4B04C50237841F839C9C8CA842A6197043 * __this, const RuntimeMethod* method)
{
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_0 = __this->get_Module_1();
		V_0 = L_0;
		ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE((ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
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
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_back(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke& marshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32>(marshaled.___QueryInterface_0, _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4>(marshaled.___AddRef_1, _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t5E373D5F2713F88800A00AC29C398E679178043A>(marshaled.___Release_2, _Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_pinvoke_cleanup(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_back(const IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com& marshaled, IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32>(marshaled.___QueryInterface_0, _QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4>(marshaled.___AddRef_1, _AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t5E373D5F2713F88800A00AC29C398E679178043A>(marshaled.___Release_2, _Release_t5E373D5F2713F88800A00AC29C398E679178043A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshal_com_cleanup(IUnknownVftbl_t0BEC5D1C4E34E5A8E49B68184F513165C0BFFC2D_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshal_pinvoke(const ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543& unmarshaled, ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
IL2CPP_EXTERN_C void ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshal_pinvoke_back(const ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_pinvoke& marshaled, ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset((&unmarshaled__nativeHandle_temp_2), 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshal_pinvoke_cleanup(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_pinvoke& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshal_com(const ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543& unmarshaled, ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_com& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
IL2CPP_EXTERN_C void ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshal_com_back(const ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_com& marshaled, ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset((&unmarshaled__nativeHandle_temp_2), 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshal_com_cleanup(ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543_marshaled_com& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m564869B62BFFBB8EA983231FFF9DA7557C8A1AA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Marshal_AllocCoTaskMem_mDD149E0F9D2CFCA6BF5ACD3558220591A8C97B7E(4, /*hidden argument*/NULL);
		void* L_1;
		L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = V_0;
		return (int32_t*)(L_3);
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ModuleReference_Allocate_m10B82418E7BDDFFAEB5EE600287EA3D9F02E3ECA (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___module0;
		int32_t* L_1;
		L_1 = ModuleReference_AllocateRefCount_m564869B62BFFBB8EA983231FFF9DA7557C8A1AA3(/*hidden argument*/NULL);
		intptr_t* L_2 = ___nativeHandle1;
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)((*(L_2))), /*hidden argument*/NULL);
		intptr_t* L_4 = ___nativeHandle1;
		*((intptr_t*)L_4) = (intptr_t)(0);
		return L_3;
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ModuleReference_get_Null_m14122A174A36BB8B07A1E8647F55BB8375AFDD05 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE((&L_0), NULL, (int32_t*)(int32_t*)((uintptr_t)0), (intptr_t)(0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___module0;
		__this->set__module_0(L_0);
		int32_t* L_1 = ___refCountPtr1;
		__this->set__refCountPtr_1((int32_t*)L_1);
		int32_t* L_2 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_2) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_3 = __this->get__refCountPtr_1();
		int32_t L_4;
		L_4 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)(int32_t*)L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		intptr_t L_5 = ___nativeHandle2;
		__this->set__nativeHandle_2((intptr_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * _thisAdjusted = reinterpret_cast<ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *>(__this + _offset);
	ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE(_thisAdjusted, ___module0, ___refCountPtr1, ___nativeHandle2, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98 (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__module_0();
		int32_t* L_1 = __this->get__refCountPtr_1();
		intptr_t L_2 = __this->get__nativeHandle_2();
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * _thisAdjusted = reinterpret_cast<ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *>(__this + _offset);
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  _returnValue;
	_returnValue = ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98(_thisAdjusted, method);
	return _returnValue;
}
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE (ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t* L_1 = __this->get__refCountPtr_1();
		int32_t L_2;
		L_2 = Interlocked_Decrement_mCECD68F2D8C95180BF77A1B90137BDE1F3A710FF((int32_t*)(int32_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__module_0();
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		intptr_t L_4 = __this->get__nativeHandle_2();
		bool L_5;
		L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_6 = __this->get__module_0();
		if (!((DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1 *)IsInstClass((RuntimeObject*)L_6, DllModule_tBB61881939C0009DB0B4C813E9699A9401AD39B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		intptr_t L_7 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5((intptr_t)L_7, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0054:
	{
		RuntimeObject * L_8 = __this->get__module_0();
		if (!((WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F *)IsInstClass((RuntimeObject*)L_8, WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_9 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		Platform_CoDecrementMTAUsage_m073063398FF86173826492CB17CD4FA8D8901B64((intptr_t)L_9, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_006e:
	{
		RuntimeObject * L_10 = __this->get__module_0();
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Type::get_Name() */, L_11);
		String_t* L_13;
		L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35588C4FF7022D2E8A6DFBE65CE509BB624FF21C)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C30C2A121B10CF66C074014633BC557626C1D72)), /*hidden argument*/NULL);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_14 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_RuntimeMethod_var)));
	}

IL_0093:
	{
		__this->set__nativeHandle_2((intptr_t)(0));
		goto IL_00ab;
	}

IL_00a0:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_15 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_RuntimeMethod_var)));
	}

IL_00ab:
	{
		__this->set__module_0(NULL);
		goto IL_00bf;
	}

IL_00b4:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DFB64A8BEB4B9535BAF32FC2D1D478C88752C96)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_RuntimeMethod_var)));
	}

IL_00bf:
	{
		int32_t* L_17 = __this->get__refCountPtr_1();
		intptr_t L_18;
		L_18 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_mCC0E874C853846E0A82E36971E3FC7BF359C6AA5((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set__refCountPtr_1((int32_t*)((uintptr_t)0));
	}

IL_00d7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 * _thisAdjusted = reinterpret_cast<ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *>(__this + _offset);
	ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr WinRT.Mono::mono_thread_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_mono_thread_current_m990881A301E53315E3D261299E210D2C2A0390C2 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mono-2.0-bdwgc.dll"), "mono_thread_current", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(mono_thread_current)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mono_mono_thread_is_foreign_m2BADFC870B7E267B0361083E788217810402E4C5 (intptr_t ___threadPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mono-2.0-bdwgc.dll"), "mono_thread_is_foreign", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mono_2_0_bdwgc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(mono_thread_is_foreign)(___threadPtr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___threadPtr0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void WinRT.Mono::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mono__cctor_mEEB184B9B40D4160CF730E6CDFDF4FED5293DC59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m519E5BD123DCE4E43CA4D8EB36FCF300E034296C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var);
		U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * L_0 = ((U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__7_0_m519E5BD123DCE4E43CA4D8EB36FCF300E034296C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * L_2 = (Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 *)il2cpp_codegen_object_new(Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06_il2cpp_TypeInfo_var);
		Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895(L_2, L_1, /*hidden argument*/Lazy_1__ctor_m949CEB7704DAECDD0A6B66FC14746985409A6895_RuntimeMethod_var);
		((Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var))->set__usingMono_0(L_2);
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
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m0C481252F91D542CF1977948C3A2B48001B87B02 (MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		MonoPInvokeCallbackAttribute_set_DelegateType_m58D611C6D8E5CD65CCD860C39BF9C29B26A2F208_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m58D611C6D8E5CD65CCD860C39BF9C29B26A2F208 (MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDelegateTypeU3Ek__BackingField_0(L_0);
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
// System.Void Microsoft.MixedReality.Input.MotionController::.ctor(Microsoft.MixedReality.Input.IMotionController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionController__ctor_m274221CEC806BB1377825829DE7A3639073223EC (MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * __this, IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * ___tracker0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * L_0 = ___tracker0;
		__this->set__interface_0(L_0);
		return;
	}
}
// Microsoft.MixedReality.Input.Handedness Microsoft.MixedReality.Input.MotionController::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MotionController_get_Handedness_m81B098E9C3F4F9AD16DE8BE567B1DA90FCFABFD9 (MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * __this, const RuntimeMethod* method)
{
	{
		IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IMotionController_get_Handedness_mBB1E34AE510F5C9204EB1C9F35A06049E97A026C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.MixedReality.Input.MotionControllerReading Microsoft.MixedReality.Input.MotionController::TryGetReadingAtTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * MotionController_TryGetReadingAtTime_m46CE7D469EED536A4A63CAEDC0CE45116FA46ADC (MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timestamp0, const RuntimeMethod* method)
{
	{
		IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * L_0 = __this->get__interface_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___timestamp0;
		NullCheck(L_0);
		MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * L_2;
		L_2 = IMotionController_TryGetReadingAtTime_m9F576624EC8D416B63FFD5BC9A7034EFEA2D320A(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Input.MotionControllerReading::.ctor(Microsoft.MixedReality.Input.IMotionControllerReading)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerReading__ctor_m93EB4AB64AF0D35AA1FE3DD349B9AA4BA81A3066 (MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * __this, IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * ___reading0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * L_0 = ___reading0;
		__this->set__interface_0(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Input.MotionControllerReading::GetPressedValue(Microsoft.MixedReality.Input.ControllerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MotionControllerReading_GetPressedValue_mA34234053CDE304F6A9376FFBEA0B79713DBAA62 (MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * __this, int32_t ___input0, const RuntimeMethod* method)
{
	{
		IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * L_0 = __this->get__interface_0();
		int32_t L_1 = ___input0;
		NullCheck(L_0);
		float L_2;
		L_2 = IMotionControllerReading_GetPressedValue_mA31AB0757BA8080FBAF0B7C79AC8D7B36AA490C7(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 Microsoft.MixedReality.Input.MotionControllerReading::GetXYValue(Microsoft.MixedReality.Input.ControllerInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  MotionControllerReading_GetXYValue_m341983EC85934C32FBD768EBEC997E941B7F6290 (MotionControllerReading_t54B4A8CACE6521574BE1400E0D80FAD504162EBA * __this, int32_t ___input0, const RuntimeMethod* method)
{
	{
		IMotionControllerReading_t16FA02E49D09F449985AAF54DE13FC9D58544400 * L_0 = __this->get__interface_0();
		int32_t L_1 = ___input0;
		NullCheck(L_0);
		Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  L_2;
		L_2 = IMotionControllerReading_GetXYValue_m867878E2D110E38586F406BB4163FF3CCFC8352B(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::.ctor(Microsoft.MixedReality.Input.IMotionControllerWatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher__ctor_m3442EC56BBFF8D6A49CFCFC17C94720427A6EB3F (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * ___watcher0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_0 = ___watcher0;
		__this->set__interface_0(L_0);
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_1 = __this->get__interface_0();
		NullCheck(L_1);
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_2 = L_1->get_MotionControllerAdded_1();
		NullCheck(L_2);
		L_2->set_Sender_1(__this);
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_3 = __this->get__interface_0();
		NullCheck(L_3);
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_4 = L_3->get_MotionControllerRemoved_2();
		NullCheck(L_4);
		L_4->set_Sender_1(__this);
		return;
	}
}
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::add_MotionControllerAdded(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher_add_MotionControllerAdded_m49A452F93CAF29DC29A312C07C43AC44D8EE6BBE (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_1 = L_0->get_MotionControllerAdded_1();
		EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * L_2 = ___value0;
		NullCheck(L_1);
		EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89(L_1, L_2, /*hidden argument*/EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::remove_MotionControllerAdded(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher_remove_MotionControllerAdded_m7E96B1FEB763ABCDBADB36C99D324B436369E9B2 (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_1 = L_0->get_MotionControllerAdded_1();
		EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * L_2 = ___value0;
		NullCheck(L_1);
		EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752(L_1, L_2, /*hidden argument*/EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::add_MotionControllerRemoved(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher_add_MotionControllerRemoved_m3EFC0B6FDEAF164A62E1F49E737C57BB2907D23D (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_1 = L_0->get_MotionControllerRemoved_2();
		EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * L_2 = ___value0;
		NullCheck(L_1);
		EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89(L_1, L_2, /*hidden argument*/EventSource_3_add_Event_mD509BD385BADDAD36D9B23D5F5E01F8E20578E89_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::remove_MotionControllerRemoved(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher_remove_MotionControllerRemoved_m77E509AA8D0F0EC3F9B6073B1B03BDAC360420C4 (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		EventSource_3_t96B17BC3C470BAB6199F6C6C8ABD0786B10E29AC * L_1 = L_0->get_MotionControllerRemoved_2();
		EventHandler_1_t1EB764437C470AA705B4052D7F99537FC8F3C8D6 * L_2 = ___value0;
		NullCheck(L_1);
		EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752(L_1, L_2, /*hidden argument*/EventSource_3_remove_Event_mF3280FC30A071AB1CCEC7B596D8DD7D09D94E752_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionControllerWatcher__ctor_m31160FC73ADE5F9DCFE6FBCBEE0345EBCAAED058 (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_m7BA0A1EEF6F9DD479756387D1F0D9EDEC27D2E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivationFactory_1_t506A3EB8C9CAAA52FB31B85EC8AA324C2B1B7ABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ActivationFactory_1_t506A3EB8C9CAAA52FB31B85EC8AA324C2B1B7ABF_il2cpp_TypeInfo_var);
		ObjectReference_1_t7B93B13C0D5D5D5C02ABD5639257D66359C6446A * L_0;
		L_0 = ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_m7BA0A1EEF6F9DD479756387D1F0D9EDEC27D2E4F(/*hidden argument*/ActivationFactory_1_ActivateInstance_TisVftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_m7BA0A1EEF6F9DD479756387D1F0D9EDEC27D2E4F_RuntimeMethod_var);
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_1;
		L_1 = IMotionControllerWatcher_op_Implicit_m79FD9FFF4E4D7FCF313ED4168726EB73A10CE516(L_0, /*hidden argument*/NULL);
		MotionControllerWatcher__ctor_m3442EC56BBFF8D6A49CFCFC17C94720427A6EB3F(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Input.MotionControllerWatcher::StartAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * MotionControllerWatcher_StartAsync_m478499DC9E6F0D2194CD344F53901E928884DD86 (MotionControllerWatcher_t02BC4339B723D0E582C4EA6624BA3F4D2CEE6A09 * __this, const RuntimeMethod* method)
{
	{
		IMotionControllerWatcher_tCF5DEFF690628DEDE5F370457DF8F1E939D310CC * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = IMotionControllerWatcher_StartAsync_mFA402A5940F9CD443C9A748A78CF04B9CC7818D2(L_0, /*hidden argument*/NULL);
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
// System.Void WinRT.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m5C0408DB5000A800355AEFB7778ED09EDEA17AF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * L_0 = (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C *)il2cpp_codegen_object_new(DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C_il2cpp_TypeInfo_var);
		DotNETLinkage__ctor_mBD9E6B197D3045E00A0158AADB51EBDBA7AA696E(L_0, /*hidden argument*/NULL);
		((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->set__platformLinkage_0(L_0);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_1 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(8 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_1, (intptr_t)(0));
		goto IL_0029;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001c;
		}
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.DllNotFoundException)
		IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * L_3 = (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351_il2cpp_TypeInfo_var)));
		IL2CPPLinkage__ctor_mDB5A728A3789E6979A3EA4582E7D70A2D7A9E3BD(L_3, /*hidden argument*/NULL);
		((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))))->set__platformLinkage_0(L_3);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		String_t* L_1 = ___fileName0;
		intptr_t L_2 = ___fileHandle1;
		uint32_t L_3 = ___flags2;
		NullCheck(L_0);
		intptr_t L_4;
		L_4 = InterfaceFuncInvoker3< intptr_t, String_t*, intptr_t, uint32_t >::Invoke(0 /* System.IntPtr WinRT.Platform/IPlatformLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, L_1, (intptr_t)L_2, L_3);
		return (intptr_t)L_4;
	}
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___moduleHandle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(1 /* System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Platform_GetHRForLastWin32Error_mD64DAFE7B45911DAB02E9EE90CE296433C627221(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m2428EF0BA585EB8FBF44DE5A8E4FBC1D48B2FC3C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, intptr_t* >::Invoke(3 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_1, /*hidden argument*/NULL);
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m073063398FF86173826492CB17CD4FA8D8901B64 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___cookie0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(4 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_RoGetActivationFactory_mEF99130AD55B64388AF27C28972859DCA17877AE (intptr_t ___runtimeClassId0, Guid_t * ___iid1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___runtimeClassId0;
		Guid_t * L_2 = ___iid1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(5 /* System.Int32 WinRT.Platform/IPlatformLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_WindowsCreateString_m660737A5CD07AF4A8719B1871F25B3C149666941 (String_t* ___sourceString0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		String_t* L_1 = ___sourceString0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker3< int32_t, String_t*, int32_t, intptr_t* >::Invoke(6 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, L_1, L_2, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Platform_WindowsGetStringRawBuffer_m6D782A4AFE5BA4B96C6960FBDD15EE48766C400F (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___hstring0;
		uint32_t* L_2 = ___length1;
		NullCheck(L_0);
		Il2CppChar* L_3;
		L_3 = InterfaceFuncInvoker2< Il2CppChar*, intptr_t, uint32_t* >::Invoke(7 /* System.Char* WinRT.Platform/IPlatformLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (uint32_t*)(uint32_t*)L_2);
		return (Il2CppChar*)(L_3);
	}
}
// System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_WindowsDeleteString_mA90605E243EC48929051CE3AC36B495076164481 (intptr_t ___hstring0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___hstring0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(8 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_mD64DAFE7B45911DAB02E9EE90CE296433C627221 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error() */, IPlatformLinkage_tCDBA53A8A95BBE6349A9E656FD398D3F60CE1A37_il2cpp_TypeInfo_var, L_0);
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
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  WinrtModule_get_Instance_m94C6A25F3EB29F1AEE04E609D99AE9F010554088 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_get_Value_m344F6BA5489F8F559057FF30D6865BA8B8537524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * L_0 = ((WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var))->get__instance_1();
		NullCheck(L_0);
		WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F * L_1;
		L_1 = WeakLazy_1_get_Value_m344F6BA5489F8F559057FF30D6865BA8B8537524(L_0, /*hidden argument*/WeakLazy_1_get_Value_m344F6BA5489F8F559057FF30D6865BA8B8537524_RuntimeMethod_var);
		NullCheck(L_1);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_2 = L_1->get__module_0();
		return L_2;
	}
}
// System.Void WinRT.WinrtModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__ctor_m91E4F4BAE6E085DD828FA817B0C2DC7E1C8BB8EE (WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Platform_CoIncrementMTAUsage_m2428EF0BA585EB8FBF44DE5A8E4FBC1D48B2FC3C(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_1;
		L_1 = ModuleReference_Allocate_m10B82418E7BDDFFAEB5EE600287EA3D9F02E3ECA(__this, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		__this->set__module_0(L_1);
		return;
	}
}
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.WinrtModule::GetActivationFactory(WinRT.HString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * WinrtModule_GetActivationFactory_mDF4E18BD1D942781054EF5DEF6516904BEB85143 (HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * ___runtimeClassId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IActivationFactoryVftbl_t4D4053A56DB98E91EB93EB6441CDC7D339D24258_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Guid_t  L_3;
		L_3 = VirtFuncInvoker0< Guid_t  >::Invoke(22 /* System.Guid System.Reflection.TypeInfo::get_GUID() */, L_2);
		V_0 = L_3;
		HString_t0029D04F288C1D31829DEDA59A47F87F0E64F04A * L_4 = ___runtimeClassId0;
		NullCheck(L_4);
		intptr_t L_5 = L_4->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Platform_RoGetActivationFactory_mEF99130AD55B64388AF27C28972859DCA17877AE((intptr_t)L_5, (Guid_t *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_7;
		L_7 = WinrtModule_get_Instance_m94C6A25F3EB29F1AEE04E609D99AE9F010554088(/*hidden argument*/NULL);
		ObjectReference_1_tB3AB9806355B3C26AEF557D665590C229D8E5B4E * L_8;
		L_8 = ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E(L_7, (intptr_t*)(&V_1), /*hidden argument*/ObjectReference_1_Attach_mBE6C232FCB466D4ED7B8154118BE51540D39009E_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void WinRT.WinrtModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule_Finalize_mA49B88DB64C11F0471BA3BEC2948F0063DD93FC7 (WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F * __this, const RuntimeMethod* method)
{
	ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543  L_0 = __this->get__module_0();
		V_0 = L_0;
		ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE((ModuleReference_t204D904522DA1D237BDA8CD28B0DC927E2CC0543 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		return;
	}
}
// System.Void WinRT.WinrtModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__cctor_mACF039B99C84017654ACE3D0827C10CB01E95DF9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1__ctor_m6ED03463903ECF538C41B59DBF658C08D76FC23F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 * L_0 = (WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16 *)il2cpp_codegen_object_new(WeakLazy_1_tFAB3F7CF9BF316700D737B88AC77870DAEFEBE16_il2cpp_TypeInfo_var);
		WeakLazy_1__ctor_m6ED03463903ECF538C41B59DBF658C08D76FC23F(L_0, /*hidden argument*/WeakLazy_1__ctor_m6ED03463903ECF538C41B59DBF658C08D76FC23F_RuntimeMethod_var);
		((WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_tE8F29D06CFA1745670C7586E2F5FC014E7815A3F_il2cpp_TypeInfo_var))->set__instance_1(L_0);
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
// System.Void WinRT.Interop._DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B (_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * __this, int64_t ___universalTime0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___universalTime0;
		__this->set_UniversalTime_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_AdjustorThunk (RuntimeObject * __this, int64_t ___universalTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * _thisAdjusted = reinterpret_cast<_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D *>(__this + _offset);
	_DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_inline(_thisAdjusted, ___universalTime0, method);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 (_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * __this, intptr_t ___thisPtr0, intptr_t ___handler1, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * ___token2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___handler1, ___token2);

	return returnValue;
}
// System.Void WinRT.Interop._add_EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _add_EventHandler__ctor_m8F0B3A26A58C5663C110D32D9C43F64529F11307 (_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._add_EventHandler::Invoke(System.IntPtr,System.IntPtr,WinRT.Interop.EventRegistrationToken*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _add_EventHandler_Invoke_m2B5E8975ABF66880EA5C034F82F2D8AC1D124D0F (_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * __this, intptr_t ___thisPtr0, intptr_t ___handler1, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * ___token2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___handler1, ___token2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___handler1, ___token2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___handler1, ___token2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___handler1, ___token2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___handler1, ___token2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___handler1, ___token2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___handler1, ___token2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._add_EventHandler::BeginInvoke(System.IntPtr,System.IntPtr,WinRT.Interop.EventRegistrationToken*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _add_EventHandler_BeginInvoke_m8F250F031B7567D3B72B5503253514D2EDAA8E90 (_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * __this, intptr_t ___thisPtr0, intptr_t ___handler1, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 * ___token2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___handler1);
	__d_args[2] = ___token2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop._add_EventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _add_EventHandler_EndInvoke_m6C235B0E92C88043894D6CBD72DF417BF3EE8E5B (_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA (_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsDateTime::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsDateTime__ctor_m19A2128F248B9B7BAB66244603E6F3F65921B2CA (_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsDateTime::Invoke(System.IntPtr,WinRT.Interop._DateTime*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDateTime_Invoke_mC4BC47B6F25B216862B857D7F8DAB4375FA6098C (_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsDateTime::BeginInvoke(System.IntPtr,WinRT.Interop._DateTime*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsDateTime_BeginInvoke_m89274A5F3BEEFB6D5A01F82C9247EB33D149334A (_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsDateTime::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDateTime_EndInvoke_m8CDF5CC21A7D3FC997EBBE9C76888C8A2DDBFDFA (_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 (_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsEnum__ctor_m5747F5C3FC7C4650689F721B998275D79A1069D3 (_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_m167DFC6549D503714C3A98371D7D4F7C6006D7F0 (_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsEnum_BeginInvoke_m29F496FF261AB0DD3B43A2C67D76C46E21BA1B29 (_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * __this, intptr_t ___thisPtr0, int32_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_EndInvoke_m264A27CB3ECCB91F7ADCECF51EB956D2B6A4F2F4 (_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C (_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsInt__ctor_m271A11DFE54B5DBE8277416BF65E6D6F09188E17 (_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m77A5D7212015B9F83703EEF1EA96199931E5E6BC (_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsInt::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsInt_BeginInvoke_mD6A2115372C4E6CA2F84EE918657D987E77AF405 (_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * __this, intptr_t ___thisPtr0, int32_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsInt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_EndInvoke_m43EB9DBD741C6DE3D9A91534D837009CABEADF28 (_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 (_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsObject__ctor_mECFA425906FD2DA1ED1A879C0C00EF713D6A5B09 (_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m505085AC5C4C9DF27C6597739CD89B2531581A0F (_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsObject_BeginInvoke_m8C7E45B7C878AAE1293D3B9E2AA598518C77628C (_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_EndInvoke_m96CB8C8AB8F0721A9046CB4B75D7CCD190EF2847 (_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 (_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * __this, intptr_t ___thisPtr0, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsTimeSpan::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsTimeSpan__ctor_mC5000D7A057CD030C1B8DE5D31BF701DC6570C96 (_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsTimeSpan::Invoke(System.IntPtr,WinRT.Interop._TimeSpan*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsTimeSpan_Invoke_mE6C20C05B10CCFC905F53DE6F38C6A321342CC1E (_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * __this, intptr_t ___thisPtr0, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsTimeSpan::BeginInvoke(System.IntPtr,WinRT.Interop._TimeSpan*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsTimeSpan_BeginInvoke_m3CB05D91F6784319043BD679823AA4CA9BF02E03 (_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * __this, intptr_t ___thisPtr0, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 * ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsTimeSpan::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsTimeSpan_EndInvoke_mE7C287CA0A2D3E256DAF0C53B235A61D611CF497 (_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 (_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsUInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsUInt__ctor_m2FF615A61F562D076D94954FB404C5A3D5C4BAEB (_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m6290F9621850812D13C51AFA7F470E339CEAF38B (_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsUInt::BeginInvoke(System.IntPtr,System.UInt32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsUInt_BeginInvoke_mD723FE4B02524789E7F7BD3A219A46D195E1ABB9 (_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * __this, intptr_t ___thisPtr0, uint32_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_EndInvoke_m358245D8993764C0C2AE29F6E9EE40F694F0C5BC (_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF (_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * __this, intptr_t ___thisPtr0, uint16_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint16_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsUShort::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsUShort__ctor_mD29700DFA54150AEB162365CA538DB74AA26724A (_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsUShort::Invoke(System.IntPtr,System.UInt16*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUShort_Invoke_mE7ED5F9CC6073FAFF89B89C3E0ACFF041B0F4287 (_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * __this, intptr_t ___thisPtr0, uint16_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint16_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint16_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, uint16_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, uint16_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, uint16_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, uint16_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint16_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsUShort::BeginInvoke(System.IntPtr,System.UInt16*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsUShort_BeginInvoke_mACF87A1327C9E47AE23FD96380E9F6191E0394D0 (_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * __this, intptr_t ___thisPtr0, uint16_t* ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._get_PropertyAsUShort::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUShort_EndInvoke_mB423FF3B674F36B2D3FC34C02A8956E9387E522F (_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__method0_t63421535F6121EE6954023CD0356085E5A6A8B32 (_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * __this, intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0);

	return returnValue;
}
// System.Void WinRT.Interop._method0::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _method0__ctor_m29C1CC4C29ECFED9A3EC360479A409413F30DA0B (_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_Invoke_mA89A8760402261928A1938DD62356A2C4C3C05BF (_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * __this, intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._method0::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _method0_BeginInvoke_m9B8BB522E701211810E921BBD99D56B8B531DDD0 (_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * __this, intptr_t ___thisPtr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 WinRT.Interop._method0::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_EndInvoke_m99F1E032558B58213167DF8B38E14BA23DF1ACA8 (_method0_t63421535F6121EE6954023CD0356085E5A6A8B32 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 (_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * __this, intptr_t ___thisPtr0, intptr_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsObject__ctor_m51804AC3576AE4F064E4C66AA685183F51EC890A (_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._put_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsObject_Invoke_m7D8FBD4F4DEDBAC619CD31B72E2D7715F5ED7D17 (_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * __this, intptr_t ___thisPtr0, intptr_t ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._put_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _put_PropertyAsObject_BeginInvoke_m4E020ACF6563B6214E63E273E2F7B7CCCDF367CF (_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * __this, intptr_t ___thisPtr0, intptr_t ___value1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._put_PropertyAsObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsObject_EndInvoke_m2ADA7572D4A0C230EADF7F75880EFF39E5A51BD7 (_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 (_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * __this, intptr_t ___thisPtr0, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  ___token1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___token1);

	return returnValue;
}
// System.Void WinRT.Interop._remove_EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _remove_EventHandler__ctor_m4AF263EDD1510CD630AA3FB446AA4834A701A41D (_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._remove_EventHandler::Invoke(System.IntPtr,WinRT.Interop.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _remove_EventHandler_Invoke_mB803EE2BD0470474A7772E0A689F41B656F8EBB5 (_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * __this, intptr_t ___thisPtr0, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  ___token1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___token1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___token1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___token1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___token1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___token1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___token1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___token1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._remove_EventHandler::BeginInvoke(System.IntPtr,WinRT.Interop.EventRegistrationToken,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _remove_EventHandler_BeginInvoke_mF1402FBC4C6088D657BC3FC00C8B9171E5F29A64 (_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * __this, intptr_t ___thisPtr0, EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2  ___token1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(EventRegistrationToken_tC917451224FBB3B985266A1305FD47BE7958D9D2_il2cpp_TypeInfo_var, &___token1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop._remove_EventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _remove_EventHandler_EndInvoke_mFB7BEDB54B597C17C086F17BACD167C6FAD7AA1A (_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr WinRT.Delegate/InitialReference::get_DelegatePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InitialReference_get_DelegatePtr_mBEDE076C60E46C2AA1E78000F45A420E788F25DD (InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55 * __this, const RuntimeMethod* method)
{
	{
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_0 = __this->get__delegate_0();
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_ThisPtr_1();
		return (intptr_t)L_1;
	}
}
// System.Void WinRT.Delegate/InitialReference::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference__ctor_m637F535F954BE0E50CB548A2939374C406993DDE (InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55 * __this, Guid_t  ___iid0, intptr_t ___invoke1, RuntimeObject * ___invoker2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		ThreadContext_RegisterPossiblyNonForeignThread_m6B466F43F61600A4F9C98FE9FAC13C0CD6A3193A(/*hidden argument*/NULL);
		Guid_t  L_0 = ___iid0;
		intptr_t L_1 = ___invoke1;
		RuntimeObject * L_2 = ___invoker2;
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_3 = (Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 *)il2cpp_codegen_object_new(Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1_il2cpp_TypeInfo_var);
		Delegate__ctor_m85A286E877BF2A7DBE0CD7BCAE440814FC6F62F2(L_3, L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set__delegate_0(L_3);
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_4 = __this->get__delegate_0();
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Delegate/InitialReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Finalize_m8458E14211261A3E485EE98DDD5D9E327093019E (InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		InitialReference_Dispose_m59F78D25E9B7D090D2CBEB570E4DD4DF4EB27E4B(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		return;
	}
}
// System.Void WinRT.Delegate/InitialReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Dispose_m59F78D25E9B7D090D2CBEB570E4DD4DF4EB27E4B (InitialReference_t3D96A1D44092F594C643A679D56917E2FE846A55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_0 = __this->get__delegate_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 * L_1 = __this->get__delegate_0();
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78(L_1, /*hidden argument*/NULL);
		__this->set__delegate_0((Delegate_t571A2EB9D16D65965DDEB63EC2349AD3738DADC1 *)NULL);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 (DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___activatableClassId0, ___activationFactory1);

	return returnValue;
}
// System.Void WinRT.DllModule/DllGetActivationFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllGetActivationFactory__ctor_mF6C2578F5382356103F4F01F18FC6859CB8690BA (DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.DllModule/DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_m9FA6F8618BF10EEF7CC971DC2A6B3B873F7B6664 (DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___activatableClassId0, ___activationFactory1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___activatableClassId0, ___activationFactory1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___activatableClassId0, ___activationFactory1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___activatableClassId0, ___activationFactory1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___activatableClassId0, ___activationFactory1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___activatableClassId0, ___activationFactory1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___activatableClassId0, ___activationFactory1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.DllModule/DllGetActivationFactory::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DllGetActivationFactory_BeginInvoke_m701728B91FF78ED88AF0D239A36FB1823787F316 (DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___activatableClassId0);
	__d_args[1] = ___activationFactory1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.DllModule/DllGetActivationFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_EndInvoke_m6FB71D18B5258BDA72E21D6512042608B8903D2F (DllGetActivationFactory_t0851ACAFD41CDD6A270DA4D4C8AFEE5DAD7FA2B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.EventSource/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m500680DBFAC1D4618C15E76612661550D2717D79 (U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.EventSource/<>c__DisplayClass1_0::<_invoke>b__0(WinRT.EventSource/_Invoke)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m8051FBB44797C2E9B2CE20A8C83702D4E466A505 (U3CU3Ec__DisplayClass1_0_tD45346565D73D5B46887D67986463E52A80DFA16 * __this, _Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * ___invoker0, const RuntimeMethod* method)
{
	{
		_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * L_0 = ___invoker0;
		intptr_t L_1 = __this->get_senderPtr_0();
		intptr_t L_2 = __this->get_argsPtr_1();
		NullCheck(L_0);
		_Invoke_Invoke_m568FD6E1DAB86996A4E45E37286F71428B24C06F(L_0, (intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 (_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * __this, intptr_t ___senderPtr0, intptr_t ___argsPtr1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___senderPtr0, ___argsPtr1);

}
// System.Void WinRT.EventSource/_Invoke::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Invoke__ctor_m3D782EAA1DB17B0CFA5BA2C875CD8BC7280C9F2D (_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.EventSource/_Invoke::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Invoke_Invoke_m568FD6E1DAB86996A4E45E37286F71428B24C06F (_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * __this, intptr_t ___senderPtr0, intptr_t ___argsPtr1, const RuntimeMethod* method)
{
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
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___senderPtr0, ___argsPtr1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___senderPtr0, ___argsPtr1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___senderPtr0, ___argsPtr1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___senderPtr0, ___argsPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___senderPtr0, ___argsPtr1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___senderPtr0, ___argsPtr1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___senderPtr0, ___argsPtr1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WinRT.EventSource/_Invoke::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Invoke_BeginInvoke_m974035512C495F6B2D96B02A7A0EF846BE9E2860 (_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * __this, intptr_t ___senderPtr0, intptr_t ___argsPtr1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___senderPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___argsPtr1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void WinRT.EventSource/_Invoke::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Invoke_EndInvoke_m7D1CCE243EB316DAB6687882498B4EEFCCB865A5 (_Invoke_t3C2ED3FD565A04CD77B4371C6612E371EEE19102 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 (_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * __this, intptr_t ___pThis0, intptr_t* ___instance1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___instance1);

	return returnValue;
}
// System.Void WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ActivateInstance__ctor_mB9208E0CDF7CE247C395E35EA8E49BC448866E52 (_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ActivateInstance_Invoke_m67036A8857C81046F09F1BF57086CB26F832A37F (_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * __this, intptr_t ___pThis0, intptr_t* ___instance1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___instance1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___instance1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___instance1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___instance1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___instance1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___instance1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___instance1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ActivateInstance_BeginInvoke_mD02D53B87F18E8A499746C7831AF9FFB5115B693 (_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * __this, intptr_t ___pThis0, intptr_t* ___instance1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___instance1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ActivateInstance_EndInvoke_m5F85353C3E33CC3EE537326B5539DE1E37F3A4FB (_ActivateInstance_tA12955CEEB4808145F3717F7DF416D066C3D8DE9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshal_pinvoke(const Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6& unmarshaled, Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_1()));
	marshaled.___get_Status_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Status_2()));
	marshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ErrorCode_3()));
	marshaled.___Cancel_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Cancel_4()));
	marshaled.___Close_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Close_5()));
}
IL2CPP_EXTERN_C void Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshal_pinvoke_back(const Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_pinvoke& marshaled, Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Id_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C>(marshaled.___get_Id_1, _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Status_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066>(marshaled.___get_Status_2, _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ErrorCode_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var));
	unmarshaled.set_Cancel_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t63421535F6121EE6954023CD0356085E5A6A8B32>(marshaled.___Cancel_4, _method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var));
	unmarshaled.set_Close_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t63421535F6121EE6954023CD0356085E5A6A8B32>(marshaled.___Close_5, _method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshal_pinvoke_cleanup(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshal_com(const Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6& unmarshaled, Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_1()));
	marshaled.___get_Status_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Status_2()));
	marshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ErrorCode_3()));
	marshaled.___Cancel_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Cancel_4()));
	marshaled.___Close_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Close_5()));
}
IL2CPP_EXTERN_C void Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshal_com_back(const Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_com& marshaled, Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Id_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C>(marshaled.___get_Id_1, _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Status_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066>(marshaled.___get_Status_2, _get_PropertyAsEnum_t223B14ADBD25930CD244EB4150F233543976E066_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ErrorCode_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t5D0EE57FB2B2533ED49EA0E99AAB6769DE06C88C_il2cpp_TypeInfo_var));
	unmarshaled.set_Cancel_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t63421535F6121EE6954023CD0356085E5A6A8B32>(marshaled.___Cancel_4, _method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var));
	unmarshaled.set_Close_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t63421535F6121EE6954023CD0356085E5A6A8B32>(marshaled.___Close_5, _method0_t63421535F6121EE6954023CD0356085E5A6A8B32_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshal_com_cleanup(Vftbl_tC4F3BD338D40652E2E0BB75DA5A383A1D7E8F1C6_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5F2CA8F17E10CA207D487A86A7BC3378E9715026 (U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::<_OnCompleted>b__0(WinRT.Interop.IAsyncOperation/CompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m4006340DE007DD0B2E0D3FE419555471ABEDE0E0 (U3CU3Ec__DisplayClass4_0_t667C6E601CAB47D7478B857AF8D670009B4FD7D8 * __this, CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * ___handler0, const RuntimeMethod* method)
{
	{
		CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * L_0 = ___handler0;
		int32_t L_1 = __this->get_status_0();
		NullCheck(L_0);
		CompletedHandler_Invoke_mB73A91A17DB19F9620C1CE8CF953F86259A54303(L_0, L_1, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 (CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___status0);

}
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler__ctor_mBDE4FF16A036F6C91069A87C82A369F6B0205D18 (CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::Invoke(WinRT.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_mB73A91A17DB19F9620C1CE8CF953F86259A54303 (CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * __this, int32_t ___status0, const RuntimeMethod* method)
{
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WinRT.Interop.IAsyncOperation/CompletedHandler::BeginInvoke(WinRT.AsyncStatus,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompletedHandler_BeginInvoke_m7D38F31746F983021182D75A7F4895A1C6B4541F (CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * __this, int32_t ___status0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncStatus_t20EA1365C133747175AAEA6A99CA403E4197559D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(AsyncStatus_t20EA1365C133747175AAEA6A99CA403E4197559D_il2cpp_TypeInfo_var, &___status0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_EndInvoke_mEF3FF82AE65E2779521A64CF3F1F492700824E01 (CompletedHandler_tA12A8F242244358F37B2BD25C90378DBDBD42BE8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
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


// Conversion methods for marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshal_pinvoke(const Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE& unmarshaled, Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___put_Completed_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_Completed_1()));
	marshaled.___get_Completed_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Completed_2()));
	marshaled.___GetResults_3 = unmarshaled.get_GetResults_3();
}
IL2CPP_EXTERN_C void Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshal_pinvoke_back(const Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_pinvoke& marshaled, Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_put_Completed_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545>(marshaled.___put_Completed_1, _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Completed_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726>(marshaled.___get_Completed_2, _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_GetResults_temp_3;
	memset((&unmarshaled_GetResults_temp_3), 0, sizeof(unmarshaled_GetResults_temp_3));
	unmarshaled_GetResults_temp_3 = marshaled.___GetResults_3;
	unmarshaled.set_GetResults_3(unmarshaled_GetResults_temp_3);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshal_pinvoke_cleanup(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshal_com(const Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE& unmarshaled, Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___put_Completed_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_Completed_1()));
	marshaled.___get_Completed_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Completed_2()));
	marshaled.___GetResults_3 = unmarshaled.get_GetResults_3();
}
IL2CPP_EXTERN_C void Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshal_com_back(const Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_com& marshaled, Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_put_Completed_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545>(marshaled.___put_Completed_1, _put_PropertyAsObject_t9F6E2D77D36D5A8734FAE48065AFEAAAC8DBE545_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Completed_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726>(marshaled.___get_Completed_2, _get_PropertyAsObject_tD949B74070D122EAB98814602EC6A3B650BE5726_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_GetResults_temp_3;
	memset((&unmarshaled_GetResults_temp_3), 0, sizeof(unmarshaled_GetResults_temp_3));
	unmarshaled_GetResults_temp_3 = marshaled.___GetResults_3;
	unmarshaled.set_GetResults_3(unmarshaled_GetResults_temp_3);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshal_com_cleanup(Vftbl_tF059EE7644BDF5D33F0BE7C242542596149EF4BE_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A (_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iidCount1, ___iids2);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetIids::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetIids__ctor_m59DC1C92C75469ED079823894DCD78660A9EB6F1 (_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_Invoke_m1EE0CEBCE0B1F183BBD0C979509EB41B634430D0 (_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetIids::BeginInvoke(System.IntPtr,System.UInt32*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetIids_BeginInvoke_mA4D8FC119E715F0CE1869E3BD6D28E5CF355196C (_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iidCount1;
	__d_args[2] = ___iids2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_EndInvoke_mDDC2721B20ADB0B6BC43D7A8BC52CB53FFA328CB (_GetIids_t40546EE3A3ED02924F4C11E646A33A115737DE8A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF (_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___className1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRuntimeClassName__ctor_mD5CA91ED07493CDC0C496E5E4BCA183D725DF59E (_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_Invoke_mA90C6CEC53554FD11E154FB8DF91956CC88306BD (_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___className1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___className1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRuntimeClassName_BeginInvoke_m728FFAEE23807632B4A0A5EB586211638F96D668 (_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * __this, intptr_t ___pThis0, intptr_t* ___className1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___className1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_EndInvoke_m5AA5DBF60CF6177F3D27E007F0FD667116401E3A (_GetRuntimeClassName_t23D667B996A8D4FC2A7FC55FEAA286FD59164ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 (_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___trustLevel1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl/_GetTrustLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrustLevel__ctor_m97A32AAA5E1E0F4B96F29ABE5C0D3A69C304883D (_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_Invoke_m9890354C4A15235C48EB5688B9A5005119B3AD66 (_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___trustLevel1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___trustLevel1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetTrustLevel::BeginInvoke(System.IntPtr,WinRT.TrustLevel*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrustLevel_BeginInvoke_m8F09795988A603FE6B6E8A1C16981BA159DB4EC8 (_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___trustLevel1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_EndInvoke_m870360E3EFC47BD7E867C831A09803788E3974B2 (_GetTrustLevel_t43BBA91CB0411682BC1A8D02F0A810CD71B4D7A8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.MixedReality.Input.IMotionController/Vftbl
IL2CPP_EXTERN_C void Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshal_pinvoke(const Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0& unmarshaled, Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Handedness_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Handedness_1()));
	marshaled.___get_VendorId_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_VendorId_2()));
	marshaled.___get_ProductId_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ProductId_3()));
	marshaled.___get_Version_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Version_4()));
	marshaled.___get_PressableInputsCount_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_PressableInputsCount_5()));
	marshaled.___GetPressableInputs_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetPressableInputs_6()));
	marshaled.___IsAnalogPressableInput_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IsAnalogPressableInput_7()));
	marshaled.___get_ProximityInputsCount_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ProximityInputsCount_8()));
	marshaled.___GetProximityInputs_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetProximityInputs_9()));
	marshaled.___get_XYInputsCount_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_XYInputsCount_10()));
	marshaled.___GetXYInputs_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetXYInputs_11()));
	marshaled.___TryGetReadingAtTime_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAtTime_12()));
	marshaled.___TryGetReadingAtSystemRelativeTime_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAtSystemRelativeTime_13()));
	marshaled.___TryGetReadingAfterTime_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAfterTime_14()));
	marshaled.___TryGetReadingAfterSystemRelativeTime_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAfterSystemRelativeTime_15()));
}
IL2CPP_EXTERN_C void Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshal_pinvoke_back(const Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_pinvoke& marshaled, Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Handedness_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_Handedness_1, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_get_VendorId_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF>(marshaled.___get_VendorId_2, _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ProductId_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF>(marshaled.___get_ProductId_3, _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Version_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF>(marshaled.___get_Version_4, _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_PressableInputsCount_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_PressableInputsCount_5, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_GetPressableInputs_6(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF>(marshaled.___GetPressableInputs_6, _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var));
	unmarshaled.set_IsAnalogPressableInput_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590>(marshaled.___IsAnalogPressableInput_7, _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ProximityInputsCount_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_ProximityInputsCount_8, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_GetProximityInputs_9(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF>(marshaled.___GetProximityInputs_9, _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_XYInputsCount_10(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_XYInputsCount_10, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_GetXYInputs_11(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF>(marshaled.___GetXYInputs_11, _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAtTime_12(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295>(marshaled.___TryGetReadingAtTime_12, _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAtSystemRelativeTime_13(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193>(marshaled.___TryGetReadingAtSystemRelativeTime_13, _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAfterTime_14(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295>(marshaled.___TryGetReadingAfterTime_14, _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAfterSystemRelativeTime_15(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193>(marshaled.___TryGetReadingAfterSystemRelativeTime_15, _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Input.IMotionController/Vftbl
IL2CPP_EXTERN_C void Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshal_pinvoke_cleanup(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.Input.IMotionController/Vftbl
IL2CPP_EXTERN_C void Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshal_com(const Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0& unmarshaled, Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Handedness_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Handedness_1()));
	marshaled.___get_VendorId_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_VendorId_2()));
	marshaled.___get_ProductId_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ProductId_3()));
	marshaled.___get_Version_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Version_4()));
	marshaled.___get_PressableInputsCount_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_PressableInputsCount_5()));
	marshaled.___GetPressableInputs_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetPressableInputs_6()));
	marshaled.___IsAnalogPressableInput_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IsAnalogPressableInput_7()));
	marshaled.___get_ProximityInputsCount_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ProximityInputsCount_8()));
	marshaled.___GetProximityInputs_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetProximityInputs_9()));
	marshaled.___get_XYInputsCount_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_XYInputsCount_10()));
	marshaled.___GetXYInputs_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetXYInputs_11()));
	marshaled.___TryGetReadingAtTime_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAtTime_12()));
	marshaled.___TryGetReadingAtSystemRelativeTime_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAtSystemRelativeTime_13()));
	marshaled.___TryGetReadingAfterTime_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAfterTime_14()));
	marshaled.___TryGetReadingAfterSystemRelativeTime_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetReadingAfterSystemRelativeTime_15()));
}
IL2CPP_EXTERN_C void Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshal_com_back(const Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_com& marshaled, Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Handedness_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_Handedness_1, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_get_VendorId_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF>(marshaled.___get_VendorId_2, _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ProductId_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF>(marshaled.___get_ProductId_3, _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Version_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF>(marshaled.___get_Version_4, _get_PropertyAsUShort_t52C1363D963D77B0AD00ED7B5A402BAA427B03FF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_PressableInputsCount_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_PressableInputsCount_5, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_GetPressableInputs_6(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF>(marshaled.___GetPressableInputs_6, _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var));
	unmarshaled.set_IsAnalogPressableInput_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590>(marshaled.___IsAnalogPressableInput_7, _IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ProximityInputsCount_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_ProximityInputsCount_8, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_GetProximityInputs_9(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF>(marshaled.___GetProximityInputs_9, _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var));
	unmarshaled.set_get_XYInputsCount_10(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3>(marshaled.___get_XYInputsCount_10, _get_PropertyAsUInt_tC1A38E2AADD47D467B8F565762D060BCA39EF1D3_il2cpp_TypeInfo_var));
	unmarshaled.set_GetXYInputs_11(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF>(marshaled.___GetXYInputs_11, _GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAtTime_12(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295>(marshaled.___TryGetReadingAtTime_12, _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAtSystemRelativeTime_13(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193>(marshaled.___TryGetReadingAtSystemRelativeTime_13, _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAfterTime_14(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295>(marshaled.___TryGetReadingAfterTime_14, _TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295_il2cpp_TypeInfo_var));
	unmarshaled.set_TryGetReadingAfterSystemRelativeTime_15(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193>(marshaled.___TryGetReadingAfterSystemRelativeTime_15, _TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Input.IMotionController/Vftbl
IL2CPP_EXTERN_C void Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshal_com_cleanup(Vftbl_tFEC546E70BE151739987CFAB416A53B590CE75F0_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshal_pinvoke(const Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4& unmarshaled, Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_InputTime_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_InputTime_1()));
	marshaled.___get_SystemRelativeInputTime_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_SystemRelativeInputTime_2()));
	marshaled.___GetPressedValues_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetPressedValues_3()));
	marshaled.___GetProximityValues_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetProximityValues_4()));
	marshaled.___GetXYValues_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetXYValues_5()));
	marshaled.___GetPressedValue_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetPressedValue_6()));
	marshaled.___GetProximityValue_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetProximityValue_7()));
	marshaled.___GetXYValue_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetXYValue_8()));
}
IL2CPP_EXTERN_C void Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshal_pinvoke_back(const Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_pinvoke& marshaled, Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_InputTime_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA>(marshaled.___get_InputTime_1, _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA_il2cpp_TypeInfo_var));
	unmarshaled.set_get_SystemRelativeInputTime_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06>(marshaled.___get_SystemRelativeInputTime_2, _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06_il2cpp_TypeInfo_var));
	unmarshaled.set_GetPressedValues_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797>(marshaled.___GetPressedValues_3, _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var));
	unmarshaled.set_GetProximityValues_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797>(marshaled.___GetProximityValues_4, _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var));
	unmarshaled.set_GetXYValues_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C>(marshaled.___GetXYValues_5, _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C_il2cpp_TypeInfo_var));
	unmarshaled.set_GetPressedValue_6(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB>(marshaled.___GetPressedValue_6, _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var));
	unmarshaled.set_GetProximityValue_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB>(marshaled.___GetProximityValue_7, _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var));
	unmarshaled.set_GetXYValue_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F>(marshaled.___GetXYValue_8, _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshal_pinvoke_cleanup(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshal_com(const Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4& unmarshaled, Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_InputTime_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_InputTime_1()));
	marshaled.___get_SystemRelativeInputTime_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_SystemRelativeInputTime_2()));
	marshaled.___GetPressedValues_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetPressedValues_3()));
	marshaled.___GetProximityValues_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetProximityValues_4()));
	marshaled.___GetXYValues_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetXYValues_5()));
	marshaled.___GetPressedValue_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetPressedValue_6()));
	marshaled.___GetProximityValue_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetProximityValue_7()));
	marshaled.___GetXYValue_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetXYValue_8()));
}
IL2CPP_EXTERN_C void Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshal_com_back(const Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_com& marshaled, Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_InputTime_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA>(marshaled.___get_InputTime_1, _get_PropertyAsDateTime_t0201363091E181ABF661519A9E0AD86B4F5C62FA_il2cpp_TypeInfo_var));
	unmarshaled.set_get_SystemRelativeInputTime_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06>(marshaled.___get_SystemRelativeInputTime_2, _get_PropertyAsTimeSpan_t1E8892002732FB6B9937E4B5E8DEB22DD3508F06_il2cpp_TypeInfo_var));
	unmarshaled.set_GetPressedValues_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797>(marshaled.___GetPressedValues_3, _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var));
	unmarshaled.set_GetProximityValues_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797>(marshaled.___GetProximityValues_4, _GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797_il2cpp_TypeInfo_var));
	unmarshaled.set_GetXYValues_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C>(marshaled.___GetXYValues_5, _GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C_il2cpp_TypeInfo_var));
	unmarshaled.set_GetPressedValue_6(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB>(marshaled.___GetPressedValue_6, _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var));
	unmarshaled.set_GetProximityValue_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB>(marshaled.___GetProximityValue_7, _GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB_il2cpp_TypeInfo_var));
	unmarshaled.set_GetXYValue_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F>(marshaled.___GetXYValue_8, _GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl
IL2CPP_EXTERN_C void Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshal_com_cleanup(Vftbl_t7A1F3CD3B8904BAFC73EB539B95597196203CFE4_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m946F0CDBC8AA01AF11793EA5DF6DB5686147B57B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * L_0 = (U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 *)il2cpp_codegen_object_new(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB9F5DD1485EA278CE80F8D8E198E2201F4913286(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB9F5DD1485EA278CE80F8D8E198E2201F4913286 (U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.Input.MotionController Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<.ctor>b__4_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * U3CU3Ec_U3C_ctorU3Eb__4_0_m294D6F52AB0A19E289D407B41E2F2E33124208E3 (U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * __this, intptr_t ___argsPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionController_tC07D829713E1599CF51DA2E9478F931657E67761_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___argsPtr0;
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_1;
		L_1 = ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45((intptr_t)L_0, /*hidden argument*/ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_RuntimeMethod_var);
		IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * L_2;
		L_2 = IMotionController_op_Implicit_m9C3E9F1A7E36427E17AEE1ED8AD406B4B9239291(L_1, /*hidden argument*/NULL);
		MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * L_3 = (MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 *)il2cpp_codegen_object_new(MotionController_tC07D829713E1599CF51DA2E9478F931657E67761_il2cpp_TypeInfo_var);
		MotionController__ctor_m274221CEC806BB1377825829DE7A3639073223EC(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Microsoft.MixedReality.Input.MotionController Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<.ctor>b__4_1(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * U3CU3Ec_U3C_ctorU3Eb__4_1_m4F5F51ED5F8220DA0E68B3F62FFF20FE1B793C88 (U3CU3Ec_t3F418F269A64A686675EE96A4A16F47772383D08 * __this, intptr_t ___argsPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionController_tC07D829713E1599CF51DA2E9478F931657E67761_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___argsPtr0;
		ObjectReference_1_tCF6CF1666CD6AB17D4CC5BC713CEFFE134EA5A56 * L_1;
		L_1 = ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45((intptr_t)L_0, /*hidden argument*/ObjectReference_1_FromNativePtrNoRef_m0C225AB84817BF2E3E2AB09602FA3396B813AE45_RuntimeMethod_var);
		IMotionController_t15656E12BBBCA5073F003F8642DBA62AB206D8D3 * L_2;
		L_2 = IMotionController_op_Implicit_m9C3E9F1A7E36427E17AEE1ED8AD406B4B9239291(L_1, /*hidden argument*/NULL);
		MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 * L_3 = (MotionController_tC07D829713E1599CF51DA2E9478F931657E67761 *)il2cpp_codegen_object_new(MotionController_tC07D829713E1599CF51DA2E9478F931657E67761_il2cpp_TypeInfo_var);
		MotionController__ctor_m274221CEC806BB1377825829DE7A3639073223EC(L_3, L_2, /*hidden argument*/NULL);
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


// Conversion methods for marshalling of: Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshal_pinvoke(const Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666& unmarshaled, Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___add_MotionControllerAdded_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_add_MotionControllerAdded_1()));
	marshaled.___remove_MotionControllerAdded_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_remove_MotionControllerAdded_2()));
	marshaled.___add_MotionControllerRemoved_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_add_MotionControllerRemoved_3()));
	marshaled.___remove_MotionControllerRemoved_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_remove_MotionControllerRemoved_4()));
	marshaled.___StartAsync_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_StartAsync_5()));
	marshaled.___Stop_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Stop_6()));
}
IL2CPP_EXTERN_C void Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshal_pinvoke_back(const Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_pinvoke& marshaled, Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_add_MotionControllerAdded_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6>(marshaled.___add_MotionControllerAdded_1, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var));
	unmarshaled.set_remove_MotionControllerAdded_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816>(marshaled.___remove_MotionControllerAdded_2, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var));
	unmarshaled.set_add_MotionControllerRemoved_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6>(marshaled.___add_MotionControllerRemoved_3, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var));
	unmarshaled.set_remove_MotionControllerRemoved_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816>(marshaled.___remove_MotionControllerRemoved_4, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var));
	unmarshaled.set_StartAsync_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5>(marshaled.___StartAsync_5, _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5_il2cpp_TypeInfo_var));
	unmarshaled.set_Stop_6(il2cpp_codegen_marshal_function_ptr_to_delegate<_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA>(marshaled.___Stop_6, _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshal_pinvoke_cleanup(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshal_com(const Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666& unmarshaled, Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___add_MotionControllerAdded_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_add_MotionControllerAdded_1()));
	marshaled.___remove_MotionControllerAdded_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_remove_MotionControllerAdded_2()));
	marshaled.___add_MotionControllerRemoved_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_add_MotionControllerRemoved_3()));
	marshaled.___remove_MotionControllerRemoved_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_remove_MotionControllerRemoved_4()));
	marshaled.___StartAsync_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_StartAsync_5()));
	marshaled.___Stop_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Stop_6()));
}
IL2CPP_EXTERN_C void Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshal_com_back(const Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_com& marshaled, Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_add_MotionControllerAdded_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6>(marshaled.___add_MotionControllerAdded_1, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var));
	unmarshaled.set_remove_MotionControllerAdded_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816>(marshaled.___remove_MotionControllerAdded_2, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var));
	unmarshaled.set_add_MotionControllerRemoved_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6>(marshaled.___add_MotionControllerRemoved_3, _add_EventHandler_tEEC70624DA1D7886B86D07697820C641A7AADFF6_il2cpp_TypeInfo_var));
	unmarshaled.set_remove_MotionControllerRemoved_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816>(marshaled.___remove_MotionControllerRemoved_4, _remove_EventHandler_tBD56EF747613DA5131176B7DD605146C6177C816_il2cpp_TypeInfo_var));
	unmarshaled.set_StartAsync_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5>(marshaled.___StartAsync_5, _StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5_il2cpp_TypeInfo_var));
	unmarshaled.set_Stop_6(il2cpp_codegen_marshal_function_ptr_to_delegate<_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA>(marshaled.___Stop_6, _Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl
IL2CPP_EXTERN_C void Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshal_com_cleanup(Vftbl_t121E4C8D95B09A7C1A1F5D9317742C266210C666_marshaled_com& marshaled)
{
	IInspectableVftbl_t83BC0D2229171107F5A03EE695EEBB5ACC55FC82_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m8A5FFC9D62D00CFBC99FFBE80849259E06DEEAF1 (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_Invoke_m9786172EA3B760785905B4CA32844A31423BE86C (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
					else
						result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl/_AddRef::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AddRef_BeginInvoke_m10C69D6CD72E70F19C8A1BAD897AF3F8FF1505D2 (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * __this, intptr_t ___pThis0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_EndInvoke_mFDB40B2FCB1C0B81CA9917CE2D5BD27D4D933940 (_AddRef_tB3CDA2857167D1DAA6FA3D484F3CC2EE1914C4B4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t *, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iid1, ___vftbl2);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m1B0E325651385472FBBC5437BC0C0862E69D51C3 (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_Invoke_m46EBC6D8AE68758403FEFC54AE8218524FBC7390 (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl/_QueryInterface::BeginInvoke(System.IntPtr,System.Guid*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _QueryInterface_BeginInvoke_m56C14E9AB1C1F43910582CE86A4DEE1AFB49C57B (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iid1;
	__d_args[2] = ___vftbl2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_EndInvoke_m48EF80946B28388F1F5EA4FD7458741A563FBD2B (_QueryInterface_t1831F36989ECF62AB0AAE34E5BA39C56AC731D32 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__Release_t5E373D5F2713F88800A00AC29C398E679178043A (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m96990D35E888EA45D144FDE1FD8DD3B5886480EF (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_Invoke_m724DDC2008B59B1862802FA89F259FBA7DE7938E (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
					else
						result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl/_Release::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Release_BeginInvoke_mA1948BF26B341CE800DBDF0373D6824B46251CED (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * __this, intptr_t ___pThis0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_EndInvoke_m35D49BEBCF99EB24A30E83FEA2236F9C217C84B5 (_Release_t5E373D5F2713F88800A00AC29C398E679178043A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Mono/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4C9086808617382EAFA79B3AA0FE6E29A0C6A24A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * L_0 = (U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 *)il2cpp_codegen_object_new(U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4B797B032B47F242375EA3CC34CA58F2AD48757B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WinRT.Mono/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4B797B032B47F242375EA3CC34CA58F2AD48757B (U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WinRT.Mono/<>c::<.cctor>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__7_0_m519E5BD123DCE4E43CA4D8EB36FCF300E034296C (U3CU3Ec_tE6045BBAF5FC8CDC286AFB80C98B17E6731BF229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E8980C78A0F622B164E0FA16B56B9CF8B06B5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C(_stringLiteral885E8980C78A0F622B164E0FA16B56B9CF8B06B5, (intptr_t)(0), 0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		intptr_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5((intptr_t)L_3, /*hidden argument*/NULL);
		return (bool)1;
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
// System.Void WinRT.Mono/ThreadContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext__cctor_m9E041B1B08B8CEC67CC22ADFAEB32172DEBC4B6A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D_mF294A2A281428CDE542BC9C2C092BCC20193CA8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_GetProcAddress_Tismono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB_m457EDB8CBA3EB5764CD1A0C6E6FB35E31D881560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F7E940B2021E8BF65852F73C3E2CECACCD01456);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * L_0 = (Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 *)il2cpp_codegen_object_new(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7(L_0, /*hidden argument*/Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7_RuntimeMethod_var);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__foreignThreads_0(L_0);
		Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * L_1 = (Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 *)il2cpp_codegen_object_new(Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7(L_1, /*hidden argument*/Lazy_1__ctor_mB938BC12A13E6AD0C12CAAD41D1ED3563EAB79F7_RuntimeMethod_var);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__presumedNonForeignThreads_1(L_1);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_2 = (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C *)il2cpp_codegen_object_new(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_il2cpp_TypeInfo_var);
		EventWaitHandle__ctor_mCE6FFB98B80A90643A8AE092D5841AF34FF884CE(L_2, (bool)0, 0, /*hidden argument*/NULL);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__threadCleanupRequested_2(L_2);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_3 = (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C *)il2cpp_codegen_object_new(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_il2cpp_TypeInfo_var);
		EventWaitHandle__ctor_mCE6FFB98B80A90643A8AE092D5841AF34FF884CE(L_3, (bool)0, 0, /*hidden argument*/NULL);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__threadCleanupCompleted_3(L_3);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__monoSupportHandle_4((intptr_t)(0));
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__cleanupRegister_5((mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * L_4 = ((Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var))->get__usingMono_0();
		NullCheck(L_4);
		bool L_5;
		L_5 = Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B(L_4, /*hidden argument*/Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C(_stringLiteral1F7E940B2021E8BF65852F73C3E2CECACCD01456, (intptr_t)(0), ((int32_t)4096), /*hidden argument*/NULL);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__monoSupportHandle_4((intptr_t)L_6);
		intptr_t L_7 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		bool L_8;
		L_8 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Marshal_GetHRForLastWin32Error_mC4244CDFD16223106A9FDE60850A0C69607C2CAD(/*hidden argument*/NULL);
		Marshal_ThrowExceptionForHR_m65A384887B0A220FF292CA13F300E6CBEC5780EB(L_9, /*hidden argument*/NULL);
	}

IL_007c:
	{
		intptr_t L_10 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t4C9248B53F46AA35443C3F2791C0C9CC89EF4EB1_il2cpp_TypeInfo_var);
		mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * L_11;
		L_11 = Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D_mF294A2A281428CDE542BC9C2C092BCC20193CA8D((intptr_t)L_10, /*hidden argument*/Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D_mF294A2A281428CDE542BC9C2C092BCC20193CA8D_RuntimeMethod_var);
		NullCheck(L_11);
		mono_thread_cleanup_initialize_Invoke_m013587A92E79AB9DF50E2411C1DC5DB9E60952CC(L_11, (intptr_t*)(intptr_t*)((uintptr_t)(&V_0)), (intptr_t*)(intptr_t*)((uintptr_t)(&V_1)), /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_12 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__threadCleanupRequested_2();
		intptr_t L_13 = V_0;
		SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * L_14 = (SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 *)il2cpp_codegen_object_new(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_mABE9A7F29A09ECD2B86643417576C1FF40707601(L_14, (intptr_t)L_13, (bool)1, /*hidden argument*/NULL);
		WaitHandleExtensions_SetSafeWaitHandle_m4D0C815398835849C12A33D0F073CB56DFC4AF2F(L_12, L_14, /*hidden argument*/NULL);
		EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * L_15 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__threadCleanupCompleted_3();
		intptr_t L_16 = V_1;
		SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * L_17 = (SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 *)il2cpp_codegen_object_new(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_mABE9A7F29A09ECD2B86643417576C1FF40707601(L_17, (intptr_t)L_16, (bool)1, /*hidden argument*/NULL);
		WaitHandleExtensions_SetSafeWaitHandle_m4D0C815398835849C12A33D0F073CB56DFC4AF2F(L_15, L_17, /*hidden argument*/NULL);
		intptr_t L_18 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * L_19;
		L_19 = Platform_GetProcAddress_Tismono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB_m457EDB8CBA3EB5764CD1A0C6E6FB35E31D881560((intptr_t)L_18, /*hidden argument*/Platform_GetProcAddress_Tismono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB_m457EDB8CBA3EB5764CD1A0C6E6FB35E31D881560_RuntimeMethod_var);
		((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->set__cleanupRegister_5(L_19);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void WinRT.Mono/ThreadContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext__ctor_mA2E22B1762209EFBB34985EFED33A8B39FF6FC1D (ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * L_0 = ((Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var))->get__usingMono_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B(L_0, /*hidden argument*/Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Mono_mono_thread_current_m990881A301E53315E3D261299E210D2C2A0390C2(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = Mono_mono_thread_is_foreign_m2BADFC870B7E267B0361083E788217810402E4C5((intptr_t)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * L_5 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__presumedNonForeignThreads_1();
		NullCheck(L_5);
		HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * L_6;
		L_6 = Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1(L_5, /*hidden argument*/Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1_RuntimeMethod_var);
		intptr_t L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3(L_6, (intptr_t)L_7, /*hidden argument*/HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * L_9 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__cleanupRegister_5();
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		mono_thread_cleanup_register_Invoke_m976239AACA730E88A2391727F260D058485F4FFE(L_9, (intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void WinRT.Mono/ThreadContext::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_Dispose_mBB71AE9788075D6C4A08D0ACFF4289FD100DACD4 (ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WinRT.Mono/ThreadContext::RegisterPossiblyNonForeignThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_RegisterPossiblyNonForeignThread_m6B466F43F61600A4F9C98FE9FAC13C0CD6A3193A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		Lazy_1_t35BF0FF1949BD2EE92B8BAF43B0306B5FE14ED06 * L_0 = ((Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var))->get__usingMono_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B(L_0, /*hidden argument*/Lazy_1_get_Value_m64C0949482D6B329E4D0FB56F5490311128DBA2B_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t6E23BB8BCF5545B0173161D3B71E07C62DA6E784_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Mono_mono_thread_current_m990881A301E53315E3D261299E210D2C2A0390C2(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * L_3 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__foreignThreads_0();
		NullCheck(L_3);
		HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * L_4;
		L_4 = Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1(L_3, /*hidden argument*/Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1_RuntimeMethod_var);
		intptr_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3(L_4, (intptr_t)L_5, /*hidden argument*/HashSet_1_Contains_m27B9D049E5666A97C33A41478B21DBF24EACCCD3_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var);
		Lazy_1_t3C1A9AB87B53319F26C56930FE347E76119475E6 * L_7 = ((ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tCEB4FCAA8DA244E1DD41A36DFBB25CE7545F6026_il2cpp_TypeInfo_var))->get__presumedNonForeignThreads_1();
		NullCheck(L_7);
		HashSet_1_tB84E75D63B7D20C2AB30E261701BB80076CC2184 * L_8;
		L_8 = Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1(L_7, /*hidden argument*/Lazy_1_get_Value_m08EE4C67DB069602AB16388A29B2F844612996C1_RuntimeMethod_var);
		intptr_t L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7(L_8, (intptr_t)L_9, /*hidden argument*/HashSet_1_Add_m95DB4E38FEEEFD38C1DF401019E6ABD50D65D0F7_RuntimeMethod_var);
	}

IL_0035:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D (mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___threadCleanupRequested0, ___threadCleanupCompleted1);

}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize__ctor_mB2FBE5CFB8FEF5CA8E6E3E25745EB30E239FB50B (mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m013587A92E79AB9DF50E2411C1DC5DB9E60952CC (mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, const RuntimeMethod* method)
{
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
				typedef void (*FunctionPointerType) (intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
					else
						GenericVirtActionInvoker2< intptr_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
					else
						VirtActionInvoker2< intptr_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t*, intptr_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t*, intptr_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WinRT.Mono/mono_thread_cleanup_initialize::BeginInvoke(System.IntPtr*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mono_thread_cleanup_initialize_BeginInvoke_m5BF92043455952C7E73A9BB23C4C9F8E77351924 (mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___threadCleanupRequested0;
	__d_args[1] = ___threadCleanupCompleted1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_EndInvoke_m7AE947CC5012EA06C02F40C056E35183A83742F3 (mono_thread_cleanup_initialize_tC54C6BC8A3E443381BEC41C438DFF74E9FF97E3D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB (mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * __this, intptr_t ___threadPtr0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___threadPtr0);

}
// System.Void WinRT.Mono/mono_thread_cleanup_register::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register__ctor_mCA711050C37298681CB8D9C322907D3C264B85BF (mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.Mono/mono_thread_cleanup_register::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_m976239AACA730E88A2391727F260D058485F4FFE (mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * __this, intptr_t ___threadPtr0, const RuntimeMethod* method)
{
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
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___threadPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___threadPtr0, targetMethod);
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
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___threadPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___threadPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___threadPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___threadPtr0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___threadPtr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WinRT.Mono/mono_thread_cleanup_register::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mono_thread_cleanup_register_BeginInvoke_m6E03027E8EFDF23172B69ECBCA5AFF348365FB1B (mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * __this, intptr_t ___threadPtr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___threadPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void WinRT.Mono/mono_thread_cleanup_register::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_EndInvoke_mA235B17C63F28D13F3FDE8A0B629BEECD134DFAB (mono_thread_cleanup_register_tDA6B065A3CA2B3EFF1364822D29B676AF46889EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
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
// System.IntPtr WinRT.Platform/DotNETLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage__LoadLibraryExW_mF75FCC96C6A6B6C184B9379D69E77C56C526B77E (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fileName0;
		intptr_t L_1 = ___fileHandle1;
		uint32_t L_2 = ___flags2;
		intptr_t L_3;
		L_3 = DotNETLinkage_LoadLibraryExW_mB30B5816FB98FF70E0DFC7BA712F24754875CA64(L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}
}
// System.Boolean WinRT.Platform/DotNETLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage__FreeLibrary_m1687B3C28EE7C431F0265F6B8F64C44D85BFC99D (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1;
		L_1 = DotNETLinkage_FreeLibrary_m243A00A792582F0DB8CDE3C049C00CD4D34BAD5E((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform/DotNETLinkage::_GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage__GetProcAddress_m51224ED5179228432E736A4A94DB7EDFDB1DAE41 (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2;
		L_2 = DotNETLinkage_GetProcAddress_mBBDB58BD5600E8C6AD2C9F5486AD32AA2A3876DE((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return (intptr_t)L_2;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoIncrementMTAUsage_m22891D2FF59E43E23ED4D3B2EEA8E100C0DBA43D (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1;
		L_1 = DotNETLinkage_CoIncrementMTAUsage_mDCA9FDD51F3DE31332D1F1F0BC65BFDACC788C63((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoDecrementMTAUsage_mEA3699628B1BA7C96C73F512CF633FD9A3B8BE26 (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1;
		L_1 = DotNETLinkage_CoDecrementMTAUsage_mC83A33B8CDF864595D2C13F111E7C0231D4D4CDF((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__RoGetActivationFactory_m4F825DF6E63B87F3828A03299033C2A348925D52 (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___runtimeClassId0;
		Guid_t * L_1 = ___iid1;
		intptr_t* L_2 = ___factory2;
		int32_t L_3;
		L_3 = DotNETLinkage_RoGetActivationFactory_mDE17FB4DAD6D1EAC6277C7061814DA428D73AD02((intptr_t)L_0, (Guid_t *)L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsCreateString_mBCB4346A72A07FE20228CA75915A52B77CBD2B46 (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sourceString0;
		int32_t L_1 = ___length1;
		intptr_t* L_2 = ___hstring2;
		int32_t L_3;
		L_3 = DotNETLinkage_WindowsCreateString_m972417DDF749C045E275A0F656F2FB2CC05C2277(L_0, L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Char* WinRT.Platform/DotNETLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage__WindowsGetStringRawBuffer_m791BFCAA76FB8F9EBB0D4AA20CFDE965CFC29BB2 (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		uint32_t* L_1 = ___length1;
		Il2CppChar* L_2;
		L_2 = DotNETLinkage_WindowsGetStringRawBuffer_m96B61C9E0EA4576425CEF67FE7CB9338392EDB0D((intptr_t)L_0, (uint32_t*)(uint32_t*)L_1, /*hidden argument*/NULL);
		return (Il2CppChar*)(L_2);
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsDeleteString_mB8EA5CA97A80ED891B8480DCC72861F3550F958E (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1;
		L_1 = DotNETLinkage_WindowsDeleteString_mAD677667A10B7413B673B9DC4FF13AAA62F39260((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/DotNETLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__GetHRForLastWin32Error_mAFD4D25047754D940F157C8105DD239AAEB6D445 (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetHRForLastWin32Error_mC4244CDFD16223106A9FDE60850A0C69607C2CAD(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr WinRT.Platform/DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_LoadLibraryExW_mB30B5816FB98FF70E0DFC7BA712F24754875CA64 (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibraryExW", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryExW)(____fileName0_marshaled, ___fileHandle1, ___flags2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___fileHandle1, ___flags2);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m243A00A792582F0DB8CDE3C049C00CD4D34BAD5E (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___moduleHandle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr WinRT.Platform/DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_GetProcAddress_mBBDB58BD5600E8C6AD2C9F5486AD32AA2A3876DE (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_kernel32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___functionName1' to native representation
	char* ____functionName1_marshaled = NULL;
	____functionName1_marshaled = il2cpp_codegen_marshal_string(___functionName1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_kernel32_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___moduleHandle0, ____functionName1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___moduleHandle0, ____functionName1_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___functionName1' native representation
	il2cpp_codegen_marshal_free(____functionName1_marshaled);
	____functionName1_marshaled = NULL;

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_mDCA9FDD51F3DE31332D1F1F0BC65BFDACC788C63 (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoIncrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mC83A33B8CDF864595D2C13F111E7C0231D4D4CDF (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoDecrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_com_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_RoGetActivationFactory_mDE17FB4DAD6D1EAC6277C7061814DA428D73AD02 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-l1-1-0.dll"), "RoGetActivationFactory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetActivationFactory)(___runtimeClassId0, ___iid1, ___factory2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___runtimeClassId0, ___iid1, ___factory2);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsCreateString_m972417DDF749C045E275A0F656F2FB2CC05C2277 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (Il2CppChar*, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsCreateString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___sourceString0' to native representation
	Il2CppChar* ____sourceString0_marshaled = NULL;
	if (___sourceString0 != NULL)
	{
		____sourceString0_marshaled = ___sourceString0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsCreateString)(____sourceString0_marshaled, ___length1, ___hstring2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____sourceString0_marshaled, ___length1, ___hstring2);
	#endif

	return returnValue;
}
// System.Char* WinRT.Platform/DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage_WindowsGetStringRawBuffer_m96B61C9E0EA4576425CEF67FE7CB9338392EDB0D (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	typedef Il2CppChar* (STDCALL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsGetStringRawBuffer", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(WindowsGetStringRawBuffer)(___hstring0, ___length1);
	#else
	Il2CppChar* returnValue = il2cppPInvokeFunc(___hstring0, ___length1);
	#endif

	return returnValue;
}
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_mAD677667A10B7413B673B9DC4FF13AAA62F39260 (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsDeleteString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_api_ms_win_core_winrt_string_l1_1_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hstring0);
	#endif

	return returnValue;
}
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_mBD9E6B197D3045E00A0158AADB51EBDBA7AA696E (DotNETLinkage_tB1716B959A0DEBEDE4E153BBD325A8B5CDF1A07C * __this, const RuntimeMethod* method)
{
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
// System.IntPtr WinRT.Platform/IL2CPPLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage__LoadLibraryExW_mFFC0D9B89FB9EFC9D56602DB57BB2B6B7A43B767 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fileName0;
		intptr_t L_1 = ___fileHandle1;
		uint32_t L_2 = ___flags2;
		intptr_t L_3;
		L_3 = IL2CPPLinkage_LoadLibraryExW_m347FB602B9DAD029E04808CF94DB394A881ED0F4(L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage__FreeLibrary_m01F26331CABFBA8A96F1C6E2F4F1FDEFA94A16D3 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1;
		L_1 = IL2CPPLinkage_FreeLibrary_m4582EDC48FA07226297EF1A2616E558A7B4CFE19((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform/IL2CPPLinkage::_GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage__GetProcAddress_m8A979040B139832513385D323F66566DA7661C2B (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2;
		L_2 = IL2CPPLinkage_GetProcAddress_m55D3E9D3F86A9F4C64FD313DF827F58D4FD3E9F7((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return (intptr_t)L_2;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoIncrementMTAUsage_mD1521E597D8ECCEED42E4A6A5ED49E9A541BF444 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoIncrementMTAUsage_m3C4B68B33657B8BA758F6D76122DDB1888C1FD32((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoDecrementMTAUsage_mC30DAE6799FF72C4FB9A54E5803CA4BC69D26DD9 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_CoDecrementMTAUsage_m1C0D88B1EA7585D338B72AB849C894C1771E886C((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__RoGetActivationFactory_mF4B87552A1401865374CADBF873A08DC370DC186 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___runtimeClassId0;
		Guid_t * L_1 = ___iid1;
		intptr_t* L_2 = ___factory2;
		int32_t L_3;
		L_3 = IL2CPPLinkage_RoGetActivationFactory_mFF3526A97BA84119AC4F0FCAE416E235E6726B39((intptr_t)L_0, (Guid_t *)L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsCreateString_mECAE2D5A8C9BA50F39A28706FB1F0ABAFEAA4F98 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sourceString0;
		int32_t L_1 = ___length1;
		intptr_t* L_2 = ___hstring2;
		int32_t L_3;
		L_3 = IL2CPPLinkage_WindowsCreateString_m65FF390A75C46441E5B1292A9A611E0189633096(L_0, L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Char* WinRT.Platform/IL2CPPLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage__WindowsGetStringRawBuffer_m4AD47B813929074039B886D57A7BC9DA0233BAC5 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		uint32_t* L_1 = ___length1;
		Il2CppChar* L_2;
		L_2 = IL2CPPLinkage_WindowsGetStringRawBuffer_m7F84FD2082C71AD6B0EBDBC6E45C693A5C9B65B5((intptr_t)L_0, (uint32_t*)(uint32_t*)L_1, /*hidden argument*/NULL);
		return (Il2CppChar*)(L_2);
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsDeleteString_m32039F9B754AA0E3C8BFCA28F77E39F6C773D967 (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1;
		L_1 = IL2CPPLinkage_WindowsDeleteString_mA8153EE134A7CB877DAB21FC55CCF4942D3CF1CA((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__GetHRForLastWin32Error_mB61A0D10291C71E93B541D1DB6A9593735738BFF (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)-2147467259);
	}
}
// System.IntPtr WinRT.Platform/IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_LoadLibraryExW_m347FB602B9DAD029E04808CF94DB394A881ED0F4 (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryExW)(____fileName0_marshaled, ___fileHandle1, ___flags2);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m4582EDC48FA07226297EF1A2616E558A7B4CFE19 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.IntPtr WinRT.Platform/IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_GetProcAddress_m55D3E9D3F86A9F4C64FD313DF827F58D4FD3E9F7 (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___functionName1' to native representation
	char* ____functionName1_marshaled = NULL;
	____functionName1_marshaled = il2cpp_codegen_marshal_string(___functionName1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___moduleHandle0, ____functionName1_marshaled);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___functionName1' native representation
	il2cpp_codegen_marshal_free(____functionName1_marshaled);
	____functionName1_marshaled = NULL;

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m3C4B68B33657B8BA758F6D76122DDB1888C1FD32 (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_m1C0D88B1EA7585D338B72AB849C894C1771E886C (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_RoGetActivationFactory_mFF3526A97BA84119AC4F0FCAE416E235E6726B39 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetActivationFactory)(___runtimeClassId0, ___iid1, ___factory2);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsCreateString_m65FF390A75C46441E5B1292A9A611E0189633096 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (Il2CppChar*, int32_t, intptr_t*);

	// Marshaling of parameter '___sourceString0' to native representation
	Il2CppChar* ____sourceString0_marshaled = NULL;
	if (___sourceString0 != NULL)
	{
		____sourceString0_marshaled = ___sourceString0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsCreateString)(____sourceString0_marshaled, ___length1, ___hstring2);

	return returnValue;
}
// System.Char* WinRT.Platform/IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage_WindowsGetStringRawBuffer_m7F84FD2082C71AD6B0EBDBC6E45C693A5C9B65B5 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	typedef Il2CppChar* (STDCALL *PInvokeFunc) (intptr_t, uint32_t*);

	// Native function invocation
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(WindowsGetStringRawBuffer)(___hstring0, ___length1);

	return returnValue;
}
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_mA8153EE134A7CB877DAB21FC55CCF4942D3CF1CA (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);

	return returnValue;
}
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_mDB5A728A3789E6979A3EA4582E7D70A2D7A9E3BD (IL2CPPLinkage_tAC8C8961FCB09490EC8C65E1D06DDAE307AB4351 * __this, const RuntimeMethod* method)
{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF (_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * __this, intptr_t ___thisPtr0, uint32_t ___indexBufferSize1, int32_t* ___indexBuffer2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___indexBufferSize1, ___indexBuffer2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetInputs__ctor_m75C5ECD98EDF4F737F7885A2D0056E98527B6C1C (_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::Invoke(System.IntPtr,System.UInt32,Microsoft.MixedReality.Input.ControllerInput*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetInputs_Invoke_mFEC0B0C8739A69E5556D9A2C5EA7549D5173F804 (_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * __this, intptr_t ___thisPtr0, uint32_t ___indexBufferSize1, int32_t* ___indexBuffer2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___indexBufferSize1, ___indexBuffer2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::BeginInvoke(System.IntPtr,System.UInt32,Microsoft.MixedReality.Input.ControllerInput*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetInputs_BeginInvoke_m82FFC056E0967E1E9C5F8E573646F18CE56BD7CE (_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * __this, intptr_t ___thisPtr0, uint32_t ___indexBufferSize1, int32_t* ___indexBuffer2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___indexBufferSize1);
	__d_args[2] = ___indexBuffer2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetInputs_EndInvoke_m0D2FF9B6C20374FF936254C0A1D3118E8517CCD1 (_GetInputs_t05E52C24C41A01226F459255EE480B97F9B745DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 (_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * __this, intptr_t ___thisPtr0, uint32_t ___input1, bool* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, bool*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___input1, ___value2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _IsAnalogPressableInput__ctor_mB6BDC4CCCB154B9341D60F421650CB6FE76F2C6B (_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::Invoke(System.IntPtr,System.UInt32,System.Boolean*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IsAnalogPressableInput_Invoke_mE758B983731F9C5788DCD908758C3238374A191B (_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * __this, intptr_t ___thisPtr0, uint32_t ___input1, bool* ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, bool*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___input1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, bool*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___input1, ___value2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, bool* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___input1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, bool* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___input1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, bool* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___input1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, bool* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___input1, ___value2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, bool*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___input1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::BeginInvoke(System.IntPtr,System.UInt32,System.Boolean*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _IsAnalogPressableInput_BeginInvoke_m1444EA859E19B44DB9B556168424980C4CCD1DC6 (_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * __this, intptr_t ___thisPtr0, uint32_t ___input1, bool* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___input1);
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _IsAnalogPressableInput_EndInvoke_m806BF2909D494E59F00E4BC4AFE64545D892CA6C (_IsAnalogPressableInput_tDF99859205B87AF91678D1456695B0C512D6B590 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 (_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * __this, intptr_t ___thisPtr0, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790  ___time1, intptr_t* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___time1, ___value2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TryGetReadingAtSystemRelativeTime__ctor_mE2AF476D1DDCA9A6A7C31AC56BDB19AC5F002500 (_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::Invoke(System.IntPtr,WinRT.Interop._TimeSpan,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetReadingAtSystemRelativeTime_Invoke_m155137DB382318939C5381E9F4426B6712BCBCCD (_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * __this, intptr_t ___thisPtr0, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790  ___time1, intptr_t* ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___time1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___time1, ___value2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___time1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___time1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___time1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___time1, ___value2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___time1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::BeginInvoke(System.IntPtr,WinRT.Interop._TimeSpan,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TryGetReadingAtSystemRelativeTime_BeginInvoke_m8D7E09B4986C71F62637FD7C8A6D1CA82D5EBAD3 (_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * __this, intptr_t ___thisPtr0, _TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790  ___time1, intptr_t* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(_TimeSpan_t765B9386242C80838DA39BB65B3BC1BC2448D790_il2cpp_TypeInfo_var, &___time1);
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetReadingAtSystemRelativeTime_EndInvoke_mDD6B4937EACC0B915F54D23E9294773F5A44AD5C (_TryGetReadingAtSystemRelativeTime_tD4A327BED53AA00670CD2704DCFBF9BF26B4C193 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 (_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D  ___timestamp1, intptr_t* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___timestamp1, ___value2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TryGetReadingAtTime__ctor_mFD4E1340A7EC0A41709303B90E4B0691CC480CED (_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::Invoke(System.IntPtr,WinRT.Interop._DateTime,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetReadingAtTime_Invoke_mA9726FD3B6BCF1FE45FF8762C80BFB296F821B58 (_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D  ___timestamp1, intptr_t* ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___timestamp1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___timestamp1, ___value2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___timestamp1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___timestamp1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___timestamp1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___timestamp1, ___value2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___timestamp1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::BeginInvoke(System.IntPtr,WinRT.Interop._DateTime,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TryGetReadingAtTime_BeginInvoke_mA9F55DEA8ED0D87B0D52BB56A3E05E793E576DF5 (_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * __this, intptr_t ___thisPtr0, _DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D  ___timestamp1, intptr_t* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D_il2cpp_TypeInfo_var, &___timestamp1);
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetReadingAtTime_EndInvoke_mBDDD8580F5CE5985A591ACCDB61BA455D1437A5B (_TryGetReadingAtTime_t615EC785AE060AD73E27C80FED20A7C9FB227295 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB (_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * __this, intptr_t ___thisPtr0, uint32_t ___input1, float* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___input1, ___value2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetFloatValue__ctor_m7E7774DED201DE9B04AC3EDD48F72EBCBD6E8249 (_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::Invoke(System.IntPtr,System.UInt32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFloatValue_Invoke_m53CA1E2F27B36D9F2B0011B95FC6F57F0814EDB0 (_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * __this, intptr_t ___thisPtr0, uint32_t ___input1, float* ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___input1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___input1, ___value2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___input1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___input1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___input1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___input1, ___value2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___input1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::BeginInvoke(System.IntPtr,System.UInt32,System.Single*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetFloatValue_BeginInvoke_m2EF11810C4082F15FD633E6B42623A8CA91BA67B (_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * __this, intptr_t ___thisPtr0, uint32_t ___input1, float* ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___input1);
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFloatValue_EndInvoke_m258EAF550CE90E92A933464C9F05BD61EF8F5C5A (_GetFloatValue_t8D6F07FBA38EB393683BF2739E5E6501A4637ABB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 (_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * __this, intptr_t ___thisPtr0, uint32_t ___indexBufferSize1, float* ___indexBuffer2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___indexBufferSize1, ___indexBuffer2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetFloatValues__ctor_m0D29086DE3095E055E1EA3112E3DAE6EA90A4D4E (_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::Invoke(System.IntPtr,System.UInt32,System.Single*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFloatValues_Invoke_m17D77C02CF26DA9EF1B6E5B0FB517DF3ED4DCE2E (_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * __this, intptr_t ___thisPtr0, uint32_t ___indexBufferSize1, float* ___indexBuffer2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___indexBufferSize1, ___indexBuffer2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, float* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, float*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___indexBufferSize1, ___indexBuffer2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::BeginInvoke(System.IntPtr,System.UInt32,System.Single*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetFloatValues_BeginInvoke_m38C56B669E3823F1721972F23B913194B235E909 (_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * __this, intptr_t ___thisPtr0, uint32_t ___indexBufferSize1, float* ___indexBuffer2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___indexBufferSize1);
	__d_args[2] = ___indexBuffer2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetFloatValues_EndInvoke_m180580A0F65CD12EE5CBC5550701024C680F8ABB (_GetFloatValues_tA85AA7DE5E418CE7F7517BD23CFC51F473B6C797 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F (_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * __this, intptr_t ___thisPtr0, uint32_t ___input1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___input1, ___value2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetVector2Value__ctor_mB5B0FACB39E4CC4F338A8CF61E916B950B8F7130 (_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::Invoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetVector2Value_Invoke_mCC548729DDD7191524FECE2E9EE5687D3EC63E5A (_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * __this, intptr_t ___thisPtr0, uint32_t ___input1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___input1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___input1, ___value2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___input1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___input1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___input1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___input1, ___value2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___input1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::BeginInvoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetVector2Value_BeginInvoke_mE4919FE3C7E74B15EFA9BF5717578F24287F1842 (_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * __this, intptr_t ___thisPtr0, uint32_t ___input1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___value2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___input1);
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetVector2Value_EndInvoke_m8E2C1181A06047F211D04CBA59F195E262CC6BAE (_GetVector2Value_t122AE182E3044018B813B2E0093C1AAA794BDB1F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C (_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * __this, intptr_t ___thisPtr0, uint32_t ___vertexBufferSize1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___vertices2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___vertexBufferSize1, ___vertices2);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetVector2Values__ctor_mB2AE0A864AA11EA5C49D7C6601E4B9FB2F9DA42C (_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::Invoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetVector2Values_Invoke_mDE64451BE1B31F833AC572A6F2AF508D84A4AC27 (_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * __this, intptr_t ___thisPtr0, uint32_t ___vertexBufferSize1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___vertices2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___vertexBufferSize1, ___vertices2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___vertexBufferSize1, ___vertices2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___vertexBufferSize1, ___vertices2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___vertexBufferSize1, ___vertices2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___vertexBufferSize1, ___vertices2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___vertexBufferSize1, ___vertices2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___vertexBufferSize1, ___vertices2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::BeginInvoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetVector2Values_BeginInvoke_mC0FDC914049C17E8B70E7440B3A26CB1EBC66A78 (_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * __this, intptr_t ___thisPtr0, uint32_t ___vertexBufferSize1, Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * ___vertices2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___vertexBufferSize1);
	__d_args[2] = ___vertices2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetVector2Values_EndInvoke_m9F673BA5FFC0F99DA4685CFB9ADA7C8AA0141E18 (_GetVector2Values_t7975514B2ECC019CD0D9E5E7D330B8A3C490080C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 (_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * __this, intptr_t ___thisPtr0, intptr_t* ___actionPtr1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___actionPtr1);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _StartAsync__ctor_mAAAABE9A57C012DF54A213914B667B9DC7E36F75 (_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _StartAsync_Invoke_m65380182C503F11882694E75178222AA429F3E37 (_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * __this, intptr_t ___thisPtr0, intptr_t* ___actionPtr1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___actionPtr1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___actionPtr1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___actionPtr1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___actionPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___actionPtr1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___actionPtr1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___actionPtr1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _StartAsync_BeginInvoke_m760C0544F5624C703DB0A44FBA0674D276C7D61F (_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * __this, intptr_t ___thisPtr0, intptr_t* ___actionPtr1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___actionPtr1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _StartAsync_EndInvoke_m1E922DDE727F7FBAAB71D12D666A1071CE664F59 (_StartAsync_t4022D47F3AFC87253C3FB44E537D36D0970EF5C5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA (_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * __this, intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0);

	return returnValue;
}
// System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Stop__ctor_mFAF599459B2C5ED8BC61B05FADE0BBC2F97C542F (_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _Stop_Invoke_mFADA246AE97815F2751A0FB883A442607306AC3C (_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * __this, intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Stop_BeginInvoke_m01FDCCC0AC3C764B63B064CA6917ADB69EF11AAA (_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * __this, intptr_t ___thisPtr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _Stop_EndInvoke_m81C2A2A706528961F084FAE211E5CFF7DACECDFB (_Stop_tA8467437FC982770F9921FB5D2E0BBBB3375EBCA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_inline (_DateTime_t22AB2C164A472102403016DF2B36DA07B7EF521D * __this, int64_t ___universalTime0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___universalTime0;
		__this->set_UniversalTime_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m58D611C6D8E5CD65CCD860C39BF9C29B26A2F208_inline (MonoPInvokeCallbackAttribute_tCF215EA9C41D0E3E052D6B05CCF68327B1033078 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDelegateTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
