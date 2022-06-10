#include <interception_macros.h>

namespace app::methods::PhysicalPhysicaSystemManagerPlugin_Data {
    IL2CPP_REGISTER_METHOD(0x014ED2B0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014ED2C0, void, Load, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr, app::BinaryReader * binary_reader))
    IL2CPP_REGISTER_METHOD(0x014ED770, void, Save, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr, app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x014EDB40, void, Record, (app::BinaryWriter * binary_writer, app::GlobalRecordingTable * table))
    IL2CPP_REGISTER_METHOD(0x014EE260, bool, IsPhysicalSystemValidForRecording, (app::PhysicalSystemManager * physical_system_manager))
    IL2CPP_REGISTER_METHOD(0x014EE2A0, void, ctor, (app::PhysicalPhysicaSystemManagerPlugin_Data * this_ptr))
}
