#include <interception_macros.h>

namespace app::methods::System_Net::WebUtility_UrlDecoder {
    IL2CPP_REGISTER_METHOD(0x021BB4D0, void, FlushBytes, (app::WebUtility_UrlDecoder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x021BB540, void, __ctor, (app::WebUtility_UrlDecoder * this_ptr, int32_t buffer_size, app::Encoding * encoding));
    IL2CPP_REGISTER_METHOD(0x021BB5E0, void, AddChar, (app::WebUtility_UrlDecoder * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x021BB690, void, AddByte, (app::WebUtility_UrlDecoder * this_ptr, uint8_t b));
    IL2CPP_REGISTER_METHOD(0x021BB760, app::String *, GetString, (app::WebUtility_UrlDecoder * this_ptr));
}
