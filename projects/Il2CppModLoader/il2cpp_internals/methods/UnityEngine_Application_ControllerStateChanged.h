#include <interception_macros.h>

namespace app::methods::UnityEngine::Application_ControllerStateChanged {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Application_ControllerStateChanged * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, (app::Application_ControllerStateChanged * this_ptr, app::String * name, bool connected));
IL2CPP_REGISTER_METHOD(0x0241CDA0, IAsyncResult *, BeginInvoke, (app::Application_ControllerStateChanged * this_ptr, app::String * name, bool connected, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Application_ControllerStateChanged * this_ptr, app::IAsyncResult * result));
}
