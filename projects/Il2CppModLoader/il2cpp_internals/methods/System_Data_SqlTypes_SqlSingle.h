#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlSingle {
IL2CPP_REGISTER_METHOD(0x001E49E0, void, __ctor, (SqlSingle__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E5B40, void, __ctor, (SqlSingle__Boxed * __this, float value));
IL2CPP_REGISTER_METHODINFO(0x04770CB8, SqlSingle__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E5B50, void, __ctor, (SqlSingle__Boxed * __this, double value));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlSingle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E5B60, float, get_Value, (SqlSingle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DDE8, SqlSingle_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B8640, SqlSingle, operator_, (float x));
IL2CPP_REGISTER_METHOD(0x001E5B70, String *, ToString, (SqlSingle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022B8670, SqlSingle, operator__, (SqlSingle x));
IL2CPP_REGISTER_METHOD(0x022B8760, SqlSingle, operator__, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHODINFO(0x04750D80, SqlSingle_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B88B0, SqlSingle, operator__, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHODINFO(0x0471AB80, SqlSingle_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B8A00, SqlSingle, operator__, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHODINFO(0x04717488, SqlSingle_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B8B50, SqlSingle, operator__, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHODINFO(0x04731F08, SqlSingle_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022B8CF0, SqlSingle, operator_, (SqlByte x));
IL2CPP_REGISTER_METHOD(0x022B8E30, SqlSingle, operator_, (SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022B8F70, SqlSingle, operator_, (SqlInt32 x));
IL2CPP_REGISTER_METHOD(0x022B90B0, SqlSingle, operator_, (SqlInt64 x));
IL2CPP_REGISTER_METHOD(0x022B9190, SqlSingle, operator_, (SqlMoney x));
IL2CPP_REGISTER_METHOD(0x022B9270, SqlSingle, operator_, (SqlDecimal x));
IL2CPP_REGISTER_METHOD(0x022B9360, SqlSingle, operator_, (SqlDouble x));
IL2CPP_REGISTER_METHOD(0x022B9440, SqlBoolean, operator___, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHOD(0x022B9530, SqlBoolean, operator__, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHOD(0x022B9610, SqlBoolean, operator__, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHOD(0x022B96F0, SqlBoolean, LessThan, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHOD(0x022B97A0, SqlBoolean, GreaterThan, (SqlSingle x, SqlSingle y));
IL2CPP_REGISTER_METHOD(0x001E5BC0, SqlDouble, ToSqlDouble, (SqlSingle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E5BF0, int32_t, CompareTo, (SqlSingle__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0475BD48, SqlSingle_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E5D30, int32_t, CompareTo, (SqlSingle__Boxed * __this, SqlSingle value));
IL2CPP_REGISTER_METHOD(0x001E5D40, bool, Equals, (SqlSingle__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E5D50, int32_t, GetHashCode, (SqlSingle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlSingle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E5D90, void, IXmlSerializable_ReadXml, (SqlSingle__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E5EF0, void, IXmlSerializable_WriteXml, (SqlSingle__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022B9CA0, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022B9DF0, void, __cctor, ());
}
