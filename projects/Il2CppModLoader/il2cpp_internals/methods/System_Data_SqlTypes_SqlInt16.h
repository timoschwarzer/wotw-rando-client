#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlInt16 {
IL2CPP_REGISTER_METHOD(0x001E4470, void, __ctor, (SqlInt16__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E4480, void, __ctor, (SqlInt16__Boxed * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4490, int16_t, get_Value, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0472C578, SqlInt16_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B1100, SqlInt16, operator_, (int16_t x));
IL2CPP_REGISTER_METHOD(0x001E44A0, String *, ToString, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022B1120, SqlInt16, operator__, (SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022B1200, SqlInt16, operator__, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHODINFO(0x04781548, SqlInt16_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B1330, SqlInt16, operator__, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHODINFO(0x04783600, SqlInt16_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B1460, SqlInt16, operator__, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHODINFO(0x04711930, SqlInt16_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B15F0, SqlInt16, operator__, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHODINFO(0x0474B8B8, SqlInt16_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B1770, SqlInt16, operator_, (SqlByte x));
IL2CPP_REGISTER_METHOD(0x022B18A0, SqlInt16, operator_, (SqlInt64 x));
IL2CPP_REGISTER_METHODINFO(0x04785480, SqlInt16_op_Explicit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B19C0, SqlBoolean, operator___, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHOD(0x022B1A90, SqlBoolean, operator__, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHOD(0x022B1B60, SqlBoolean, operator__, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHOD(0x022B1C30, SqlBoolean, LessThan, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHOD(0x022B1CE0, SqlBoolean, GreaterThan, (SqlInt16 x, SqlInt16 y));
IL2CPP_REGISTER_METHOD(0x001E44E0, SqlDouble, ToSqlDouble, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4510, SqlInt64, ToSqlInt64, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4540, int32_t, CompareTo, (SqlInt16__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x047251F0, SqlInt16_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E4680, int32_t, CompareTo, (SqlInt16__Boxed * __this, SqlInt16 value));
IL2CPP_REGISTER_METHOD(0x001E4690, bool, Equals, (SqlInt16__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E46A0, int32_t, GetHashCode, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlInt16__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E46D0, void, IXmlSerializable_ReadXml, (SqlInt16__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E4850, void, IXmlSerializable_WriteXml, (SqlInt16__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022B2260, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022B23B0, void, __cctor, ());
}
