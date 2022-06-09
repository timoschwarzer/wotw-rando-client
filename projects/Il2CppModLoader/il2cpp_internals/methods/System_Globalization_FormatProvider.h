#include <interception_macros.h>

namespace app::methods::System_Globalization::FormatProvider {
IL2CPP_REGISTER_METHOD(0x030F4FA0, String *, FormatBigInteger, (int32_t precision, int32_t scale, bool sign, app::String * format, app::NumberFormatInfo * number_format_info, app::Char__Array * digits, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x030F5200, bool, TryStringToBigInteger, (app::ReadOnlySpan_1_Char_ s, app::NumberStyles__Enum styles, app::NumberFormatInfo * number_format_info, app::StringBuilder * receiver, app::int32_t * precision, app::int32_t * scale, app::bool * sign));
}
