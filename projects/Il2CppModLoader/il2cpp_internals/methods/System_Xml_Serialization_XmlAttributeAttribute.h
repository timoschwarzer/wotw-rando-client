#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlAttributeAttribute {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XmlAttributeAttribute * this_ptr, app::String * attribute_name));
IL2CPP_REGISTER_METHOD(0x01C9B110, String *, get_AttributeName, (app::XmlAttributeAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C9B1A0, String *, get_DataType, (app::XmlAttributeAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DataType, (app::XmlAttributeAttribute * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB970, XmlSchemaForm__Enum, get_Form, (app::XmlAttributeAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Namespace, (app::XmlAttributeAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x01C9B230, void, AddKeyHash, (app::XmlAttributeAttribute * this_ptr, app::StringBuilder * sb));
}
