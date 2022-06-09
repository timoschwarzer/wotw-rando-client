#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__GetCameraIntrinsics {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_GetCameraIntrinsics * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52B80, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetCameraIntrinsics * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::HmdVector2_t * p_focal_length, app::HmdVector2_t * p_center));
IL2CPP_REGISTER_METHOD(0x00F52FA0, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetCameraIntrinsics * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::HmdVector2_t * p_focal_length, app::HmdVector2_t * p_center, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F530B0, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetCameraIntrinsics * this_ptr, app::HmdVector2_t * p_focal_length, app::HmdVector2_t * p_center, app::IAsyncResult * result));
}
