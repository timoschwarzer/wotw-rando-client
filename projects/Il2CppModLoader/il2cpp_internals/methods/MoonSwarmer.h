#include <interception_macros.h>

namespace app::methods::MoonSwarmer {
    IL2CPP_REGISTER_METHOD(0x01463F60, void, __ctor, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00BEB430, Vector2, get_Position, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01065610, void, set_Position, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x014641C0, Vector2, get_Velocity, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014641E0, void, set_Velocity, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x01464200, bool, get_IsActive, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsActive, (app::MoonSwarmer * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00BEC050, Vector2, get_Separation, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01464210, void, set_Separation, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x01464230, Vector2, get_Alignment, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01464250, void, set_Alignment, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x01464270, Vector2, get_Cohesion, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01464290, void, set_Cohesion, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x014642B0, Vector2, get_Wander, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014642D0, void, set_Wander, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x014642F0, Vector2, get_ObstacleAvoidance, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01464310, void, set_ObstacleAvoidance, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x01464330, Vector2, get_GlobalPOI, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01464350, void, set_GlobalPOI, (app::MoonSwarmer * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_WanderAngle, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0064D970, void, set_WanderAngle, (app::MoonSwarmer * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_NoiseTimer, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CE09F0, void, set_NoiseTimer, (app::MoonSwarmer * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x01464370, void, UpdateSwamer, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014644A0, void, Flock, (app::MoonSwarmer * this_ptr, app::List_1_MoonSwarmer_* swarm, app::UberSwarmerSettings* settings, float delta_time, app::ISwarmLimitRect* limit));
    IL2CPP_REGISTER_METHOD(0x01464AA0, Vector2, ComputeLimit, (app::MoonSwarmer * this_ptr, app::ISwarmLimitRect* limit));
    IL2CPP_REGISTER_METHOD(0x01464EC0, Vector3, ClampToLimit, (app::MoonSwarmer * this_ptr, app::Vector3 val, app::ISwarmLimitRect* limit));
    IL2CPP_REGISTER_METHOD(0x01465200, Vector2, CalculateExtraVelocities, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01465290, void, CalculateVelocities, (app::MoonSwarmer * this_ptr, app::List_1_MoonSwarmer_* swarm, app::UberSwarmerSettings* settings));
    IL2CPP_REGISTER_METHOD(0x01465AF0, Vector2, CheckObstacles, (app::MoonSwarmer * this_ptr, app::UberSwarmerSettings* settings));
    IL2CPP_REGISTER_METHOD(0x01465D40, bool, CheckObstaclesForAngle, (app::MoonSwarmer * this_ptr, float angle, float distance, app::Vector2* movement, app::UberSwarmerSettings* settings));
    IL2CPP_REGISTER_METHOD(0x01466070, Vector2, Steer, (app::MoonSwarmer * this_ptr, app::Vector2 target, bool inverse, app::UberSwarmerSettings* settings));
    IL2CPP_REGISTER_METHOD(0x01466290, Vector2, Limit, (app::MoonSwarmer * this_ptr, app::Vector2 v, float max));
    IL2CPP_REGISTER_METHOD(0x014663A0, float, RayTest, (app::MoonSwarmer * this_ptr, app::Vector2 direction, float max_distance, app::UberSwarmerSettings* settings));
    IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsSuspended, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsSuspended, (app::MoonSwarmer * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x00C03C70, SuspendableMask__Enum, get_Mask, (app::MoonSwarmer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01466570, void, set_Mask, (app::MoonSwarmer * this_ptr, app::SuspendableMask__Enum value));
} // namespace app::methods::MoonSwarmer
