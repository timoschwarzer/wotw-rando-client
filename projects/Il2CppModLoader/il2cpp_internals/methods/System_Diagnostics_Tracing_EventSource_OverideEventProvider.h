#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::EventSource_OverideEventProvider {
    IL2CPP_REGISTER_METHOD(0x019FC480, void, __ctor, (app::EventSource_OverideEventProvider * this_ptr, app::EventSource * event_source));
    IL2CPP_REGISTER_METHOD(0x019FC530, void, OnControllerCommand, (app::EventSource_OverideEventProvider * this_ptr, app::ControllerCommand__Enum command, app::IDictionary_2_System_String_System_String_ * arguments, int32_t per_event_source_session_id, int32_t etw_session_id));
}
