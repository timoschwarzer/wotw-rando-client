#include <interception_macros.h>

namespace app::methods::Moon::Timeline::Systems::ReplayFastForwardSystem {
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateType__Enum, get_UpdateType, (app::ReplayFastForwardSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D09220, float, get_FastForwardTimeScale, ())
    IL2CPP_REGISTER_METHOD(0x00D09260, void, IncreaseReferenceCount, (app::ReplayFastForwardSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D09270, void, OnUpdate, (app::ReplayFastForwardSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00D093A0, void, ctor, (app::ReplayFastForwardSystem * this_ptr))
}
