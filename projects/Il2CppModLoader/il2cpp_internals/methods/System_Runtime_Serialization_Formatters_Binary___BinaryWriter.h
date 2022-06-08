#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter {
IL2CPP_REGISTER_METHOD(0x01ED1880, void, __ctor, (_BinaryWriter * __this, Stream * sout, ObjectWriter * objectWriter, FormatterTypeStyle__Enum formatterTypeStyle));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteBegin, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01D612D0, void, WriteEnd, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED1A10, void, WriteBoolean, (_BinaryWriter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01ED1A40, void, WriteByte, (_BinaryWriter * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01D61480, void, WriteBytes, (_BinaryWriter * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x01ED1A70, void, WriteBytes, (_BinaryWriter * __this, Byte__Array * byteA, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHOD(0x01D61390, void, WriteChar, (_BinaryWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01ED1AA0, void, WriteChars, (_BinaryWriter * __this, Char__Array * value));
IL2CPP_REGISTER_METHOD(0x01ED1AD0, void, WriteDecimal, (_BinaryWriter * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x01ED1BC0, void, WriteSingle, (_BinaryWriter * __this, float value));
IL2CPP_REGISTER_METHOD(0x01D613F0, void, WriteDouble, (_BinaryWriter * __this, double value));
IL2CPP_REGISTER_METHOD(0x01ED1BF0, void, WriteInt16, (_BinaryWriter * __this, int16_t value));
IL2CPP_REGISTER_METHOD(0x01ED1C20, void, WriteInt32, (_BinaryWriter * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01ED1C50, void, WriteInt64, (_BinaryWriter * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x01ED1A40, void, WriteSByte, (_BinaryWriter * __this, int8_t value));
IL2CPP_REGISTER_METHOD(0x01ED1C80, void, WriteString, (_BinaryWriter * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01ED1C50, void, WriteTimeSpan, (_BinaryWriter * __this, TimeSpan value));
IL2CPP_REGISTER_METHOD(0x01ED1C50, void, WriteDateTime, (_BinaryWriter * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x01ED1CB0, void, WriteUInt16, (_BinaryWriter * __this, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01ED1CE0, void, WriteUInt32, (_BinaryWriter * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01D61600, void, WriteUInt64, (_BinaryWriter * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteObjectEnd, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * typeNameInfo));
IL2CPP_REGISTER_METHOD(0x01ED1D10, void, WriteSerializationHeaderEnd, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED1E80, void, WriteSerializationHeader, (_BinaryWriter * __this, int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion));
IL2CPP_REGISTER_METHOD(0x01ED20C0, void, WriteMethodCall, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED2230, void, WriteMethodReturn, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED23A0, void, WriteObject, (_BinaryWriter * __this, NameInfo * nameInfo, NameInfo * typeNameInfo, int32_t numMembers, String__Array * memberNames, Type__Array * memberTypes, WriteObjectInfo__Array * memberObjectInfos));
IL2CPP_REGISTER_METHOD(0x01ED2F10, void, WriteObjectString, (_BinaryWriter * __this, int32_t objectId, String * value));
IL2CPP_REGISTER_METHOD(0x01ED3110, void, WriteSingleArray, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * arrayNameInfo, WriteObjectInfo * objectInfo, NameInfo * arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, Array * array));
IL2CPP_REGISTER_METHOD(0x01ED3590, void, WriteArrayAsBytes, (_BinaryWriter * __this, Array * array, int32_t typeLength));
IL2CPP_REGISTER_METHOD(0x01ED3870, void, WriteJaggedArray, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * arrayNameInfo, WriteObjectInfo * objectInfo, NameInfo * arrayElemTypeNameInfo, int32_t length, int32_t lowerBound));
IL2CPP_REGISTER_METHOD(0x01ED3B90, void, WriteRectangleArray, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * arrayNameInfo, WriteObjectInfo * objectInfo, NameInfo * arrayElemTypeNameInfo, int32_t rank, Int32__Array * lengthA, Int32__Array * lowerBoundA));
IL2CPP_REGISTER_METHOD(0x01ED3E70, void, WriteObjectByteArray, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * arrayNameInfo, WriteObjectInfo * objectInfo, NameInfo * arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, Byte__Array * byteA));
IL2CPP_REGISTER_METHOD(0x01ED3ED0, void, WriteMember, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * typeNameInfo, Object * value));
IL2CPP_REGISTER_METHOD(0x01ED4200, void, WriteNullMember, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * typeNameInfo));
IL2CPP_REGISTER_METHOD(0x01ED43B0, void, WriteMemberObjectRef, (_BinaryWriter * __this, NameInfo * memberNameInfo, int32_t idRef));
IL2CPP_REGISTER_METHOD(0x01ED4590, void, WriteMemberNested, (_BinaryWriter * __this, NameInfo * memberNameInfo));
IL2CPP_REGISTER_METHOD(0x01ED45C0, void, WriteMemberString, (_BinaryWriter * __this, NameInfo * memberNameInfo, NameInfo * typeNameInfo, String * value));
IL2CPP_REGISTER_METHOD(0x01ED4630, void, WriteItem, (_BinaryWriter * __this, NameInfo * itemNameInfo, NameInfo * typeNameInfo, Object * value));
IL2CPP_REGISTER_METHOD(0x01ED4690, void, WriteNullItem, (_BinaryWriter * __this, NameInfo * itemNameInfo, NameInfo * typeNameInfo));
IL2CPP_REGISTER_METHOD(0x01ED46A0, void, WriteDelayedNullItem, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED46B0, void, WriteItemEnd, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED46C0, void, InternalWriteItemNull, (_BinaryWriter * __this));
IL2CPP_REGISTER_METHOD(0x01ED4850, void, WriteItemObjectRef, (_BinaryWriter * __this, NameInfo * nameInfo, int32_t idRef));
IL2CPP_REGISTER_METHOD(0x01ED4890, void, WriteAssembly, (_BinaryWriter * __this, Type * type, String * assemblyString, int32_t assemId, bool isNew));
IL2CPP_REGISTER_METHOD(0x01ED4AB0, void, WriteValue, (_BinaryWriter * __this, InternalPrimitiveTypeE__Enum code, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04729158, _BinaryWriter_WriteValue__MethodInfo);
}
