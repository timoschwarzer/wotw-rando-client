#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::DebuggerDisplayAttribute {
    IL2CPP_REGISTER_METHOD(0x01741130, void, ctor, (app::DebuggerDisplayAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::DebuggerDisplayAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Type, (app::DebuggerDisplayAttribute * this_ptr, app::String * value))
}
