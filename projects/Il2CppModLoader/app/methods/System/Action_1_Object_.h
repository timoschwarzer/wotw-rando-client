#include <interception_macros.h>

namespace app::methods::System::Action_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04735380, Action_1_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_Object_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x04737FB0, Action_1_Object__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Action_1_Object_ * this_ptr, app::Object * obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Object_ * this_ptr, app::IAsyncResult * result))
}
