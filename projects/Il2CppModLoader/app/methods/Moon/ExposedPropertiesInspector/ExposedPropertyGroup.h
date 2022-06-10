#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::ExposedPropertiesInspector::ExposedPropertyGroup {
    IL2CPP_REGISTER_METHOD(0x031C2460, bool, HasProperty, (app::ExposedPropertyGroup * this_ptr, app::ExposedProperty * property))
    IL2CPP_REGISTER_METHOD(0x031C25A0, void, AddProperty, (app::ExposedPropertyGroup * this_ptr, app::ExposedProperty * property))
    IL2CPP_REGISTER_METHOD(0x031C26E0, void, InsertProperty, (app::ExposedPropertyGroup * this_ptr, app::ExposedProperty * property, int32_t insert_index))
    IL2CPP_REGISTER_METHOD(0x031C2860, void, AddDeserializedProperty, (app::ExposedPropertyGroup * this_ptr, app::ExposedProperty * property))
    IL2CPP_REGISTER_METHOD(0x031C2900, void, RemoveProperty, (app::ExposedPropertyGroup * this_ptr, app::ExposedProperty * property))
    IL2CPP_REGISTER_METHOD(0x031C2A30, void, ctor, (app::ExposedPropertyGroup * this_ptr))
}
