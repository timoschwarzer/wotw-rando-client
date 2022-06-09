#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaType {
IL2CPP_REGISTER_METHOD(0x0191E340, XmlSchemaSimpleType *, GetBuiltInSimpleType_1, (app::XmlQualifiedName * qualified_name));
IL2CPP_REGISTER_METHODINFO(0x04775358, XmlSchemaType_GetBuiltInSimpleType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0191E430, XmlSchemaSimpleType *, GetBuiltInSimpleType_2, (app::XmlTypeCode__Enum type_code));
IL2CPP_REGISTER_METHOD(0x0191E4D0, XmlSchemaComplexType *, GetBuiltInComplexType, (app::XmlQualifiedName * qualified_name));
IL2CPP_REGISTER_METHODINFO(0x0471C880, XmlSchemaType_GetBuiltInComplexType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_Name, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, (app::XmlSchemaType * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x004C6660, XmlSchemaDerivationMethod__Enum, get_Final, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x0191E6A0, void, set_Final, (app::XmlSchemaType * this_ptr, app::XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x0191E6B0, XmlQualifiedName *, get_QualifiedName, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF7B0, XmlSchemaDerivationMethod__Enum, get_FinalResolved, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlSchemaType *, get_BaseXmlSchemaType, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF2B0, XmlSchemaDerivationMethod__Enum, get_DerivedBy, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlSchemaDatatype *, get_Datatype, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsMixed, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IsMixed, (app::XmlSchemaType * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x0191E6C0, XmlTypeCode__Enum, get_TypeCode, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x0191E790, XmlValueConverter *, get_ValueConverter, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FC380, XmlSchemaContentType__Enum, get_SchemaContentType, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x0191E860, void, SetQualifiedName, (app::XmlSchemaType * this_ptr, app::XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x003FF7C0, void, SetFinalResolved, (app::XmlSchemaType * this_ptr, app::XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, SetBaseSchemaType, (app::XmlSchemaType * this_ptr, app::XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, SetDerivedBy, (app::XmlSchemaType * this_ptr, app::XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetDatatype, (app::XmlSchemaType * this_ptr, app::XmlSchemaDatatype * value));
IL2CPP_REGISTER_METHOD(0x0191E870, SchemaElementDecl *, get_ElementDecl, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x0191E880, void, set_ElementDecl, (app::XmlSchemaType * this_ptr, app::SchemaElementDecl * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, XmlSchemaType *, get_Redefined, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_Redefined, (app::XmlSchemaType * this_ptr, app::XmlSchemaType * value));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, SetContentType, (app::XmlSchemaType * this_ptr, app::XmlSchemaContentType__Enum value));
IL2CPP_REGISTER_METHOD(0x0191E890, bool, IsDerivedFrom, (app::XmlSchemaType * derived_type, app::XmlSchemaType * base_type, app::XmlSchemaDerivationMethod__Enum except));
IL2CPP_REGISTER_METHOD(0x0191EA90, bool, IsDerivedFromDatatype, (app::XmlSchemaDatatype * derived_data_type, app::XmlSchemaDatatype * base_data_type, app::XmlSchemaDerivationMethod__Enum except));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_NameAttribute, (app::XmlSchemaType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, (app::XmlSchemaType * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x0191EB80, void, __ctor, (app::XmlSchemaType * this_ptr));
}
