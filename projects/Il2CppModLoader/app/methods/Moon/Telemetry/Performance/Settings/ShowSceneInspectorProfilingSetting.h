#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::ShowSceneInspectorProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3F9D0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ShowSceneInspectorProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F9E0, bool, GetState, (app::ShowSceneInspectorProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FA70, void, SetState, (app::ShowSceneInspectorProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ShowSceneInspectorProfilingSetting * this_ptr))
}
