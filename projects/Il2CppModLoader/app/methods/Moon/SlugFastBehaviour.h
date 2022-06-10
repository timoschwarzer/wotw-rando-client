#include <interception_macros.h>

namespace app::methods::Moon::SlugFastBehaviour {
    IL2CPP_REGISTER_METHOD(0x007586C0, app::Vector3, get_PatrolOrigin, (app::SlugFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2D530, app::Vector3, get_TargetPosition, (app::SlugFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2D580, void, OnEntityInitialized, (app::SlugFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2D650, void, OnEnter, (app::SlugFastBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E2D860, app::Vector2, get_MovingDirectionRotated, (app::SlugFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2D980, app::BehaviourStatus__Enum, OnExecute, (app::SlugFastBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E2DE50, void, OnExit, (app::SlugFastBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00E2DF00, void, UpdateDirection, (app::SlugFastBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2E0E0, void, ctor, (app::SlugFastBehaviour * this_ptr))
}
