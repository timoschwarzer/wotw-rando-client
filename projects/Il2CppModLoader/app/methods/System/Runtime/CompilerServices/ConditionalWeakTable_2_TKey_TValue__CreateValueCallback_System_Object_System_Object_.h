#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::ConditionalWeakTable_2_TKey_TValue__CreateValueCallback_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ConditionalWeakTable_2_TKey_TValue_CreateValueCallback_System_Object_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object *, Invoke, (app::ConditionalWeakTable_2_TKey_TValue_CreateValueCallback_System_Object_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::ConditionalWeakTable_2_TKey_TValue_CreateValueCallback_System_Object_System_Object_ * this_ptr, app::Object * key, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::ConditionalWeakTable_2_TKey_TValue_CreateValueCallback_System_Object_System_Object_ * this_ptr, app::IAsyncResult * result))
}
