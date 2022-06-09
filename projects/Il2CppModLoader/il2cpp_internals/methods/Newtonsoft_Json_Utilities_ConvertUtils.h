#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::ConvertUtils {
    IL2CPP_REGISTER_METHOD(0x01C01D10, app::PrimitiveTypeCode__Enum, GetTypeCode_1, (app::Type * t));
    IL2CPP_REGISTER_METHOD(0x01C01DC0, app::PrimitiveTypeCode__Enum, GetTypeCode_2, (app::Type * t, bool * is_enum));
    IL2CPP_REGISTER_METHOD(0x01C020D0, app::TypeInformation_1 *, GetTypeInformation, (app::IConvertible * convertable));
    IL2CPP_REGISTER_METHOD(0x01C021D0, bool, IsConvertible, (app::Type * t));
    IL2CPP_REGISTER_METHOD(0x01C022A0, app::TimeSpan, ParseTimeSpan, (app::String * input));
    IL2CPP_REGISTER_METHOD(0x01C02370, app::Func_2_Object_Object_ *, CreateCastConverter, (app::StructMultiKey_2_System_Type_System_Type_ t));
    IL2CPP_REGISTER_METHODINFO(0x04756170, ConvertUtils_CreateCastConverter__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C027B0, app::BigInteger_2, ToBigInteger, (app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04792860, ConvertUtils_ToBigInteger__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C02BE0, app::Object *, FromBigInteger, (app::BigInteger_2 i, app::Type * target_type));
    IL2CPP_REGISTER_METHODINFO(0x0477B610, ConvertUtils_FromBigInteger__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C03040, bool, TryConvert, (app::Object * initial_value, app::CultureInfo * culture, app::Type * target_type, app::Object * * value));
    IL2CPP_REGISTER_METHOD(0x01C03140, app::ConvertUtils_ConvertResult__Enum, TryConvertInternal, (app::Object * initial_value, app::CultureInfo * culture, app::Type * target_type, app::Object * * value));
    IL2CPP_REGISTER_METHODINFO(0x04758F38, ConvertUtils_TryConvertInternal__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C03D00, app::Object *, ConvertOrCast, (app::Object * initial_value, app::CultureInfo * culture, app::Type * target_type));
    IL2CPP_REGISTER_METHOD(0x01C03EC0, app::Object *, EnsureTypeAssignable, (app::Object * value, app::Type * initial_type, app::Type * target_type));
    IL2CPP_REGISTER_METHODINFO(0x04746B48, ConvertUtils_EnsureTypeAssignable__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C04120, bool, VersionTryParse, (app::String * input, app::Version * * result));
    IL2CPP_REGISTER_METHOD(0x01C04280, bool, IsInteger, (app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01C043A0, app::ParseResult__Enum, Int32TryParse, (app::Char__Array * chars, int32_t start, int32_t length, int32_t * value));
    IL2CPP_REGISTER_METHOD(0x01C04570, app::ParseResult__Enum, Int64TryParse, (app::Char__Array * chars, int32_t start, int32_t length, int64_t * value));
    IL2CPP_REGISTER_METHOD(0x01C04710, app::ParseResult__Enum, DecimalTryParse, (app::Char__Array * chars, int32_t start, int32_t length, app::Decimal * value));
    IL2CPP_REGISTER_METHOD(0x01C05580, bool, TryConvertGuid, (app::String * s, app::Guid * g));
    IL2CPP_REGISTER_METHOD(0x01C05640, bool, TryHexTextToInt, (app::Char__Array * text, int32_t start, int32_t end, int32_t * value));
    IL2CPP_REGISTER_METHOD(0x01C056F0, void, __cctor, ());
}
