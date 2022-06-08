#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaEntity {
IL2CPP_REGISTER_METHOD(0x01AAFC40, void, __ctor, (SchemaEntity * __this, XmlQualifiedName * qname, bool isParameter));
IL2CPP_REGISTER_METHOD(0x01052DF0, String *, IDtdEntityInfo_get_Name, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, IDtdEntityInfo_get_IsExternal, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, IDtdEntityInfo_get_IsDeclaredInExternal, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AAFD10, bool, IDtdEntityInfo_get_IsUnparsedEntity, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, IDtdEntityInfo_get_IsParameterEntity, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AAFD60, String *, IDtdEntityInfo_get_BaseUriString, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AAFDF0, String *, IDtdEntityInfo_get_DeclaredUriString, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, IDtdEntityInfo_get_SystemId, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, IDtdEntityInfo_get_PublicId, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, IDtdEntityInfo_get_Text, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, IDtdEntityInfo_get_LineNumber, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, IDtdEntityInfo_get_LinePosition, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AAFE00, bool, IsPredefinedEntity, (String * n));
IL2CPP_REGISTER_METHOD(0x002FA280, XmlQualifiedName *, get_Name, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Url, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AAFF80, void, set_Url, (SchemaEntity * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Pubid, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Pubid, (SchemaEntity * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsExternal, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsExternal, (SchemaEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A1A3B0, bool, get_DeclaredInExternal, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x00A1A3C0, void, set_DeclaredInExternal, (SchemaEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB990, XmlQualifiedName *, get_NData, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_NData, (SchemaEntity * __this, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Text, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AAFF90, void, set_Text, (SchemaEntity * __this, String * value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_Line, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Line, (SchemaEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_Pos, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Pos, (SchemaEntity * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01AAFFA0, String *, get_BaseURI, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_BaseURI, (SchemaEntity * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, get_ParsingInProgress, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x01AB0030, void, set_ParsingInProgress, (SchemaEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01AB0040, String *, get_DeclaredURI, (SchemaEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DeclaredURI, (SchemaEntity * __this, String * value));
}
