#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::InetractionControllerPassthrough {
    IL2CPP_REGISTER_METHOD(0x006285B0, void, OnCollisionEnter, (app::InetractionControllerPassthrough * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00628660, void, OnCollisionExit, (app::InetractionControllerPassthrough * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InetractionControllerPassthrough * this_ptr))
}
