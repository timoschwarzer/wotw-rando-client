#include <interception_macros.h>

namespace app::methods::Moon::MapMakerIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110E7E0, void, OnEnter, (app::MapMakerIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0110E8F0, app::BehaviourStatus__Enum, OnExecute, (app::MapMakerIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E27000, void, OnExit, (app::MapMakerIdleBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MapMakerIdleBehaviour * this_ptr))
}
