#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SandWormModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::SandWormModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv2, (app::SandWormModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::SandWormModifier * this_ptr))
}
