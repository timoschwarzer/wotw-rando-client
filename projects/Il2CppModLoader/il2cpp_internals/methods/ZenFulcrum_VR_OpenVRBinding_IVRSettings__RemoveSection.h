#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSettings__RemoveSection {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSettings_RemoveSection * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::IVRSettings_RemoveSection * this_ptr, app::String * pch_section, app::EVRSettingsError__Enum * pe_error));
    IL2CPP_REGISTER_METHOD(0x02CE82B0, app::IAsyncResult *, BeginInvoke, (app::IVRSettings_RemoveSection * this_ptr, app::String * pch_section, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSettings_RemoveSection * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result));
}
