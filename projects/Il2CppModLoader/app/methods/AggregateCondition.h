#include <interception_macros.h>

namespace app::methods::AggregateCondition {
    IL2CPP_REGISTER_METHOD(0x004F0B60, bool, Validate, (app::AggregateCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x004F0D90, void, ResetCondition, (app::AggregateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F0E20, void, UpdateCondition, (app::AggregateCondition * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AggregateCondition * this_ptr))
}
