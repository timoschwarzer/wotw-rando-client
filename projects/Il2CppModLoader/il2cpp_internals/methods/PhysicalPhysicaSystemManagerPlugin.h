#include <interception_macros.h>

namespace app::methods::PhysicalPhysicaSystemManagerPlugin {
IL2CPP_REGISTER_METHOD(0x002FB9F0, GlobalRecordingTable *, get_GlobalRecordingTable, (PhysicalPhysicaSystemManagerPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_GlobalRecordingTable, (PhysicalPhysicaSystemManagerPlugin * __this, GlobalRecordingTable * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (PhysicalPhysicaSystemManagerPlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x014ED130, void, RecordCycle, (PhysicalPhysicaSystemManagerPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00420EE0, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (PhysicalPhysicaSystemManagerPlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (PhysicalPhysicaSystemManagerPlugin * __this));
}
