#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlInt64 {
IL2CPP_REGISTER_METHOD(0x001E3B70, void, __ctor, (SqlInt64__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E4F10, void, __ctor, (SqlInt64__Boxed * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4F20, int64_t, get_Value, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0471DBC0, SqlInt64_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B3C70, SqlInt64, operator_, (int64_t x));
IL2CPP_REGISTER_METHOD(0x001E4F30, String *, ToString, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022B3C80, SqlInt64, operator__, (SqlInt64 x));
IL2CPP_REGISTER_METHOD(0x022B3D80, SqlInt64, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04716380, SqlInt64_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B3F40, SqlInt64, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04744BB0, SqlInt64_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4100, SqlInt64, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04738168, SqlInt64_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4400, SqlInt64, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04701A30, SqlInt64_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B45C0, SqlInt64, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHODINFO(0x04764058, SqlInt64_op_Modulus__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4780, SqlInt64, operator_, (SqlByte x));
IL2CPP_REGISTER_METHOD(0x022B48C0, SqlInt64, operator_, (SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022B4A00, SqlInt64, operator_, (SqlInt32 x));
IL2CPP_REGISTER_METHOD(0x022B4B40, SqlInt64, operator_, (SqlDecimal x));
IL2CPP_REGISTER_METHODINFO(0x0477DE48, SqlInt64_op_Explicit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B4D90, bool, SameSignLong, (int64_t x, int64_t y));
IL2CPP_REGISTER_METHOD(0x022B4DB0, SqlBoolean, operator___, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B4EA0, SqlBoolean, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B4F90, SqlBoolean, operator__, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B5080, SqlBoolean, LessThan, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x022B5140, SqlBoolean, GreaterThan, (SqlInt64 x, SqlInt64 y));
IL2CPP_REGISTER_METHOD(0x001E4F70, SqlByte, ToSqlByte, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4F80, SqlDouble, ToSqlDouble, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4FB0, SqlInt16, ToSqlInt16, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4FC0, SqlInt32, ToSqlInt32, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E4FD0, SqlDecimal, ToSqlDecimal, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E5000, int32_t, CompareTo, (SqlInt64__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04768E18, SqlInt64_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E5150, int32_t, CompareTo, (SqlInt64__Boxed * __this, SqlInt64 value));
IL2CPP_REGISTER_METHOD(0x001E5170, bool, Equals, (SqlInt64__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E5180, int32_t, GetHashCode, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlInt64__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E51B0, void, IXmlSerializable_ReadXml, (SqlInt64__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E5330, void, IXmlSerializable_WriteXml, (SqlInt64__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022B5DF0, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022B5F40, void, __cctor, ());
}
