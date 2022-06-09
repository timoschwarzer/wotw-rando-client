#include <interception_macros.h>

namespace app::methods::Moon_Telemetry::GameSession {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Key, (app::GameSession * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Time, (app::GameSession * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Number, (app::GameSession * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E33230, int32_t, get_PointsCount, (app::GameSession * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, __ctor_1, (app::GameSession * this_ptr, app::String * key, app::String * time, int32_t number));
    IL2CPP_REGISTER_METHOD(0x00E332D0, void, __ctor_2, (app::GameSession * this_ptr, app::String * key, app::String * time, int32_t number, app::List_1_Moon_Telemetry_DataPoint_ * points));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_Moon_Telemetry_DataPoint_ *, GetPoints_1, (app::GameSession * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E337B0, app::List_1_Moon_Telemetry_DataPoint_ *, GetPoints_2, (app::GameSession * this_ptr, app::String * level_name));
}
