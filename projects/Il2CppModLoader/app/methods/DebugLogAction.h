#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DebugLogAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::DebugLogAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DED660, app::String *, GetNiceName, (app::DebugLogAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DebugLogAction * this_ptr))
}
