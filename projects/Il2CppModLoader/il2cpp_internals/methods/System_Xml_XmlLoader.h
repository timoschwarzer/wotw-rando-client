#include <interception_macros.h>

namespace app::methods::System_Xml::XmlLoader {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DB9B00, void, Load, (app::XmlLoader * this_ptr, app::XmlDocument * doc, app::XmlReader * reader, bool preserve_whitespace));
    IL2CPP_REGISTER_METHODINFO(0x04710990, XmlLoader_Load__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DB9E10, void, LoadDocSequence, (app::XmlLoader * this_ptr, app::XmlDocument * parent_doc));
    IL2CPP_REGISTER_METHOD(0x01DB9E90, app::XmlNode *, ReadCurrentNode, (app::XmlLoader * this_ptr, app::XmlDocument * doc, app::XmlReader * reader));
    IL2CPP_REGISTER_METHODINFO(0x0472B608, XmlLoader_ReadCurrentNode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBA060, app::XmlNode *, LoadNode, (app::XmlLoader * this_ptr, bool skip_over_whitespace));
    IL2CPP_REGISTER_METHODINFO(0x04726C88, XmlLoader_LoadNode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBA7A0, app::XmlAttribute *, LoadAttributeNode, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04754C28, XmlLoader_LoadAttributeNode__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBAB60, app::XmlAttribute *, LoadDefaultAttribute, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DBAD80, void, LoadAttributeValue, (app::XmlLoader * this_ptr, app::XmlNode * parent, bool direct));
    IL2CPP_REGISTER_METHODINFO(0x0473DF40, XmlLoader_LoadAttributeValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBB310, app::XmlEntityReference *, LoadEntityReferenceNode, (app::XmlLoader * this_ptr, bool direct));
    IL2CPP_REGISTER_METHOD(0x01DBB660, app::XmlDeclaration *, LoadDeclarationNode, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DBB980, app::XmlDocumentType *, LoadDocumentTypeNode, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DBBCB0, app::XmlNode *, LoadNodeDirect, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470C0B8, XmlLoader_LoadNodeDirect__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBC750, app::XmlAttribute *, LoadAttributeNodeDirect, (app::XmlLoader * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DBCAC0, void, ParseDocumentType_1, (app::XmlLoader * this_ptr, app::XmlDocumentType * dt_node));
    IL2CPP_REGISTER_METHOD(0x01DBCB50, void, ParseDocumentType_2, (app::XmlLoader * this_ptr, app::XmlDocumentType * dt_node, bool b_use_resolver, app::XmlResolver * resolver));
    IL2CPP_REGISTER_METHOD(0x01DBD0B0, void, LoadDocumentType, (app::XmlLoader * this_ptr, app::IDtdInfo * dtd_info, app::XmlDocumentType * dt_node));
    IL2CPP_REGISTER_METHODINFO(0x04788838, XmlLoader_LoadDocumentType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBE010, app::XmlParserContext *, GetContext, (app::XmlLoader * this_ptr, app::XmlNode * node));
    IL2CPP_REGISTER_METHOD(0x01DBEB80, app::XmlNamespaceManager *, ParsePartialContent, (app::XmlLoader * this_ptr, app::XmlNode * parent_node, app::String * innerxmltext, app::XmlNodeType__Enum nt));
    IL2CPP_REGISTER_METHOD(0x01DBEDB0, void, LoadInnerXmlElement, (app::XmlLoader * this_ptr, app::XmlElement * node, app::String * innerxmltext));
    IL2CPP_REGISTER_METHOD(0x01DBEE50, void, LoadInnerXmlAttribute, (app::XmlLoader * this_ptr, app::XmlAttribute * node, app::String * innerxmltext));
    IL2CPP_REGISTER_METHOD(0x01DBEE70, void, RemoveDuplicateNamespace, (app::XmlLoader * this_ptr, app::XmlElement * elem, app::XmlNamespaceManager * mgr, bool f_check_elem_attrs));
    IL2CPP_REGISTER_METHOD(0x01DBF320, app::String *, EntitizeName, (app::XmlLoader * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x01DBF3B0, void, ExpandEntity, (app::XmlLoader * this_ptr, app::XmlEntity * ent));
    IL2CPP_REGISTER_METHOD(0x01DBF420, void, ExpandEntityReference, (app::XmlLoader * this_ptr, app::XmlEntityReference * eref));
    IL2CPP_REGISTER_METHODINFO(0x04768F58, XmlLoader_ExpandEntityReference__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DBFBF0, app::XmlReader *, CreateInnerXmlReader, (app::XmlLoader * this_ptr, app::String * xml_fragment, app::XmlNodeType__Enum nt, app::XmlParserContext * context, app::XmlDocument * doc));
    IL2CPP_REGISTER_METHOD(0x01DBFFC0, void, ParseXmlDeclarationValue, (app::String * str_value, app::String * * version, app::String * * encoding, app::String * * standalone));
    IL2CPP_REGISTER_METHOD(0x01DC0280, app::Exception *, UnexpectedNodeType, (app::XmlNodeType__Enum nodetype));
}
