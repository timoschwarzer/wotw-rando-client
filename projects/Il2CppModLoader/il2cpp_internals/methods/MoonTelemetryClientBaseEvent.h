#include <interception_macros.h>

namespace app::methods::MoonTelemetryClientBaseEvent {
IL2CPP_REGISTER_METHOD(0x0146C490, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FBBE0, DateTime, get_Time, (app::MoonTelemetryClientBaseEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Time, (app::MoonTelemetryClientBaseEvent * this_ptr, app::DateTime value));
IL2CPP_REGISTER_METHOD(0x0146C570, void, SynchronousInitialize, (app::MoonTelemetryClientBaseEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0146C670, void, AsynchronousInitialize, (app::MoonTelemetryClientBaseEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0146CFE0, void, SerializeToObject, (app::MoonTelemetryClientBaseEvent * this_ptr, app::JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x0146D460, void, __ctor, (app::MoonTelemetryClientBaseEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x0146D550, void, __cctor, ());
}
