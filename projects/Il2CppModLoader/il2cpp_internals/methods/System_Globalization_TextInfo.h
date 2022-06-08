#include <interception_macros.h>

namespace app::methods::System::Globalization::TextInfo {
IL2CPP_REGISTER_METHOD(0x01DED530, TextInfo *, get_Invariant, ());
IL2CPP_REGISTER_METHOD(0x01DED6E0, void, __ctor, (TextInfo * __this, CultureData * cultureData));
IL2CPP_REGISTER_METHOD(0x01DED710, void, OnDeserializing, (TextInfo * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01DED720, void, OnDeserialized, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DED880, void, OnDeserialized, (TextInfo * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01DED890, void, OnSerializing, (TextInfo * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01DED970, int32_t, GetHashCodeOrdinalIgnoreCase, (String * s));
IL2CPP_REGISTER_METHOD(0x01DED9B0, int32_t, GetHashCodeOrdinalIgnoreCase, (String * s, bool forceRandomizedHashing, int64_t additionalEntropy));
IL2CPP_REGISTER_METHOD(0x01DEDA10, int32_t, CompareOrdinalIgnoreCase, (String * str1, String * str2));
IL2CPP_REGISTER_METHOD(0x01DEDA60, int32_t, CompareOrdinalIgnoreCaseEx, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t lengthA, int32_t lengthB));
IL2CPP_REGISTER_METHOD(0x01DEDA70, int32_t, IndexOfStringOrdinalIgnoreCase, (String * source, String * value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01DEDB40, int32_t, LastIndexOfStringOrdinalIgnoreCase, (String * source, String * value, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_CultureName, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsReadOnly, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEDC00, Object *, Clone, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEDDA0, TextInfo *, ReadOnly, (TextInfo * textInfo));
IL2CPP_REGISTER_METHODINFO(0x04770360, TextInfo_ReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00533150, void, SetReadOnlyState, (TextInfo * __this, bool readOnly));
IL2CPP_REGISTER_METHOD(0x01DEDF20, uint16_t, ToLower, (TextInfo * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEDF80, String *, ToLower, (TextInfo * __this, String * str));
IL2CPP_REGISTER_METHODINFO(0x04703838, TextInfo_ToLower_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEE110, uint16_t, ToLowerAsciiInvariant, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEE130, uint16_t, ToUpper, (TextInfo * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEE190, String *, ToUpper, (TextInfo * __this, String * str));
IL2CPP_REGISTER_METHODINFO(0x04711670, TextInfo_ToUpper_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEE320, uint16_t, ToUpperAsciiInvariant, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEE340, bool, IsAscii, (uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEE350, bool, get_IsAsciiCasingSameAsInvariant, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEE510, bool, Equals, (TextInfo * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01950620, int32_t, GetHashCode, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DEE600, String *, ToString, (TextInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DED880, void, IDeserializationCallback_OnDeserialization, (TextInfo * __this, Object * sender));
IL2CPP_REGISTER_METHOD(0x01DEE6A0, int32_t, GetCaseInsensitiveHashCode, (TextInfo * __this, String * str));
IL2CPP_REGISTER_METHOD(0x01DEE6C0, int32_t, GetCaseInsensitiveHashCode, (TextInfo * __this, String * str, bool forceRandomizedHashing, int64_t additionalEntropy));
IL2CPP_REGISTER_METHODINFO(0x0472C1A0, TextInfo_GetCaseInsensitiveHashCode_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DEE8F0, int32_t, GetInvariantCaseInsensitiveHashCode, (TextInfo * __this, String * str));
IL2CPP_REGISTER_METHOD(0x01DEEA40, String *, ToUpperInternal, (TextInfo * __this, String * str));
IL2CPP_REGISTER_METHOD(0x01DEEB50, String *, ToLowerInternal, (TextInfo * __this, String * str));
IL2CPP_REGISTER_METHOD(0x01DEEC60, uint16_t, ToUpperInternal, (TextInfo * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEF400, uint16_t, ToLowerInternal, (TextInfo * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x01DEFAF0, int32_t, InternalCompareStringOrdinalIgnoreCase, (String * strA, int32_t indexA, String * strB, int32_t indexB, int32_t lenA, int32_t lenB));
IL2CPP_REGISTER_METHOD(0x01DEFCC0, void, __ctor, (TextInfo * __this));
IL2CPP_REGISTER_METHODINFO(0x0473BD78, TextInfo__ctor_1__MethodInfo);
}
