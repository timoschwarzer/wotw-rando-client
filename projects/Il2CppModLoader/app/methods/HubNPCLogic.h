#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::HubNPCLogic {
    IL2CPP_REGISTER_METHOD(0x00B6FC50, void, Start, (app::HubNPCLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (app::HubNPCLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HubNPCLogic * this_ptr))
}
