#include <interception_macros.h>

namespace app::methods::System_Xml::XmlImplementation {
    IL2CPP_REGISTER_METHOD(0x01DB9760, void, __ctor_1, (app::XmlImplementation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::XmlImplementation * this_ptr, app::XmlNameTable * nt));
    IL2CPP_REGISTER_METHOD(0x01DB98B0, app::XmlDocument *, CreateDocument, (app::XmlImplementation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlNameTable *, get_NameTable, (app::XmlImplementation * this_ptr));
}
