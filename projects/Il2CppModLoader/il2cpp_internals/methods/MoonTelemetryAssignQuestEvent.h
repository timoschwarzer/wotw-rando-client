#include <interception_macros.h>

namespace app::methods::MoonTelemetryAssignQuestEvent {
    IL2CPP_REGISTER_METHOD(0x01466940, void, __ctor, (app::MoonTelemetryAssignQuestEvent * this_ptr, app::Quest * quest));
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String *, get_Name, (app::MoonTelemetryAssignQuestEvent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01466A50, void, SerializeToObject, (app::MoonTelemetryAssignQuestEvent * this_ptr, app::JsonBuilder_Object obj));
}
