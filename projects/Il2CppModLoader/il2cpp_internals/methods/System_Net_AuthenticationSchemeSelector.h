#include <interception_macros.h>

namespace app::methods::System_Net::AuthenticationSchemeSelector {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::AuthenticationSchemeSelector * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, AuthenticationSchemes__Enum, Invoke, (app::AuthenticationSchemeSelector * this_ptr, app::HttpListenerRequest * http_request));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::AuthenticationSchemeSelector * this_ptr, app::HttpListenerRequest * http_request, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, AuthenticationSchemes__Enum, EndInvoke, (app::AuthenticationSchemeSelector * this_ptr, app::IAsyncResult * result));
}
