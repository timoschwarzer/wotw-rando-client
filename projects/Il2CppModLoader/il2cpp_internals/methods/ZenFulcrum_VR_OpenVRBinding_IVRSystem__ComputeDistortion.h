#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__ComputeDistortion {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_ComputeDistortion * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEA040, bool, Invoke, (app::IVRSystem_ComputeDistortion * this_ptr, app::EVREye__Enum e_eye, float f_u, float f_v, app::DistortionCoordinates_t * p_distortion_coordinates));
IL2CPP_REGISTER_METHOD(0x02CEA480, IAsyncResult *, BeginInvoke, (app::IVRSystem_ComputeDistortion * this_ptr, app::EVREye__Enum e_eye, float f_u, float f_v, app::DistortionCoordinates_t * p_distortion_coordinates, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSystem_ComputeDistortion * this_ptr, app::DistortionCoordinates_t * p_distortion_coordinates, app::IAsyncResult * result));
}
