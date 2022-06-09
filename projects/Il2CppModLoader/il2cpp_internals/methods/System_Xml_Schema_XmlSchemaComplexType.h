#include <interception_macros.h>

namespace app::methods::System_Xml_Schema::XmlSchemaComplexType {
IL2CPP_REGISTER_METHOD(0x01CA36E0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01CA3AE0, XmlSchemaComplexType *, CreateAnyType, (app::XmlSchemaContentProcessing__Enum process_contents));
IL2CPP_REGISTER_METHOD(0x01CA41D0, void, __ctor, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA4290, XmlSchemaComplexType *, get_AnyType, ());
IL2CPP_REGISTER_METHOD(0x01CA4330, XmlSchemaComplexType *, get_UntypedAnyType, ());
IL2CPP_REGISTER_METHOD(0x01CA43D0, ContentValidator *, get_AnyTypeContentValidator, ());
IL2CPP_REGISTER_METHOD(0x01CA44A0, bool, get_IsAbstract, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA44B0, void, set_IsAbstract, (app::XmlSchemaComplexType * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00736620, XmlSchemaDerivationMethod__Enum, get_Block, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x006E35E0, void, set_Block, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x01CA44E0, bool, get_IsMixed, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA44F0, void, set_IsMixed, (app::XmlSchemaComplexType * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FBC80, XmlSchemaContentModel *, get_ContentModel, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_ContentModel, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaContentModel * value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, XmlSchemaParticle *, get_Particle, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_Particle, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaParticle * value));
IL2CPP_REGISTER_METHOD(0x01CA4520, XmlSchemaObjectCollection *, get_Attributes, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCE0, XmlSchemaAnyAttribute *, get_AnyAttribute, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_AnyAttribute, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x003FC380, XmlSchemaContentType__Enum, get_ContentType, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBD00, XmlSchemaParticle *, get_ContentTypeParticle, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x008468B0, XmlSchemaDerivationMethod__Enum, get_BlockResolved, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA4680, XmlSchemaObjectTable *, get_AttributeUses, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x00660430, XmlSchemaAnyAttribute *, get_AttributeWildcard, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA47E0, XmlSchemaObjectTable *, get_LocalElements, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, SetContentTypeParticle, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaParticle * value));
IL2CPP_REGISTER_METHOD(0x008468C0, void, SetBlockResolved, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x00660440, void, SetAttributeWildcard, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x01CA4940, void, set_HasWildCard, (app::XmlSchemaComplexType * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, SetAttributes, (app::XmlSchemaComplexType * this_ptr, app::XmlSchemaObjectCollection * new_attributes));
IL2CPP_REGISTER_METHOD(0x01CA4970, bool, ContainsIdAttribute, (app::XmlSchemaComplexType * this_ptr, bool find_all));
IL2CPP_REGISTER_METHOD(0x01CA4C10, XmlSchemaObject *, Clone_1, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA4C20, XmlSchemaObject *, Clone_2, (app::XmlSchemaComplexType * this_ptr, app::XmlSchema * parent_schema));
IL2CPP_REGISTER_METHOD(0x01CA5430, void, ClearCompiledState, (app::XmlSchemaComplexType * this_ptr));
IL2CPP_REGISTER_METHOD(0x01CA5510, XmlSchemaObjectCollection *, CloneAttributes, (app::XmlSchemaObjectCollection * attributes));
IL2CPP_REGISTER_METHOD(0x01CA57B0, XmlSchemaObjectCollection *, CloneGroupBaseParticles, (app::XmlSchemaObjectCollection * group_base_particles, app::XmlSchema * parent_schema));
IL2CPP_REGISTER_METHOD(0x01CA5960, XmlSchemaParticle *, CloneParticle, (app::XmlSchemaParticle * particle, app::XmlSchema * parent_schema));
IL2CPP_REGISTER_METHOD(0x01CA5CA0, XmlSchemaForm__Enum, GetResolvedElementForm, (app::XmlSchema * parent_schema, app::XmlSchemaElement * element));
IL2CPP_REGISTER_METHOD(0x01CA5CD0, bool, HasParticleRef, (app::XmlSchemaParticle * particle, app::XmlSchema * parent_schema));
IL2CPP_REGISTER_METHOD(0x01CA5F90, bool, HasAttributeQNameRef, (app::XmlSchemaObjectCollection * attributes));
}
