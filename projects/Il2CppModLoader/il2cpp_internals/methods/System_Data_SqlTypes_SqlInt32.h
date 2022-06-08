#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlInt32 {
IL2CPP_REGISTER_METHOD(0x001E49E0, void, __ctor, (SqlInt32__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E49F0, void, __ctor, (SqlInt32__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4A00, int32_t, get_Value, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047639E0, SqlInt32_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B2560, SqlInt32, operator_, (int32_t x));
IL2CPP_REGISTER_METHOD(0x001E4A10, String *, ToString, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022B2580, SqlInt32, operator__, (SqlInt32 x));
IL2CPP_REGISTER_METHOD(0x022B2660, SqlInt32, operator__, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHODINFO(0x047665E0, SqlInt32_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B27F0, SqlInt32, operator__, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHODINFO(0x04768860, SqlInt32_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B2980, SqlInt32, operator__, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHODINFO(0x04744620, SqlInt32_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B2B20, SqlInt32, operator__, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHODINFO(0x04722A68, SqlInt32_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B2CC0, SqlInt32, operator_, (SqlByte x));
IL2CPP_REGISTER_METHOD(0x022B2DF0, SqlInt32, operator_, (SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022B2F20, SqlInt32, operator_, (SqlInt64 x));
IL2CPP_REGISTER_METHODINFO(0x0474BAE8, SqlInt32_op_Explicit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B3050, bool, SameSignInt, (int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x022B3070, SqlBoolean, operator___, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHOD(0x022B3150, SqlBoolean, operator__, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHOD(0x022B3230, SqlBoolean, operator__, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHOD(0x022B3310, SqlBoolean, LessThan, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHOD(0x022B33C0, SqlBoolean, GreaterThan, (SqlInt32 x, SqlInt32 y));
IL2CPP_REGISTER_METHOD(0x001E4A50, SqlDouble, ToSqlDouble, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4A80, SqlInt64, ToSqlInt64, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4AB0, int32_t, CompareTo, (SqlInt32__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04794E10, SqlInt32_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E4BF0, int32_t, CompareTo, (SqlInt32__Boxed * __this, SqlInt32 value));
IL2CPP_REGISTER_METHOD(0x001E4C00, bool, Equals, (SqlInt32__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E4C10, int32_t, GetHashCode, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlInt32__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4C30, void, IXmlSerializable_ReadXml, (SqlInt32__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E4DB0, void, IXmlSerializable_WriteXml, (SqlInt32__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022B3950, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022B3AA0, void, __cctor, ());
}
