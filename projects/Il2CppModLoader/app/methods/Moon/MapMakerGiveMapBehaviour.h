#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::MapMakerGiveMapBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110E670, void, OnEnter, (app::MapMakerGiveMapBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0110E760, app::BehaviourStatus__Enum, OnExecute, (app::MapMakerGiveMapBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0110E7B0, void, OnExit, (app::MapMakerGiveMapBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MapMakerGiveMapBehaviour * this_ptr))
}
