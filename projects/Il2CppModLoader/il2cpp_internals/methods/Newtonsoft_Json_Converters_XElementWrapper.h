#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Converters::XElementWrapper {
IL2CPP_REGISTER_METHOD(0x01A58EF0, XElement *, get_Element, (app::XElementWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XElementWrapper * this_ptr, app::XElement * element));
IL2CPP_REGISTER_METHOD(0x01A58FC0, void, SetAttributeNode, (app::XElementWrapper * this_ptr, app::IXmlNode * attribute));
IL2CPP_REGISTER_METHOD(0x01A590E0, List_1_Newtonsoft_Json_Converters_IXmlNode_ *, get_Attributes, (app::XElementWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59740, bool, HasImplicitNamespaceAttribute, (app::XElementWrapper * this_ptr, app::String * namespace_uri));
IL2CPP_REGISTER_METHOD(0x01A59A90, IXmlNode *, AppendChild, (app::XElementWrapper * this_ptr, app::IXmlNode * new_child));
IL2CPP_REGISTER_METHOD(0x01A59AB0, String *, get_Value, (app::XElementWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59AE0, String *, get_LocalName, (app::XElementWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59B10, String *, get_NamespaceUri, (app::XElementWrapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A59B50, String *, GetPrefixOfNamespace, (app::XElementWrapper * this_ptr, app::String * namespace_uri));
IL2CPP_REGISTER_METHOD(0x01A59BA0, bool, get_IsEmpty, (app::XElementWrapper * this_ptr));
}
