#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x028867C0, app::ValueTuple_2_Int32_Object_, Invoke, (app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_ValueTuple_2_ arg))
    IL2CPP_REGISTER_METHOD(0x02F9EAC0, app::IAsyncResult *, BeginInvoke, (app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_ * this_ptr, app::KeyValuePair_2_System_Object_System_ValueTuple_2_ arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::ValueTuple_2_Int32_Object_, EndInvoke, (app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_ * this_ptr, app::IAsyncResult * result))
}
