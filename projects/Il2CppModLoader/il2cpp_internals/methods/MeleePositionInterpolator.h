#include <interception_macros.h>

namespace app::methods::MeleePositionInterpolator {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Vector3__Array *, get_InterpolatedPositions, (app::MeleePositionInterpolator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009C5120, void, __ctor, (app::MeleePositionInterpolator * this_ptr, int32_t max_interpolated_point_count));
    IL2CPP_REGISTER_METHOD(0x009C51C0, void, Initialize, (app::MeleePositionInterpolator * this_ptr, app::Vector3 current_position));
    IL2CPP_REGISTER_METHOD(0x009C51D0, void, Update, (app::MeleePositionInterpolator * this_ptr, app::Vector3 rotation_center, app::Vector3 current_position, float minimal_distance));
}
