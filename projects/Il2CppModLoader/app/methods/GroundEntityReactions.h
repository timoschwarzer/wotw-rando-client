#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GroundEntityReactions {
    IL2CPP_REGISTER_METHOD(0x010941D0, void, ProcessEntityEvent, (app::GroundEntityReactions * this_ptr, app::EntityEvent * event_info))
    IL2CPP_REGISTER_METHOD(0x00420B10, void, ctor, (app::GroundEntityReactions * this_ptr))
}
