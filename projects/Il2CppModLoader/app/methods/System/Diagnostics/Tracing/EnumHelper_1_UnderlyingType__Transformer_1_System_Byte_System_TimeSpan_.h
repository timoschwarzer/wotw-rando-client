#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Byte_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_TimeSpan_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288C090, uint8_t, Invoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_TimeSpan_ * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02C5BA70, app::IAsyncResult *, BeginInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_TimeSpan_ * this_ptr, app::TimeSpan value, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, uint8_t, EndInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Byte_System_TimeSpan_ * this_ptr, app::IAsyncResult * result))
}
