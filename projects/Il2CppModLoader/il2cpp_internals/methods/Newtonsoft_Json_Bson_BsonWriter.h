#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Bson::BsonWriter {
IL2CPP_REGISTER_METHOD(0x01A4ABC0, void, WriteEnd, (BsonWriter * __this, JsonToken__Enum_1 token));
IL2CPP_REGISTER_METHOD(0x01A4AC30, void, WriteComment, (BsonWriter * __this, String * text));
IL2CPP_REGISTER_METHODINFO(0x0472D468, BsonWriter_WriteComment__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4AC80, void, WriteStartConstructor, (BsonWriter * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04787DA0, BsonWriter_WriteStartConstructor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4ACD0, void, WriteRaw, (BsonWriter * __this, String * json));
IL2CPP_REGISTER_METHODINFO(0x047487B0, BsonWriter_WriteRaw__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4AD20, void, WriteRawValue, (BsonWriter * __this, String * json));
IL2CPP_REGISTER_METHODINFO(0x04743018, BsonWriter_WriteRawValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4AD70, void, WriteStartArray, (BsonWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A4B010, void, WriteStartObject, (BsonWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A4B2B0, void, WritePropertyName, (BsonWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01A4B2E0, void, Close, (BsonWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A4B360, void, AddParent, (BsonWriter * __this, BsonToken * container));
IL2CPP_REGISTER_METHOD(0x01A4B390, void, RemoveParent, (BsonWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A4B3B0, void, AddValue, (BsonWriter * __this, Object * value, BsonType__Enum type));
IL2CPP_REGISTER_METHOD(0x01A4B510, void, AddToken, (BsonWriter * __this, BsonToken * token));
IL2CPP_REGISTER_METHODINFO(0x04739E08, BsonWriter_AddToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4B7A0, void, WriteValue, (BsonWriter * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01A4BA10, void, WriteNull, (BsonWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A4BAE0, void, WriteUndefined, (BsonWriter * __this));
IL2CPP_REGISTER_METHOD(0x01A4BBB0, void, WriteValue, (BsonWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01A4BD60, void, WriteValue, (BsonWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01A4BE20, void, WriteValue, (BsonWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHODINFO(0x0474A528, BsonWriter_WriteValue_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4BF10, void, WriteValue, (BsonWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01A4BFD0, void, WriteValue, (BsonWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHODINFO(0x04726090, BsonWriter_WriteValue_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4C0D0, void, WriteValue, (BsonWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x01A4C190, void, WriteValue, (BsonWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x01A4C250, void, WriteValue, (BsonWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01A4C360, void, WriteValue, (BsonWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01A4C420, void, WriteValue, (BsonWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01A4C4E0, void, WriteValue, (BsonWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01A4C690, void, WriteValue, (BsonWriter * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01A4C750, void, WriteValue, (BsonWriter * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x01A4C810, void, WriteValue, (BsonWriter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x01A4C8D0, void, WriteValue, (BsonWriter * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x01A4C9C0, void, WriteValue, (BsonWriter * __this, DateTimeOffset value));
IL2CPP_REGISTER_METHOD(0x01A4CA80, void, WriteValue, (BsonWriter * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x01A4CC20, void, WriteValue, (BsonWriter * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x01A4CDA0, void, WriteValue, (BsonWriter * __this, TimeSpan value));
IL2CPP_REGISTER_METHOD(0x01A4CF20, void, WriteValue, (BsonWriter * __this, Uri * value));
IL2CPP_REGISTER_METHOD(0x01A4D0E0, void, WriteObjectId, (BsonWriter * __this, Byte__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0472A4B8, BsonWriter_WriteObjectId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A4D240, void, WriteRegex, (BsonWriter * __this, String * pattern, String * options));
}
