#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRApplications__IdentifyApplication {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRApplications_IdentifyApplication * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRApplicationError__Enum, Invoke, (app::IVRApplications_IdentifyApplication * this_ptr, uint32_t un_process_id, app::String * pch_app_key));
IL2CPP_REGISTER_METHOD(0x02F3EF10, IAsyncResult *, BeginInvoke, (app::IVRApplications_IdentifyApplication * this_ptr, uint32_t un_process_id, app::String * pch_app_key, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_IdentifyApplication * this_ptr, app::IAsyncResult * result));
}
