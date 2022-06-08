#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::DatatypeImplementation {
IL2CPP_REGISTER_METHOD(0x0234DC40, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02351840, XmlSchemaSimpleType *, get_AnySimpleType, ());
IL2CPP_REGISTER_METHOD(0x023518E0, XmlSchemaSimpleType *, get_UntypedAtomicType, ());
IL2CPP_REGISTER_METHOD(0x02351980, DatatypeImplementation *, FromXmlTokenizedType, (XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x02351A50, DatatypeImplementation *, FromXmlTokenizedTypeXsd, (XmlTokenizedType__Enum token));
IL2CPP_REGISTER_METHOD(0x02351B20, DatatypeImplementation *, FromXdrName, (String * name));
IL2CPP_REGISTER_METHOD(0x02351C50, DatatypeImplementation *, FromTypeName, (String * name));
IL2CPP_REGISTER_METHOD(0x02351D80, XmlSchemaSimpleType *, StartBuiltinType, (XmlQualifiedName * qname, XmlSchemaDatatype * dataType));
IL2CPP_REGISTER_METHOD(0x02351FD0, void, FinishBuiltinType, (XmlSchemaSimpleType * derivedType, XmlSchemaSimpleType * baseType));
IL2CPP_REGISTER_METHOD(0x02352430, void, CreateBuiltinTypes, ());
IL2CPP_REGISTER_METHOD(0x02353570, XmlSchemaSimpleType *, GetSimpleTypeFromTypeCode, (XmlTypeCode__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x02353640, XmlSchemaSimpleType *, GetSimpleTypeFromXsdType, (XmlQualifiedName * qname));
IL2CPP_REGISTER_METHOD(0x02353760, XmlSchemaSimpleType *, GetNormalizedStringTypeV1Compat, ());
IL2CPP_REGISTER_METHOD(0x02353A20, XmlSchemaSimpleType *, GetTokenTypeV1Compat, ());
IL2CPP_REGISTER_METHOD(0x02353CE0, XmlSchemaSimpleType__Array *, GetBuiltInTypes, ());
IL2CPP_REGISTER_METHOD(0x02353D80, XmlTypeCode__Enum, GetPrimitiveTypeCode, (XmlTypeCode__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x02353F00, XmlSchemaDatatype *, DeriveByRestriction, (DatatypeImplementation * __this, XmlSchemaObjectCollection * facets, XmlNameTable * nameTable, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x023540D0, XmlSchemaDatatype *, DeriveByList, (DatatypeImplementation * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x023540E0, XmlSchemaDatatype *, DeriveByList, (DatatypeImplementation * __this, int32_t minSize, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHODINFO(0x04789A30, DatatypeImplementation_DeriveByList_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02354490, DatatypeImplementation *, DeriveByUnion, (XmlSchemaSimpleType__Array * types, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, VerifySchemaValid, (DatatypeImplementation * __this, XmlSchemaObjectTable * notations, XmlSchemaObject * caller));
IL2CPP_REGISTER_METHOD(0x023546B0, bool, IsDerivedFrom, (DatatypeImplementation * __this, XmlSchemaDatatype * datatype));
IL2CPP_REGISTER_METHOD(0x023549C0, bool, IsEqual, (DatatypeImplementation * __this, Object * o1, Object * o2));
IL2CPP_REGISTER_METHOD(0x023549E0, bool, IsComparable, (DatatypeImplementation * __this, XmlSchemaDatatype * dtype));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlValueConverter *, CreateValueConverter, (DatatypeImplementation * __this, XmlSchemaType * schemaType));
IL2CPP_REGISTER_METHOD(0x02354B20, FacetsChecker *, get_FacetsChecker, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x02354BC0, XmlValueConverter *, get_ValueConverter, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, XmlTokenizedType__Enum, get_TokenizedType, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x02354BF0, Type *, get_ValueType, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, XmlSchemaDatatypeVariety__Enum, get_Variety, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlTypeCode__Enum, get_TypeCode, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, RestrictionFacets *, get_Restriction, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x02354C90, bool, get_HasLexicalFacets, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x02354CB0, bool, get_HasValueFacets, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, DatatypeImplementation *, get_Base, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x02354CD0, Object *, ParseValue, (DatatypeImplementation * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr));
IL2CPP_REGISTER_METHODINFO(0x0478D860, DatatypeImplementation_ParseValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02354F40, Object *, ParseValue, (DatatypeImplementation * __this, String * s, XmlNameTable * nameTable, IXmlNamespaceResolver * nsmgr, bool createAtomicValue));
IL2CPP_REGISTER_METHODINFO(0x0474AF48, DatatypeImplementation_ParseValue_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02355130, Exception *, TryParseValue, (DatatypeImplementation * __this, Object * value, XmlNameTable * nameTable, IXmlNamespaceResolver * namespaceResolver, Object * * typedValue));
IL2CPP_REGISTER_METHOD(0x02355530, String *, GetTypeName, (DatatypeImplementation * __this));
IL2CPP_REGISTER_METHOD(0x023555C0, int32_t, Compare, (DatatypeImplementation * __this, Byte__Array * value1, Byte__Array * value2));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DatatypeImplementation * __this));
}
