#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745_RuntimeMethod_var;
extern const RuntimeMethod* Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270_RuntimeMethod_var;
extern const RuntimeMethod* Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2_RuntimeMethod_var;
extern const RuntimeMethod* EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9_RuntimeMethod_var;
extern const RuntimeMethod* IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0_RuntimeMethod_var;



// 0x00000001 System.Void WinRT.Platform::.cctor()
extern void Platform__cctor_m5C0408DB5000A800355AEFB7778ED09EDEA17AF7 (void);
// 0x00000002 System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
extern void Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C (void);
// 0x00000003 System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
extern void Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5 (void);
// 0x00000004 T WinRT.Platform::TryGetProcAddress(System.IntPtr)
// 0x00000005 T WinRT.Platform::GetProcAddress(System.IntPtr)
// 0x00000006 System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
extern void Platform_CoIncrementMTAUsage_m2428EF0BA585EB8FBF44DE5A8E4FBC1D48B2FC3C (void);
// 0x00000007 System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
extern void Platform_CoDecrementMTAUsage_m073063398FF86173826492CB17CD4FA8D8901B64 (void);
// 0x00000008 System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
extern void Platform_RoGetActivationFactory_mEF99130AD55B64388AF27C28972859DCA17877AE (void);
// 0x00000009 System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
extern void Platform_WindowsCreateString_m660737A5CD07AF4A8719B1871F25B3C149666941 (void);
// 0x0000000A System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
extern void Platform_WindowsGetStringRawBuffer_m6D782A4AFE5BA4B96C6960FBDD15EE48766C400F (void);
// 0x0000000B System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
extern void Platform_WindowsDeleteString_mA90605E243EC48929051CE3AC36B495076164481 (void);
// 0x0000000C System.Int32 WinRT.Platform::GetHRForLastWin32Error()
extern void Platform_GetHRForLastWin32Error_mD64DAFE7B45911DAB02E9EE90CE296433C627221 (void);
// 0x0000000D System.IntPtr WinRT.Platform/IPlatformLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
// 0x0000000E System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr)
// 0x0000000F System.IntPtr WinRT.Platform/IPlatformLinkage::_GetProcAddress(System.IntPtr,System.String)
// 0x00000010 System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*)
// 0x00000011 System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr)
// 0x00000012 System.Int32 WinRT.Platform/IPlatformLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
// 0x00000013 System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
// 0x00000014 System.Char* WinRT.Platform/IPlatformLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
// 0x00000015 System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr)
// 0x00000016 System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error()
// 0x00000017 System.IntPtr WinRT.Platform/DotNETLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
extern void DotNETLinkage__LoadLibraryExW_mF75FCC96C6A6B6C184B9379D69E77C56C526B77E (void);
// 0x00000018 System.Boolean WinRT.Platform/DotNETLinkage::_FreeLibrary(System.IntPtr)
extern void DotNETLinkage__FreeLibrary_m1687B3C28EE7C431F0265F6B8F64C44D85BFC99D (void);
// 0x00000019 System.IntPtr WinRT.Platform/DotNETLinkage::_GetProcAddress(System.IntPtr,System.String)
extern void DotNETLinkage__GetProcAddress_m51224ED5179228432E736A4A94DB7EDFDB1DAE41 (void);
// 0x0000001A System.Int32 WinRT.Platform/DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
extern void DotNETLinkage__CoIncrementMTAUsage_m22891D2FF59E43E23ED4D3B2EEA8E100C0DBA43D (void);
// 0x0000001B System.Int32 WinRT.Platform/DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
extern void DotNETLinkage__CoDecrementMTAUsage_mEA3699628B1BA7C96C73F512CF633FD9A3B8BE26 (void);
// 0x0000001C System.Int32 WinRT.Platform/DotNETLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
extern void DotNETLinkage__RoGetActivationFactory_m4F825DF6E63B87F3828A03299033C2A348925D52 (void);
// 0x0000001D System.Int32 WinRT.Platform/DotNETLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
extern void DotNETLinkage__WindowsCreateString_mBCB4346A72A07FE20228CA75915A52B77CBD2B46 (void);
// 0x0000001E System.Char* WinRT.Platform/DotNETLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
extern void DotNETLinkage__WindowsGetStringRawBuffer_m791BFCAA76FB8F9EBB0D4AA20CFDE965CFC29BB2 (void);
// 0x0000001F System.Int32 WinRT.Platform/DotNETLinkage::_WindowsDeleteString(System.IntPtr)
extern void DotNETLinkage__WindowsDeleteString_mB8EA5CA97A80ED891B8480DCC72861F3550F958E (void);
// 0x00000020 System.Int32 WinRT.Platform/DotNETLinkage::_GetHRForLastWin32Error()
extern void DotNETLinkage__GetHRForLastWin32Error_mAFD4D25047754D940F157C8105DD239AAEB6D445 (void);
// 0x00000021 System.IntPtr WinRT.Platform/DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
extern void DotNETLinkage_LoadLibraryExW_mB30B5816FB98FF70E0DFC7BA712F24754875CA64 (void);
// 0x00000022 System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
extern void DotNETLinkage_FreeLibrary_m243A00A792582F0DB8CDE3C049C00CD4D34BAD5E (void);
// 0x00000023 System.IntPtr WinRT.Platform/DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
extern void DotNETLinkage_GetProcAddress_mBBDB58BD5600E8C6AD2C9F5486AD32AA2A3876DE (void);
// 0x00000024 System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
extern void DotNETLinkage_CoIncrementMTAUsage_mDCA9FDD51F3DE31332D1F1F0BC65BFDACC788C63 (void);
// 0x00000025 System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
extern void DotNETLinkage_CoDecrementMTAUsage_mC83A33B8CDF864595D2C13F111E7C0231D4D4CDF (void);
// 0x00000026 System.Int32 WinRT.Platform/DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
extern void DotNETLinkage_RoGetActivationFactory_mDE17FB4DAD6D1EAC6277C7061814DA428D73AD02 (void);
// 0x00000027 System.Int32 WinRT.Platform/DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
extern void DotNETLinkage_WindowsCreateString_m972417DDF749C045E275A0F656F2FB2CC05C2277 (void);
// 0x00000028 System.Char* WinRT.Platform/DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
extern void DotNETLinkage_WindowsGetStringRawBuffer_m96B61C9E0EA4576425CEF67FE7CB9338392EDB0D (void);
// 0x00000029 System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
extern void DotNETLinkage_WindowsDeleteString_mAD677667A10B7413B673B9DC4FF13AAA62F39260 (void);
// 0x0000002A System.Void WinRT.Platform/DotNETLinkage::.ctor()
extern void DotNETLinkage__ctor_mBD9E6B197D3045E00A0158AADB51EBDBA7AA696E (void);
// 0x0000002B System.IntPtr WinRT.Platform/IL2CPPLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
extern void IL2CPPLinkage__LoadLibraryExW_mFFC0D9B89FB9EFC9D56602DB57BB2B6B7A43B767 (void);
// 0x0000002C System.Boolean WinRT.Platform/IL2CPPLinkage::_FreeLibrary(System.IntPtr)
extern void IL2CPPLinkage__FreeLibrary_m01F26331CABFBA8A96F1C6E2F4F1FDEFA94A16D3 (void);
// 0x0000002D System.IntPtr WinRT.Platform/IL2CPPLinkage::_GetProcAddress(System.IntPtr,System.String)
extern void IL2CPPLinkage__GetProcAddress_m8A979040B139832513385D323F66566DA7661C2B (void);
// 0x0000002E System.Int32 WinRT.Platform/IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
extern void IL2CPPLinkage__CoIncrementMTAUsage_mD1521E597D8ECCEED42E4A6A5ED49E9A541BF444 (void);
// 0x0000002F System.Int32 WinRT.Platform/IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
extern void IL2CPPLinkage__CoDecrementMTAUsage_mC30DAE6799FF72C4FB9A54E5803CA4BC69D26DD9 (void);
// 0x00000030 System.Int32 WinRT.Platform/IL2CPPLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
extern void IL2CPPLinkage__RoGetActivationFactory_mF4B87552A1401865374CADBF873A08DC370DC186 (void);
// 0x00000031 System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
extern void IL2CPPLinkage__WindowsCreateString_mECAE2D5A8C9BA50F39A28706FB1F0ABAFEAA4F98 (void);
// 0x00000032 System.Char* WinRT.Platform/IL2CPPLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
extern void IL2CPPLinkage__WindowsGetStringRawBuffer_m4AD47B813929074039B886D57A7BC9DA0233BAC5 (void);
// 0x00000033 System.Int32 WinRT.Platform/IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
extern void IL2CPPLinkage__WindowsDeleteString_m32039F9B754AA0E3C8BFCA28F77E39F6C773D967 (void);
// 0x00000034 System.Int32 WinRT.Platform/IL2CPPLinkage::_GetHRForLastWin32Error()
extern void IL2CPPLinkage__GetHRForLastWin32Error_mB61A0D10291C71E93B541D1DB6A9593735738BFF (void);
// 0x00000035 System.IntPtr WinRT.Platform/IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
extern void IL2CPPLinkage_LoadLibraryExW_m347FB602B9DAD029E04808CF94DB394A881ED0F4 (void);
// 0x00000036 System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
extern void IL2CPPLinkage_FreeLibrary_m4582EDC48FA07226297EF1A2616E558A7B4CFE19 (void);
// 0x00000037 System.IntPtr WinRT.Platform/IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
extern void IL2CPPLinkage_GetProcAddress_m55D3E9D3F86A9F4C64FD313DF827F58D4FD3E9F7 (void);
// 0x00000038 System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
extern void IL2CPPLinkage_CoIncrementMTAUsage_m3C4B68B33657B8BA758F6D76122DDB1888C1FD32 (void);
// 0x00000039 System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
extern void IL2CPPLinkage_CoDecrementMTAUsage_m1C0D88B1EA7585D338B72AB849C894C1771E886C (void);
// 0x0000003A System.Int32 WinRT.Platform/IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
extern void IL2CPPLinkage_RoGetActivationFactory_mFF3526A97BA84119AC4F0FCAE416E235E6726B39 (void);
// 0x0000003B System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
extern void IL2CPPLinkage_WindowsCreateString_m65FF390A75C46441E5B1292A9A611E0189633096 (void);
// 0x0000003C System.Char* WinRT.Platform/IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
extern void IL2CPPLinkage_WindowsGetStringRawBuffer_m7F84FD2082C71AD6B0EBDBC6E45C693A5C9B65B5 (void);
// 0x0000003D System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
extern void IL2CPPLinkage_WindowsDeleteString_mA8153EE134A7CB877DAB21FC55CCF4942D3CF1CA (void);
// 0x0000003E System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
extern void IL2CPPLinkage__ctor_mDB5A728A3789E6979A3EA4582E7D70A2D7A9E3BD (void);
// 0x0000003F System.IntPtr WinRT.Mono::mono_thread_current()
extern void Mono_mono_thread_current_m990881A301E53315E3D261299E210D2C2A0390C2 (void);
// 0x00000040 System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
extern void Mono_mono_thread_is_foreign_m2BADFC870B7E267B0361083E788217810402E4C5 (void);
// 0x00000041 System.Void WinRT.Mono::.cctor()
extern void Mono__cctor_mEEB184B9B40D4160CF730E6CDFDF4FED5293DC59 (void);
// 0x00000042 System.Void WinRT.Mono/mono_thread_cleanup_initialize::.ctor(System.Object,System.IntPtr)
extern void mono_thread_cleanup_initialize__ctor_mB2FBE5CFB8FEF5CA8E6E3E25745EB30E239FB50B (void);
// 0x00000043 System.Void WinRT.Mono/mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
extern void mono_thread_cleanup_initialize_Invoke_m013587A92E79AB9DF50E2411C1DC5DB9E60952CC (void);
// 0x00000044 System.IAsyncResult WinRT.Mono/mono_thread_cleanup_initialize::BeginInvoke(System.IntPtr*,System.IntPtr*,System.AsyncCallback,System.Object)
extern void mono_thread_cleanup_initialize_BeginInvoke_m5BF92043455952C7E73A9BB23C4C9F8E77351924 (void);
// 0x00000045 System.Void WinRT.Mono/mono_thread_cleanup_initialize::EndInvoke(System.IAsyncResult)
extern void mono_thread_cleanup_initialize_EndInvoke_m7AE947CC5012EA06C02F40C056E35183A83742F3 (void);
// 0x00000046 System.Void WinRT.Mono/mono_thread_cleanup_register::.ctor(System.Object,System.IntPtr)
extern void mono_thread_cleanup_register__ctor_mCA711050C37298681CB8D9C322907D3C264B85BF (void);
// 0x00000047 System.Void WinRT.Mono/mono_thread_cleanup_register::Invoke(System.IntPtr)
extern void mono_thread_cleanup_register_Invoke_m976239AACA730E88A2391727F260D058485F4FFE (void);
// 0x00000048 System.IAsyncResult WinRT.Mono/mono_thread_cleanup_register::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void mono_thread_cleanup_register_BeginInvoke_m6E03027E8EFDF23172B69ECBCA5AFF348365FB1B (void);
// 0x00000049 System.Void WinRT.Mono/mono_thread_cleanup_register::EndInvoke(System.IAsyncResult)
extern void mono_thread_cleanup_register_EndInvoke_mA235B17C63F28D13F3FDE8A0B629BEECD134DFAB (void);
// 0x0000004A System.Void WinRT.Mono/ThreadContext::.cctor()
extern void ThreadContext__cctor_m9E041B1B08B8CEC67CC22ADFAEB32172DEBC4B6A (void);
// 0x0000004B System.Void WinRT.Mono/ThreadContext::.ctor()
extern void ThreadContext__ctor_mA2E22B1762209EFBB34985EFED33A8B39FF6FC1D (void);
// 0x0000004C System.Void WinRT.Mono/ThreadContext::Dispose()
extern void ThreadContext_Dispose_mBB71AE9788075D6C4A08D0ACFF4289FD100DACD4 (void);
// 0x0000004D System.Void WinRT.Mono/ThreadContext::RegisterPossiblyNonForeignThread()
extern void ThreadContext_RegisterPossiblyNonForeignThread_m6B466F43F61600A4F9C98FE9FAC13C0CD6A3193A (void);
// 0x0000004E System.Void WinRT.Mono/<>c::.cctor()
extern void U3CU3Ec__cctor_m4C9086808617382EAFA79B3AA0FE6E29A0C6A24A (void);
// 0x0000004F System.Void WinRT.Mono/<>c::.ctor()
extern void U3CU3Ec__ctor_m4B797B032B47F242375EA3CC34CA58F2AD48757B (void);
// 0x00000050 System.Boolean WinRT.Mono/<>c::<.cctor>b__7_0()
extern void U3CU3Ec_U3C_cctorU3Eb__7_0_m519E5BD123DCE4E43CA4D8EB36FCF300E034296C (void);
// 0x00000051 System.Void WinRT.HString::.ctor(System.String)
extern void HString__ctor_mF6D16E2BC62CF33D24D0A0756E58D14D25E2BB79 (void);
// 0x00000052 System.String WinRT.HString::ToString()
extern void HString_ToString_mF0A5F881ABCDA00CBC9289600BF8E1055A8CA20D (void);
// 0x00000053 System.Void WinRT.HString::Dispose()
extern void HString_Dispose_m5FD752CE9B55D40A798A4CD79CAE33058D23CE59 (void);
// 0x00000054 System.Int32* WinRT.ModuleReference::AllocateRefCount()
extern void ModuleReference_AllocateRefCount_m564869B62BFFBB8EA983231FFF9DA7557C8A1AA3 (void);
// 0x00000055 WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
extern void ModuleReference_Allocate_m10B82418E7BDDFFAEB5EE600287EA3D9F02E3ECA (void);
// 0x00000056 WinRT.ModuleReference WinRT.ModuleReference::get_Null()
extern void ModuleReference_get_Null_m14122A174A36BB8B07A1E8647F55BB8375AFDD05 (void);
// 0x00000057 System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
extern void ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE (void);
// 0x00000058 WinRT.ModuleReference WinRT.ModuleReference::AddRef()
extern void ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98 (void);
// 0x00000059 System.Void WinRT.ModuleReference::Release()
extern void ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE (void);
// 0x0000005A WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
extern void IObjectReference_get_VftblIUnknown_mD1A8899ECFB6F93765488C0B633FC96A58CD4B20 (void);
// 0x0000005B System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
extern void IObjectReference__ctor_mA28E1573963C2A8798FC58387472E5045B1B1C7D (void);
// 0x0000005C WinRT.ObjectReference`1<T> WinRT.IObjectReference::As()
// 0x0000005D WinRT.ObjectReference`1<T> WinRT.IObjectReference::As(System.Guid)
// 0x0000005E System.Void WinRT.IObjectReference::Finalize()
extern void IObjectReference_Finalize_m06B64F3FB97FE9A1F65581C9CA7FAA103258BE36 (void);
// 0x0000005F System.Boolean WinRT.IObjectReference::get_IsLive()
// 0x00000060 WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::get_VftblIUnknown()
// 0x00000061 WinRT.ObjectReference`1<T> WinRT.ObjectReference`1::Attach(WinRT.ModuleReference,System.IntPtr&)
// 0x00000062 WinRT.ObjectReference`1<T> WinRT.ObjectReference`1::FromNativePtrNoRef(System.IntPtr)
// 0x00000063 System.Void WinRT.ObjectReference`1::.ctor(WinRT.ModuleReference,System.IntPtr,System.Boolean)
// 0x00000064 System.Void WinRT.ObjectReference`1::Finalize()
// 0x00000065 System.Boolean WinRT.ObjectReference`1::get_IsLive()
// 0x00000066 System.Void WinRT.DllModule::.cctor()
extern void DllModule__cctor_mBBA26DF1B5329291F6FDC7272EF0044B12E3E6FC (void);
// 0x00000067 WinRT.DllModule WinRT.DllModule::TryLoad(System.String)
extern void DllModule_TryLoad_mDFFDA00174AFEDD748114C5E712880B06B4A8522 (void);
// 0x00000068 System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule/DllGetActivationFactory)
extern void DllModule__ctor_m1764FF4C22B06C2171EEA0599C055DC547C8F3E3 (void);
// 0x00000069 WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.DllModule::GetActivationFactory(WinRT.HString)
extern void DllModule_GetActivationFactory_m725C684F0AE7B59EE99226F4A18310AD971838F8 (void);
// 0x0000006A System.Void WinRT.DllModule::Finalize()
extern void DllModule_Finalize_mC42A03CD1740F985115E39BE48B5695072864E00 (void);
// 0x0000006B System.Void WinRT.DllModule/DllGetActivationFactory::.ctor(System.Object,System.IntPtr)
extern void DllGetActivationFactory__ctor_mF6C2578F5382356103F4F01F18FC6859CB8690BA (void);
// 0x0000006C System.Int32 WinRT.DllModule/DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
extern void DllGetActivationFactory_Invoke_m9FA6F8618BF10EEF7CC971DC2A6B3B873F7B6664 (void);
// 0x0000006D System.IAsyncResult WinRT.DllModule/DllGetActivationFactory::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern void DllGetActivationFactory_BeginInvoke_m701728B91FF78ED88AF0D239A36FB1823787F316 (void);
// 0x0000006E System.Int32 WinRT.DllModule/DllGetActivationFactory::EndInvoke(System.IAsyncResult)
extern void DllGetActivationFactory_EndInvoke_m6FB71D18B5258BDA72E21D6512042608B8903D2F (void);
// 0x0000006F System.Void WinRT.WeakLazy`1::.ctor()
// 0x00000070 System.Void WinRT.WeakLazy`1::.ctor(System.Func`1<T>)
// 0x00000071 T WinRT.WeakLazy`1::get_Value()
// 0x00000072 System.Void WinRT.WeakLazy`1/<>c::.cctor()
// 0x00000073 System.Void WinRT.WeakLazy`1/<>c::.ctor()
// 0x00000074 T WinRT.WeakLazy`1/<>c::<.ctor>b__2_0()
// 0x00000075 WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
extern void WinrtModule_get_Instance_m94C6A25F3EB29F1AEE04E609D99AE9F010554088 (void);
// 0x00000076 System.Void WinRT.WinrtModule::.ctor()
extern void WinrtModule__ctor_m91E4F4BAE6E085DD828FA817B0C2DC7E1C8BB8EE (void);
// 0x00000077 WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.WinrtModule::GetActivationFactory(WinRT.HString)
extern void WinrtModule_GetActivationFactory_mDF4E18BD1D942781054EF5DEF6516904BEB85143 (void);
// 0x00000078 System.Void WinRT.WinrtModule::Finalize()
extern void WinrtModule_Finalize_mA49B88DB64C11F0471BA3BEC2948F0063DD93FC7 (void);
// 0x00000079 System.Void WinRT.WinrtModule::.cctor()
extern void WinrtModule__cctor_mACF039B99C84017654ACE3D0827C10CB01E95DF9 (void);
// 0x0000007A System.Void WinRT.ActivationFactory`1::.ctor()
// 0x0000007B WinRT.ObjectReference`1<I> WinRT.ActivationFactory`1::_ActivateInstance()
// 0x0000007C WinRT.ObjectReference`1<I> WinRT.ActivationFactory`1::ActivateInstance()
// 0x0000007D System.Void WinRT.ActivationFactory`1::.cctor()
// 0x0000007E System.Void WinRT.ActivationFactory`1/<>c::.cctor()
// 0x0000007F System.Void WinRT.ActivationFactory`1/<>c::.ctor()
// 0x00000080 System.Boolean WinRT.ActivationFactory`1/<>c::<.cctor>b__8_0()
// 0x00000081 WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
extern void Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96 (void);
// 0x00000082 System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
extern void Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270 (void);
// 0x00000083 System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
extern void Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745 (void);
// 0x00000084 System.UInt32 WinRT.Delegate::Release(System.IntPtr)
extern void Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2 (void);
// 0x00000085 System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
extern void Delegate_QueryInterface_m7D996B90699158496CE474A6D8D7F8854039A573 (void);
// 0x00000086 System.UInt32 WinRT.Delegate::AddRef()
extern void Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87 (void);
// 0x00000087 System.UInt32 WinRT.Delegate::Release()
extern void Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78 (void);
// 0x00000088 System.Int32 WinRT.Delegate::MarshalInvoke(System.IntPtr,System.Action`1<T>)
// 0x00000089 System.Void WinRT.Delegate::.cctor()
extern void Delegate__cctor_m68E54CB66BA225C8E5FBDBF074EC53B37CC7E2C2 (void);
// 0x0000008A System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
extern void Delegate__ctor_m85A286E877BF2A7DBE0CD7BCAE440814FC6F62F2 (void);
// 0x0000008B System.Void WinRT.Delegate::Finalize()
extern void Delegate_Finalize_m8BA08F149F8F12DD003CA82E742D17CEA1D1573D (void);
// 0x0000008C System.Void WinRT.Delegate::_Dispose()
extern void Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834 (void);
// 0x0000008D System.IntPtr WinRT.Delegate/InitialReference::get_DelegatePtr()
extern void InitialReference_get_DelegatePtr_mBEDE076C60E46C2AA1E78000F45A420E788F25DD (void);
// 0x0000008E System.Void WinRT.Delegate/InitialReference::.ctor(System.Guid,System.IntPtr,System.Object)
extern void InitialReference__ctor_m637F535F954BE0E50CB548A2939374C406993DDE (void);
// 0x0000008F System.Void WinRT.Delegate/InitialReference::Finalize()
extern void InitialReference_Finalize_m8458E14211261A3E485EE98DDD5D9E327093019E (void);
// 0x00000090 System.Void WinRT.Delegate/InitialReference::Dispose()
extern void InitialReference_Dispose_m59F78D25E9B7D090D2CBEB570E4DD4DF4EB27E4B (void);
// 0x00000091 System.Int32 WinRT.EventSource::_invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9 (void);
// 0x00000092 System.Void WinRT.EventSource::.ctor()
extern void EventSource__ctor_m69DB609B14B796733CB615E2F9B86F0F42318403 (void);
// 0x00000093 System.Void WinRT.EventSource::.cctor()
extern void EventSource__cctor_mA6C83091B197BC4FC88BBF11CF123F02D56A7833 (void);
// 0x00000094 System.Void WinRT.EventSource/_Invoke::.ctor(System.Object,System.IntPtr)
extern void _Invoke__ctor_m3D782EAA1DB17B0CFA5BA2C875CD8BC7280C9F2D (void);
// 0x00000095 System.Void WinRT.EventSource/_Invoke::Invoke(System.IntPtr,System.IntPtr)
extern void _Invoke_Invoke_m568FD6E1DAB86996A4E45E37286F71428B24C06F (void);
// 0x00000096 System.IAsyncResult WinRT.EventSource/_Invoke::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _Invoke_BeginInvoke_m974035512C495F6B2D96B02A7A0EF846BE9E2860 (void);
// 0x00000097 System.Void WinRT.EventSource/_Invoke::EndInvoke(System.IAsyncResult)
extern void _Invoke_EndInvoke_m7D1CCE243EB316DAB6687882498B4EEFCCB865A5 (void);
// 0x00000098 System.Void WinRT.EventSource/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m500680DBFAC1D4618C15E76612661550D2717D79 (void);
// 0x00000099 System.Void WinRT.EventSource/<>c__DisplayClass1_0::<_invoke>b__0(WinRT.EventSource/_Invoke)
extern void U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m8051FBB44797C2E9B2CE20A8C83702D4E466A505 (void);
// 0x0000009A System.Void WinRT.EventSource`3::add__event(System.EventHandler`1<A>)
// 0x0000009B System.Void WinRT.EventSource`3::remove__event(System.EventHandler`1<A>)
// 0x0000009C System.Void WinRT.EventSource`3::add_Event(System.EventHandler`1<A>)
// 0x0000009D System.Void WinRT.EventSource`3::remove_Event(System.EventHandler`1<A>)
// 0x0000009E System.Void WinRT.EventSource`3::.ctor(WinRT.IObjectReference,WinRT.Interop._add_EventHandler,WinRT.Interop._remove_EventHandler,WinRT.EventSource`3/UnmarshalArgs<I,S,A>)
// 0x0000009F System.Void WinRT.EventSource`3::Finalize()
// 0x000000A0 System.Void WinRT.EventSource`3::Invoke(System.IntPtr,System.IntPtr)
// 0x000000A1 System.Void WinRT.EventSource`3::_Unsubscribe()
// 0x000000A2 System.Void WinRT.EventSource`3/UnmarshalArgs::.ctor(System.Object,System.IntPtr)
// 0x000000A3 A WinRT.EventSource`3/UnmarshalArgs::Invoke(System.IntPtr)
// 0x000000A4 System.IAsyncResult WinRT.EventSource`3/UnmarshalArgs::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
// 0x000000A5 A WinRT.EventSource`3/UnmarshalArgs::EndInvoke(System.IAsyncResult)
// 0x000000A6 System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_m0C481252F91D542CF1977948C3A2B48001B87B02 (void);
// 0x000000A7 System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
extern void MonoPInvokeCallbackAttribute_set_DelegateType_m58D611C6D8E5CD65CCD860C39BF9C29B26A2F208 (void);
// 0x000000A8 System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
extern void _QueryInterface__ctor_m1B0E325651385472FBBC5437BC0C0862E69D51C3 (void);
// 0x000000A9 System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
extern void _QueryInterface_Invoke_m46EBC6D8AE68758403FEFC54AE8218524FBC7390 (void);
// 0x000000AA System.IAsyncResult WinRT.Interop.IUnknownVftbl/_QueryInterface::BeginInvoke(System.IntPtr,System.Guid*,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _QueryInterface_BeginInvoke_m56C14E9AB1C1F43910582CE86A4DEE1AFB49C57B (void);
// 0x000000AB System.Int32 WinRT.Interop.IUnknownVftbl/_QueryInterface::EndInvoke(System.IAsyncResult)
extern void _QueryInterface_EndInvoke_m48EF80946B28388F1F5EA4FD7458741A563FBD2B (void);
// 0x000000AC System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
extern void _AddRef__ctor_m8A5FFC9D62D00CFBC99FFBE80849259E06DEEAF1 (void);
// 0x000000AD System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::Invoke(System.IntPtr)
extern void _AddRef_Invoke_m9786172EA3B760785905B4CA32844A31423BE86C (void);
// 0x000000AE System.IAsyncResult WinRT.Interop.IUnknownVftbl/_AddRef::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _AddRef_BeginInvoke_m10C69D6CD72E70F19C8A1BAD897AF3F8FF1505D2 (void);
// 0x000000AF System.UInt32 WinRT.Interop.IUnknownVftbl/_AddRef::EndInvoke(System.IAsyncResult)
extern void _AddRef_EndInvoke_mFDB40B2FCB1C0B81CA9917CE2D5BD27D4D933940 (void);
// 0x000000B0 System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
extern void _Release__ctor_m96990D35E888EA45D144FDE1FD8DD3B5886480EF (void);
// 0x000000B1 System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::Invoke(System.IntPtr)
extern void _Release_Invoke_m724DDC2008B59B1862802FA89F259FBA7DE7938E (void);
// 0x000000B2 System.IAsyncResult WinRT.Interop.IUnknownVftbl/_Release::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _Release_BeginInvoke_mA1948BF26B341CE800DBDF0373D6824B46251CED (void);
// 0x000000B3 System.UInt32 WinRT.Interop.IUnknownVftbl/_Release::EndInvoke(System.IAsyncResult)
extern void _Release_EndInvoke_m35D49BEBCF99EB24A30E83FEA2236F9C217C84B5 (void);
// 0x000000B4 System.Void WinRT.Interop.IInspectableVftbl/_GetIids::.ctor(System.Object,System.IntPtr)
extern void _GetIids__ctor_m59DC1C92C75469ED079823894DCD78660A9EB6F1 (void);
// 0x000000B5 System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
extern void _GetIids_Invoke_m1EE0CEBCE0B1F183BBD0C979509EB41B634430D0 (void);
// 0x000000B6 System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetIids::BeginInvoke(System.IntPtr,System.UInt32*,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _GetIids_BeginInvoke_mA4D8FC119E715F0CE1869E3BD6D28E5CF355196C (void);
// 0x000000B7 System.Int32 WinRT.Interop.IInspectableVftbl/_GetIids::EndInvoke(System.IAsyncResult)
extern void _GetIids_EndInvoke_mDDC2721B20ADB0B6BC43D7A8BC52CB53FFA328CB (void);
// 0x000000B8 System.Void WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
extern void _GetRuntimeClassName__ctor_mD5CA91ED07493CDC0C496E5E4BCA183D725DF59E (void);
// 0x000000B9 System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
extern void _GetRuntimeClassName_Invoke_mA90C6CEC53554FD11E154FB8DF91956CC88306BD (void);
// 0x000000BA System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _GetRuntimeClassName_BeginInvoke_m728FFAEE23807632B4A0A5EB586211638F96D668 (void);
// 0x000000BB System.Int32 WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName::EndInvoke(System.IAsyncResult)
extern void _GetRuntimeClassName_EndInvoke_m5AA5DBF60CF6177F3D27E007F0FD667116401E3A (void);
// 0x000000BC System.Void WinRT.Interop.IInspectableVftbl/_GetTrustLevel::.ctor(System.Object,System.IntPtr)
extern void _GetTrustLevel__ctor_m97A32AAA5E1E0F4B96F29ABE5C0D3A69C304883D (void);
// 0x000000BD System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
extern void _GetTrustLevel_Invoke_m9890354C4A15235C48EB5688B9A5005119B3AD66 (void);
// 0x000000BE System.IAsyncResult WinRT.Interop.IInspectableVftbl/_GetTrustLevel::BeginInvoke(System.IntPtr,WinRT.TrustLevel*,System.AsyncCallback,System.Object)
extern void _GetTrustLevel_BeginInvoke_m8F09795988A603FE6B6E8A1C16981BA159DB4EC8 (void);
// 0x000000BF System.Int32 WinRT.Interop.IInspectableVftbl/_GetTrustLevel::EndInvoke(System.IAsyncResult)
extern void _GetTrustLevel_EndInvoke_m870360E3EFC47BD7E867C831A09803788E3974B2 (void);
// 0x000000C0 System.Void WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::.ctor(System.Object,System.IntPtr)
extern void _ActivateInstance__ctor_mB9208E0CDF7CE247C395E35EA8E49BC448866E52 (void);
// 0x000000C1 System.Int32 WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::Invoke(System.IntPtr,System.IntPtr*)
extern void _ActivateInstance_Invoke_m67036A8857C81046F09F1BF57086CB26F832A37F (void);
// 0x000000C2 System.IAsyncResult WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _ActivateInstance_BeginInvoke_mD02D53B87F18E8A499746C7831AF9FFB5115B693 (void);
// 0x000000C3 System.Int32 WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance::EndInvoke(System.IAsyncResult)
extern void _ActivateInstance_EndInvoke_m5F85353C3E33CC3EE537326B5539DE1E37F3A4FB (void);
// 0x000000C4 System.Void WinRT.Interop._DateTime::.ctor(System.Int64)
extern void _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B (void);
// 0x000000C5 System.Void WinRT.Interop._get_PropertyAsInt::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsInt__ctor_m271A11DFE54B5DBE8277416BF65E6D6F09188E17 (void);
// 0x000000C6 System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
extern void _get_PropertyAsInt_Invoke_m77A5D7212015B9F83703EEF1EA96199931E5E6BC (void);
// 0x000000C7 System.IAsyncResult WinRT.Interop._get_PropertyAsInt::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsInt_BeginInvoke_mD6A2115372C4E6CA2F84EE918657D987E77AF405 (void);
// 0x000000C8 System.Int32 WinRT.Interop._get_PropertyAsInt::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsInt_EndInvoke_m43EB9DBD741C6DE3D9A91534D837009CABEADF28 (void);
// 0x000000C9 System.Void WinRT.Interop._get_PropertyAsUInt::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsUInt__ctor_m2FF615A61F562D076D94954FB404C5A3D5C4BAEB (void);
// 0x000000CA System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
extern void _get_PropertyAsUInt_Invoke_m6290F9621850812D13C51AFA7F470E339CEAF38B (void);
// 0x000000CB System.IAsyncResult WinRT.Interop._get_PropertyAsUInt::BeginInvoke(System.IntPtr,System.UInt32*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsUInt_BeginInvoke_mD723FE4B02524789E7F7BD3A219A46D195E1ABB9 (void);
// 0x000000CC System.Int32 WinRT.Interop._get_PropertyAsUInt::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsUInt_EndInvoke_m358245D8993764C0C2AE29F6E9EE40F694F0C5BC (void);
// 0x000000CD System.Void WinRT.Interop._get_PropertyAsUShort::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsUShort__ctor_mD29700DFA54150AEB162365CA538DB74AA26724A (void);
// 0x000000CE System.Int32 WinRT.Interop._get_PropertyAsUShort::Invoke(System.IntPtr,System.UInt16*)
extern void _get_PropertyAsUShort_Invoke_mE7ED5F9CC6073FAFF89B89C3E0ACFF041B0F4287 (void);
// 0x000000CF System.IAsyncResult WinRT.Interop._get_PropertyAsUShort::BeginInvoke(System.IntPtr,System.UInt16*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsUShort_BeginInvoke_mACF87A1327C9E47AE23FD96380E9F6191E0394D0 (void);
// 0x000000D0 System.Int32 WinRT.Interop._get_PropertyAsUShort::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsUShort_EndInvoke_mB423FF3B674F36B2D3FC34C02A8956E9387E522F (void);
// 0x000000D1 System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsObject__ctor_mECFA425906FD2DA1ED1A879C0C00EF713D6A5B09 (void);
// 0x000000D2 System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
extern void _get_PropertyAsObject_Invoke_m505085AC5C4C9DF27C6597739CD89B2531581A0F (void);
// 0x000000D3 System.IAsyncResult WinRT.Interop._get_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsObject_BeginInvoke_m8C7E45B7C878AAE1293D3B9E2AA598518C77628C (void);
// 0x000000D4 System.Int32 WinRT.Interop._get_PropertyAsObject::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsObject_EndInvoke_m96CB8C8AB8F0721A9046CB4B75D7CCD190EF2847 (void);
// 0x000000D5 System.Void WinRT.Interop._put_PropertyAsObject::.ctor(System.Object,System.IntPtr)
extern void _put_PropertyAsObject__ctor_m51804AC3576AE4F064E4C66AA685183F51EC890A (void);
// 0x000000D6 System.Int32 WinRT.Interop._put_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr)
extern void _put_PropertyAsObject_Invoke_m7D8FBD4F4DEDBAC619CD31B72E2D7715F5ED7D17 (void);
// 0x000000D7 System.IAsyncResult WinRT.Interop._put_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void _put_PropertyAsObject_BeginInvoke_m4E020ACF6563B6214E63E273E2F7B7CCCDF367CF (void);
// 0x000000D8 System.Int32 WinRT.Interop._put_PropertyAsObject::EndInvoke(System.IAsyncResult)
extern void _put_PropertyAsObject_EndInvoke_m2ADA7572D4A0C230EADF7F75880EFF39E5A51BD7 (void);
// 0x000000D9 System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsEnum__ctor_m5747F5C3FC7C4650689F721B998275D79A1069D3 (void);
// 0x000000DA System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
extern void _get_PropertyAsEnum_Invoke_m167DFC6549D503714C3A98371D7D4F7C6006D7F0 (void);
// 0x000000DB System.IAsyncResult WinRT.Interop._get_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsEnum_BeginInvoke_m29F496FF261AB0DD3B43A2C67D76C46E21BA1B29 (void);
// 0x000000DC System.Int32 WinRT.Interop._get_PropertyAsEnum::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsEnum_EndInvoke_m264A27CB3ECCB91F7ADCECF51EB956D2B6A4F2F4 (void);
// 0x000000DD System.Void WinRT.Interop._get_PropertyAsDateTime::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsDateTime__ctor_m19A2128F248B9B7BAB66244603E6F3F65921B2CA (void);
// 0x000000DE System.Int32 WinRT.Interop._get_PropertyAsDateTime::Invoke(System.IntPtr,WinRT.Interop._DateTime*)
extern void _get_PropertyAsDateTime_Invoke_mC4BC47B6F25B216862B857D7F8DAB4375FA6098C (void);
// 0x000000DF System.IAsyncResult WinRT.Interop._get_PropertyAsDateTime::BeginInvoke(System.IntPtr,WinRT.Interop._DateTime*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsDateTime_BeginInvoke_m89274A5F3BEEFB6D5A01F82C9247EB33D149334A (void);
// 0x000000E0 System.Int32 WinRT.Interop._get_PropertyAsDateTime::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsDateTime_EndInvoke_m8CDF5CC21A7D3FC997EBBE9C76888C8A2DDBFDFA (void);
// 0x000000E1 System.Void WinRT.Interop._get_PropertyAsTimeSpan::.ctor(System.Object,System.IntPtr)
extern void _get_PropertyAsTimeSpan__ctor_mC5000D7A057CD030C1B8DE5D31BF701DC6570C96 (void);
// 0x000000E2 System.Int32 WinRT.Interop._get_PropertyAsTimeSpan::Invoke(System.IntPtr,WinRT.Interop._TimeSpan*)
extern void _get_PropertyAsTimeSpan_Invoke_mE6C20C05B10CCFC905F53DE6F38C6A321342CC1E (void);
// 0x000000E3 System.IAsyncResult WinRT.Interop._get_PropertyAsTimeSpan::BeginInvoke(System.IntPtr,WinRT.Interop._TimeSpan*,System.AsyncCallback,System.Object)
extern void _get_PropertyAsTimeSpan_BeginInvoke_m3CB05D91F6784319043BD679823AA4CA9BF02E03 (void);
// 0x000000E4 System.Int32 WinRT.Interop._get_PropertyAsTimeSpan::EndInvoke(System.IAsyncResult)
extern void _get_PropertyAsTimeSpan_EndInvoke_mE7C287CA0A2D3E256DAF0C53B235A61D611CF497 (void);
// 0x000000E5 System.Void WinRT.Interop._add_EventHandler::.ctor(System.Object,System.IntPtr)
extern void _add_EventHandler__ctor_m8F0B3A26A58C5663C110D32D9C43F64529F11307 (void);
// 0x000000E6 System.Int32 WinRT.Interop._add_EventHandler::Invoke(System.IntPtr,System.IntPtr,WinRT.Interop.EventRegistrationToken*)
extern void _add_EventHandler_Invoke_m2B5E8975ABF66880EA5C034F82F2D8AC1D124D0F (void);
// 0x000000E7 System.IAsyncResult WinRT.Interop._add_EventHandler::BeginInvoke(System.IntPtr,System.IntPtr,WinRT.Interop.EventRegistrationToken*,System.AsyncCallback,System.Object)
extern void _add_EventHandler_BeginInvoke_m8F250F031B7567D3B72B5503253514D2EDAA8E90 (void);
// 0x000000E8 System.Int32 WinRT.Interop._add_EventHandler::EndInvoke(System.IAsyncResult)
extern void _add_EventHandler_EndInvoke_m6C235B0E92C88043894D6CBD72DF417BF3EE8E5B (void);
// 0x000000E9 System.Void WinRT.Interop._remove_EventHandler::.ctor(System.Object,System.IntPtr)
extern void _remove_EventHandler__ctor_m4AF263EDD1510CD630AA3FB446AA4834A701A41D (void);
// 0x000000EA System.Int32 WinRT.Interop._remove_EventHandler::Invoke(System.IntPtr,WinRT.Interop.EventRegistrationToken)
extern void _remove_EventHandler_Invoke_mB803EE2BD0470474A7772E0A689F41B656F8EBB5 (void);
// 0x000000EB System.IAsyncResult WinRT.Interop._remove_EventHandler::BeginInvoke(System.IntPtr,WinRT.Interop.EventRegistrationToken,System.AsyncCallback,System.Object)
extern void _remove_EventHandler_BeginInvoke_mF1402FBC4C6088D657BC3FC00C8B9171E5F29A64 (void);
// 0x000000EC System.Int32 WinRT.Interop._remove_EventHandler::EndInvoke(System.IAsyncResult)
extern void _remove_EventHandler_EndInvoke_mFB7BEDB54B597C17C086F17BACD167C6FAD7AA1A (void);
// 0x000000ED System.Void WinRT.Interop._method0::.ctor(System.Object,System.IntPtr)
extern void _method0__ctor_m29C1CC4C29ECFED9A3EC360479A409413F30DA0B (void);
// 0x000000EE System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
extern void _method0_Invoke_mA89A8760402261928A1938DD62356A2C4C3C05BF (void);
// 0x000000EF System.IAsyncResult WinRT.Interop._method0::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _method0_BeginInvoke_m9B8BB522E701211810E921BBD99D56B8B531DDD0 (void);
// 0x000000F0 System.Int32 WinRT.Interop._method0::EndInvoke(System.IAsyncResult)
extern void _method0_EndInvoke_m99F1E032558B58213167DF8B38E14BA23DF1ACA8 (void);
// 0x000000F1 System.Void WinRT.Interop.IDelegate2_Obj_Obj::.ctor(System.Object,System.IntPtr)
extern void IDelegate2_Obj_Obj__ctor_m75E4D93DBE0AFF24C8003D8FA963F710CC48BAAA (void);
// 0x000000F2 System.Int32 WinRT.Interop.IDelegate2_Obj_Obj::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void IDelegate2_Obj_Obj_Invoke_m21031BA60279F3470B042631035161AEC7CCCD85 (void);
// 0x000000F3 System.IAsyncResult WinRT.Interop.IDelegate2_Obj_Obj::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void IDelegate2_Obj_Obj_BeginInvoke_m81A019256933825C375B00DAD57C51FDC14F43E6 (void);
// 0x000000F4 System.Int32 WinRT.Interop.IDelegate2_Obj_Obj::EndInvoke(System.IAsyncResult)
extern void IDelegate2_Obj_Obj_EndInvoke_mC92BE1D268B59348523C96CFA78A4EBA7AF74436 (void);
// 0x000000F5 System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
extern void IDelegate2_Obj_Enum__ctor_m59410F25BA1F4BA3E6BE194F1786C8807E3EFCEC (void);
// 0x000000F6 System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::Invoke(System.IntPtr,System.IntPtr,System.Int32)
extern void IDelegate2_Obj_Enum_Invoke_m276A7C59B60D3B939801A3B9050934387555A5F6 (void);
// 0x000000F7 System.IAsyncResult WinRT.Interop.IDelegate2_Obj_Enum::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void IDelegate2_Obj_Enum_BeginInvoke_mCB45954EA4B493B8EDA491AC04DA77D5E070550D (void);
// 0x000000F8 System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::EndInvoke(System.IAsyncResult)
extern void IDelegate2_Obj_Enum_EndInvoke_m751BE29AEBDC254D3183AE499C17D4A7640AC2B3 (void);
// 0x000000F9 System.Void WinRT.Interop.DelegateProperty`1::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
// 0x000000FA System.Void WinRT.Interop.DelegateProperty`1::set_Value(T)
// 0x000000FB WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.IObjectReference)
extern void IAsyncInfo_op_Implicit_m5C001870E6C9CE36BFCCA52D0332E76B4546B5E6 (void);
// 0x000000FC WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
extern void IAsyncInfo_op_Implicit_m005F86B9BF1D41972112E02A8466A7E5E804FF73 (void);
// 0x000000FD System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
extern void IAsyncInfo__ctor_m34D20304F8A20A9DF83809423E4C37262BF1649A (void);
// 0x000000FE System.Exception WinRT.Interop.IAsyncInfo::get_ErrorCode()
extern void IAsyncInfo_get_ErrorCode_mF4F077C50AE3BD6224542507F239F26A6E616F34 (void);
// 0x000000FF System.Void WinRT.Interop.IAsyncInfo::Cancel()
extern void IAsyncInfo_Cancel_m4C3F7B39C79C9732C458A844F37296FF679062A5 (void);
// 0x00000100 System.Void WinRT.Interop.IAsyncOperation::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
extern void IAsyncOperation__ctor_mE3E2542C7BB3DBB61E928AFA9D90C3CF20D02A2A (void);
// 0x00000101 System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
extern void IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0 (void);
// 0x00000102 System.Void WinRT.Interop.IAsyncOperation::set_Completed(WinRT.Interop.IAsyncOperation/CompletedHandler)
extern void IAsyncOperation_set_Completed_mB3E56629943CE5387B1ABCEFD94A2A2C54BEAA23 (void);
// 0x00000103 System.Void WinRT.Interop.IAsyncOperation::.cctor()
extern void IAsyncOperation__cctor_m67C4C4D9AC05F6C1A8296E5D61527CCD9EBC912C (void);
// 0x00000104 System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::.ctor(System.Object,System.IntPtr)
extern void CompletedHandler__ctor_mBDE4FF16A036F6C91069A87C82A369F6B0205D18 (void);
// 0x00000105 System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::Invoke(WinRT.AsyncStatus)
extern void CompletedHandler_Invoke_mB73A91A17DB19F9620C1CE8CF953F86259A54303 (void);
// 0x00000106 System.IAsyncResult WinRT.Interop.IAsyncOperation/CompletedHandler::BeginInvoke(WinRT.AsyncStatus,System.AsyncCallback,System.Object)
extern void CompletedHandler_BeginInvoke_m7D38F31746F983021182D75A7F4895A1C6B4541F (void);
// 0x00000107 System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::EndInvoke(System.IAsyncResult)
extern void CompletedHandler_EndInvoke_mEF3FF82AE65E2779521A64CF3F1F492700824E01 (void);
// 0x00000108 System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m5F2CA8F17E10CA207D487A86A7BC3378E9715026 (void);
// 0x00000109 System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::<_OnCompleted>b__0(WinRT.Interop.IAsyncOperation/CompletedHandler)
extern void U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m4006340DE007DD0B2E0D3FE419555471ABEDE0E0 (void);
// 0x0000010A System.Void WinRT.Interop._IAsyncOperation`2::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
// 0x0000010B System.Void WinRT.Interop._IAsyncOperation`2::OnCompleted(System.Threading.Tasks.TaskCompletionSource`1<TResult>)
// 0x0000010C TTask WinRT.Interop._IAsyncOperation`2::AsTask()
// 0x0000010D TTask WinRT.Interop._IAsyncOperation`2::AsTask(System.Threading.CancellationToken)
// 0x0000010E System.Void WinRT.Interop._IAsyncOperation`2/<>c__DisplayClass3_0::.ctor()
// 0x0000010F System.Void WinRT.Interop._IAsyncOperation`2/<>c__DisplayClass3_0::<AsTask>b__0(WinRT.AsyncStatus)
// 0x00000110 System.Void WinRT.Interop._IAsyncOperation`2/<>c__DisplayClass3_0::<AsTask>b__1()
// 0x00000111 System.Void WinRT.Interop.IAsyncAction::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>)
extern void IAsyncAction__ctor_mC0E80187A5BBF917B7747E600A48C50E76200AC6 (void);
// 0x00000112 System.Void WinRT.Interop.IAsyncAction::GetResults()
extern void IAsyncAction_GetResults_m8A1462B1578C3A13A6DFE5C003652386AB6C72A9 (void);
// 0x00000113 System.Void WinRT.Interop.IAsyncAction::OnCompleted(System.Threading.Tasks.TaskCompletionSource`1<WinRT.Interop.VoidResult>)
extern void IAsyncAction_OnCompleted_m6FFE3FFE1821CCCF4680D34CF153C7DAD827392D (void);
// 0x00000114 Microsoft.MixedReality.Input.IMotionControllerReading Microsoft.MixedReality.Input.IMotionControllerReading::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>)
extern void IMotionControllerReading_op_Implicit_m25C1A9D1A1916E82A8034480094C94B78395CE2B (void);
// 0x00000115 System.Void Microsoft.MixedReality.Input.IMotionControllerReading::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl>)
extern void IMotionControllerReading__ctor_mC6F8291F98142E25BAFF5C32097FDD87DB72FB64 (void);
// 0x00000116 System.Single Microsoft.MixedReality.Input.IMotionControllerReading::GetPressedValue(Microsoft.MixedReality.Input.ControllerInput)
extern void IMotionControllerReading_GetPressedValue_mA31AB0757BA8080FBAF0B7C79AC8D7B36AA490C7 (void);
// 0x00000117 System.Numerics.Vector2 Microsoft.MixedReality.Input.IMotionControllerReading::GetXYValue(Microsoft.MixedReality.Input.ControllerInput)
extern void IMotionControllerReading_GetXYValue_m867878E2D110E38586F406BB4163FF3CCFC8352B (void);
// 0x00000118 System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::.ctor(System.Object,System.IntPtr)
extern void _GetFloatValues__ctor_m0D29086DE3095E055E1EA3112E3DAE6EA90A4D4E (void);
// 0x00000119 System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::Invoke(System.IntPtr,System.UInt32,System.Single*)
extern void _GetFloatValues_Invoke_m17D77C02CF26DA9EF1B6E5B0FB517DF3ED4DCE2E (void);
// 0x0000011A System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::BeginInvoke(System.IntPtr,System.UInt32,System.Single*,System.AsyncCallback,System.Object)
extern void _GetFloatValues_BeginInvoke_m38C56B669E3823F1721972F23B913194B235E909 (void);
// 0x0000011B System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValues::EndInvoke(System.IAsyncResult)
extern void _GetFloatValues_EndInvoke_m180580A0F65CD12EE5CBC5550701024C680F8ABB (void);
// 0x0000011C System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::.ctor(System.Object,System.IntPtr)
extern void _GetVector2Values__ctor_mB2AE0A864AA11EA5C49D7C6601E4B9FB2F9DA42C (void);
// 0x0000011D System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::Invoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*)
extern void _GetVector2Values_Invoke_mDE64451BE1B31F833AC572A6F2AF508D84A4AC27 (void);
// 0x0000011E System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::BeginInvoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*,System.AsyncCallback,System.Object)
extern void _GetVector2Values_BeginInvoke_mC0FDC914049C17E8B70E7440B3A26CB1EBC66A78 (void);
// 0x0000011F System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Values::EndInvoke(System.IAsyncResult)
extern void _GetVector2Values_EndInvoke_m9F673BA5FFC0F99DA4685CFB9ADA7C8AA0141E18 (void);
// 0x00000120 System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::.ctor(System.Object,System.IntPtr)
extern void _GetFloatValue__ctor_m7E7774DED201DE9B04AC3EDD48F72EBCBD6E8249 (void);
// 0x00000121 System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::Invoke(System.IntPtr,System.UInt32,System.Single*)
extern void _GetFloatValue_Invoke_m53CA1E2F27B36D9F2B0011B95FC6F57F0814EDB0 (void);
// 0x00000122 System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::BeginInvoke(System.IntPtr,System.UInt32,System.Single*,System.AsyncCallback,System.Object)
extern void _GetFloatValue_BeginInvoke_m2EF11810C4082F15FD633E6B42623A8CA91BA67B (void);
// 0x00000123 System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetFloatValue::EndInvoke(System.IAsyncResult)
extern void _GetFloatValue_EndInvoke_m258EAF550CE90E92A933464C9F05BD61EF8F5C5A (void);
// 0x00000124 System.Void Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::.ctor(System.Object,System.IntPtr)
extern void _GetVector2Value__ctor_mB5B0FACB39E4CC4F338A8CF61E916B950B8F7130 (void);
// 0x00000125 System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::Invoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*)
extern void _GetVector2Value_Invoke_mCC548729DDD7191524FECE2E9EE5687D3EC63E5A (void);
// 0x00000126 System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::BeginInvoke(System.IntPtr,System.UInt32,System.Numerics.Vector2*,System.AsyncCallback,System.Object)
extern void _GetVector2Value_BeginInvoke_mE4919FE3C7E74B15EFA9BF5717578F24287F1842 (void);
// 0x00000127 System.Int32 Microsoft.MixedReality.Input.IMotionControllerReading/Vftbl/_GetVector2Value::EndInvoke(System.IAsyncResult)
extern void _GetVector2Value_EndInvoke_m8E2C1181A06047F211D04CBA59F195E262CC6BAE (void);
// 0x00000128 System.Void Microsoft.MixedReality.Input.MotionControllerReading::.ctor(Microsoft.MixedReality.Input.IMotionControllerReading)
extern void MotionControllerReading__ctor_m93EB4AB64AF0D35AA1FE3DD349B9AA4BA81A3066 (void);
// 0x00000129 System.Single Microsoft.MixedReality.Input.MotionControllerReading::GetPressedValue(Microsoft.MixedReality.Input.ControllerInput)
extern void MotionControllerReading_GetPressedValue_mA34234053CDE304F6A9376FFBEA0B79713DBAA62 (void);
// 0x0000012A System.Numerics.Vector2 Microsoft.MixedReality.Input.MotionControllerReading::GetXYValue(Microsoft.MixedReality.Input.ControllerInput)
extern void MotionControllerReading_GetXYValue_m341983EC85934C32FBD768EBEC997E941B7F6290 (void);
// 0x0000012B Microsoft.MixedReality.Input.IMotionController Microsoft.MixedReality.Input.IMotionController::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>)
extern void IMotionController_op_Implicit_m9C3E9F1A7E36427E17AEE1ED8AD406B4B9239291 (void);
// 0x0000012C System.Void Microsoft.MixedReality.Input.IMotionController::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionController/Vftbl>)
extern void IMotionController__ctor_mECD9FFBD082EFAF5839E3917B5309F0DD5007865 (void);
// 0x0000012D Microsoft.MixedReality.Input.Handedness Microsoft.MixedReality.Input.IMotionController::get_Handedness()
extern void IMotionController_get_Handedness_mBB1E34AE510F5C9204EB1C9F35A06049E97A026C (void);
// 0x0000012E Microsoft.MixedReality.Input.MotionControllerReading Microsoft.MixedReality.Input.IMotionController::TryGetReadingAtTime(System.DateTime)
extern void IMotionController_TryGetReadingAtTime_m9F576624EC8D416B63FFD5BC9A7034EFEA2D320A (void);
// 0x0000012F System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::.ctor(System.Object,System.IntPtr)
extern void _GetInputs__ctor_m75C5ECD98EDF4F737F7885A2D0056E98527B6C1C (void);
// 0x00000130 System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::Invoke(System.IntPtr,System.UInt32,Microsoft.MixedReality.Input.ControllerInput*)
extern void _GetInputs_Invoke_mFEC0B0C8739A69E5556D9A2C5EA7549D5173F804 (void);
// 0x00000131 System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::BeginInvoke(System.IntPtr,System.UInt32,Microsoft.MixedReality.Input.ControllerInput*,System.AsyncCallback,System.Object)
extern void _GetInputs_BeginInvoke_m82FFC056E0967E1E9C5F8E573646F18CE56BD7CE (void);
// 0x00000132 System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_GetInputs::EndInvoke(System.IAsyncResult)
extern void _GetInputs_EndInvoke_m0D2FF9B6C20374FF936254C0A1D3118E8517CCD1 (void);
// 0x00000133 System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::.ctor(System.Object,System.IntPtr)
extern void _TryGetReadingAtTime__ctor_mFD4E1340A7EC0A41709303B90E4B0691CC480CED (void);
// 0x00000134 System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::Invoke(System.IntPtr,WinRT.Interop._DateTime,System.IntPtr*)
extern void _TryGetReadingAtTime_Invoke_mA9726FD3B6BCF1FE45FF8762C80BFB296F821B58 (void);
// 0x00000135 System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::BeginInvoke(System.IntPtr,WinRT.Interop._DateTime,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _TryGetReadingAtTime_BeginInvoke_mA9F55DEA8ED0D87B0D52BB56A3E05E793E576DF5 (void);
// 0x00000136 System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtTime::EndInvoke(System.IAsyncResult)
extern void _TryGetReadingAtTime_EndInvoke_mBDDD8580F5CE5985A591ACCDB61BA455D1437A5B (void);
// 0x00000137 System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::.ctor(System.Object,System.IntPtr)
extern void _TryGetReadingAtSystemRelativeTime__ctor_mE2AF476D1DDCA9A6A7C31AC56BDB19AC5F002500 (void);
// 0x00000138 System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::Invoke(System.IntPtr,WinRT.Interop._TimeSpan,System.IntPtr*)
extern void _TryGetReadingAtSystemRelativeTime_Invoke_m155137DB382318939C5381E9F4426B6712BCBCCD (void);
// 0x00000139 System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::BeginInvoke(System.IntPtr,WinRT.Interop._TimeSpan,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _TryGetReadingAtSystemRelativeTime_BeginInvoke_m8D7E09B4986C71F62637FD7C8A6D1CA82D5EBAD3 (void);
// 0x0000013A System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_TryGetReadingAtSystemRelativeTime::EndInvoke(System.IAsyncResult)
extern void _TryGetReadingAtSystemRelativeTime_EndInvoke_mDD6B4937EACC0B915F54D23E9294773F5A44AD5C (void);
// 0x0000013B System.Void Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::.ctor(System.Object,System.IntPtr)
extern void _IsAnalogPressableInput__ctor_mB6BDC4CCCB154B9341D60F421650CB6FE76F2C6B (void);
// 0x0000013C System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::Invoke(System.IntPtr,System.UInt32,System.Boolean*)
extern void _IsAnalogPressableInput_Invoke_mE758B983731F9C5788DCD908758C3238374A191B (void);
// 0x0000013D System.IAsyncResult Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::BeginInvoke(System.IntPtr,System.UInt32,System.Boolean*,System.AsyncCallback,System.Object)
extern void _IsAnalogPressableInput_BeginInvoke_m1444EA859E19B44DB9B556168424980C4CCD1DC6 (void);
// 0x0000013E System.Int32 Microsoft.MixedReality.Input.IMotionController/Vftbl/_IsAnalogPressableInput::EndInvoke(System.IAsyncResult)
extern void _IsAnalogPressableInput_EndInvoke_m806BF2909D494E59F00E4BC4AFE64545D892CA6C (void);
// 0x0000013F System.Void Microsoft.MixedReality.Input.MotionController::.ctor(Microsoft.MixedReality.Input.IMotionController)
extern void MotionController__ctor_m274221CEC806BB1377825829DE7A3639073223EC (void);
// 0x00000140 Microsoft.MixedReality.Input.Handedness Microsoft.MixedReality.Input.MotionController::get_Handedness()
extern void MotionController_get_Handedness_m81B098E9C3F4F9AD16DE8BE567B1DA90FCFABFD9 (void);
// 0x00000141 Microsoft.MixedReality.Input.MotionControllerReading Microsoft.MixedReality.Input.MotionController::TryGetReadingAtTime(System.DateTime)
extern void MotionController_TryGetReadingAtTime_m46CE7D469EED536A4A63CAEDC0CE45116FA46ADC (void);
// 0x00000142 Microsoft.MixedReality.Input.IMotionControllerWatcher Microsoft.MixedReality.Input.IMotionControllerWatcher::op_Implicit(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>)
extern void IMotionControllerWatcher_op_Implicit_m79FD9FFF4E4D7FCF313ED4168726EB73A10CE516 (void);
// 0x00000143 System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher::.ctor(WinRT.ObjectReference`1<Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl>)
extern void IMotionControllerWatcher__ctor_m3A0851B07F3D59631E2912699A8DEA487946010C (void);
// 0x00000144 System.Threading.Tasks.Task Microsoft.MixedReality.Input.IMotionControllerWatcher::StartAsync()
extern void IMotionControllerWatcher_StartAsync_mFA402A5940F9CD443C9A748A78CF04B9CC7818D2 (void);
// 0x00000145 System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::.ctor(System.Object,System.IntPtr)
extern void _StartAsync__ctor_mAAAABE9A57C012DF54A213914B667B9DC7E36F75 (void);
// 0x00000146 System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::Invoke(System.IntPtr,System.IntPtr*)
extern void _StartAsync_Invoke_m65380182C503F11882694E75178222AA429F3E37 (void);
// 0x00000147 System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern void _StartAsync_BeginInvoke_m760C0544F5624C703DB0A44FBA0674D276C7D61F (void);
// 0x00000148 System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_StartAsync::EndInvoke(System.IAsyncResult)
extern void _StartAsync_EndInvoke_m1E922DDE727F7FBAAB71D12D666A1071CE664F59 (void);
// 0x00000149 System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::.ctor(System.Object,System.IntPtr)
extern void _Stop__ctor_mFAF599459B2C5ED8BC61B05FADE0BBC2F97C542F (void);
// 0x0000014A System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::Invoke(System.IntPtr)
extern void _Stop_Invoke_mFADA246AE97815F2751A0FB883A442607306AC3C (void);
// 0x0000014B System.IAsyncResult Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void _Stop_BeginInvoke_m01FDCCC0AC3C764B63B064CA6917ADB69EF11AAA (void);
// 0x0000014C System.Int32 Microsoft.MixedReality.Input.IMotionControllerWatcher/Vftbl/_Stop::EndInvoke(System.IAsyncResult)
extern void _Stop_EndInvoke_m81C2A2A706528961F084FAE211E5CFF7DACECDFB (void);
// 0x0000014D System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::.cctor()
extern void U3CU3Ec__cctor_m946F0CDBC8AA01AF11793EA5DF6DB5686147B57B (void);
// 0x0000014E System.Void Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::.ctor()
extern void U3CU3Ec__ctor_mB9F5DD1485EA278CE80F8D8E198E2201F4913286 (void);
// 0x0000014F Microsoft.MixedReality.Input.MotionController Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<.ctor>b__4_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__4_0_m294D6F52AB0A19E289D407B41E2F2E33124208E3 (void);
// 0x00000150 Microsoft.MixedReality.Input.MotionController Microsoft.MixedReality.Input.IMotionControllerWatcher/<>c::<.ctor>b__4_1(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__4_1_m4F5F51ED5F8220DA0E68B3F62FFF20FE1B793C88 (void);
// 0x00000151 System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::.ctor(Microsoft.MixedReality.Input.IMotionControllerWatcher)
extern void MotionControllerWatcher__ctor_m3442EC56BBFF8D6A49CFCFC17C94720427A6EB3F (void);
// 0x00000152 System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::add_MotionControllerAdded(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
extern void MotionControllerWatcher_add_MotionControllerAdded_m49A452F93CAF29DC29A312C07C43AC44D8EE6BBE (void);
// 0x00000153 System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::remove_MotionControllerAdded(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
extern void MotionControllerWatcher_remove_MotionControllerAdded_m7E96B1FEB763ABCDBADB36C99D324B436369E9B2 (void);
// 0x00000154 System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::add_MotionControllerRemoved(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
extern void MotionControllerWatcher_add_MotionControllerRemoved_m3EFC0B6FDEAF164A62E1F49E737C57BB2907D23D (void);
// 0x00000155 System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::remove_MotionControllerRemoved(System.EventHandler`1<Microsoft.MixedReality.Input.MotionController>)
extern void MotionControllerWatcher_remove_MotionControllerRemoved_m77E509AA8D0F0EC3F9B6073B1B03BDAC360420C4 (void);
// 0x00000156 System.Void Microsoft.MixedReality.Input.MotionControllerWatcher::.ctor()
extern void MotionControllerWatcher__ctor_m31160FC73ADE5F9DCFE6FBCBEE0345EBCAAED058 (void);
// 0x00000157 System.Threading.Tasks.Task Microsoft.MixedReality.Input.MotionControllerWatcher::StartAsync()
extern void MotionControllerWatcher_StartAsync_m478499DC9E6F0D2194CD344F53901E928884DD86 (void);
static Il2CppMethodPointer s_methodPointers[343] = 
{
	Platform__cctor_m5C0408DB5000A800355AEFB7778ED09EDEA17AF7,
	Platform_TryLoadLibraryExW_m3700C0FD4DE3F3D69610D9250733155ED26CE65C,
	Platform_FreeLibrary_mA44077C1E408EDDBF03E87D69019716132E0A3A5,
	NULL,
	NULL,
	Platform_CoIncrementMTAUsage_m2428EF0BA585EB8FBF44DE5A8E4FBC1D48B2FC3C,
	Platform_CoDecrementMTAUsage_m073063398FF86173826492CB17CD4FA8D8901B64,
	Platform_RoGetActivationFactory_mEF99130AD55B64388AF27C28972859DCA17877AE,
	Platform_WindowsCreateString_m660737A5CD07AF4A8719B1871F25B3C149666941,
	Platform_WindowsGetStringRawBuffer_m6D782A4AFE5BA4B96C6960FBDD15EE48766C400F,
	Platform_WindowsDeleteString_mA90605E243EC48929051CE3AC36B495076164481,
	Platform_GetHRForLastWin32Error_mD64DAFE7B45911DAB02E9EE90CE296433C627221,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DotNETLinkage__LoadLibraryExW_mF75FCC96C6A6B6C184B9379D69E77C56C526B77E,
	DotNETLinkage__FreeLibrary_m1687B3C28EE7C431F0265F6B8F64C44D85BFC99D,
	DotNETLinkage__GetProcAddress_m51224ED5179228432E736A4A94DB7EDFDB1DAE41,
	DotNETLinkage__CoIncrementMTAUsage_m22891D2FF59E43E23ED4D3B2EEA8E100C0DBA43D,
	DotNETLinkage__CoDecrementMTAUsage_mEA3699628B1BA7C96C73F512CF633FD9A3B8BE26,
	DotNETLinkage__RoGetActivationFactory_m4F825DF6E63B87F3828A03299033C2A348925D52,
	DotNETLinkage__WindowsCreateString_mBCB4346A72A07FE20228CA75915A52B77CBD2B46,
	DotNETLinkage__WindowsGetStringRawBuffer_m791BFCAA76FB8F9EBB0D4AA20CFDE965CFC29BB2,
	DotNETLinkage__WindowsDeleteString_mB8EA5CA97A80ED891B8480DCC72861F3550F958E,
	DotNETLinkage__GetHRForLastWin32Error_mAFD4D25047754D940F157C8105DD239AAEB6D445,
	DotNETLinkage_LoadLibraryExW_mB30B5816FB98FF70E0DFC7BA712F24754875CA64,
	DotNETLinkage_FreeLibrary_m243A00A792582F0DB8CDE3C049C00CD4D34BAD5E,
	DotNETLinkage_GetProcAddress_mBBDB58BD5600E8C6AD2C9F5486AD32AA2A3876DE,
	DotNETLinkage_CoIncrementMTAUsage_mDCA9FDD51F3DE31332D1F1F0BC65BFDACC788C63,
	DotNETLinkage_CoDecrementMTAUsage_mC83A33B8CDF864595D2C13F111E7C0231D4D4CDF,
	DotNETLinkage_RoGetActivationFactory_mDE17FB4DAD6D1EAC6277C7061814DA428D73AD02,
	DotNETLinkage_WindowsCreateString_m972417DDF749C045E275A0F656F2FB2CC05C2277,
	DotNETLinkage_WindowsGetStringRawBuffer_m96B61C9E0EA4576425CEF67FE7CB9338392EDB0D,
	DotNETLinkage_WindowsDeleteString_mAD677667A10B7413B673B9DC4FF13AAA62F39260,
	DotNETLinkage__ctor_mBD9E6B197D3045E00A0158AADB51EBDBA7AA696E,
	IL2CPPLinkage__LoadLibraryExW_mFFC0D9B89FB9EFC9D56602DB57BB2B6B7A43B767,
	IL2CPPLinkage__FreeLibrary_m01F26331CABFBA8A96F1C6E2F4F1FDEFA94A16D3,
	IL2CPPLinkage__GetProcAddress_m8A979040B139832513385D323F66566DA7661C2B,
	IL2CPPLinkage__CoIncrementMTAUsage_mD1521E597D8ECCEED42E4A6A5ED49E9A541BF444,
	IL2CPPLinkage__CoDecrementMTAUsage_mC30DAE6799FF72C4FB9A54E5803CA4BC69D26DD9,
	IL2CPPLinkage__RoGetActivationFactory_mF4B87552A1401865374CADBF873A08DC370DC186,
	IL2CPPLinkage__WindowsCreateString_mECAE2D5A8C9BA50F39A28706FB1F0ABAFEAA4F98,
	IL2CPPLinkage__WindowsGetStringRawBuffer_m4AD47B813929074039B886D57A7BC9DA0233BAC5,
	IL2CPPLinkage__WindowsDeleteString_m32039F9B754AA0E3C8BFCA28F77E39F6C773D967,
	IL2CPPLinkage__GetHRForLastWin32Error_mB61A0D10291C71E93B541D1DB6A9593735738BFF,
	IL2CPPLinkage_LoadLibraryExW_m347FB602B9DAD029E04808CF94DB394A881ED0F4,
	IL2CPPLinkage_FreeLibrary_m4582EDC48FA07226297EF1A2616E558A7B4CFE19,
	IL2CPPLinkage_GetProcAddress_m55D3E9D3F86A9F4C64FD313DF827F58D4FD3E9F7,
	IL2CPPLinkage_CoIncrementMTAUsage_m3C4B68B33657B8BA758F6D76122DDB1888C1FD32,
	IL2CPPLinkage_CoDecrementMTAUsage_m1C0D88B1EA7585D338B72AB849C894C1771E886C,
	IL2CPPLinkage_RoGetActivationFactory_mFF3526A97BA84119AC4F0FCAE416E235E6726B39,
	IL2CPPLinkage_WindowsCreateString_m65FF390A75C46441E5B1292A9A611E0189633096,
	IL2CPPLinkage_WindowsGetStringRawBuffer_m7F84FD2082C71AD6B0EBDBC6E45C693A5C9B65B5,
	IL2CPPLinkage_WindowsDeleteString_mA8153EE134A7CB877DAB21FC55CCF4942D3CF1CA,
	IL2CPPLinkage__ctor_mDB5A728A3789E6979A3EA4582E7D70A2D7A9E3BD,
	Mono_mono_thread_current_m990881A301E53315E3D261299E210D2C2A0390C2,
	Mono_mono_thread_is_foreign_m2BADFC870B7E267B0361083E788217810402E4C5,
	Mono__cctor_mEEB184B9B40D4160CF730E6CDFDF4FED5293DC59,
	mono_thread_cleanup_initialize__ctor_mB2FBE5CFB8FEF5CA8E6E3E25745EB30E239FB50B,
	mono_thread_cleanup_initialize_Invoke_m013587A92E79AB9DF50E2411C1DC5DB9E60952CC,
	mono_thread_cleanup_initialize_BeginInvoke_m5BF92043455952C7E73A9BB23C4C9F8E77351924,
	mono_thread_cleanup_initialize_EndInvoke_m7AE947CC5012EA06C02F40C056E35183A83742F3,
	mono_thread_cleanup_register__ctor_mCA711050C37298681CB8D9C322907D3C264B85BF,
	mono_thread_cleanup_register_Invoke_m976239AACA730E88A2391727F260D058485F4FFE,
	mono_thread_cleanup_register_BeginInvoke_m6E03027E8EFDF23172B69ECBCA5AFF348365FB1B,
	mono_thread_cleanup_register_EndInvoke_mA235B17C63F28D13F3FDE8A0B629BEECD134DFAB,
	ThreadContext__cctor_m9E041B1B08B8CEC67CC22ADFAEB32172DEBC4B6A,
	ThreadContext__ctor_mA2E22B1762209EFBB34985EFED33A8B39FF6FC1D,
	ThreadContext_Dispose_mBB71AE9788075D6C4A08D0ACFF4289FD100DACD4,
	ThreadContext_RegisterPossiblyNonForeignThread_m6B466F43F61600A4F9C98FE9FAC13C0CD6A3193A,
	U3CU3Ec__cctor_m4C9086808617382EAFA79B3AA0FE6E29A0C6A24A,
	U3CU3Ec__ctor_m4B797B032B47F242375EA3CC34CA58F2AD48757B,
	U3CU3Ec_U3C_cctorU3Eb__7_0_m519E5BD123DCE4E43CA4D8EB36FCF300E034296C,
	HString__ctor_mF6D16E2BC62CF33D24D0A0756E58D14D25E2BB79,
	HString_ToString_mF0A5F881ABCDA00CBC9289600BF8E1055A8CA20D,
	HString_Dispose_m5FD752CE9B55D40A798A4CD79CAE33058D23CE59,
	ModuleReference_AllocateRefCount_m564869B62BFFBB8EA983231FFF9DA7557C8A1AA3,
	ModuleReference_Allocate_m10B82418E7BDDFFAEB5EE600287EA3D9F02E3ECA,
	ModuleReference_get_Null_m14122A174A36BB8B07A1E8647F55BB8375AFDD05,
	ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE,
	ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98,
	ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE,
	IObjectReference_get_VftblIUnknown_mD1A8899ECFB6F93765488C0B633FC96A58CD4B20,
	IObjectReference__ctor_mA28E1573963C2A8798FC58387472E5045B1B1C7D,
	NULL,
	NULL,
	IObjectReference_Finalize_m06B64F3FB97FE9A1F65581C9CA7FAA103258BE36,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DllModule__cctor_mBBA26DF1B5329291F6FDC7272EF0044B12E3E6FC,
	DllModule_TryLoad_mDFFDA00174AFEDD748114C5E712880B06B4A8522,
	DllModule__ctor_m1764FF4C22B06C2171EEA0599C055DC547C8F3E3,
	DllModule_GetActivationFactory_m725C684F0AE7B59EE99226F4A18310AD971838F8,
	DllModule_Finalize_mC42A03CD1740F985115E39BE48B5695072864E00,
	DllGetActivationFactory__ctor_mF6C2578F5382356103F4F01F18FC6859CB8690BA,
	DllGetActivationFactory_Invoke_m9FA6F8618BF10EEF7CC971DC2A6B3B873F7B6664,
	DllGetActivationFactory_BeginInvoke_m701728B91FF78ED88AF0D239A36FB1823787F316,
	DllGetActivationFactory_EndInvoke_m6FB71D18B5258BDA72E21D6512042608B8903D2F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WinrtModule_get_Instance_m94C6A25F3EB29F1AEE04E609D99AE9F010554088,
	WinrtModule__ctor_m91E4F4BAE6E085DD828FA817B0C2DC7E1C8BB8EE,
	WinrtModule_GetActivationFactory_mDF4E18BD1D942781054EF5DEF6516904BEB85143,
	WinrtModule_Finalize_mA49B88DB64C11F0471BA3BEC2948F0063DD93FC7,
	WinrtModule__cctor_mACF039B99C84017654ACE3D0827C10CB01E95DF9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Delegate_FindObject_m0956E4E72594B1B4111EA6458A3DE7DE055E4D96,
	Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270,
	Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745,
	Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2,
	Delegate_QueryInterface_m7D996B90699158496CE474A6D8D7F8854039A573,
	Delegate_AddRef_m1D57FB4992F22A9BD45243EDF530FBC120B34B87,
	Delegate_Release_m4A66FF33161D3714C59A2F4B9E35C9AD7F52CF78,
	NULL,
	Delegate__cctor_m68E54CB66BA225C8E5FBDBF074EC53B37CC7E2C2,
	Delegate__ctor_m85A286E877BF2A7DBE0CD7BCAE440814FC6F62F2,
	Delegate_Finalize_m8BA08F149F8F12DD003CA82E742D17CEA1D1573D,
	Delegate__Dispose_mA70350FB724D3BAD8E20994041016AC5B22A8834,
	InitialReference_get_DelegatePtr_mBEDE076C60E46C2AA1E78000F45A420E788F25DD,
	InitialReference__ctor_m637F535F954BE0E50CB548A2939374C406993DDE,
	InitialReference_Finalize_m8458E14211261A3E485EE98DDD5D9E327093019E,
	InitialReference_Dispose_m59F78D25E9B7D090D2CBEB570E4DD4DF4EB27E4B,
	EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9,
	EventSource__ctor_m69DB609B14B796733CB615E2F9B86F0F42318403,
	EventSource__cctor_mA6C83091B197BC4FC88BBF11CF123F02D56A7833,
	_Invoke__ctor_m3D782EAA1DB17B0CFA5BA2C875CD8BC7280C9F2D,
	_Invoke_Invoke_m568FD6E1DAB86996A4E45E37286F71428B24C06F,
	_Invoke_BeginInvoke_m974035512C495F6B2D96B02A7A0EF846BE9E2860,
	_Invoke_EndInvoke_m7D1CCE243EB316DAB6687882498B4EEFCCB865A5,
	U3CU3Ec__DisplayClass1_0__ctor_m500680DBFAC1D4618C15E76612661550D2717D79,
	U3CU3Ec__DisplayClass1_0_U3C_invokeU3Eb__0_m8051FBB44797C2E9B2CE20A8C83702D4E466A505,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MonoPInvokeCallbackAttribute__ctor_m0C481252F91D542CF1977948C3A2B48001B87B02,
	MonoPInvokeCallbackAttribute_set_DelegateType_m58D611C6D8E5CD65CCD860C39BF9C29B26A2F208,
	_QueryInterface__ctor_m1B0E325651385472FBBC5437BC0C0862E69D51C3,
	_QueryInterface_Invoke_m46EBC6D8AE68758403FEFC54AE8218524FBC7390,
	_QueryInterface_BeginInvoke_m56C14E9AB1C1F43910582CE86A4DEE1AFB49C57B,
	_QueryInterface_EndInvoke_m48EF80946B28388F1F5EA4FD7458741A563FBD2B,
	_AddRef__ctor_m8A5FFC9D62D00CFBC99FFBE80849259E06DEEAF1,
	_AddRef_Invoke_m9786172EA3B760785905B4CA32844A31423BE86C,
	_AddRef_BeginInvoke_m10C69D6CD72E70F19C8A1BAD897AF3F8FF1505D2,
	_AddRef_EndInvoke_mFDB40B2FCB1C0B81CA9917CE2D5BD27D4D933940,
	_Release__ctor_m96990D35E888EA45D144FDE1FD8DD3B5886480EF,
	_Release_Invoke_m724DDC2008B59B1862802FA89F259FBA7DE7938E,
	_Release_BeginInvoke_mA1948BF26B341CE800DBDF0373D6824B46251CED,
	_Release_EndInvoke_m35D49BEBCF99EB24A30E83FEA2236F9C217C84B5,
	_GetIids__ctor_m59DC1C92C75469ED079823894DCD78660A9EB6F1,
	_GetIids_Invoke_m1EE0CEBCE0B1F183BBD0C979509EB41B634430D0,
	_GetIids_BeginInvoke_mA4D8FC119E715F0CE1869E3BD6D28E5CF355196C,
	_GetIids_EndInvoke_mDDC2721B20ADB0B6BC43D7A8BC52CB53FFA328CB,
	_GetRuntimeClassName__ctor_mD5CA91ED07493CDC0C496E5E4BCA183D725DF59E,
	_GetRuntimeClassName_Invoke_mA90C6CEC53554FD11E154FB8DF91956CC88306BD,
	_GetRuntimeClassName_BeginInvoke_m728FFAEE23807632B4A0A5EB586211638F96D668,
	_GetRuntimeClassName_EndInvoke_m5AA5DBF60CF6177F3D27E007F0FD667116401E3A,
	_GetTrustLevel__ctor_m97A32AAA5E1E0F4B96F29ABE5C0D3A69C304883D,
	_GetTrustLevel_Invoke_m9890354C4A15235C48EB5688B9A5005119B3AD66,
	_GetTrustLevel_BeginInvoke_m8F09795988A603FE6B6E8A1C16981BA159DB4EC8,
	_GetTrustLevel_EndInvoke_m870360E3EFC47BD7E867C831A09803788E3974B2,
	_ActivateInstance__ctor_mB9208E0CDF7CE247C395E35EA8E49BC448866E52,
	_ActivateInstance_Invoke_m67036A8857C81046F09F1BF57086CB26F832A37F,
	_ActivateInstance_BeginInvoke_mD02D53B87F18E8A499746C7831AF9FFB5115B693,
	_ActivateInstance_EndInvoke_m5F85353C3E33CC3EE537326B5539DE1E37F3A4FB,
	_DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B,
	_get_PropertyAsInt__ctor_m271A11DFE54B5DBE8277416BF65E6D6F09188E17,
	_get_PropertyAsInt_Invoke_m77A5D7212015B9F83703EEF1EA96199931E5E6BC,
	_get_PropertyAsInt_BeginInvoke_mD6A2115372C4E6CA2F84EE918657D987E77AF405,
	_get_PropertyAsInt_EndInvoke_m43EB9DBD741C6DE3D9A91534D837009CABEADF28,
	_get_PropertyAsUInt__ctor_m2FF615A61F562D076D94954FB404C5A3D5C4BAEB,
	_get_PropertyAsUInt_Invoke_m6290F9621850812D13C51AFA7F470E339CEAF38B,
	_get_PropertyAsUInt_BeginInvoke_mD723FE4B02524789E7F7BD3A219A46D195E1ABB9,
	_get_PropertyAsUInt_EndInvoke_m358245D8993764C0C2AE29F6E9EE40F694F0C5BC,
	_get_PropertyAsUShort__ctor_mD29700DFA54150AEB162365CA538DB74AA26724A,
	_get_PropertyAsUShort_Invoke_mE7ED5F9CC6073FAFF89B89C3E0ACFF041B0F4287,
	_get_PropertyAsUShort_BeginInvoke_mACF87A1327C9E47AE23FD96380E9F6191E0394D0,
	_get_PropertyAsUShort_EndInvoke_mB423FF3B674F36B2D3FC34C02A8956E9387E522F,
	_get_PropertyAsObject__ctor_mECFA425906FD2DA1ED1A879C0C00EF713D6A5B09,
	_get_PropertyAsObject_Invoke_m505085AC5C4C9DF27C6597739CD89B2531581A0F,
	_get_PropertyAsObject_BeginInvoke_m8C7E45B7C878AAE1293D3B9E2AA598518C77628C,
	_get_PropertyAsObject_EndInvoke_m96CB8C8AB8F0721A9046CB4B75D7CCD190EF2847,
	_put_PropertyAsObject__ctor_m51804AC3576AE4F064E4C66AA685183F51EC890A,
	_put_PropertyAsObject_Invoke_m7D8FBD4F4DEDBAC619CD31B72E2D7715F5ED7D17,
	_put_PropertyAsObject_BeginInvoke_m4E020ACF6563B6214E63E273E2F7B7CCCDF367CF,
	_put_PropertyAsObject_EndInvoke_m2ADA7572D4A0C230EADF7F75880EFF39E5A51BD7,
	_get_PropertyAsEnum__ctor_m5747F5C3FC7C4650689F721B998275D79A1069D3,
	_get_PropertyAsEnum_Invoke_m167DFC6549D503714C3A98371D7D4F7C6006D7F0,
	_get_PropertyAsEnum_BeginInvoke_m29F496FF261AB0DD3B43A2C67D76C46E21BA1B29,
	_get_PropertyAsEnum_EndInvoke_m264A27CB3ECCB91F7ADCECF51EB956D2B6A4F2F4,
	_get_PropertyAsDateTime__ctor_m19A2128F248B9B7BAB66244603E6F3F65921B2CA,
	_get_PropertyAsDateTime_Invoke_mC4BC47B6F25B216862B857D7F8DAB4375FA6098C,
	_get_PropertyAsDateTime_BeginInvoke_m89274A5F3BEEFB6D5A01F82C9247EB33D149334A,
	_get_PropertyAsDateTime_EndInvoke_m8CDF5CC21A7D3FC997EBBE9C76888C8A2DDBFDFA,
	_get_PropertyAsTimeSpan__ctor_mC5000D7A057CD030C1B8DE5D31BF701DC6570C96,
	_get_PropertyAsTimeSpan_Invoke_mE6C20C05B10CCFC905F53DE6F38C6A321342CC1E,
	_get_PropertyAsTimeSpan_BeginInvoke_m3CB05D91F6784319043BD679823AA4CA9BF02E03,
	_get_PropertyAsTimeSpan_EndInvoke_mE7C287CA0A2D3E256DAF0C53B235A61D611CF497,
	_add_EventHandler__ctor_m8F0B3A26A58C5663C110D32D9C43F64529F11307,
	_add_EventHandler_Invoke_m2B5E8975ABF66880EA5C034F82F2D8AC1D124D0F,
	_add_EventHandler_BeginInvoke_m8F250F031B7567D3B72B5503253514D2EDAA8E90,
	_add_EventHandler_EndInvoke_m6C235B0E92C88043894D6CBD72DF417BF3EE8E5B,
	_remove_EventHandler__ctor_m4AF263EDD1510CD630AA3FB446AA4834A701A41D,
	_remove_EventHandler_Invoke_mB803EE2BD0470474A7772E0A689F41B656F8EBB5,
	_remove_EventHandler_BeginInvoke_mF1402FBC4C6088D657BC3FC00C8B9171E5F29A64,
	_remove_EventHandler_EndInvoke_mFB7BEDB54B597C17C086F17BACD167C6FAD7AA1A,
	_method0__ctor_m29C1CC4C29ECFED9A3EC360479A409413F30DA0B,
	_method0_Invoke_mA89A8760402261928A1938DD62356A2C4C3C05BF,
	_method0_BeginInvoke_m9B8BB522E701211810E921BBD99D56B8B531DDD0,
	_method0_EndInvoke_m99F1E032558B58213167DF8B38E14BA23DF1ACA8,
	IDelegate2_Obj_Obj__ctor_m75E4D93DBE0AFF24C8003D8FA963F710CC48BAAA,
	IDelegate2_Obj_Obj_Invoke_m21031BA60279F3470B042631035161AEC7CCCD85,
	IDelegate2_Obj_Obj_BeginInvoke_m81A019256933825C375B00DAD57C51FDC14F43E6,
	IDelegate2_Obj_Obj_EndInvoke_mC92BE1D268B59348523C96CFA78A4EBA7AF74436,
	IDelegate2_Obj_Enum__ctor_m59410F25BA1F4BA3E6BE194F1786C8807E3EFCEC,
	IDelegate2_Obj_Enum_Invoke_m276A7C59B60D3B939801A3B9050934387555A5F6,
	IDelegate2_Obj_Enum_BeginInvoke_mCB45954EA4B493B8EDA491AC04DA77D5E070550D,
	IDelegate2_Obj_Enum_EndInvoke_m751BE29AEBDC254D3183AE499C17D4A7640AC2B3,
	NULL,
	NULL,
	IAsyncInfo_op_Implicit_m5C001870E6C9CE36BFCCA52D0332E76B4546B5E6,
	IAsyncInfo_op_Implicit_m005F86B9BF1D41972112E02A8466A7E5E804FF73,
	IAsyncInfo__ctor_m34D20304F8A20A9DF83809423E4C37262BF1649A,
	IAsyncInfo_get_ErrorCode_mF4F077C50AE3BD6224542507F239F26A6E616F34,
	IAsyncInfo_Cancel_m4C3F7B39C79C9732C458A844F37296FF679062A5,
	IAsyncOperation__ctor_mE3E2542C7BB3DBB61E928AFA9D90C3CF20D02A2A,
	IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0,
	IAsyncOperation_set_Completed_mB3E56629943CE5387B1ABCEFD94A2A2C54BEAA23,
	IAsyncOperation__cctor_m67C4C4D9AC05F6C1A8296E5D61527CCD9EBC912C,
	CompletedHandler__ctor_mBDE4FF16A036F6C91069A87C82A369F6B0205D18,
	CompletedHandler_Invoke_mB73A91A17DB19F9620C1CE8CF953F86259A54303,
	CompletedHandler_BeginInvoke_m7D38F31746F983021182D75A7F4895A1C6B4541F,
	CompletedHandler_EndInvoke_mEF3FF82AE65E2779521A64CF3F1F492700824E01,
	U3CU3Ec__DisplayClass4_0__ctor_m5F2CA8F17E10CA207D487A86A7BC3378E9715026,
	U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m4006340DE007DD0B2E0D3FE419555471ABEDE0E0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IAsyncAction__ctor_mC0E80187A5BBF917B7747E600A48C50E76200AC6,
	IAsyncAction_GetResults_m8A1462B1578C3A13A6DFE5C003652386AB6C72A9,
	IAsyncAction_OnCompleted_m6FFE3FFE1821CCCF4680D34CF153C7DAD827392D,
	IMotionControllerReading_op_Implicit_m25C1A9D1A1916E82A8034480094C94B78395CE2B,
	IMotionControllerReading__ctor_mC6F8291F98142E25BAFF5C32097FDD87DB72FB64,
	IMotionControllerReading_GetPressedValue_mA31AB0757BA8080FBAF0B7C79AC8D7B36AA490C7,
	IMotionControllerReading_GetXYValue_m867878E2D110E38586F406BB4163FF3CCFC8352B,
	_GetFloatValues__ctor_m0D29086DE3095E055E1EA3112E3DAE6EA90A4D4E,
	_GetFloatValues_Invoke_m17D77C02CF26DA9EF1B6E5B0FB517DF3ED4DCE2E,
	_GetFloatValues_BeginInvoke_m38C56B669E3823F1721972F23B913194B235E909,
	_GetFloatValues_EndInvoke_m180580A0F65CD12EE5CBC5550701024C680F8ABB,
	_GetVector2Values__ctor_mB2AE0A864AA11EA5C49D7C6601E4B9FB2F9DA42C,
	_GetVector2Values_Invoke_mDE64451BE1B31F833AC572A6F2AF508D84A4AC27,
	_GetVector2Values_BeginInvoke_mC0FDC914049C17E8B70E7440B3A26CB1EBC66A78,
	_GetVector2Values_EndInvoke_m9F673BA5FFC0F99DA4685CFB9ADA7C8AA0141E18,
	_GetFloatValue__ctor_m7E7774DED201DE9B04AC3EDD48F72EBCBD6E8249,
	_GetFloatValue_Invoke_m53CA1E2F27B36D9F2B0011B95FC6F57F0814EDB0,
	_GetFloatValue_BeginInvoke_m2EF11810C4082F15FD633E6B42623A8CA91BA67B,
	_GetFloatValue_EndInvoke_m258EAF550CE90E92A933464C9F05BD61EF8F5C5A,
	_GetVector2Value__ctor_mB5B0FACB39E4CC4F338A8CF61E916B950B8F7130,
	_GetVector2Value_Invoke_mCC548729DDD7191524FECE2E9EE5687D3EC63E5A,
	_GetVector2Value_BeginInvoke_mE4919FE3C7E74B15EFA9BF5717578F24287F1842,
	_GetVector2Value_EndInvoke_m8E2C1181A06047F211D04CBA59F195E262CC6BAE,
	MotionControllerReading__ctor_m93EB4AB64AF0D35AA1FE3DD349B9AA4BA81A3066,
	MotionControllerReading_GetPressedValue_mA34234053CDE304F6A9376FFBEA0B79713DBAA62,
	MotionControllerReading_GetXYValue_m341983EC85934C32FBD768EBEC997E941B7F6290,
	IMotionController_op_Implicit_m9C3E9F1A7E36427E17AEE1ED8AD406B4B9239291,
	IMotionController__ctor_mECD9FFBD082EFAF5839E3917B5309F0DD5007865,
	IMotionController_get_Handedness_mBB1E34AE510F5C9204EB1C9F35A06049E97A026C,
	IMotionController_TryGetReadingAtTime_m9F576624EC8D416B63FFD5BC9A7034EFEA2D320A,
	_GetInputs__ctor_m75C5ECD98EDF4F737F7885A2D0056E98527B6C1C,
	_GetInputs_Invoke_mFEC0B0C8739A69E5556D9A2C5EA7549D5173F804,
	_GetInputs_BeginInvoke_m82FFC056E0967E1E9C5F8E573646F18CE56BD7CE,
	_GetInputs_EndInvoke_m0D2FF9B6C20374FF936254C0A1D3118E8517CCD1,
	_TryGetReadingAtTime__ctor_mFD4E1340A7EC0A41709303B90E4B0691CC480CED,
	_TryGetReadingAtTime_Invoke_mA9726FD3B6BCF1FE45FF8762C80BFB296F821B58,
	_TryGetReadingAtTime_BeginInvoke_mA9F55DEA8ED0D87B0D52BB56A3E05E793E576DF5,
	_TryGetReadingAtTime_EndInvoke_mBDDD8580F5CE5985A591ACCDB61BA455D1437A5B,
	_TryGetReadingAtSystemRelativeTime__ctor_mE2AF476D1DDCA9A6A7C31AC56BDB19AC5F002500,
	_TryGetReadingAtSystemRelativeTime_Invoke_m155137DB382318939C5381E9F4426B6712BCBCCD,
	_TryGetReadingAtSystemRelativeTime_BeginInvoke_m8D7E09B4986C71F62637FD7C8A6D1CA82D5EBAD3,
	_TryGetReadingAtSystemRelativeTime_EndInvoke_mDD6B4937EACC0B915F54D23E9294773F5A44AD5C,
	_IsAnalogPressableInput__ctor_mB6BDC4CCCB154B9341D60F421650CB6FE76F2C6B,
	_IsAnalogPressableInput_Invoke_mE758B983731F9C5788DCD908758C3238374A191B,
	_IsAnalogPressableInput_BeginInvoke_m1444EA859E19B44DB9B556168424980C4CCD1DC6,
	_IsAnalogPressableInput_EndInvoke_m806BF2909D494E59F00E4BC4AFE64545D892CA6C,
	MotionController__ctor_m274221CEC806BB1377825829DE7A3639073223EC,
	MotionController_get_Handedness_m81B098E9C3F4F9AD16DE8BE567B1DA90FCFABFD9,
	MotionController_TryGetReadingAtTime_m46CE7D469EED536A4A63CAEDC0CE45116FA46ADC,
	IMotionControllerWatcher_op_Implicit_m79FD9FFF4E4D7FCF313ED4168726EB73A10CE516,
	IMotionControllerWatcher__ctor_m3A0851B07F3D59631E2912699A8DEA487946010C,
	IMotionControllerWatcher_StartAsync_mFA402A5940F9CD443C9A748A78CF04B9CC7818D2,
	_StartAsync__ctor_mAAAABE9A57C012DF54A213914B667B9DC7E36F75,
	_StartAsync_Invoke_m65380182C503F11882694E75178222AA429F3E37,
	_StartAsync_BeginInvoke_m760C0544F5624C703DB0A44FBA0674D276C7D61F,
	_StartAsync_EndInvoke_m1E922DDE727F7FBAAB71D12D666A1071CE664F59,
	_Stop__ctor_mFAF599459B2C5ED8BC61B05FADE0BBC2F97C542F,
	_Stop_Invoke_mFADA246AE97815F2751A0FB883A442607306AC3C,
	_Stop_BeginInvoke_m01FDCCC0AC3C764B63B064CA6917ADB69EF11AAA,
	_Stop_EndInvoke_m81C2A2A706528961F084FAE211E5CFF7DACECDFB,
	U3CU3Ec__cctor_m946F0CDBC8AA01AF11793EA5DF6DB5686147B57B,
	U3CU3Ec__ctor_mB9F5DD1485EA278CE80F8D8E198E2201F4913286,
	U3CU3Ec_U3C_ctorU3Eb__4_0_m294D6F52AB0A19E289D407B41E2F2E33124208E3,
	U3CU3Ec_U3C_ctorU3Eb__4_1_m4F5F51ED5F8220DA0E68B3F62FFF20FE1B793C88,
	MotionControllerWatcher__ctor_m3442EC56BBFF8D6A49CFCFC17C94720427A6EB3F,
	MotionControllerWatcher_add_MotionControllerAdded_m49A452F93CAF29DC29A312C07C43AC44D8EE6BBE,
	MotionControllerWatcher_remove_MotionControllerAdded_m7E96B1FEB763ABCDBADB36C99D324B436369E9B2,
	MotionControllerWatcher_add_MotionControllerRemoved_m3EFC0B6FDEAF164A62E1F49E737C57BB2907D23D,
	MotionControllerWatcher_remove_MotionControllerRemoved_m77E509AA8D0F0EC3F9B6073B1B03BDAC360420C4,
	MotionControllerWatcher__ctor_m31160FC73ADE5F9DCFE6FBCBEE0345EBCAAED058,
	MotionControllerWatcher_StartAsync_m478499DC9E6F0D2194CD344F53901E928884DD86,
};
extern void ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE_AdjustorThunk (void);
extern void ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98_AdjustorThunk (void);
extern void ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_AdjustorThunk (void);
extern void _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000057, ModuleReference__ctor_m39EF95D2CE6514D75E398C07E17645B50DED78EE_AdjustorThunk },
	{ 0x06000058, ModuleReference_AddRef_mF4F77596924C098FC11C8153E22933A3A04D2C98_AdjustorThunk },
	{ 0x06000059, ModuleReference_Release_mCA9277C6EE9247861313594C43850B66740EDEEE_AdjustorThunk },
	{ 0x060000C4, _DateTime__ctor_m70608D731C50CA96905E5A3E10BD989C50AF867B_AdjustorThunk },
};
static const int32_t s_InvokerIndices[343] = 
{
	7173,
	5859,
	7021,
	-1,
	-1,
	7129,
	7021,
	6260,
	6264,
	6149,
	7021,
	7127,
	935,
	3390,
	1556,
	2737,
	2797,
	916,
	924,
	1333,
	2797,
	4762,
	935,
	3390,
	1556,
	2737,
	2797,
	916,
	924,
	1333,
	2797,
	4762,
	5859,
	6950,
	6263,
	6772,
	6786,
	5820,
	5826,
	6149,
	6786,
	4891,
	935,
	3390,
	1556,
	2737,
	2797,
	916,
	924,
	1333,
	2797,
	4762,
	5859,
	6950,
	6263,
	6772,
	6786,
	5820,
	5826,
	6149,
	6786,
	4891,
	7129,
	6950,
	7173,
	2279,
	1877,
	591,
	3952,
	2279,
	3918,
	984,
	3952,
	7173,
	4891,
	4891,
	7173,
	7173,
	4891,
	4837,
	3952,
	4799,
	4891,
	7102,
	6278,
	7138,
	1236,
	4792,
	4891,
	4740,
	2260,
	-1,
	-1,
	4891,
	4837,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7173,
	6892,
	1237,
	3060,
	4891,
	2279,
	1445,
	619,
	2826,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7138,
	4891,
	6892,
	4891,
	7173,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6890,
	5820,
	6786,
	6786,
	1402,
	4762,
	4762,
	-1,
	7173,
	1192,
	4891,
	4891,
	4764,
	1192,
	4891,
	4891,
	5822,
	4891,
	7173,
	2279,
	2251,
	621,
	3952,
	4891,
	3952,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3952,
	3952,
	2279,
	916,
	205,
	2826,
	2279,
	2797,
	984,
	2826,
	2279,
	2797,
	984,
	2826,
	2279,
	916,
	205,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	3917,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1447,
	621,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	1445,
	619,
	2826,
	2279,
	918,
	207,
	2826,
	2279,
	1446,
	620,
	2826,
	2279,
	2797,
	984,
	2826,
	2279,
	920,
	209,
	2826,
	2279,
	919,
	208,
	2826,
	-1,
	-1,
	6892,
	6892,
	3952,
	4799,
	4891,
	1898,
	5821,
	3952,
	7173,
	2279,
	3916,
	981,
	3952,
	4891,
	3952,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3952,
	4891,
	3952,
	6892,
	3952,
	3606,
	3655,
	2279,
	917,
	206,
	2826,
	2279,
	917,
	206,
	2826,
	2279,
	917,
	206,
	2826,
	2279,
	917,
	206,
	2826,
	3952,
	3606,
	3655,
	6892,
	3952,
	4762,
	3043,
	2279,
	917,
	206,
	2826,
	2279,
	921,
	210,
	2826,
	2279,
	922,
	211,
	2826,
	2279,
	917,
	206,
	2826,
	3952,
	4762,
	3043,
	6892,
	3952,
	4799,
	2279,
	1445,
	619,
	2826,
	2279,
	2797,
	984,
	2826,
	7173,
	4891,
	3056,
	3056,
	3952,
	3952,
	3952,
	3952,
	3952,
	4891,
	4799,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[5] = 
{
	{ 0x06000082, 3,  (void**)&Delegate_QueryInterface_m7C37E717EEA9167E8335DFB00211401A7705D270_RuntimeMethod_var, 0 },
	{ 0x06000083, 2,  (void**)&Delegate_AddRef_m30A171801CD405C81C88A2C72C47202417A1D745_RuntimeMethod_var, 0 },
	{ 0x06000084, 4,  (void**)&Delegate_Release_m3D99CDC4DCEFACB88758671F75A5E198403426A2_RuntimeMethod_var, 0 },
	{ 0x06000091, 6,  (void**)&EventSource__invoke_m71874265067EDB834E74443057672268434BDAF9_RuntimeMethod_var, 0 },
	{ 0x06000101, 7,  (void**)&IAsyncOperation__OnCompleted_m9162AE1D5CD8B2E9AB25B2FBCA788284776404B0_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[16] = 
{
	{ 0x02000011, { 8, 3 } },
	{ 0x02000014, { 11, 10 } },
	{ 0x02000015, { 21, 4 } },
	{ 0x02000017, { 25, 7 } },
	{ 0x02000018, { 34, 3 } },
	{ 0x0200001F, { 39, 10 } },
	{ 0x0200003D, { 49, 1 } },
	{ 0x02000046, { 50, 9 } },
	{ 0x02000047, { 59, 3 } },
	{ 0x06000004, { 0, 2 } },
	{ 0x06000005, { 2, 2 } },
	{ 0x0600005C, { 4, 2 } },
	{ 0x0600005D, { 6, 2 } },
	{ 0x0600007B, { 32, 1 } },
	{ 0x0600007C, { 33, 1 } },
	{ 0x06000088, { 37, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[62] = 
{
	{ (Il2CppRGCTXDataType)1, 431 },
	{ (Il2CppRGCTXDataType)3, 52112 },
	{ (Il2CppRGCTXDataType)1, 430 },
	{ (Il2CppRGCTXDataType)3, 52111 },
	{ (Il2CppRGCTXDataType)1, 244 },
	{ (Il2CppRGCTXDataType)3, 51747 },
	{ (Il2CppRGCTXDataType)3, 35982 },
	{ (Il2CppRGCTXDataType)2, 8412 },
	{ (Il2CppRGCTXDataType)2, 8413 },
	{ (Il2CppRGCTXDataType)3, 35983 },
	{ (Il2CppRGCTXDataType)3, 52122 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)3, 7 },
	{ (Il2CppRGCTXDataType)2, 3988 },
	{ (Il2CppRGCTXDataType)3, 16748 },
	{ (Il2CppRGCTXDataType)3, 45932 },
	{ (Il2CppRGCTXDataType)2, 10320 },
	{ (Il2CppRGCTXDataType)3, 45940 },
	{ (Il2CppRGCTXDataType)3, 45942 },
	{ (Il2CppRGCTXDataType)3, 16749 },
	{ (Il2CppRGCTXDataType)3, 45941 },
	{ (Il2CppRGCTXDataType)2, 1247 },
	{ (Il2CppRGCTXDataType)3, 14 },
	{ (Il2CppRGCTXDataType)2, 1247 },
	{ (Il2CppRGCTXDataType)3, 46281 },
	{ (Il2CppRGCTXDataType)1, 618 },
	{ (Il2CppRGCTXDataType)2, 1536 },
	{ (Il2CppRGCTXDataType)3, 45934 },
	{ (Il2CppRGCTXDataType)2, 1228 },
	{ (Il2CppRGCTXDataType)3, 0 },
	{ (Il2CppRGCTXDataType)2, 10316 },
	{ (Il2CppRGCTXDataType)3, 45933 },
	{ (Il2CppRGCTXDataType)3, 51744 },
	{ (Il2CppRGCTXDataType)3, 1180 },
	{ (Il2CppRGCTXDataType)2, 1235 },
	{ (Il2CppRGCTXDataType)3, 8 },
	{ (Il2CppRGCTXDataType)2, 1235 },
	{ (Il2CppRGCTXDataType)2, 169 },
	{ (Il2CppRGCTXDataType)3, 683 },
	{ (Il2CppRGCTXDataType)2, 3941 },
	{ (Il2CppRGCTXDataType)3, 52046 },
	{ (Il2CppRGCTXDataType)1, 678 },
	{ (Il2CppRGCTXDataType)3, 16651 },
	{ (Il2CppRGCTXDataType)3, 16652 },
	{ (Il2CppRGCTXDataType)3, 16650 },
	{ (Il2CppRGCTXDataType)3, 16649 },
	{ (Il2CppRGCTXDataType)2, 1090 },
	{ (Il2CppRGCTXDataType)3, 44699 },
	{ (Il2CppRGCTXDataType)3, 16636 },
	{ (Il2CppRGCTXDataType)2, 653 },
	{ (Il2CppRGCTXDataType)3, 46264 },
	{ (Il2CppRGCTXDataType)2, 1268 },
	{ (Il2CppRGCTXDataType)3, 181 },
	{ (Il2CppRGCTXDataType)2, 9768 },
	{ (Il2CppRGCTXDataType)3, 42534 },
	{ (Il2CppRGCTXDataType)3, 182 },
	{ (Il2CppRGCTXDataType)3, 183 },
	{ (Il2CppRGCTXDataType)3, 42535 },
	{ (Il2CppRGCTXDataType)2, 865 },
	{ (Il2CppRGCTXDataType)3, 46265 },
	{ (Il2CppRGCTXDataType)3, 42536 },
	{ (Il2CppRGCTXDataType)3, 42537 },
};
extern const CustomAttributesCacheGenerator g_Microsoft_MixedReality_Input_DotNet_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_MixedReality_Input_DotNet_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_MixedReality_Input_DotNet_CodeGenModule = 
{
	"Microsoft.MixedReality.Input.DotNet.dll",
	343,
	s_methodPointers,
	4,
	s_adjustorThunks,
	s_InvokerIndices,
	5,
	s_reversePInvokeIndices,
	16,
	s_rgctxIndices,
	62,
	s_rgctxValues,
	NULL,
	g_Microsoft_MixedReality_Input_DotNet_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
