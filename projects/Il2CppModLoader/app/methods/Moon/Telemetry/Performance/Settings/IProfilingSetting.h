#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::IProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3D5E0, void, CacheDefault, (app::IProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D610, void, ApplyState, (app::IProfilingSetting * this_ptr, app::ProfilingSettings_SettingAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IProfilingSetting * this_ptr))
}
