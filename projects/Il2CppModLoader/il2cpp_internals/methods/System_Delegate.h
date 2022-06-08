#include <interception_macros.h>

namespace app::methods::System::Delegate {
IL2CPP_REGISTER_METHOD(0x0173D7B0, MethodInfo_1 *, get_Method, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x0173D7D0, MethodInfo_1 *, GetVirtualMethod_internal, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_Target, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x0173D7E0, Delegate *, CreateDelegate_internal, (Type * type, Object * target, MethodInfo_1 * info, bool throwOnBindFailure));
IL2CPP_REGISTER_METHOD(0x0173D8E0, bool, arg_type_match, (Type * delArgType, Type * argType));
IL2CPP_REGISTER_METHOD(0x0173DAE0, bool, arg_type_match_this, (Type * delArgType, Type * argType, bool boxedThis));
IL2CPP_REGISTER_METHOD(0x0173DC90, bool, return_type_match, (Type * delReturnType, Type * returnType));
IL2CPP_REGISTER_METHOD(0x0173DD90, Delegate *, CreateDelegate, (Type * type, Object * firstArgument, MethodInfo_1 * method_1, bool throwOnBindFailure));
IL2CPP_REGISTER_METHOD(0x0173DDB0, Delegate *, CreateDelegate, (Type * type, Object * firstArgument, MethodInfo_1 * method_1, bool throwOnBindFailure, bool allowClosed));
IL2CPP_REGISTER_METHODINFO(0x0476FCF0, Delegate_CreateDelegate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173E950, Delegate *, CreateDelegate, (Type * type, Object * firstArgument, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x0173E970, Delegate *, CreateDelegate, (Type * type, MethodInfo_1 * method_1, bool throwOnBindFailure));
IL2CPP_REGISTER_METHOD(0x013DCFD0, Delegate *, CreateDelegate, (Type * type, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x0173E9A0, Delegate *, CreateDelegate, (Type * type, Object * target, String * method_1));
IL2CPP_REGISTER_METHOD(0x0173EB20, MethodInfo_1 *, GetCandidateMethod, (Type * type, Type * target, String * method_1, BindingFlags__Enum bflags, bool ignoreCase, bool throwOnBindFailure));
IL2CPP_REGISTER_METHODINFO(0x0470F750, Delegate_GetCandidateMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173EFC0, Delegate *, CreateDelegate, (Type * type, Type * target, String * method_1, bool ignoreCase, bool throwOnBindFailure));
IL2CPP_REGISTER_METHODINFO(0x047335F8, Delegate_CreateDelegate_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173F160, Delegate *, CreateDelegate, (Type * type, Type * target, String * method_1));
IL2CPP_REGISTER_METHOD(0x0173F2F0, Delegate *, CreateDelegate, (Type * type, Object * target, String * method_1, bool ignoreCase, bool throwOnBindFailure));
IL2CPP_REGISTER_METHODINFO(0x047705B8, Delegate_CreateDelegate_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173F480, Delegate *, CreateDelegate, (Type * type, Object * target, String * method_1, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x0173F610, Object *, Clone, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x0173F6C0, bool, Equals, (Delegate * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0173F8B0, int32_t, GetHashCode, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x0173F940, MethodInfo_1 *, GetMethodImpl, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x0173FA70, void, GetObjectData, (Delegate * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0173FA90, Delegate__Array *, GetInvocationList, (Delegate * __this));
IL2CPP_REGISTER_METHOD(0x0173FB80, Delegate *, Combine, (Delegate * a, Delegate * b));
IL2CPP_REGISTER_METHODINFO(0x04762F58, Delegate_Combine__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173FD70, Delegate *, Combine, (Delegate__Array * delegates));
IL2CPP_REGISTER_METHOD(0x0173FDE0, Delegate *, CombineImpl, (Delegate * __this, Delegate * d));
IL2CPP_REGISTER_METHODINFO(0x04755D88, Delegate_CombineImpl__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0173FE50, Delegate *, Remove, (Delegate * source, Delegate * value));
IL2CPP_REGISTER_METHODINFO(0x047156C0, Delegate_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01740040, Delegate *, RemoveImpl, (Delegate * __this, Delegate * d));
IL2CPP_REGISTER_METHOD(0x01740070, bool, operator___, (Delegate * d1, Delegate * d2));
IL2CPP_REGISTER_METHOD(0x017400A0, Delegate *, CreateDelegateNoSecurityCheck, (RuntimeType * type, Object * firstArgument, MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x017400C0, MulticastDelegate *, AllocDelegateLike_internal, (Delegate * d));
}
