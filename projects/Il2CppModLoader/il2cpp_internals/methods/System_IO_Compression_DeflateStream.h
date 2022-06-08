#include <interception_macros.h>

namespace app::methods::System::IO::Compression::DeflateStream {
IL2CPP_REGISTER_METHOD(0x02006900, void, __ctor, (DeflateStream * __this, Stream * stream, CompressionMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x02006920, void, __ctor, (DeflateStream * __this, Stream * stream, CompressionMode__Enum mode, bool leaveOpen, int32_t windowsBits));
IL2CPP_REGISTER_METHOD(0x02006940, void, __ctor, (DeflateStream * __this, Stream * compressedStream, CompressionMode__Enum mode, bool leaveOpen, bool gzip));
IL2CPP_REGISTER_METHODINFO(0x0470CF00, DeflateStream__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006AC0, void, Dispose, (DeflateStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02006B30, int32_t, ReadInternal, (DeflateStream * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047309E0, DeflateStream_ReadInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006C70, int32_t, Read, (DeflateStream * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0473A768, DeflateStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006F90, void, WriteInternal, (DeflateStream * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04725330, DeflateStream_WriteInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020070C0, void, Write, (DeflateStream * __this, Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0471D3A0, DeflateStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020073E0, void, Flush, (DeflateStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F230, DeflateStream_Flush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020075C0, IAsyncResult *, BeginRead, (DeflateStream * __this, Byte__Array * array, int32_t offset, int32_t count, AsyncCallback * asyncCallback, Object * asyncState));
IL2CPP_REGISTER_METHODINFO(0x04712F08, DeflateStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02007990, IAsyncResult *, BeginWrite, (DeflateStream * __this, Byte__Array * array, int32_t offset, int32_t count, AsyncCallback * asyncCallback, Object * asyncState));
IL2CPP_REGISTER_METHODINFO(0x0473B1E0, DeflateStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02007D60, int32_t, EndRead, (DeflateStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04764888, DeflateStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02007F30, void, EndWrite, (DeflateStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04744690, DeflateStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020080E0, int64_t, Seek, (DeflateStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x0475CDA0, DeflateStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02008130, void, SetLength, (DeflateStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0475C928, DeflateStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02008180, bool, get_CanRead, (DeflateStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (DeflateStream * __this));
IL2CPP_REGISTER_METHOD(0x020081C0, bool, get_CanWrite, (DeflateStream * __this));
IL2CPP_REGISTER_METHOD(0x02008200, int64_t, get_Length, (DeflateStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0474FFE8, DeflateStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02008250, int64_t, get_Position, (DeflateStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B240, DeflateStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020082A0, void, set_Position, (DeflateStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04795C78, DeflateStream_set_Position__MethodInfo);
}
