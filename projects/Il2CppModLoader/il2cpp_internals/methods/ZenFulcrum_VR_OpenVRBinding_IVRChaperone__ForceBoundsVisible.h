#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperone__ForceBoundsVisible {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperone_ForceBoundsVisible * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRChaperone_ForceBoundsVisible * this_ptr, bool b_force));
IL2CPP_REGISTER_METHOD(0x02F3F700, IAsyncResult *, BeginInvoke, (app::IVRChaperone_ForceBoundsVisible * this_ptr, bool b_force, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperone_ForceBoundsVisible * this_ptr, app::IAsyncResult * result));
}
