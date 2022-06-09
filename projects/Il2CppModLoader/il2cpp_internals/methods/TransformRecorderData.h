#include <interception_macros.h>

namespace app::methods::TransformRecorderData {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::TransformRecorderData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B08E90, void, Initialize, (app::TransformRecorderData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B09270, void, Save, (app::TransformRecorderData * this_ptr, app::BinaryWriter * binary_writer));
    IL2CPP_REGISTER_METHOD(0x00B09540, void, Load, (app::TransformRecorderData * this_ptr, app::BinaryReader * binary_reader, int32_t current_version));
    IL2CPP_REGISTER_METHOD(0x00B098C0, void, __ctor, (app::TransformRecorderData * this_ptr));
}
