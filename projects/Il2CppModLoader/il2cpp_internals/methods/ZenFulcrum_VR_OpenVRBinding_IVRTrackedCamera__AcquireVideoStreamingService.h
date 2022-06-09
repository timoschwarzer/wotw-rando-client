#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRTrackedCamera__AcquireVideoStreamingService {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, uint32_t n_device_index, app::uint64_t * p_handle));
IL2CPP_REGISTER_METHOD(0x00F51EC0, IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, uint32_t n_device_index, app::uint64_t * p_handle, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, app::uint64_t * p_handle, app::IAsyncResult * result));
}
