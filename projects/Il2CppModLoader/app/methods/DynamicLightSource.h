#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DynamicLightSource {
    IL2CPP_REGISTER_METHOD(0x00BEC580, void, Update, (app::DynamicLightSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEC830, void, ctor, (app::DynamicLightSource * this_ptr))
}
