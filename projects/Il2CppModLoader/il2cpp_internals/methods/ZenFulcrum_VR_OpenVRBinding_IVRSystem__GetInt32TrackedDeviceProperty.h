#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetInt32TrackedDeviceProperty {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02CEC540, int32_t, Invoke, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error));
    IL2CPP_REGISTER_METHOD(0x02CEC8E0, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, uint32_t un_device_index, app::ETrackedDeviceProperty__Enum prop, app::ETrackedPropertyError__Enum * p_error, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F51FA0, int32_t, EndInvoke, (app::IVRSystem_GetInt32TrackedDeviceProperty * this_ptr, app::ETrackedPropertyError__Enum * p_error, app::IAsyncResult * result));
}
