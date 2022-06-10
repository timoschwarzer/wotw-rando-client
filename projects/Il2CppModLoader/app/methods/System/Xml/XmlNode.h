#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::XmlNode {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC4000, void, ctor_2, (app::XmlNode * this_ptr, app::XmlDocument * doc))
    IL2CPP_REGISTER_METHODINFO(0x04735F78, XmlNode__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, get_Value, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC40D0, void, set_Value, (app::XmlNode * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x047016E0, XmlNode_set_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC4210, app::XmlNode *, get_ParentNode, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC4350, app::XmlNodeList *, get_ChildNodes, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlNode *, get_PreviousSibling, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlNode *, get_NextSibling, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlAttributeCollection *, get_Attributes, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC4490, app::XmlDocument *, get_OwnerDocument, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC45B0, app::XmlNode *, get_FirstChild, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC45E0, app::XmlNode *, get_LastChild, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsContainer, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::XmlLinkedNode *, get_LastNode, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_LastNode, (app::XmlNode * this_ptr, app::XmlLinkedNode * value))
    IL2CPP_REGISTER_METHOD(0x01DC4600, bool, AncestorNode, (app::XmlNode * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x01DC4670, app::XmlNode *, InsertBefore, (app::XmlNode * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child))
    IL2CPP_REGISTER_METHODINFO(0x047568D8, XmlNode_InsertBefore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC4CF0, app::XmlNode *, InsertAfter, (app::XmlNode * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child))
    IL2CPP_REGISTER_METHODINFO(0x0474C030, XmlNode_InsertAfter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC53A0, app::XmlNode *, RemoveChild, (app::XmlNode * this_ptr, app::XmlNode * old_child))
    IL2CPP_REGISTER_METHODINFO(0x04764B40, XmlNode_RemoveChild__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC5770, app::XmlNode *, PrependChild, (app::XmlNode * this_ptr, app::XmlNode * new_child))
    IL2CPP_REGISTER_METHOD(0x01DC57C0, app::XmlNode *, AppendChild, (app::XmlNode * this_ptr, app::XmlNode * new_child))
    IL2CPP_REGISTER_METHODINFO(0x0477CC98, XmlNode_AppendChild__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC5D50, app::XmlNode *, AppendChildForLoad, (app::XmlNode * this_ptr, app::XmlNode * new_child, app::XmlDocument * doc))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsValidChildType, (app::XmlNode * this_ptr, app::XmlNodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanInsertBefore, (app::XmlNode * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanInsertAfter, (app::XmlNode * this_ptr, app::XmlNode * new_child, app::XmlNode * ref_child))
    IL2CPP_REGISTER_METHOD(0x01DC5F50, bool, get_HasChildNodes, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC5F70, void, CopyChildren, (app::XmlNode * this_ptr, app::XmlDocument * doc, app::XmlNode * container, bool deep))
    IL2CPP_REGISTER_METHOD(0x01DC6030, app::String *, get_NamespaceURI, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC60B0, app::String *, get_Prefix, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Prefix, (app::XmlNode * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01DC6130, bool, get_IsReadOnly, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6250, bool, HasReadOnlyParent, (app::XmlNode * n))
    IL2CPP_REGISTER_METHOD(0x01DC6350, app::Object *, ICloneable_Clone, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6370, app::IEnumerator *, IEnumerable_GetEnumerator, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC64E0, app::IEnumerator *, GetEnumerator, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6650, void, AppendChildText, (app::XmlNode * this_ptr, app::StringBuilder * builder))
    IL2CPP_REGISTER_METHOD(0x01DC6770, app::String *, get_InnerText, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6990, void, set_InnerText, (app::XmlNode * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01DC6A90, void, set_InnerXml, (app::XmlNode * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04768080, XmlNode_set_InnerXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC6B00, app::IXmlSchemaInfo *, get_SchemaInfo, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6BA0, app::String *, get_BaseURI, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6CE0, void, RemoveAll, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6D60, app::XmlDocument *, get_Document, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC6E60, app::String *, GetPrefixOfNamespace, (app::XmlNode * this_ptr, app::String * namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x01DC6F10, app::String *, GetPrefixOfNamespaceStrict, (app::XmlNode * this_ptr, app::String * namespace_u_r_i))
    IL2CPP_REGISTER_METHOD(0x01DC73C0, void, SetParent, (app::XmlNode * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetParentForLoad, (app::XmlNode * this_ptr, app::XmlNode * node))
    IL2CPP_REGISTER_METHOD(0x01DC7400, void, SplitName, (app::String * name, app::String * * prefix, app::String * * local_name))
    IL2CPP_REGISTER_METHOD(0x01DC7520, app::XmlNode *, FindChild, (app::XmlNode * this_ptr, app::XmlNodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01DC75A0, app::XmlNodeChangedEventArgs *, GetEventArgs, (app::XmlNode * this_ptr, app::XmlNode * node, app::XmlNode * old_parent, app::XmlNode * new_parent, app::String * old_value, app::String * new_value, app::XmlNodeChangedAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04780408, XmlNode_GetEventArgs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC7720, void, BeforeEvent, (app::XmlNode * this_ptr, app::XmlNodeChangedEventArgs * args))
    IL2CPP_REGISTER_METHOD(0x01DC7770, void, AfterEvent, (app::XmlNode * this_ptr, app::XmlNodeChangedEventArgs * args))
    IL2CPP_REGISTER_METHOD(0x01DC77C0, app::XmlSpace__Enum, get_XmlSpace, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC79B0, app::String *, get_XmlLang, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsText, (app::XmlNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC7B00, void, NestTextNodes, (app::XmlNode * prev_node, app::XmlNode * next_node))
    IL2CPP_REGISTER_METHOD(0x01DC7B20, void, UnnestTextNodes, (app::XmlNode * prev_node, app::XmlNode * next_node))
    IL2CPP_REGISTER_METHOD(0x01DC7B60, app::Object *, get_debuggerDisplayProxy, (app::XmlNode * this_ptr))
}
