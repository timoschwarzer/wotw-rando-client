#include <interception_macros.h>

namespace app::methods::VolumeMovementTimelineBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00877D80, void, OnEntityInitialized, (app::VolumeMovementTimelineBehaviourNew * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008C4180, void, OnEnter, (app::VolumeMovementTimelineBehaviourNew * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x008C4330, app::BehaviourStatus__Enum, OnExecute, (app::VolumeMovementTimelineBehaviourNew * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x008C4410, void, OnExit, (app::VolumeMovementTimelineBehaviourNew * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x008C4520, app::Vector3, RootMotionModifier, (app::VolumeMovementTimelineBehaviourNew * this_ptr, app::Vector3 motion));
    IL2CPP_REGISTER_METHODINFO(0x04789070, VolumeMovementTimelineBehaviourNew_RootMotionModifier__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, __ctor, (app::VolumeMovementTimelineBehaviourNew * this_ptr));
}
