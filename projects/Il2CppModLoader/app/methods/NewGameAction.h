#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::NewGameAction {
    IL2CPP_REGISTER_METHOD(0x005FBFE0, void, Perform, (app::NewGameAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::NewGameAction * this_ptr))
}
