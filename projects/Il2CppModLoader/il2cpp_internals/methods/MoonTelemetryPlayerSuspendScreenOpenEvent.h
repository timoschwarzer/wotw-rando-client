#include <interception_macros.h>

namespace app::methods::MoonTelemetryPlayerSuspendScreenOpenEvent {
IL2CPP_REGISTER_METHOD(0x01470B90, void, SynchronousInitialize, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x01470BA0, void, AsynchronousInitialize, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_Name, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x01470C60, void, SerializeToObject, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr, app::JsonBuilder_Object obj));
IL2CPP_REGISTER_METHOD(0x01470D60, void, __ctor, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr));
}
