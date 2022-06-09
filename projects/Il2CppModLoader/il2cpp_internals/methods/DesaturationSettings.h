#include <interception_macros.h>

namespace app::methods::DesaturationSettings {
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_DebugOverrideAmount, (app::DesaturationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_DebugOverrideAmount, (app::DesaturationSettings * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00B83F50, float, get_EffectiveAmount, (app::DesaturationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B84000, DesaturationSettings *, Clone, (app::DesaturationSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x008C1C80, void, CopyFrom, (app::DesaturationSettings * this_ptr, app::DesaturationSettings * settings_desaturation));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DesaturationSettings * this_ptr));
}
