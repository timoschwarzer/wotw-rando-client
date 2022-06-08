#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaElementDecl {
IL2CPP_REGISTER_METHOD(0x01AAE900, void, __ctor, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x01AAEB70, void, __ctor, (SchemaElementDecl * __this, XmlSchemaDatatype * dtype));
IL2CPP_REGISTER_METHOD(0x01AAEE30, void, __ctor, (SchemaElementDecl * __this, XmlQualifiedName * name, String * prefix));
IL2CPP_REGISTER_METHOD(0x01AAF0C0, SchemaElementDecl *, CreateAnyTypeElementDecl, ());
IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, IDtdAttributeListInfo_get_HasNonCDataAttributes, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x01AAF240, IDtdAttributeInfo *, IDtdAttributeListInfo_LookupAttribute, (SchemaElementDecl * __this, String * prefix, String * localName));
IL2CPP_REGISTER_METHOD(0x002FBBA0, IEnumerable_1_System_Xml_IDtdDefaultAttributeInfo_ *, IDtdAttributeListInfo_LookupDefaultAttributes, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsIdDeclared, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsIdDeclared, (SchemaElementDecl * __this, bool value));
IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_HasNonCDataAttribute, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_HasNonCDataAttribute, (SchemaElementDecl * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01AAF410, SchemaElementDecl *, Clone, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x00E24C90, bool, get_IsAbstract, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x00E24CA0, void, set_IsAbstract, (SchemaElementDecl * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01AAF540, bool, get_IsNillable, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x01AAF550, void, set_IsNillable, (SchemaElementDecl * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC380, XmlSchemaDerivationMethod__Enum, get_Block, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_Block, (SchemaElementDecl * __this, XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x0108CEB0, bool, get_IsNotationDeclared, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x0108CEC0, void, set_IsNotationDeclared, (SchemaElementDecl * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01AAF560, bool, get_HasDefaultAttribute, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_HasRequiredAttribute, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, ContentValidator *, get_ContentValidator, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ContentValidator, (SchemaElementDecl * __this, ContentValidator * value));
IL2CPP_REGISTER_METHOD(0x002FBC20, XmlSchemaAnyAttribute *, get_AnyAttribute, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_AnyAttribute, (SchemaElementDecl * __this, XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x002FBC60, CompiledIdentityConstraint__Array *, get_Constraints, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Constraints, (SchemaElementDecl * __this, CompiledIdentityConstraint__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBC80, XmlSchemaElement *, get_SchemaElement, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_SchemaElement, (SchemaElementDecl * __this, XmlSchemaElement * value));
IL2CPP_REGISTER_METHOD(0x01AAF570, void, AddAttDef, (SchemaElementDecl * __this, SchemaAttDef * attdef));
IL2CPP_REGISTER_METHOD(0x01AAF760, SchemaAttDef *, GetAttDef, (SchemaElementDecl * __this, XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x002FBBA0, IList_1_System_Xml_IDtdDefaultAttributeInfo_ *, get_DefaultAttDefs, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ *, get_AttDefs, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ *, get_ProhibitedAttributes, (SchemaElementDecl * __this));
IL2CPP_REGISTER_METHOD(0x01AAF860, void, CheckAttributes, (SchemaElementDecl * __this, Hashtable * presence, bool standalone));
IL2CPP_REGISTER_METHODINFO(0x047859D8, SchemaElementDecl_CheckAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AAFAF0, void, __cctor, ());
}
