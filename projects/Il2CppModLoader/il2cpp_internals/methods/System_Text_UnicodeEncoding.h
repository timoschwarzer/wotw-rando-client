#include <interception_macros.h>

namespace app::methods::System::Text::UnicodeEncoding {
IL2CPP_REGISTER_METHOD(0x027D2EB0, void, __ctor, (UnicodeEncoding * __this));
IL2CPP_REGISTER_METHOD(0x027D2EE0, void, __ctor, (UnicodeEncoding * __this, bool bigEndian, bool byteOrderMark));
IL2CPP_REGISTER_METHOD(0x027D2F30, void, __ctor, (UnicodeEncoding * __this, bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes));
IL2CPP_REGISTER_METHOD(0x00447380, void, OnDeserializing, (UnicodeEncoding * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x027D2FA0, void, SetDefaultFallbacks, (UnicodeEncoding * __this));
IL2CPP_REGISTER_METHOD(0x027D31F0, int32_t, GetByteCount, (UnicodeEncoding * __this, Char__Array * chars, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0472E098, UnicodeEncoding_GetByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D33C0, int32_t, GetByteCount, (UnicodeEncoding * __this, String * s));
IL2CPP_REGISTER_METHODINFO(0x04718D00, UnicodeEncoding_GetByteCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D34A0, int32_t, GetByteCount, (UnicodeEncoding * __this, uint16_t * chars, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04716F18, UnicodeEncoding_GetByteCount_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D35E0, int32_t, GetBytes, (UnicodeEncoding * __this, String * s, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x04714590, UnicodeEncoding_GetBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D3870, int32_t, GetBytes, (UnicodeEncoding * __this, Char__Array * chars, int32_t charIndex, int32_t charCount, Byte__Array * bytes, int32_t byteIndex));
IL2CPP_REGISTER_METHODINFO(0x047130B8, UnicodeEncoding_GetBytes_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D3B10, int32_t, GetBytes, (UnicodeEncoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x0478E310, UnicodeEncoding_GetBytes_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D3C90, int32_t, GetCharCount, (UnicodeEncoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0475E3D0, UnicodeEncoding_GetCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D3E60, int32_t, GetCharCount, (UnicodeEncoding * __this, uint8_t * bytes, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04716FD0, UnicodeEncoding_GetCharCount_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D3FA0, int32_t, GetChars, (UnicodeEncoding * __this, Byte__Array * bytes, int32_t byteIndex, int32_t byteCount, Char__Array * chars, int32_t charIndex));
IL2CPP_REGISTER_METHODINFO(0x0473F420, UnicodeEncoding_GetChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D4240, int32_t, GetChars, (UnicodeEncoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x0477EC38, UnicodeEncoding_GetChars_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D43C0, String *, GetString, (UnicodeEncoding * __this, Byte__Array * bytes, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0472F2A8, UnicodeEncoding_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D4590, int32_t, GetByteCount, (UnicodeEncoding * __this, uint16_t * chars, int32_t count, EncoderNLS * encoder));
IL2CPP_REGISTER_METHODINFO(0x04742530, UnicodeEncoding_GetByteCount_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D4E40, int32_t, GetBytes, (UnicodeEncoding * __this, uint16_t * chars, int32_t charCount, uint8_t * bytes, int32_t byteCount, EncoderNLS * encoder));
IL2CPP_REGISTER_METHODINFO(0x0478AC68, UnicodeEncoding_GetBytes_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D5970, int32_t, GetCharCount, (UnicodeEncoding * __this, uint8_t * bytes, int32_t count, DecoderNLS * baseDecoder));
IL2CPP_REGISTER_METHOD(0x027D63A0, int32_t, GetChars, (UnicodeEncoding * __this, uint8_t * bytes, int32_t byteCount, uint16_t * chars, int32_t charCount, DecoderNLS * baseDecoder));
IL2CPP_REGISTER_METHOD(0x027D6F20, Encoder *, GetEncoder, (UnicodeEncoding * __this));
IL2CPP_REGISTER_METHOD(0x027D7090, Decoder *, GetDecoder, (UnicodeEncoding * __this));
IL2CPP_REGISTER_METHOD(0x027D7200, Byte__Array *, GetPreamble, (UnicodeEncoding * __this));
IL2CPP_REGISTER_METHOD(0x027D7360, int32_t, GetMaxByteCount, (UnicodeEncoding * __this, int32_t charCount));
IL2CPP_REGISTER_METHODINFO(0x0476B160, UnicodeEncoding_GetMaxByteCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D74D0, int32_t, GetMaxCharCount, (UnicodeEncoding * __this, int32_t byteCount));
IL2CPP_REGISTER_METHODINFO(0x047560C0, UnicodeEncoding_GetMaxCharCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D7650, bool, Equals, (UnicodeEncoding * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x027D77C0, int32_t, GetHashCode, (UnicodeEncoding * __this));
IL2CPP_REGISTER_METHOD(0x027D7860, void, __cctor, ());
}
