#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaSimpleTypeList {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlQualifiedName *, get_ItemTypeName, (app::XmlSchemaSimpleTypeList * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0191D5C0, void, set_ItemTypeName, (app::XmlSchemaSimpleTypeList * this_ptr, app::XmlQualifiedName * value));
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaSimpleType *, get_ItemType, (app::XmlSchemaSimpleTypeList * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_ItemType, (app::XmlSchemaSimpleTypeList * this_ptr, app::XmlSchemaSimpleType * value));
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaSimpleType *, get_BaseItemType, (app::XmlSchemaSimpleTypeList * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_BaseItemType, (app::XmlSchemaSimpleTypeList * this_ptr, app::XmlSchemaSimpleType * value));
    IL2CPP_REGISTER_METHOD(0x0191D6B0, app::XmlSchemaObject *, Clone, (app::XmlSchemaSimpleTypeList * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0191D830, void, __ctor, (app::XmlSchemaSimpleTypeList * this_ptr));
}
