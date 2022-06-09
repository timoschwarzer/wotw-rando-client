#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::EventAttribute {
IL2CPP_REGISTER_METHOD(0x0174A9D0, void, __ctor, (app::EventAttribute * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_EventId, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_EventId, (app::EventAttribute * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, EventLevel__Enum, get_Level, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Level, (app::EventAttribute * this_ptr, app::EventLevel__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB930, EventKeywords__Enum, get_Keywords, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Keywords, (app::EventAttribute * this_ptr, app::EventKeywords__Enum value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, EventOpcode__Enum, get_Opcode, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x0174A9E0, void, set_Opcode, (app::EventAttribute * this_ptr, app::EventOpcode__Enum value));
IL2CPP_REGISTER_METHOD(0x004E5A00, bool, get_IsOpcodeSet, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1D0, EventTask__Enum, get_Task, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Task, (app::EventAttribute * this_ptr, app::EventTask__Enum value));
IL2CPP_REGISTER_METHOD(0x007EC400, uint8_t, get_Version, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Message, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Message, (app::EventAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00654950, EventTags__Enum, get_Tags, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x00998570, EventActivityOptions__Enum, get_ActivityOptions, (app::EventAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_ActivityOptions, (app::EventAttribute * this_ptr, app::EventActivityOptions__Enum value));
}
