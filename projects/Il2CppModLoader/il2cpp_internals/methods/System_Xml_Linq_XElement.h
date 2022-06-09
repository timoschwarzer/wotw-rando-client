#include <interception_macros.h>

namespace app::methods::System_Xml_Linq::XElement {
IL2CPP_REGISTER_METHOD(0x03036610, IEnumerable_1_System_Xml_Linq_XElement_ *, get_EmptySequence, ());
IL2CPP_REGISTER_METHOD(0x030366C0, void, __ctor_1, (app::XElement * this_ptr, app::XName * name));
IL2CPP_REGISTER_METHODINFO(0x04743690, XElement__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036780, void, __ctor_2, (app::XElement * this_ptr, app::XElement * other));
IL2CPP_REGISTER_METHOD(0x03036970, void, __ctor_3, (app::XElement * this_ptr, app::XStreamingElement * other));
IL2CPP_REGISTER_METHODINFO(0x0470E110, XElement__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00938880, bool, get_HasAttributes, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x02E99DD0, bool, get_IsEmpty, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, XName *, get_Name, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, XmlNodeType__Enum, get_NodeType, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x03036A40, String *, get_Value, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x03036C10, void, set_Value, (app::XElement * this_ptr, app::String * value));
IL2CPP_REGISTER_METHODINFO(0x04768618, XElement_set_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03036CE0, XAttribute *, Attribute, (app::XElement * this_ptr, app::XName * name));
IL2CPP_REGISTER_METHOD(0x03036D20, IEnumerable_1_System_Xml_Linq_XAttribute_ *, Attributes, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x03036D30, String *, GetPrefixOfNamespace, (app::XElement * this_ptr, app::XNamespace * ns));
IL2CPP_REGISTER_METHODINFO(0x04733148, XElement_GetPrefixOfNamespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03037030, void, WriteTo, (app::XElement * this_ptr, app::XmlWriter * writer));
IL2CPP_REGISTER_METHODINFO(0x047298D0, XElement_WriteTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, XmlSchema *, IXmlSerializable_GetSchema, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x03037130, void, IXmlSerializable_ReadXml, (app::XElement * this_ptr, app::XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x047481D0, XElement_System_Xml_Serialization_IXmlSerializable_ReadXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C53A30, void, IXmlSerializable_WriteXml, (app::XElement * this_ptr, app::XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x03037360, void, AddAttribute, (app::XElement * this_ptr, app::XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x0475F120, XElement_AddAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030376C0, void, AddAttributeSkipNotify, (app::XElement * this_ptr, app::XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x047492E0, XElement_AddAttributeSkipNotify__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030378F0, void, AppendAttribute, (app::XElement * this_ptr, app::XAttribute * a));
IL2CPP_REGISTER_METHODINFO(0x04738E20, XElement_AppendAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03037A90, void, AppendAttributeSkipNotify, (app::XElement * this_ptr, app::XAttribute * a));
IL2CPP_REGISTER_METHOD(0x03037AE0, XNode *, CloneNode, (app::XElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x03037C30, IEnumerable_1_System_Xml_Linq_XAttribute_ *, GetAttributes, (app::XElement * this_ptr, app::XName * name));
IL2CPP_REGISTER_METHOD(0x03037DD0, String *, GetNamespaceOfPrefixInScope, (app::XElement * this_ptr, app::String * prefix, app::XElement * out_of_scope));
IL2CPP_REGISTER_METHOD(0x03037F10, void, ReadElementFrom, (app::XElement * this_ptr, app::XmlReader * r, app::LoadOptions__Enum o));
IL2CPP_REGISTER_METHODINFO(0x0473DB80, XElement_ReadElementFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03038430, void, SetEndElementLineInfo, (app::XElement * this_ptr, int32_t line_number, int32_t line_position));
IL2CPP_REGISTER_METHOD(0x030385A0, void, ValidateNode, (app::XElement * this_ptr, app::XNode * node, app::XNode * previous));
IL2CPP_REGISTER_METHODINFO(0x0471A3C8, XElement_ValidateNode__MethodInfo);
}
