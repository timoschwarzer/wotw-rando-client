#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraData {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::CameraData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::CameraData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01688560, void, Save, (app::CameraData * this_ptr, app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x01688790, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x01688AB0, void, Load, (app::CameraData * this_ptr, app::BinaryReader * binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraData * this_ptr))
}
