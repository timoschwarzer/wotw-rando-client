#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::ErrorMessage {
    IL2CPP_REGISTER_METHOD(0x023104C0, void, __ctor, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgCount, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object__Array *, get_Args, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MethodBase *, get_MethodBase, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02310550, app::String *, get_MethodName, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object *, get_MethodSignature, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IDictionary *, get_Properties, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023105D0, app::String *, get_TypeName, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Uri, (app::ErrorMessage * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object *, GetArg, (app::ErrorMessage * this_ptr, int32_t arg_num));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LogicalCallContext *, get_LogicalCallContext, (app::ErrorMessage * this_ptr));
}
