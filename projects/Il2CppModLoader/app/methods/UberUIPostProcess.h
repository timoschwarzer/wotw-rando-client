#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UberUIPostProcess {
    IL2CPP_REGISTER_METHOD(0x01292530, void, set_Instance, (app::UberUIPostProcess * value))
    IL2CPP_REGISTER_METHOD(0x012925C0, app::UberUIPostProcess *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01292640, void, OnEnable, (app::UberUIPostProcess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberUIPostProcess * this_ptr))
}
