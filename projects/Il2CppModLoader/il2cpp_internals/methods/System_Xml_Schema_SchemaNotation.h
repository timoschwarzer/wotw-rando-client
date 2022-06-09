#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::SchemaNotation {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::SchemaNotation * this_ptr, app::XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlQualifiedName *, get_Name, (app::SchemaNotation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_SystemLiteral, (app::SchemaNotation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SystemLiteral, (app::SchemaNotation * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Pubid, (app::SchemaNotation * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Pubid, (app::SchemaNotation * this_ptr, app::String * value));
}
