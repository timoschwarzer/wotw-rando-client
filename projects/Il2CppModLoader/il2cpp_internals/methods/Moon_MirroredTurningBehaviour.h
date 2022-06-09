#include <interception_macros.h>

namespace app::methods::Moon::MirroredTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x01119590, void, OnEnterTask, (app::MirroredTurningBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01119750, app::BehaviourStatus__Enum, OnExecuteTask, (app::MirroredTurningBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x01119980, void, OnExitTask, (app::MirroredTurningBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00D201A0, void, __ctor, (app::MirroredTurningBehaviour * this_ptr));
}
