#include <interception_macros.h>

namespace app::methods::Moon_Timeline::OverrideReactionAnimator {
    IL2CPP_REGISTER_METHOD(0x00777E30, void, OnStartPlayback, (app::OverrideReactionAnimator * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00777F20, void, SynchronizeData, (app::OverrideReactionAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record));
    IL2CPP_REGISTER_METHOD(0x00773A00, void, __ctor, (app::OverrideReactionAnimator * this_ptr));
}
