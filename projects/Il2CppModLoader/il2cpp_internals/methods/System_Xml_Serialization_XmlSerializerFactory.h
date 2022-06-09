#include <interception_macros.h>

namespace app::methods::System_Xml_Serialization::XmlSerializerFactory {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::XmlSerializerFactory * this_ptr));
IL2CPP_REGISTER_METHOD(0x0194BAD0, XmlSerializer *, CreateSerializer_1, (app::XmlSerializerFactory * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x0194BB00, XmlSerializer *, CreateSerializer_2, (app::XmlSerializerFactory * this_ptr, app::Type * type, app::XmlRootAttribute * root));
IL2CPP_REGISTER_METHOD(0x0194BB30, XmlSerializer *, CreateSerializer_3, (app::XmlSerializerFactory * this_ptr, app::Type * type, app::XmlAttributeOverrides * overrides, app::Type__Array * extra_types, app::XmlRootAttribute * root, app::String * default_namespace));
IL2CPP_REGISTER_METHOD(0x0194BFC0, void, __cctor, ());
}
