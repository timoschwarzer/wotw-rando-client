#include <interception_macros.h>

namespace app::methods::System::Globalization::CultureData {
IL2CPP_REGISTER_METHOD(0x002FBB70, void, __ctor, (CultureData * __this, String * name));
IL2CPP_REGISTER_METHOD(0x025F3860, CultureData *, get_Invariant, ());
IL2CPP_REGISTER_METHOD(0x025F3D40, CultureData *, GetCultureData, (String * cultureName, bool useUserOverride));
IL2CPP_REGISTER_METHOD(0x025F3ED0, CultureData *, GetCultureData, (String * cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId, int32_t numberIndex, String * iso2lang, int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage, int32_t ebcdicCodePage, bool rightToLeft, String * listSeparator));
IL2CPP_REGISTER_METHOD(0x00420EE0, CultureData *, GetCultureData, (int32_t culture, bool bUseUserOverride));
IL2CPP_REGISTER_METHOD(0x025F4170, void, fill_culture_data, (CultureData * __this, int32_t datetimeIndex));
IL2CPP_REGISTER_METHOD(0x025F4270, CalendarData *, GetCalendar, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4490, String__Array *, get_LongTimes, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x025F44A0, String__Array *, get_ShortTimes, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_SISO639LANGNAME, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_IFIRSTDAYOFWEEK, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_IFIRSTWEEKOFYEAR, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_SAM1159, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_SPM2359, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_TimeSeparator, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x025F44B0, Int32__Array *, get_CalendarIds, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x025F46B0, bool, get_IsInvariantCulture, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_CultureName, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x025F46D0, String *, get_SCOMPAREINFO, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_STEXTINFO, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ILANGUAGE, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_UseUserOverride, (CultureData * __this));
IL2CPP_REGISTER_METHOD(0x025F4750, String__Array *, EraNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4770, String__Array *, AbbrevEraNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4790, String__Array *, AbbreviatedEnglishEraNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F47B0, String__Array *, ShortDates, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F47D0, String__Array *, LongDates, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F47F0, String__Array *, YearMonths, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4810, String__Array *, DayNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4830, String__Array *, AbbreviatedDayNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4850, String__Array *, MonthNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4870, String__Array *, GenitiveMonthNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4890, String__Array *, AbbreviatedMonthNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F48B0, String__Array *, AbbreviatedGenitiveMonthNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F48E0, String__Array *, LeapYearMonthNames, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4910, String *, MonthDay, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4930, String *, DateSeparator, (CultureData * __this, int32_t calendarId));
IL2CPP_REGISTER_METHOD(0x025F4980, String *, GetDateSeparator, (String * format));
IL2CPP_REGISTER_METHOD(0x025F4B00, String *, GetSeparator, (String * format, String * timeParts));
IL2CPP_REGISTER_METHOD(0x025F4C30, int32_t, IndexOfTimePart, (String * format, int32_t startIndex, String * timeParts));
IL2CPP_REGISTER_METHOD(0x025F4D30, String *, UnescapeNlsString, (String * str, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x004C50A0, String__Array *, ReescapeWin32Strings, (String__Array * array));
IL2CPP_REGISTER_METHOD(0x004C50A0, String *, ReescapeWin32String, (String * str));
IL2CPP_REGISTER_METHOD(0x025F5090, void, GetNFIValues, (CultureData * __this, NumberFormatInfo * nfi));
IL2CPP_REGISTER_METHOD(0x025F50F0, void, fill_number_data, (NumberFormatInfo * nfi, int32_t numberIndex));
}
