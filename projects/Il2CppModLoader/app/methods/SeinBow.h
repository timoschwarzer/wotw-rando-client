#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeinBow {
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_Bend, (app::SeinBow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_Bend, (app::SeinBow * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D95050, void, Start, (app::SeinBow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D951E0, void, Update, (app::SeinBow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D95470, void, ctor, (app::SeinBow * this_ptr))
}
