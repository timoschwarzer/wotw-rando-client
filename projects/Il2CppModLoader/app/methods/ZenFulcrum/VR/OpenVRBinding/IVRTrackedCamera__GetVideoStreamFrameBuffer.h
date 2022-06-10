#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamFrameBuffer {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F53760, app::EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, void * p_frame_buffer, uint32_t n_frame_buffer_size, app::CameraVideoStreamFrameHeader_t * p_frame_header, uint32_t n_frame_header_size))
    IL2CPP_REGISTER_METHOD(0x00F53CB0, app::IAsyncResult *, BeginInvoke, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, void * p_frame_buffer, uint32_t n_frame_buffer_size, app::CameraVideoStreamFrameHeader_t * p_frame_header, uint32_t n_frame_header_size, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetVideoStreamFrameBuffer * this_ptr, app::CameraVideoStreamFrameHeader_t * p_frame_header, app::IAsyncResult * result))
}
