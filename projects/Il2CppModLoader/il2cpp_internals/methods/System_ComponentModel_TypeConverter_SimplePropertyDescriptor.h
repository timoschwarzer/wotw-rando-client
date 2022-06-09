#include <interception_macros.h>

namespace app::methods::System_ComponentModel::TypeConverter_SimplePropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x02945A00, void, __ctor_1, (app::TypeConverter_SimplePropertyDescriptor * this_ptr, app::Type * component_type, app::String * name, app::Type * property_type));
    IL2CPP_REGISTER_METHOD(0x02945AC0, void, __ctor_2, (app::TypeConverter_SimplePropertyDescriptor * this_ptr, app::Type * component_type, app::String * name, app::Type * property_type, app::Attribute__Array * attributes));
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Type *, get_ComponentType, (app::TypeConverter_SimplePropertyDescriptor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02945B10, bool, get_IsReadOnly, (app::TypeConverter_SimplePropertyDescriptor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Type *, get_PropertyType, (app::TypeConverter_SimplePropertyDescriptor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02945BE0, bool, CanResetValue, (app::TypeConverter_SimplePropertyDescriptor * this_ptr, app::Object * component));
    IL2CPP_REGISTER_METHOD(0x02945D90, void, ResetValue, (app::TypeConverter_SimplePropertyDescriptor * this_ptr, app::Object * component));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (app::TypeConverter_SimplePropertyDescriptor * this_ptr, app::Object * component));
}
