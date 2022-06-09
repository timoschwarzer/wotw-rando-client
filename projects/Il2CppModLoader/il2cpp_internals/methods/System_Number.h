#include <interception_macros.h>

namespace app::methods::System::Number {
IL2CPP_REGISTER_METHOD(0x0226F7F0, bool, NumberBufferToDecimal, (app::uint8_t * number, app::Decimal * value));
IL2CPP_REGISTER_METHOD(0x0226F800, bool, NumberBufferToDouble, (app::uint8_t * number, app::double * value));
IL2CPP_REGISTER_METHOD(0x0226F860, String *, FormatDecimal, (app::Decimal value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x0226FA00, String *, FormatDouble, (double value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x0226FAC0, String *, FormatInt32, (int32_t value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x0226FCB0, String *, FormatUInt32, (uint32_t value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x0226FE90, String *, FormatInt64, (int64_t value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x02270080, String *, FormatUInt64, (uint64_t value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x02270260, String *, FormatSingle, (float value, app::String * format, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHOD(0x02270320, bool, HexNumberToInt32, (app::Number_NumberBuffer * number, app::int32_t * value));
IL2CPP_REGISTER_METHOD(0x022703A0, bool, HexNumberToInt64, (app::Number_NumberBuffer * number, app::int64_t * value));
IL2CPP_REGISTER_METHOD(0x02270460, bool, HexNumberToUInt32, (app::Number_NumberBuffer * number, app::uint32_t * value));
IL2CPP_REGISTER_METHOD(0x022704E0, bool, HexNumberToUInt64, (app::Number_NumberBuffer * number, app::uint64_t * value));
IL2CPP_REGISTER_METHOD(0x02270570, bool, IsWhite, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x02270590, bool, NumberToInt32, (app::Number_NumberBuffer * number, app::int32_t * value));
IL2CPP_REGISTER_METHOD(0x02270600, bool, NumberToInt64, (app::Number_NumberBuffer * number, app::int64_t * value));
IL2CPP_REGISTER_METHOD(0x02270680, bool, NumberToUInt32, (app::Number_NumberBuffer * number, app::uint32_t * value));
IL2CPP_REGISTER_METHOD(0x022706E0, bool, NumberToUInt64, (app::Number_NumberBuffer * number, app::uint64_t * value));
IL2CPP_REGISTER_METHOD(0x02270750, uint16_t *, MatchChars_1, (app::uint16_t * p, app::String * str));
IL2CPP_REGISTER_METHOD(0x022707A0, uint16_t *, MatchChars_2, (app::uint16_t * p, app::uint16_t * str));
IL2CPP_REGISTER_METHOD(0x022707E0, Decimal, ParseDecimal, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt));
IL2CPP_REGISTER_METHODINFO(0x04734DA0, Number_ParseDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022709A0, double, ParseDouble, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt));
IL2CPP_REGISTER_METHODINFO(0x04703858, Number_ParseDouble__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02270CB0, int32_t, ParseInt32, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info));
IL2CPP_REGISTER_METHODINFO(0x04706920, Number_ParseInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02270F40, int64_t, ParseInt64, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt));
IL2CPP_REGISTER_METHODINFO(0x04701110, Number_ParseInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022711F0, bool, ParseNumber, (app::uint16_t * * str, app::NumberStyles__Enum options, app::Number_NumberBuffer * number, app::StringBuilder * sb, app::NumberFormatInfo * numfmt, bool parse_decimal));
IL2CPP_REGISTER_METHOD(0x02271BF0, float, ParseSingle, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt));
IL2CPP_REGISTER_METHODINFO(0x0472C7D8, Number_ParseSingle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02271F60, uint32_t, ParseUInt32, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt));
IL2CPP_REGISTER_METHODINFO(0x0478EE48, Number_ParseUInt32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02272200, uint64_t, ParseUInt64, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt));
IL2CPP_REGISTER_METHODINFO(0x047639F0, Number_ParseUInt64__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022724B0, void, StringToNumber, (app::String * str, app::NumberStyles__Enum options, app::Number_NumberBuffer * number, app::NumberFormatInfo * info, bool parse_decimal));
IL2CPP_REGISTER_METHODINFO(0x047640E0, Number_StringToNumber__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02272630, bool, TrailingZeros, (app::String * s, int32_t index));
IL2CPP_REGISTER_METHOD(0x02272690, bool, TryParseDecimal, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt, app::Decimal * result));
IL2CPP_REGISTER_METHOD(0x02272840, bool, TryParseDouble, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt, app::double * result));
IL2CPP_REGISTER_METHOD(0x02272A20, bool, TryParseInt32, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info, app::int32_t * result));
IL2CPP_REGISTER_METHOD(0x02272C90, bool, TryParseInt64, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info, app::int64_t * result));
IL2CPP_REGISTER_METHOD(0x02272E90, bool, TryParseSingle, (app::String * value, app::NumberStyles__Enum options, app::NumberFormatInfo * numfmt, app::float * result));
IL2CPP_REGISTER_METHOD(0x02273090, bool, TryParseUInt32, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info, app::uint32_t * result));
IL2CPP_REGISTER_METHOD(0x02273300, bool, TryParseUInt64, (app::String * s, app::NumberStyles__Enum style, app::NumberFormatInfo * info, app::uint64_t * result));
IL2CPP_REGISTER_METHOD(0x02273590, bool, TryStringToNumber_1, (app::String * str, app::NumberStyles__Enum options, app::Number_NumberBuffer * number, app::NumberFormatInfo * numfmt, bool parse_decimal));
IL2CPP_REGISTER_METHOD(0x02273620, bool, TryStringToNumber_2, (app::String * str, app::NumberStyles__Enum options, app::Number_NumberBuffer * number, app::StringBuilder * sb, app::NumberFormatInfo * numfmt, bool parse_decimal));
}
