#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SeparationMapModifier {
    IL2CPP_REGISTER_METHOD(0x00AB5C30, void, SetProperties, (app::SeparationMapModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5CF0, void, ctor, (app::SeparationMapModifier * this_ptr))
}
