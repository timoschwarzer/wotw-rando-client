#include <interception_macros.h>

namespace app::methods::System::Action_5_Object_Object_Object_Object_Object_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_5_Object_Object_Object_Object_Object_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02C19930, void, Invoke, (app::Action_5_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::Object * arg5));
IL2CPP_REGISTER_METHOD(0x0297E140, IAsyncResult *, BeginInvoke, (app::Action_5_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::Object * arg5, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_5_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult * result));
}
