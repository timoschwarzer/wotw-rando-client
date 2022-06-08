#include <interception_macros.h>

namespace app::methods::System::Configuration::SettingsProperty {
IL2CPP_REGISTER_METHOD(0x02962D70, void, __ctor, (SettingsProperty * __this, SettingsProperty * propertyToCopy));
IL2CPP_REGISTER_METHODINFO(0x04709470, SettingsProperty__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962DA0, void, __ctor, (SettingsProperty * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04777620, SettingsProperty__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962DD0, void, __ctor, (SettingsProperty * __this, String * name, Type * propertyType, SettingsProvider * provider, bool isReadOnly, Object * defaultValue, SettingsSerializeAs__Enum serializeAs, SettingsAttributeDictionary * attributes, bool throwOnErrorDeserializing, bool throwOnErrorSerializing));
IL2CPP_REGISTER_METHODINFO(0x0472BFB8, SettingsProperty__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962E00, SettingsAttributeDictionary *, get_Attributes, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x04766BF8, SettingsProperty_get_Attributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962E30, Object *, get_DefaultValue, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x04784378, SettingsProperty_get_DefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962E60, void, set_DefaultValue, (SettingsProperty * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04706080, SettingsProperty_set_DefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962E90, bool, get_IsReadOnly, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x047286A0, SettingsProperty_get_IsReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962EC0, void, set_IsReadOnly, (SettingsProperty * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04799168, SettingsProperty_set_IsReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962EF0, String *, get_Name, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x047014B8, SettingsProperty_get_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962F20, void, set_Name, (SettingsProperty * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04790148, SettingsProperty_set_Name__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962F50, Type *, get_PropertyType, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x047676E8, SettingsProperty_get_PropertyType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962F80, void, set_PropertyType, (SettingsProperty * __this, Type * value));
IL2CPP_REGISTER_METHODINFO(0x04776238, SettingsProperty_set_PropertyType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962FB0, SettingsProvider *, get_Provider, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x0476EDF0, SettingsProperty_get_Provider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02962FE0, void, set_Provider, (SettingsProperty * __this, SettingsProvider * value));
IL2CPP_REGISTER_METHODINFO(0x047537A8, SettingsProperty_set_Provider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963010, SettingsSerializeAs__Enum, get_SerializeAs, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x04735918, SettingsProperty_get_SerializeAs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963040, void, set_SerializeAs, (SettingsProperty * __this, SettingsSerializeAs__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0473BB28, SettingsProperty_set_SerializeAs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963070, bool, get_ThrowOnErrorDeserializing, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x04720808, SettingsProperty_get_ThrowOnErrorDeserializing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029630A0, void, set_ThrowOnErrorDeserializing, (SettingsProperty * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04717B18, SettingsProperty_set_ThrowOnErrorDeserializing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029630D0, bool, get_ThrowOnErrorSerializing, (SettingsProperty * __this));
IL2CPP_REGISTER_METHODINFO(0x04726D48, SettingsProperty_get_ThrowOnErrorSerializing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02963100, void, set_ThrowOnErrorSerializing, (SettingsProperty * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04715170, SettingsProperty_set_ThrowOnErrorSerializing__MethodInfo);
}
