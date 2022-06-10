#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CustomWater {
    IL2CPP_REGISTER_METHOD(0x00DBB390, void, Start, (app::CustomWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBB830, void, OnWillRenderObject, (app::CustomWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBC320, app::Matrix4x4, CalculateReflectionMatrix, (app::CustomWater * this_ptr, app::Vector4 plane))
    IL2CPP_REGISTER_METHOD(0x00DBCA30, app::Vector4, CameraSpacePlane, (app::CustomWater * this_ptr, app::Camera * cam, app::Vector3 pos, app::Vector3 normal, float side_sign))
    IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, sgn, (float a))
    IL2CPP_REGISTER_METHOD(0x00DBCF10, void, CalculateObliqueMatrix, (app::Matrix4x4 * projection, app::Vector4 clip_plane))
    IL2CPP_REGISTER_METHOD(0x00DBD4A0, void, ctor, (app::CustomWater * this_ptr))
}
