#include <interception_macros.h>

namespace app::methods::System::Action_3_Object_Single_Single_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_3_Object_Single_Single_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02C15CB0, void, Invoke, (app::Action_3_Object_Single_Single_ * this_ptr, app::Object * arg1, float arg2, float arg3));
IL2CPP_REGISTER_METHOD(0x02C16260, IAsyncResult *, BeginInvoke, (app::Action_3_Object_Single_Single_ * this_ptr, app::Object * arg1, float arg2, float arg3, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_3_Object_Single_Single_ * this_ptr, app::IAsyncResult * result));
}
