#include <interception_macros.h>

namespace app::methods::Unity_IO_Compression::GZipStream {
IL2CPP_REGISTER_METHOD(0x02B78E60, void, __ctor_1, (app::GZipStream_2 * this_ptr, app::Stream * stream, app::CompressionMode__Enum_2 mode));
IL2CPP_REGISTER_METHOD(0x02B78E80, void, __ctor_2, (app::GZipStream_2 * this_ptr, app::Stream * stream, app::CompressionMode__Enum_2 mode, bool leave_open));
IL2CPP_REGISTER_METHOD(0x02B79020, void, SetDeflateStreamFileFormatter, (app::GZipStream_2 * this_ptr, app::CompressionMode__Enum_2 mode));
IL2CPP_REGISTER_METHOD(0x0200A160, bool, get_CanRead, (app::GZipStream_2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0200A180, bool, get_CanWrite, (app::GZipStream_2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x0200A1A0, bool, get_CanSeek, (app::GZipStream_2 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02B79310, int64_t, get_Length, (app::GZipStream_2 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047123A0, GZipStream_2_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79380, int64_t, get_Position, (app::GZipStream_2 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047680C0, GZipStream_2_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B793F0, void, set_Position, (app::GZipStream_2 * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0478C3F8, GZipStream_2_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79460, void, Flush, (app::GZipStream_2 * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04759630, GZipStream_2_Flush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79540, int64_t, Seek, (app::GZipStream_2 * this_ptr, int64_t offset, app::SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x04715DB8, GZipStream_2_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B795B0, void, SetLength, (app::GZipStream_2 * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047987D8, GZipStream_2_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79620, IAsyncResult *, BeginRead, (app::GZipStream_2 * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::AsyncCallback * async_callback, app::Object * async_state));
IL2CPP_REGISTER_METHODINFO(0x04739028, GZipStream_2_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79720, int32_t, EndRead, (app::GZipStream_2 * this_ptr, app::IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x0474FAA8, GZipStream_2_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79800, IAsyncResult *, BeginWrite, (app::GZipStream_2 * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::AsyncCallback * async_callback, app::Object * async_state));
IL2CPP_REGISTER_METHODINFO(0x04736518, GZipStream_2_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79900, void, EndWrite, (app::GZipStream_2 * this_ptr, app::IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x04762EA0, GZipStream_2_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B799E0, int32_t, Read, (app::GZipStream_2 * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04748B90, GZipStream_2_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79AE0, void, Write, (app::GZipStream_2 * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047850D8, GZipStream_2_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B79BE0, void, Dispose, (app::GZipStream_2 * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x02B79C80, Stream *, get_BaseStream, (app::GZipStream_2 * this_ptr));
}
