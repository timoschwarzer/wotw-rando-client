#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::FreezeObject {
    IL2CPP_REGISTER_METHOD(0x02553230, void, Awake, (app::FreezeObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025532D0, void, Update, (app::FreezeObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02553370, void, ctor, (app::FreezeObject * this_ptr))
}
