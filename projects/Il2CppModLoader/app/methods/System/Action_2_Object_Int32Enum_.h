#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Action_2_Object_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Object_Int32Enum_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (app::Action_2_Object_Int32Enum_ * this_ptr, app::Object * arg1, app::Int32Enum__Enum arg2))
    IL2CPP_REGISTER_METHOD(0x02C11F80, app::IAsyncResult *, BeginInvoke, (app::Action_2_Object_Int32Enum_ * this_ptr, app::Object * arg1, app::Int32Enum__Enum arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Object_Int32Enum_ * this_ptr, app::IAsyncResult * result))
}
