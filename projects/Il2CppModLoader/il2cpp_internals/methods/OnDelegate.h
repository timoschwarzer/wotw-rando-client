#include <interception_macros.h>

namespace app::methods::OnDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::OnDelegate * this_ptr, app::Object* object, app::void* method_1));
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::OnDelegate * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult*, BeginInvoke, (app::OnDelegate * this_ptr, app::AsyncCallback* callback, app::Object* object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::OnDelegate * this_ptr, app::IAsyncResult* result));
} // namespace app::methods::OnDelegate
