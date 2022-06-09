#include <interception_macros.h>

namespace app::methods::CameraBasedColliderChain {
IL2CPP_REGISTER_METHOD(0x01682070, Vector3, get_CameraPosition, (app::CameraBasedColliderChain * this_ptr));
IL2CPP_REGISTER_METHOD(0x01682220, void, Start, (app::CameraBasedColliderChain * this_ptr));
IL2CPP_REGISTER_METHOD(0x01682330, void, LateUpdate, (app::CameraBasedColliderChain * this_ptr));
IL2CPP_REGISTER_METHOD(0x01682A10, Vector3, GetEdgePoint, (app::CameraBasedColliderChain * this_ptr, int32_t point_index));
IL2CPP_REGISTER_METHOD(0x01683070, Vector3, GetProjectedPointOnZ, (app::CameraBasedColliderChain * this_ptr, app::Vector3 point_position));
IL2CPP_REGISTER_METHOD(0x01683230, void, __ctor, (app::CameraBasedColliderChain * this_ptr));
}
