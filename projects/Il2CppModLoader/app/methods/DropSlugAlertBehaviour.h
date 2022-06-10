#include <interception_macros.h>

namespace app::methods::DropSlugAlertBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE0A40, void, OnEnter, (app::DropSlugAlertBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BE0C20, void, PlayAlertLoop, (app::DropSlugAlertBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04730E80, DropSlugAlertBehaviour_PlayAlertLoop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE0C50, void, OnExit, (app::DropSlugAlertBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecute, (app::DropSlugAlertBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BE0E50, void, PlayTimeline, (app::DropSlugAlertBehaviour * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x00BE0E80, void, ctor, (app::DropSlugAlertBehaviour * this_ptr))
}
