#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__GetApplicationPropertyBool {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_GetApplicationPropertyBool * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0254DDD0, bool, Invoke, (app::IVRApplications_GetApplicationPropertyBool * this_ptr, app::String * pch_app_key, app::EVRApplicationProperty__Enum e_property, app::EVRApplicationError__Enum * pe_error));
IL2CPP_REGISTER_METHOD(0x02F3D560, IAsyncResult *, BeginInvoke, (app::IVRApplications_GetApplicationPropertyBool * this_ptr, app::String * pch_app_key, app::EVRApplicationProperty__Enum e_property, app::EVRApplicationError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRApplications_GetApplicationPropertyBool * this_ptr, app::EVRApplicationError__Enum * pe_error, app::IAsyncResult * result));
}
