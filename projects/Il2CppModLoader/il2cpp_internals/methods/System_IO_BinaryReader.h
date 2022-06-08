#include <interception_macros.h>

namespace app::methods::System::IO::BinaryReader {
IL2CPP_REGISTER_METHOD(0x01DFD6B0, void, __ctor, (BinaryReader * __this, Stream * input));
IL2CPP_REGISTER_METHOD(0x01DFD820, void, __ctor, (BinaryReader * __this, Stream * input, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01DFD840, void, __ctor, (BinaryReader * __this, Stream * input, Encoding * encoding, bool leaveOpen));
IL2CPP_REGISTER_METHODINFO(0x04723268, BinaryReader__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Stream *, get_BaseStream, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDA90, void, Close, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDAB0, void, Dispose, (BinaryReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01DFDA90, void, Dispose, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDB10, int32_t, PeekChar, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDBD0, int32_t, Read, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDBF0, bool, ReadBoolean, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDC50, uint8_t, ReadByte, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDC90, int8_t, ReadSByte, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDCE0, uint16_t, ReadChar, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDD10, int16_t, ReadInt16, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDD10, uint16_t, ReadUInt16, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDD90, int32_t, ReadInt32, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFDFA0, uint32_t, ReadUInt32, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFE090, int64_t, ReadInt64, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFE090, uint64_t, ReadUInt64, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFE280, float, ReadSingle, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFE2D0, double, ReadDouble, (BinaryReader * __this));
IL2CPP_REGISTER_METHOD(0x01DFE440, Decimal, ReadDecimal, (BinaryReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0473AB80, BinaryReader_ReadDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFE570, String *, ReadString, (BinaryReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BA98, BinaryReader_ReadString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFE820, int32_t, InternalReadChars, (BinaryReader * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0476A898, BinaryReader_InternalReadChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFEB80, int32_t, InternalReadOneChar, (BinaryReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DC70, BinaryReader_InternalReadOneChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFEEA0, Char__Array *, ReadChars, (BinaryReader * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04740450, BinaryReader_ReadChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF030, int32_t, Read, (BinaryReader * __this, Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0478FDF8, BinaryReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF220, Byte__Array *, ReadBytes, (BinaryReader * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04766808, BinaryReader_ReadBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF3F0, void, FillBuffer, (BinaryReader * __this, int32_t numBytes));
IL2CPP_REGISTER_METHODINFO(0x0478CF40, BinaryReader_FillBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF5A0, int32_t, Read7BitEncodedInt, (BinaryReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0473B760, BinaryReader_Read7BitEncodedInt__MethodInfo);
}
