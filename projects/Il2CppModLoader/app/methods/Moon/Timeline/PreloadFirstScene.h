#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Timeline::PreloadFirstScene {
    IL2CPP_REGISTER_METHOD(0x0077C450, void, OnEnable, (app::PreloadFirstScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077C650, void, Preload, (app::PreloadFirstScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077C760, void, FixedUpdate, (app::PreloadFirstScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077C8C0, void, OnDisable, (app::PreloadFirstScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PreloadFirstScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077C9B0, void, cctor, ())
}
