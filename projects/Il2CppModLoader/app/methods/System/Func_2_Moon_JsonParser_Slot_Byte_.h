#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Moon_JsonParser_Slot_Byte_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0477D848, Func_2_Moon_JsonParser_Slot_Byte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02885850, uint8_t, Invoke, (app::Func_2_Moon_JsonParser_Slot_Byte_ * this_ptr, app::JsonParser_Slot arg))
    IL2CPP_REGISTER_METHOD(0x02885D30, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Byte_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, uint8_t, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Byte_ * this_ptr, app::IAsyncResult * result))
}
