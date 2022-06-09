#include <interception_macros.h>

namespace app::methods::System_Globalization::TimeSpanFormat_FormatLiterals {
IL2CPP_REGISTER_METHOD(0x001D3A80, String *, get_Start, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D3AC0, String *, get_DayHourSep, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D3B00, String *, get_HourMinuteSep, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D3B40, String *, get_MinuteSecondSep, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D3B80, String *, get_SecondFractionSep, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001D3BC0, String *, get_End, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DF1840, TimeSpanFormat_FormatLiterals, InitInvariant, (bool is_negative));
IL2CPP_REGISTER_METHOD(0x001D3C00, void, Init, (app::TimeSpanFormat_FormatLiterals__Boxed * this_ptr, app::String * format, bool use_invariant_field_lengths));
}
