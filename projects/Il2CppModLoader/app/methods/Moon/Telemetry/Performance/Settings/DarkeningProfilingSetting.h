#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::DarkeningProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DarkeningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B9B0, app::RenderScope__Enum *, GetScope, (app::DarkeningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DarkeningProfilingSetting * this_ptr))
}
