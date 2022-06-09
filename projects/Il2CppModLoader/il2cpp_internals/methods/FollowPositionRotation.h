#include <interception_macros.h>

namespace app::methods::FollowPositionRotation {
IL2CPP_REGISTER_METHOD(0x00C944C0, void, OnPoolSpawned, (app::FollowPositionRotation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::FollowPositionRotation * this_ptr));
IL2CPP_REGISTER_METHOD(0x0127C550, void, SetTarget, (app::FollowPositionRotation * this_ptr, app::Transform * target));
IL2CPP_REGISTER_METHOD(0x0127C990, void, FixedUpdate, (app::FollowPositionRotation * this_ptr));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (app::FollowPositionRotation * this_ptr));
}
