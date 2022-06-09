#include <interception_macros.h>

namespace app::methods::System_Xml::Ucs4Decoder {
IL2CPP_REGISTER_METHOD(0x019512C0, int32_t, GetCharCount, (app::Ucs4Decoder * this_ptr, app::Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHOD(0x019512D0, int32_t, GetChars, (app::Ucs4Decoder * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index));
IL2CPP_REGISTER_METHOD(0x019514D0, void, Convert, (app::Ucs4Decoder * this_ptr, app::Byte__Array * bytes, int32_t byte_index, int32_t byte_count, app::Char__Array * chars, int32_t char_index, int32_t char_count, bool flush, app::int32_t * bytes_used, app::int32_t * chars_used, app::bool * completed));
IL2CPP_REGISTER_METHOD(0x01951750, void, Ucs4ToUTF16, (app::Ucs4Decoder * this_ptr, uint32_t code, app::Char__Array * chars, int32_t char_index));
IL2CPP_REGISTER_METHOD(0x019517E0, void, __ctor, (app::Ucs4Decoder * this_ptr));
}
