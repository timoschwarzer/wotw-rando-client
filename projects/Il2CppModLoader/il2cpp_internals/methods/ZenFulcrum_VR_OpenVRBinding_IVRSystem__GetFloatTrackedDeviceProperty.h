#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetFloatTrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetFloatTrackedDeviceProperty * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02CEBBB0, float, Invoke, (app::IVRSystem_GetFloatTrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error));
    IL2CPP_REGISTER_METHOD(0x02CEBF40, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetFloatTrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x02CE71E0, float, EndInvoke, (app::IVRSystem_GetFloatTrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum * p_error, app::IAsyncResult * result));
}
