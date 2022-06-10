#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventWrittenEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_EventName, (app::EventWrittenEventArgs * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_EventId, (app::EventWrittenEventArgs * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x019FD840, void, set_RelatedActivityId, (app::EventWrittenEventArgs * this_ptr, app::Guid value))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Payload, (app::EventWrittenEventArgs * this_ptr, app::ReadOnlyCollection_1_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_PayloadNames, (app::EventWrittenEventArgs * this_ptr, app::ReadOnlyCollection_1_System_String_ * value))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Message, (app::EventWrittenEventArgs * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x019FD850, void, ctor, (app::EventWrittenEventArgs * this_ptr, app::EventSource * event_source))
}
