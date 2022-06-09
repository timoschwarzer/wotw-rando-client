#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaAttributeGroup {
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_Name, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, (app::XmlSchemaAttributeGroup * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, XmlSchemaObjectCollection *, get_Attributes, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlSchemaAnyAttribute *, get_AnyAttribute, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_AnyAttribute, (app::XmlSchemaAttributeGroup * this_ptr, app::XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlQualifiedName *, get_QualifiedName, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA17C0, XmlSchemaObjectTable *, get_AttributeUses, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, XmlSchemaAnyAttribute *, get_AttributeWildcard, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_AttributeWildcard, (app::XmlSchemaAttributeGroup * this_ptr, app::XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, XmlSchemaAttributeGroup *, get_RedefinedAttributeGroup, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBC0, XmlSchemaAttributeGroup *, get_Redefined, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Redefined, (app::XmlSchemaAttributeGroup * this_ptr, app::XmlSchemaAttributeGroup * value));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_SelfReferenceCount, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x009C9740, void, set_SelfReferenceCount, (app::XmlSchemaAttributeGroup * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_NameAttribute, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, (app::XmlSchemaAttributeGroup * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetQualifiedName, (app::XmlSchemaAttributeGroup * this_ptr, app::XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x01CA1920, XmlSchemaObject *, Clone, (app::XmlSchemaAttributeGroup * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA1AF0, void, __ctor, (app::XmlSchemaAttributeGroup * this_ptr));
}
