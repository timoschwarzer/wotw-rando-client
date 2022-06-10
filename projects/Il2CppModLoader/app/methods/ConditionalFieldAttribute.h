#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ConditionalFieldAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_FieldName, (app::ConditionalFieldAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_FieldName, (app::ConditionalFieldAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, get_Value, (app::ConditionalFieldAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Value, (app::ConditionalFieldAttribute * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::ConditionalFieldAttribute * this_ptr, app::String * field_name, app::Object * value))
}
