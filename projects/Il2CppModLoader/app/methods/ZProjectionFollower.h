#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZProjectionFollower {
    IL2CPP_REGISTER_METHOD(0x01C5FD80, void, LateUpdate, (app::ZProjectionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C60040, app::Vector3, GetProjectedPointOnZ, (app::ZProjectionFollower * this_ptr, app::Vector3 point_position))
    IL2CPP_REGISTER_METHOD(0x01C60200, app::Vector3, get_cameraPosition, (app::ZProjectionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ZProjectionFollower * this_ptr))
}
