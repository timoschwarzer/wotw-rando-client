#include <interception_macros.h>

namespace app::methods::Moon_Telemetry::PathDataPoint {
IL2CPP_REGISTER_METHOD(0x00E338A0, void, __ctor, (app::PathDataPoint * this_ptr, app::String * player_key, app::String * session_key, app::String * time, app::String * level, app::DataPointType__Enum type, app::Vector3 position, float health, float light));
IL2CPP_REGISTER_METHOD(0x00E32550, String *, ToString, (app::PathDataPoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, GetFloatValue, (app::PathDataPoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x00724040, float, GetSecondaryFloatValue, (app::PathDataPoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetStringValue, (app::PathDataPoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetSecondaryStringValue, (app::PathDataPoint * this_ptr));
}
