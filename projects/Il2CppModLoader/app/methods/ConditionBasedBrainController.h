#include <interception_macros.h>

namespace app::methods::ConditionBasedBrainController {
    IL2CPP_REGISTER_METHOD(0x011E3D60, app::Enum__Array *, GetEntries, (app::ConditionBasedBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E3DF0, app::Enum, Evaluate, (app::ConditionBasedBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldSkip, (app::ConditionBasedBrainController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ConditionBasedBrainController * this_ptr))
}
