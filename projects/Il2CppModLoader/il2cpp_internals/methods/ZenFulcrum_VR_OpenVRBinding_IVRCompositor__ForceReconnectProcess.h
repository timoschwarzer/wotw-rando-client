#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__ForceReconnectProcess {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_ForceReconnectProcess * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::IVRCompositor_ForceReconnectProcess * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_ForceReconnectProcess * this_ptr, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_ForceReconnectProcess * this_ptr, app::IAsyncResult * result));
}
