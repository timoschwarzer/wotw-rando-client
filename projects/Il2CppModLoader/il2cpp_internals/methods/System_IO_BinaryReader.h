#include <interception_macros.h>

namespace app::methods::System_IO::BinaryReader {
IL2CPP_REGISTER_METHOD(0x01DFD6B0, void, __ctor_1, (app::BinaryReader * this_ptr, app::Stream * input));
IL2CPP_REGISTER_METHOD(0x01DFD820, void, __ctor_2, (app::BinaryReader * this_ptr, app::Stream * input, app::Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01DFD840, void, __ctor_3, (app::BinaryReader * this_ptr, app::Stream * input, app::Encoding * encoding, bool leave_open));
IL2CPP_REGISTER_METHODINFO(0x04723268, BinaryReader__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Stream *, get_BaseStream, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDA90, void, Close, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDAB0, void, Dispose_1, (app::BinaryReader * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x01DFDA90, void, Dispose_2, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDB10, int32_t, PeekChar, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDBD0, int32_t, Read_1, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDBF0, bool, ReadBoolean, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDC50, uint8_t, ReadByte, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDC90, int8_t, ReadSByte, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDCE0, uint16_t, ReadChar, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDD10, int16_t, ReadInt16, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDD10, uint16_t, ReadUInt16, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDD90, int32_t, ReadInt32, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFDFA0, uint32_t, ReadUInt32, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFE090, int64_t, ReadInt64, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFE090, uint64_t, ReadUInt64, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFE280, float, ReadSingle, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFE2D0, double, ReadDouble, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DFE440, Decimal, ReadDecimal, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473AB80, BinaryReader_ReadDecimal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFE570, String *, ReadString, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0475BA98, BinaryReader_ReadString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFE820, int32_t, InternalReadChars, (app::BinaryReader * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0476A898, BinaryReader_InternalReadChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFEB80, int32_t, InternalReadOneChar, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474DC70, BinaryReader_InternalReadOneChar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFEEA0, Char__Array *, ReadChars, (app::BinaryReader * this_ptr, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04740450, BinaryReader_ReadChars__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF030, int32_t, Read_2, (app::BinaryReader * this_ptr, app::Byte__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0478FDF8, BinaryReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF220, Byte__Array *, ReadBytes, (app::BinaryReader * this_ptr, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04766808, BinaryReader_ReadBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF3F0, void, FillBuffer, (app::BinaryReader * this_ptr, int32_t num_bytes));
IL2CPP_REGISTER_METHODINFO(0x0478CF40, BinaryReader_FillBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DFF5A0, int32_t, Read7BitEncodedInt, (app::BinaryReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473B760, BinaryReader_Read7BitEncodedInt__MethodInfo);
}
