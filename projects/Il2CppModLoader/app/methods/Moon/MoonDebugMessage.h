#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::MoonDebugMessage {
    IL2CPP_REGISTER_METHOD(0x031A51A0, void, ctor, (app::MoonDebugMessage * this_ptr, app::MoonDebugMessageType__Enum typ, app::String * text, app::Object_1 * obj))
    IL2CPP_REGISTER_METHOD(0x031A5240, app::String *, ToString, (app::MoonDebugMessage * this_ptr))
}
