#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSettings__GetFloat {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSettings_GetFloat * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE6B90, float, Invoke, (app::IVRSettings_GetFloat * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::EVRSettingsError__Enum * pe_error));
IL2CPP_REGISTER_METHOD(0x02CE7100, IAsyncResult *, BeginInvoke, (app::IVRSettings_GetFloat * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x02CE71E0, float, EndInvoke, (app::IVRSettings_GetFloat * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result));
}
