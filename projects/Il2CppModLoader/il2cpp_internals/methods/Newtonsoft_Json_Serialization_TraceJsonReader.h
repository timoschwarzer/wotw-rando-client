#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Serialization::TraceJsonReader {
IL2CPP_REGISTER_METHOD(0x01BFCC20, void, __ctor, (app::TraceJsonReader * this_ptr, app::JsonReader * inner_reader));
IL2CPP_REGISTER_METHOD(0x01BFCEE0, String *, GetDeserializedJsonMessage, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFCF10, bool, Read, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFCF90, Nullable_1_Int32_, ReadAsInt32, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD010, String *, ReadAsString, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD090, Byte__Array *, ReadAsBytes, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD110, Nullable_1_Decimal_, ReadAsDecimal, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD1A0, Nullable_1_Double_, ReadAsDouble, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD220, Nullable_1_Boolean_, ReadAsBoolean, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD2A0, Nullable_1_DateTime_, ReadAsDateTime, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD320, Nullable_1_DateTimeOffset_, ReadAsDateTimeOffset, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD3B0, void, WriteCurrentToken, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD400, int32_t, get_Depth, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD430, String *, get_Path, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD460, JsonToken__Enum_1, get_TokenType, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD490, Object *, get_Value, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD4C0, Type *, get_ValueType, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA3500, void, Close, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD4F0, bool, IJsonLineInfo_HasLineInfo, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD590, int32_t, IJsonLineInfo_get_LineNumber, (app::TraceJsonReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFD630, int32_t, IJsonLineInfo_get_LinePosition, (app::TraceJsonReader * this_ptr));
}
