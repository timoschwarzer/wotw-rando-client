#include <interception_macros.h>

namespace app::methods::System_Security_Authentication_ExtendedProtection::ExtendedProtectionPolicy {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::ExtendedProtectionPolicy * this_ptr, app::PolicyEnforcement__Enum policy_enforcement));
IL2CPP_REGISTER_METHOD(0x021BC6F0, void, __ctor_2, (app::ExtendedProtectionPolicy * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0476AC50, ExtendedProtectionPolicy__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BC740, ChannelBinding *, get_CustomChannelBinding, (app::ExtendedProtectionPolicy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04758778, ExtendedProtectionPolicy_get_CustomChannelBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BC790, PolicyEnforcement__Enum, get_PolicyEnforcement, (app::ExtendedProtectionPolicy * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04702B10, ExtendedProtectionPolicy_get_PolicyEnforcement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E16610, String *, ToString, (app::ExtendedProtectionPolicy * this_ptr));
IL2CPP_REGISTER_METHOD(0x021BC7E0, void, ISerializable_GetObjectData, (app::ExtendedProtectionPolicy * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04766FC8, ExtendedProtectionPolicy_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
}
