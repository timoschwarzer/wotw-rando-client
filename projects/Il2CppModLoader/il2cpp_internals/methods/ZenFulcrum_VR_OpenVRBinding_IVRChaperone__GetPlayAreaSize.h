#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperone__GetPlayAreaSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperone_GetPlayAreaSize * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRChaperone_GetPlayAreaSize * this_ptr, float * p_size_x, float * p_size_z));
    IL2CPP_REGISTER_METHOD(0x02F3FD90, app::IAsyncResult *, BeginInvoke, (app::IVRChaperone_GetPlayAreaSize * this_ptr, float * p_size_x, float * p_size_z, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVRChaperone_GetPlayAreaSize * this_ptr, float * p_size_x, float * p_size_z, app::IAsyncResult * result));
}
