#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::InteractionTrigger_Range {
IL2CPP_REGISTER_METHOD(0x02A176D0, bool, IsInRange, (app::InteractionTrigger_Range * this_ptr, app::Transform * character, app::Transform * raycast_from, app::RaycastHit raycast_hit, app::Transform * trigger, app::float * max_error));
IL2CPP_REGISTER_METHOD(0x0049C100, void, __ctor, (app::InteractionTrigger_Range * this_ptr));
}
