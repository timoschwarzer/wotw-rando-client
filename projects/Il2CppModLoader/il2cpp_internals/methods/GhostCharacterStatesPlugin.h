#include <interception_macros.h>

namespace app::methods::GhostCharacterStatesPlugin {
IL2CPP_REGISTER_METHOD(0x00E19560, void, PlayCycle, (app::GhostCharacterStatesPlugin * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x00E198B0, void, RecordCycle, (app::GhostCharacterStatesPlugin * this_ptr, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostCharacterStatesPlugin * this_ptr));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (app::GhostCharacterStatesPlugin * this_ptr));
}
