#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Func_10_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_10_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0287A0B0, app::Object *, Invoke, (app::Func_10_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::Object * arg5, app::Object * arg6, app::Object * arg7, app::Object * arg8, app::Object * arg9))
    IL2CPP_REGISTER_METHOD(0x0287AB80, app::IAsyncResult *, BeginInvoke, (app::Func_10_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::Object * arg5, app::Object * arg6, app::Object * arg7, app::Object * arg8, app::Object * arg9, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::Func_10_Object_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult * result))
}
