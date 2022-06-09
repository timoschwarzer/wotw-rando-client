#include <interception_macros.h>

namespace app::methods::System_Numerics::BigNumber {
IL2CPP_REGISTER_METHOD(0x030FFC60, bool, TryValidateParseStyleInteger, (app::NumberStyles__Enum style, app::ArgumentException * * e));
IL2CPP_REGISTER_METHOD(0x030FFFA0, bool, TryParseBigInteger, (app::ReadOnlySpan_1_Char_ value, app::NumberStyles__Enum style, app::NumberFormatInfo * info, app::BigInteger_2 * result));
IL2CPP_REGISTER_METHODINFO(0x047413B0, BigNumber_TryParseBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031002E0, BigInteger_2, ParseBigInteger_1, (app::String * value, app::NumberStyles__Enum style, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x04720930, BigNumber_ParseBigInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03100550, ReadOnlySpan_1_Char_, AsReadOnlySpan, (app::String * s));
IL2CPP_REGISTER_METHOD(0x03100610, BigInteger_2, ParseBigInteger_2, (app::ReadOnlySpan_1_Char_ value, app::NumberStyles__Enum style, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0475A720, BigNumber_ParseBigInteger_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03100780, bool, HexNumberToBigInteger, (app::BigNumber_BigNumberBuffer * number, app::BigInteger_2 * value));
IL2CPP_REGISTER_METHOD(0x03100970, bool, NumberToBigInteger, (app::BigNumber_BigNumberBuffer * number, app::BigInteger_2 * value));
IL2CPP_REGISTER_METHOD(0x03100C20, uint16_t, ParseFormatSpecifier, (app::String * format, app::int32_t * digits));
IL2CPP_REGISTER_METHOD(0x03100D70, String *, FormatBigIntegerToHexString, (app::BigInteger_2 value, uint16_t format, int32_t digits, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x031011A0, String *, FormatBigInteger, (app::BigInteger_2 value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0470BF60, BigNumber_FormatBigInteger__MethodInfo);
}
