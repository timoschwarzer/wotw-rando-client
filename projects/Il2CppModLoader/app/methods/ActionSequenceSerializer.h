#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ActionSequenceSerializer {
    IL2CPP_REGISTER_METHOD(0x004C6BE0, void, OnValidate, (app::ActionSequenceSerializer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6C70, void, Serialize, (app::ActionSequenceSerializer * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ActionSequenceSerializer * this_ptr))
}
