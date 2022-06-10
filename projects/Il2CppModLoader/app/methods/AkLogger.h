#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AkLogger {
    IL2CPP_REGISTER_METHOD(0x026EE590, void, ctor, (app::AkLogger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EE870, app::AkLogger *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x026EE910, void, Finalize, (app::AkLogger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (app::AkLogger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EEB50, void, WwiseInternalLogError, (app::String * message))
    IL2CPP_REGISTER_METHODINFO(0x047372F0, AkLogger_WwiseInternalLogError__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Message, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Warning, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x026EEC00, void, Error, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x026EECB0, void, cctor, ())
}
