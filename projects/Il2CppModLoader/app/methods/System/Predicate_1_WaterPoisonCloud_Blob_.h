#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Predicate_1_WaterPoisonCloud_Blob_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_WaterPoisonCloud_Blob_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_WaterPoisonCloud_Blob_ * this_ptr, app::WaterPoisonCloud_Blob obj))
    IL2CPP_REGISTER_METHOD(0x02A56FB0, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_WaterPoisonCloud_Blob_ * this_ptr, app::WaterPoisonCloud_Blob obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_WaterPoisonCloud_Blob_ * this_ptr, app::IAsyncResult * result))
}
