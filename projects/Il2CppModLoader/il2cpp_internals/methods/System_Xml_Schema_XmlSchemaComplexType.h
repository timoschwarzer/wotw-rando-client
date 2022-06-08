#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaComplexType {
IL2CPP_REGISTER_METHOD(0x01CA36E0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01CA3AE0, XmlSchemaComplexType *, CreateAnyType, (XmlSchemaContentProcessing__Enum processContents));
IL2CPP_REGISTER_METHOD(0x01CA41D0, void, __ctor, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA4290, XmlSchemaComplexType *, get_AnyType, ());
IL2CPP_REGISTER_METHOD(0x01CA4330, XmlSchemaComplexType *, get_UntypedAnyType, ());
IL2CPP_REGISTER_METHOD(0x01CA43D0, ContentValidator *, get_AnyTypeContentValidator, ());
IL2CPP_REGISTER_METHOD(0x01CA44A0, bool, get_IsAbstract, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA44B0, void, set_IsAbstract, (XmlSchemaComplexType * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00736620, XmlSchemaDerivationMethod__Enum, get_Block, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x006E35E0, void, set_Block, (XmlSchemaComplexType * __this, XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x01CA44E0, bool, get_IsMixed, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA44F0, void, set_IsMixed, (XmlSchemaComplexType * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBC80, XmlSchemaContentModel *, get_ContentModel, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_ContentModel, (XmlSchemaComplexType * __this, XmlSchemaContentModel * value));
IL2CPP_REGISTER_METHOD(0x002FBCA0, XmlSchemaParticle *, get_Particle, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_Particle, (XmlSchemaComplexType * __this, XmlSchemaParticle * value));
IL2CPP_REGISTER_METHOD(0x01CA4520, XmlSchemaObjectCollection *, get_Attributes, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, XmlSchemaAnyAttribute *, get_AnyAttribute, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_AnyAttribute, (XmlSchemaComplexType * __this, XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x003FC380, XmlSchemaContentType__Enum, get_ContentType, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x002FBD00, XmlSchemaParticle *, get_ContentTypeParticle, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x008468B0, XmlSchemaDerivationMethod__Enum, get_BlockResolved, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA4680, XmlSchemaObjectTable *, get_AttributeUses, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x00660430, XmlSchemaAnyAttribute *, get_AttributeWildcard, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA47E0, XmlSchemaObjectTable *, get_LocalElements, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x002FBD10, void, SetContentTypeParticle, (XmlSchemaComplexType * __this, XmlSchemaParticle * value));
IL2CPP_REGISTER_METHOD(0x008468C0, void, SetBlockResolved, (XmlSchemaComplexType * __this, XmlSchemaDerivationMethod__Enum value));
IL2CPP_REGISTER_METHOD(0x00660440, void, SetAttributeWildcard, (XmlSchemaComplexType * __this, XmlSchemaAnyAttribute * value));
IL2CPP_REGISTER_METHOD(0x01CA4940, void, set_HasWildCard, (XmlSchemaComplexType * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, SetAttributes, (XmlSchemaComplexType * __this, XmlSchemaObjectCollection * newAttributes));
IL2CPP_REGISTER_METHOD(0x01CA4970, bool, ContainsIdAttribute, (XmlSchemaComplexType * __this, bool findAll));
IL2CPP_REGISTER_METHOD(0x01CA4C10, XmlSchemaObject *, Clone, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA4C20, XmlSchemaObject *, Clone, (XmlSchemaComplexType * __this, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHOD(0x01CA5430, void, ClearCompiledState, (XmlSchemaComplexType * __this));
IL2CPP_REGISTER_METHOD(0x01CA5510, XmlSchemaObjectCollection *, CloneAttributes, (XmlSchemaObjectCollection * attributes));
IL2CPP_REGISTER_METHOD(0x01CA57B0, XmlSchemaObjectCollection *, CloneGroupBaseParticles, (XmlSchemaObjectCollection * groupBaseParticles, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHOD(0x01CA5960, XmlSchemaParticle *, CloneParticle, (XmlSchemaParticle * particle, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHOD(0x01CA5CA0, XmlSchemaForm__Enum, GetResolvedElementForm, (XmlSchema * parentSchema, XmlSchemaElement * element));
IL2CPP_REGISTER_METHOD(0x01CA5CD0, bool, HasParticleRef, (XmlSchemaParticle * particle, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHOD(0x01CA5F90, bool, HasAttributeQNameRef, (XmlSchemaObjectCollection * attributes));
}
