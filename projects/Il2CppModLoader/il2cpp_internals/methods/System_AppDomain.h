#include <interception_macros.h>

namespace app::methods::System::AppDomain {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228CC40, AppDomainSetup *, getSetup, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228CC50, AppDomainSetup *, get_SetupInformation, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228CE60, String *, getFriendlyName, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228CE80, AppDomain *, getCurDomain, ());
IL2CPP_REGISTER_METHOD(0x0228CE80, AppDomain *, get_CurrentDomain, ());
IL2CPP_REGISTER_METHOD(0x0228CF90, Assembly__Array *, GetAssemblies, (AppDomain * __this, bool refOnly));
IL2CPP_REGISTER_METHOD(0x0228CF90, Assembly__Array *, GetAssemblies, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228D040, Object *, GetData, (AppDomain * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, InitializeLifetimeService, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228D170, Assembly *, LoadAssembly, (AppDomain * __this, String * assemblyRef, Evidence * securityEvidence, bool refOnly));
IL2CPP_REGISTER_METHOD(0x0228D3A0, Assembly *, LoadSatellite, (AppDomain * __this, AssemblyName * assemblyRef, bool throwOnError));
IL2CPP_REGISTER_METHODINFO(0x0475B500, AppDomain_LoadSatellite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228D510, Assembly *, Load, (AppDomain * __this, String * assemblyString));
IL2CPP_REGISTER_METHOD(0x0228D680, Assembly *, Load, (AppDomain * __this, String * assemblyString, Evidence * assemblySecurity, bool refonly));
IL2CPP_REGISTER_METHODINFO(0x04723BA8, AppDomain_Load_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228D810, AppDomain *, InternalSetDomainByID, (int32_t domain_id));
IL2CPP_REGISTER_METHOD(0x0228D820, AppDomain *, InternalSetDomain, (AppDomain * context));
IL2CPP_REGISTER_METHOD(0x0228D830, void, InternalPushDomainRefByID, (int32_t domain_id));
IL2CPP_REGISTER_METHOD(0x0228D840, void, InternalPopDomainRef, ());
IL2CPP_REGISTER_METHOD(0x0228D850, Context *, InternalSetContext, (Context * context));
IL2CPP_REGISTER_METHOD(0x0228D860, Context *, InternalGetContext, ());
IL2CPP_REGISTER_METHOD(0x0228D860, Context *, InternalGetDefaultContext, ());
IL2CPP_REGISTER_METHOD(0x0228D8A0, String *, InternalGetProcessGuid, (String * newguid));
IL2CPP_REGISTER_METHOD(0x0228D8B0, Object *, InvokeInDomainByID, (int32_t domain_id, MethodInfo_1 * method_1, Object * obj, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x04787D80, AppDomain_InvokeInDomainByID__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228D920, String *, GetProcessGuid, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, InternalIsFinalizingForUnload, (int32_t domain_id));
IL2CPP_REGISTER_METHOD(0x0228D9F0, bool, IsFinalizingForUnload, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228DA20, int32_t, getDomainID, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228DA50, int32_t, GetCurrentThreadId, ());
IL2CPP_REGISTER_METHOD(0x0228CE60, String *, ToString, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228DA80, void, DoAssemblyLoad, (AppDomain * __this, Assembly * assembly));
IL2CPP_REGISTER_METHOD(0x0228DC70, Assembly *, DoAssemblyResolve, (AppDomain * __this, String * name, Assembly * requestingAssembly, bool refonly));
IL2CPP_REGISTER_METHOD(0x0228E2A0, Assembly *, DoTypeResolve, (AppDomain * __this, Object * name_or_tb));
IL2CPP_REGISTER_METHOD(0x0228E800, Assembly *, DoResourceResolve, (AppDomain * __this, String * name, Assembly * requesting));
IL2CPP_REGISTER_METHOD(0x0228EA50, void, DoDomainUnload, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228EA70, Byte__Array *, GetMarshalledDomainObjRef, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x0228EC30, void, ProcessMessageInDomain, (AppDomain * __this, Byte__Array * arrRequest, CADMethodCallMessage * cadMsg, Byte__Array * * arrResponse, CADMethodReturnMessage * * cadMrm));
IL2CPP_REGISTER_METHOD(0x0228F070, void, add_AssemblyLoad, (AppDomain * __this, AssemblyLoadEventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F160, void, remove_AssemblyLoad, (AppDomain * __this, AssemblyLoadEventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F250, void, add_DomainUnload, (AppDomain * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F340, void, remove_DomainUnload, (AppDomain * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F430, void, add_ProcessExit, (AppDomain * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F520, void, remove_ProcessExit, (AppDomain * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F610, void, add_UnhandledException, (AppDomain * __this, UnhandledExceptionEventHandler * value));
IL2CPP_REGISTER_METHOD(0x0228F700, void, remove_UnhandledException, (AppDomain * __this, UnhandledExceptionEventHandler * value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsHomogenous, (AppDomain * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFullyTrusted, (AppDomain * __this));
}
