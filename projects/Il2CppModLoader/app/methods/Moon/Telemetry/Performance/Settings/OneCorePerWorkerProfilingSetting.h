#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::OneCorePerWorkerProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E740, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::OneCorePerWorkerProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetState, (app::OneCorePerWorkerProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E750, void, SetState, (app::OneCorePerWorkerProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OneCorePerWorkerProfilingSetting * this_ptr))
}
