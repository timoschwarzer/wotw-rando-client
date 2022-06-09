#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::SchemaDeclBase {
IL2CPP_REGISTER_METHOD(0x01AAE380, void, __ctor_1, (app::SchemaDeclBase * this_ptr, app::XmlQualifiedName * name, app::String * prefix));
IL2CPP_REGISTER_METHOD(0x01AAE440, void, __ctor_2, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlQualifiedName *, get_Name, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::SchemaDeclBase * this_ptr, app::XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x01AAE4F0, String *, get_Prefix, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Prefix, (app::SchemaDeclBase * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsDeclaredInExternal, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsDeclaredInExternal, (app::SchemaDeclBase * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00529E80, SchemaDeclBase_Use__Enum, get_Presence, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Presence, (app::SchemaDeclBase * this_ptr, app::SchemaDeclBase_Use__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, int64_t, get_MaxLength, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_MaxLength, (app::SchemaDeclBase * this_ptr, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB40, int64_t, get_MinLength, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_MinLength, (app::SchemaDeclBase * this_ptr, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, XmlSchemaType *, get_SchemaType, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_SchemaType, (app::SchemaDeclBase * this_ptr, app::XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlSchemaDatatype *, get_Datatype, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Datatype, (app::SchemaDeclBase * this_ptr, app::XmlSchemaDatatype * value));
IL2CPP_REGISTER_METHOD(0x01AAE580, void, AddValue, (app::SchemaDeclBase * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, List_1_System_String_ *, get_Values, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Values, (app::SchemaDeclBase * this_ptr, app::List_1_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x01AAE700, String *, get_DefaultValueRaw, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_DefaultValueRaw, (app::SchemaDeclBase * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Object *, get_DefaultValueTyped, (app::SchemaDeclBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_DefaultValueTyped, (app::SchemaDeclBase * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01AAE790, bool, CheckEnumeration, (app::SchemaDeclBase * this_ptr, app::Object * p_val));
IL2CPP_REGISTER_METHOD(0x01AAE8B0, bool, CheckValue, (app::SchemaDeclBase * this_ptr, app::Object * p_val));
}
