#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Func_5_Object_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_5_Object_Object_Object_Object_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01BD0F10, app::Object *, Invoke, (app::Func_5_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4))
    IL2CPP_REGISTER_METHOD(0x01BD1540, app::IAsyncResult *, BeginInvoke, (app::Func_5_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::Func_5_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult * result))
}
