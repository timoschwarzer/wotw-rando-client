#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CutsceneScreenController {
    IL2CPP_REGISTER_METHOD(0x00DBEB70, void, Awake, (app::CutsceneScreenController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBEC00, void, OnDestroy, (app::CutsceneScreenController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CutsceneScreenController * this_ptr))
}
