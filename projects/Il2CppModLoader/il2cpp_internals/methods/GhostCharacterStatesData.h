#include <interception_macros.h>

namespace app::methods::GhostCharacterStatesData {
IL2CPP_REGISTER_METHOD(0x002FA280, Dictionary_2_System_Int32_System_Boolean_ *, get_States, (app::GhostCharacterStatesData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E18A30, GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostCharacterStatesData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E18A40, int32_t, GetDataSize, (app::GhostCharacterStatesData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E18AD0, void, __ctor_1, (app::GhostCharacterStatesData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E18C40, void, __ctor_2, (app::GhostCharacterStatesData * this_ptr, app::BinaryReader * binary_reader));
IL2CPP_REGISTER_METHOD(0x00E18DD0, void, Record, (app::BinaryWriter * binary_writer));
IL2CPP_REGISTER_METHOD(0x00E190B0, void, Save, (app::GhostCharacterStatesData * this_ptr, app::BinaryWriter * binary_writer));
IL2CPP_REGISTER_METHOD(0x00E19390, void, Load, (app::GhostCharacterStatesData * this_ptr, app::BinaryReader * binary_reader));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (app::GhostCharacterStatesData * this_ptr));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (app::GhostCharacterStatesData * this_ptr, bool value));
}
