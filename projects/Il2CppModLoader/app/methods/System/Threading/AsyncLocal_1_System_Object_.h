#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::AsyncLocal_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02775090, app::Object *, get_Value, (app::AsyncLocal_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027751A0, void, set_Value, (app::AsyncLocal_1_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::AsyncLocal_1_System_Object_ * this_ptr, app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 * value_changed_handler))
    IL2CPP_REGISTER_METHOD(0x02775260, void, IAsyncLocal_OnValueChanged, (app::AsyncLocal_1_System_Object_ * this_ptr, app::Object * previous_value_obj, app::Object * current_value_obj, bool context_changed))
}
