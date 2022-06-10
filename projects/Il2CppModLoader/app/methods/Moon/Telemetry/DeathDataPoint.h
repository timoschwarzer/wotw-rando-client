#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::DeathDataPoint {
    IL2CPP_REGISTER_METHOD(0x00E32500, void, ctor, (app::DeathDataPoint * this_ptr, app::String * player_key, app::String * session_key, app::String * time, app::String * level, app::DataPointType__Enum type, app::Vector3 position, float last_damage_taken, app::String * killer_name))
    IL2CPP_REGISTER_METHOD(0x00E32550, app::String *, ToString, (app::DeathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetFloatValue, (app::DeathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetSecondaryFloatValue, (app::DeathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, GetStringValue, (app::DeathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, GetSecondaryStringValue, (app::DeathDataPoint * this_ptr))
}
