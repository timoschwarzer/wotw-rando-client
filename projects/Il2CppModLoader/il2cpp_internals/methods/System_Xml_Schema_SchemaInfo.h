#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::SchemaInfo {
IL2CPP_REGISTER_METHOD(0x01AB00D0, void, __ctor, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlQualifiedName *, get_DocTypeName, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_DocTypeName, (app::SchemaInfo * this_ptr, app::XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_InternalDtdSubset, (app::SchemaInfo * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ *, get_ElementDecls, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ *, get_UndeclaredElementDecls, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01AB0660, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ *, get_GeneralEntities, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01AB07E0, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ *, get_ParameterEntities, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF2B0, SchemaType__Enum, get_SchemaType, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_SchemaType, (app::SchemaInfo * this_ptr, app::SchemaType__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Dictionary_2_System_String_System_Boolean_ *, get_TargetNamespaces, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB80, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ *, get_ElementDeclsByType, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ *, get_AttributeDecls, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01AB0960, Dictionary_2_System_String_System_Xml_Schema_SchemaNotation_ *, get_Notations, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_ErrorCount, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x0191E6A0, void, set_ErrorCount, (app::SchemaInfo * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x01AB0AE0, SchemaElementDecl *, GetElementDecl, (app::SchemaInfo * this_ptr, app::XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01AB0BE0, SchemaElementDecl *, GetTypeDecl, (app::SchemaInfo * this_ptr, app::XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01AB0CE0, XmlSchemaElement *, GetElement, (app::SchemaInfo * this_ptr, app::XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x01AB0D10, bool, HasSchema, (app::SchemaInfo * this_ptr, app::String * ns));
IL2CPP_REGISTER_METHOD(0x01AB0DD0, bool, Contains, (app::SchemaInfo * this_ptr, app::String * ns));
IL2CPP_REGISTER_METHOD(0x01AB0E90, SchemaAttDef *, GetAttributeXdr, (app::SchemaInfo * this_ptr, app::SchemaElementDecl * ed, app::XmlQualifiedName * qname));
IL2CPP_REGISTER_METHODINFO(0x047371D8, SchemaInfo_GetAttributeXdr__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AB10F0, SchemaAttDef *, GetAttributeXsd_1, (app::SchemaInfo * this_ptr, app::SchemaElementDecl * ed, app::XmlQualifiedName * qname, app::XmlSchemaObject * partial_validation_type, app::AttributeMatchState__Enum * attribute_match_state));
IL2CPP_REGISTER_METHOD(0x01AB1480, SchemaAttDef *, GetAttributeXsd_2, (app::SchemaInfo * this_ptr, app::SchemaElementDecl * ed, app::XmlQualifiedName * qname, app::bool * skip));
IL2CPP_REGISTER_METHODINFO(0x0474B918, SchemaInfo_GetAttributeXsd_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AB1620, void, Add, (app::SchemaInfo * this_ptr, app::SchemaInfo * sinfo, app::ValidationEventHandler * eventhandler));
IL2CPP_REGISTER_METHOD(0x01AB1FF0, void, Finish, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, IDtdInfo_get_HasDefaultAttributes, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446590, bool, IDtdInfo_get_HasNonCDataAttributes, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01AB21D0, IDtdAttributeListInfo *, IDtdInfo_LookupAttributeList, (app::SchemaInfo * this_ptr, app::String * prefix, app::String * local_name));
IL2CPP_REGISTER_METHOD(0x01AB2400, IDtdEntityInfo *, IDtdInfo_LookupEntity, (app::SchemaInfo * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlQualifiedName *, IDtdInfo_get_Name, (app::SchemaInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, IDtdInfo_get_InternalDtdSubset, (app::SchemaInfo * this_ptr));
}
