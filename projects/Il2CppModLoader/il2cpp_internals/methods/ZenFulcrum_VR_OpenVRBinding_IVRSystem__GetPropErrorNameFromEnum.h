#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetPropErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetPropErrorNameFromEnum * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRSystem_GetPropErrorNameFromEnum * this_ptr, app::ETrackedPropertyError__Enum error));
IL2CPP_REGISTER_METHOD(0x02CEE050, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetPropErrorNameFromEnum * this_ptr, app::ETrackedPropertyError__Enum error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRSystem_GetPropErrorNameFromEnum * this_ptr, app::IAsyncResult * result));
}
