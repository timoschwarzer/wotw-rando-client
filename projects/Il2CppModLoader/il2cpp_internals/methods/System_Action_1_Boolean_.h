#include <interception_macros.h>

namespace app::methods::System::Action_1_Boolean_ {
IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::Action_1_Boolean_ * this_ptr, bool obj));
IL2CPP_REGISTER_METHODINFO(0x0471EBB0, Action_1_Boolean__Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_Boolean_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHODINFO(0x04768580, Action_1_Boolean___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A04470, IAsyncResult *, BeginInvoke, (app::Action_1_Boolean_ * this_ptr, bool obj, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Boolean_ * this_ptr, app::IAsyncResult * result));
}
