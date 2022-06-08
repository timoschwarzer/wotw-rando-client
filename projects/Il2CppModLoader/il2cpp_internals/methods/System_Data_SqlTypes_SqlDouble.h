#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlDouble {
IL2CPP_REGISTER_METHOD(0x001E3B70, void, __ctor, (SqlDouble__Boxed * __this, bool fNull));
IL2CPP_REGISTER_METHOD(0x001E3B80, void, __ctor, (SqlDouble__Boxed * __this, double value));
IL2CPP_REGISTER_METHODINFO(0x04756768, SqlDouble__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_IsNull, (SqlDouble__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E3B90, double, get_Value, (SqlDouble__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047705E8, SqlDouble_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE0B0, SqlDouble, operator_, (double x));
IL2CPP_REGISTER_METHOD(0x001E3BA0, String *, ToString, (SqlDouble__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x022AE0D0, SqlDouble, operator__, (SqlDouble x));
IL2CPP_REGISTER_METHOD(0x022AE1D0, SqlDouble, operator__, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x047805C0, SqlDouble_op_Addition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE350, SqlDouble, operator__, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x0472BA38, SqlDouble_op_Subtraction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE4D0, SqlDouble, operator__, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x0474DAE0, SqlDouble_op_Multiply__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE650, SqlDouble, operator__, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHODINFO(0x0475EEA0, SqlDouble_op_Division__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022AE820, SqlDouble, operator_, (SqlByte x));
IL2CPP_REGISTER_METHOD(0x022AE970, SqlDouble, operator_, (SqlInt16 x));
IL2CPP_REGISTER_METHOD(0x022AEAC0, SqlDouble, operator_, (SqlInt32 x));
IL2CPP_REGISTER_METHOD(0x022AEC00, SqlDouble, operator_, (SqlInt64 x));
IL2CPP_REGISTER_METHOD(0x022AED00, SqlDouble, operator_, (SqlSingle x));
IL2CPP_REGISTER_METHOD(0x022AEE40, SqlDouble, operator_, (SqlMoney x));
IL2CPP_REGISTER_METHOD(0x022AEF40, SqlDouble, operator_, (SqlDecimal x));
IL2CPP_REGISTER_METHOD(0x022AF040, SqlBoolean, operator___, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF120, SqlBoolean, operator__, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF200, SqlBoolean, operator__, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF2E0, SqlBoolean, LessThan, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHOD(0x022AF450, SqlBoolean, GreaterThan, (SqlDouble x, SqlDouble y));
IL2CPP_REGISTER_METHOD(0x001E3BF0, SqlSingle, ToSqlSingle, (SqlDouble__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E3C00, int32_t, CompareTo, (SqlDouble__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0473A5F8, SqlDouble_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E3D50, int32_t, CompareTo, (SqlDouble__Boxed * __this, SqlDouble value));
IL2CPP_REGISTER_METHOD(0x001E3D70, bool, Equals, (SqlDouble__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x001E3D80, int32_t, GetHashCode, (SqlDouble__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, XmlSchema *, IXmlSerializable_GetSchema, (SqlDouble__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E3DC0, void, IXmlSerializable_ReadXml, (SqlDouble__Boxed * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x001E3F20, void, IXmlSerializable_WriteXml, (SqlDouble__Boxed * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x022AFC10, XmlQualifiedName *, GetXsdType, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x022AFD60, void, __cctor, ());
}
