#include <interception_macros.h>

namespace app::methods::System::Xml::XsdValidatingReader {
IL2CPP_REGISTER_METHOD(0x03102080, void, __ctor, (XsdValidatingReader * __this, XmlReader * reader, XmlResolver * xmlResolver, XmlReaderSettings * readerSettings, XmlSchemaObject * partialValidationType));
IL2CPP_REGISTER_METHOD(0x031022D0, void, __ctor, (XsdValidatingReader * __this, XmlReader * reader, XmlResolver * xmlResolver, XmlReaderSettings * readerSettings));
IL2CPP_REGISTER_METHOD(0x031022F0, void, Init, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03102800, void, SetupValidator, (XsdValidatingReader * __this, XmlReaderSettings * readerSettings, XmlReader * reader, XmlSchemaObject * partialValidationType));
IL2CPP_REGISTER_METHOD(0x03102C20, XmlReaderSettings *, get_Settings, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03102ED0, XmlNodeType__Enum, get_NodeType, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03102FB0, String *, get_Name, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103170, String *, get_LocalName, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031031C0, String *, get_NamespaceURI, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103210, String *, get_Prefix, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103260, String *, get_Value, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031032B0, int32_t, get_Depth, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717120, String *, get_BaseURI, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717150, bool, get_IsEmptyElement, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103300, bool, get_IsDefault, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017171B0, uint16_t, get_QuoteChar, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x017171E0, XmlSpace__Enum, get_XmlSpace, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717210, String *, get_XmlLang, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, IXmlSchemaInfo *, get_SchemaInfo, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103340, Type *, get_ValueType, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_AttributeCount, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031034A0, String *, GetAttribute, (XsdValidatingReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x03103510, String *, GetAttribute, (XsdValidatingReader * __this, String * name, String * namespaceURI));
IL2CPP_REGISTER_METHOD(0x03103690, String *, GetAttribute, (XsdValidatingReader * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x031037C0, bool, MoveToAttribute, (XsdValidatingReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x03103890, void, MoveToAttribute, (XsdValidatingReader * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x0471FF48, XsdValidatingReader_MoveToAttribute_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03103A50, bool, MoveToFirstAttribute, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103BF0, bool, MoveToNextAttribute, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103D80, bool, MoveToElement, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03103DD0, bool, Read, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x01717450, bool, get_EOF, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104200, void, Close, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104240, ReadState__Enum_1, get_ReadState, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104280, void, Skip, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, XmlNameTable *, get_NameTable, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104480, String *, LookupNamespace, (XsdValidatingReader * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x03104530, void, ResolveEntity, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D108, XsdValidatingReader_ResolveEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03104580, bool, ReadAttributeValue, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104640, bool, IXmlSchemaInfo_get_IsDefault, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031046F0, bool, IXmlSchemaInfo_get_IsNil, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104740, XmlSchemaValidity__Enum, IXmlSchemaInfo_get_Validity, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104810, XmlSchemaSimpleType *, IXmlSchemaInfo_get_MemberType, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031048C0, XmlSchemaType *, IXmlSchemaInfo_get_SchemaType, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104930, XmlSchemaElement *, IXmlSchemaInfo_get_SchemaElement, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104990, XmlSchemaAttribute *, IXmlSchemaInfo_get_SchemaAttribute, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasLineInfo, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031049E0, int32_t, get_LineNumber, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104A80, int32_t, get_LinePosition, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104B20, IDictionary_2_System_String_System_String_ *, IXmlNamespaceResolver_GetNamespacesInScope, (XsdValidatingReader * __this, XmlNamespaceScope__Enum scope));
IL2CPP_REGISTER_METHOD(0x03104BF0, String *, IXmlNamespaceResolver_LookupNamespace, (XsdValidatingReader * __this, String * prefix));
IL2CPP_REGISTER_METHOD(0x03104CC0, String *, IXmlNamespaceResolver_LookupPrefix, (XsdValidatingReader * __this, String * namespaceName));
IL2CPP_REGISTER_METHOD(0x017170C0, Object *, GetStringValue, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0479A0E0, XsdValidatingReader_GetStringValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03104D90, XmlSchemaInfo *, get_AttributeSchemaInfo, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03104DB0, void, ProcessReaderEvent, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHODINFO(0x047701B8, XsdValidatingReader_ProcessReaderEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03105140, void, ProcessElementEvent, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03105980, void, ProcessEndElementEvent, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03105B80, void, ValidateAttributes, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03105E80, void, ClearAttributesInfo, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03105ED0, AttributePSVIInfo *, GetAttributePSVI, (XsdValidatingReader * __this, String * name));
IL2CPP_REGISTER_METHOD(0x031060D0, AttributePSVIInfo *, GetAttributePSVI, (XsdValidatingReader * __this, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x03106140, ValidatingReaderNodeData *, GetDefaultAttribute, (XsdValidatingReader * __this, String * name, bool updatePosition));
IL2CPP_REGISTER_METHOD(0x031062D0, ValidatingReaderNodeData *, GetDefaultAttribute, (XsdValidatingReader * __this, String * attrLocalName, String * ns, bool updatePosition));
IL2CPP_REGISTER_METHOD(0x03106480, AttributePSVIInfo *, AddAttributePSVI, (XsdValidatingReader * __this, int32_t attIndex));
IL2CPP_REGISTER_METHOD(0x03106720, bool, IsXSDRoot, (XsdValidatingReader * __this, String * localName, String * ns));
IL2CPP_REGISTER_METHOD(0x03106740, void, ProcessInlineSchema, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03106870, void, ReadAheadForMemberType, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03106CA0, void, GetIsDefault, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031071F0, void, GetMemberType, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x03107390, XsdCachingReader *, GetCachingReader, (XsdValidatingReader * __this));
IL2CPP_REGISTER_METHOD(0x031076B0, ValidatingReaderNodeData *, CreateDummyTextNode, (XsdValidatingReader * __this, String * attributeValue, int32_t depth));
IL2CPP_REGISTER_METHOD(0x03107850, void, CachingCallBack, (XsdValidatingReader * __this, XsdCachingReader * cachingReader));
IL2CPP_REGISTER_METHODINFO(0x0475FC40, XsdValidatingReader_CachingCallBack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03107880, String *, GetOriginalAtomicValueStringOfElement, (XsdValidatingReader * __this));
}
