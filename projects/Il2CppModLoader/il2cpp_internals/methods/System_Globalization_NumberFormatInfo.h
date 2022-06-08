#include <interception_macros.h>

namespace app::methods::System::Globalization::NumberFormatInfo {
IL2CPP_REGISTER_METHOD(0x01DE9EB0, void, __ctor, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DE9EC0, void, OnSerializing, (NumberFormatInfo * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserializing, (NumberFormatInfo * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeserialized, (NumberFormatInfo * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01DE9FE0, void, __ctor, (NumberFormatInfo * __this, CultureData * cultureData));
IL2CPP_REGISTER_METHOD(0x01DEA630, NumberFormatInfo *, get_InvariantInfo, ());
IL2CPP_REGISTER_METHOD(0x01DEA7E0, NumberFormatInfo *, GetInstance, (IFormatProvider * formatProvider));
IL2CPP_REGISTER_METHOD(0x01DEA970, Object *, Clone, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x0063D090, int32_t, get_CurrencyDecimalDigits, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_CurrencyDecimalSeparator, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsReadOnly, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEAAB0, Int32__Array *, get_CurrencyGroupSizes, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEABF0, Int32__Array *, get_NumberGroupSizes, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEAD30, Int32__Array *, get_PercentGroupSizes, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_CurrencyGroupSeparator, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_CurrencySymbol, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEAE70, NumberFormatInfo *, get_CurrentInfo, ());
IL2CPP_REGISTER_METHOD(0x002FBBA0, String *, get_NaNSymbol, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_CurrencyNegativePattern, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x00855600, int32_t, get_NumberNegativePattern, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x008519C0, int32_t, get_PercentPositivePattern, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x003FFCE0, int32_t, get_PercentNegativePattern, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, String *, get_NegativeInfinitySymbol, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_NegativeSign, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x005035C0, int32_t, get_NumberDecimalDigits, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_NumberDecimalSeparator, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_NumberGroupSeparator, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x0062C500, int32_t, get_CurrencyPositivePattern, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_PositiveInfinitySymbol, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_PositiveSign, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x008468B0, int32_t, get_PercentDecimalDigits, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, String *, get_PercentDecimalSeparator, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_PercentGroupSeparator, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_PercentSymbol, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, String *, get_PerMilleSymbol, (NumberFormatInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEAFA0, Object *, GetFormat, (NumberFormatInfo * __this, Type * formatType));
IL2CPP_REGISTER_METHOD(0x01DEB070, NumberFormatInfo *, ReadOnly, (NumberFormatInfo * nfi));
IL2CPP_REGISTER_METHODINFO(0x04754570, NumberFormatInfo_ReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEB200, void, ValidateParseStyleInteger, (NumberStyles__Enum style));
IL2CPP_REGISTER_METHODINFO(0x047920B8, NumberFormatInfo_ValidateParseStyleInteger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEB320, void, ValidateParseStyleFloatingPoint, (NumberStyles__Enum style));
IL2CPP_REGISTER_METHODINFO(0x04745AD0, NumberFormatInfo_ValidateParseStyleFloatingPoint__MethodInfo);
}
