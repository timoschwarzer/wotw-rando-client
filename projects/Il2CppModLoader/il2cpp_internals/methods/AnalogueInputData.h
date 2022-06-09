#include <interception_macros.h>

namespace app::methods::AnalogueInputData {
IL2CPP_REGISTER_METHOD(0x004F9CE0, void, Initialize, (app::AnalogueInputData * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F9CF0, bool, UpdateInputs, (app::AnalogueInputData * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F9DE0, void, Record, (app::BinaryWriter * binary_writer));
IL2CPP_REGISTER_METHOD(0x004F9F20, void, Save, (app::AnalogueInputData * this_ptr, app::BinaryWriter * binary_writer));
IL2CPP_REGISTER_METHOD(0x004F9FB0, void, Load, (app::AnalogueInputData * this_ptr, app::BinaryReader * binary_reader, int32_t current_version));
IL2CPP_REGISTER_METHOD(0x004FA040, RecorderFrame_FrameDataTypes__Enum, FrameType, (app::AnalogueInputData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AnalogueInputData * this_ptr));
}
