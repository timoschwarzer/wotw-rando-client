#include <interception_macros.h>

namespace app::methods::System::IO::Compression::GZipStream {
    IL2CPP_REGISTER_METHOD(0x02009FA0, void, ctor_1, (app::GZipStream * this_ptr, app::Stream * stream, app::CompressionMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x02009FC0, void, ctor_2, (app::GZipStream * this_ptr, app::Stream * stream, app::CompressionMode__Enum mode, bool leave_open))
    IL2CPP_REGISTER_METHOD(0x0200A160, bool, get_CanRead, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A180, bool, get_CanWrite, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A1A0, bool, get_CanSeek, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A1C0, int64_t, get_Length, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772DC0, GZipStream_get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A220, int64_t, get_Position, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A1E0, GZipStream_get_Position__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A280, void, set_Position, (app::GZipStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04762C48, GZipStream_set_Position__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A2E0, void, Flush, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A310, int64_t, Seek, (app::GZipStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHODINFO(0x04754420, GZipStream_Seek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A370, void, SetLength, (app::GZipStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x0470DD28, GZipStream_SetLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A3D0, int32_t, ReadByte, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A400, app::IAsyncResult *, BeginRead, (app::GZipStream * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::AsyncCallback * async_callback, app::Object * async_state))
    IL2CPP_REGISTER_METHOD(0x0200A500, int32_t, EndRead, (app::GZipStream * this_ptr, app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x0200A580, int32_t, Read, (app::GZipStream * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0200A5B0, app::IAsyncResult *, BeginWrite, (app::GZipStream * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::AsyncCallback * async_callback, app::Object * async_state))
    IL2CPP_REGISTER_METHOD(0x0200A6B0, void, EndWrite, (app::GZipStream * this_ptr, app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x0200A6C0, void, Write, (app::GZipStream * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0200A6F0, void, Dispose, (app::GZipStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x0200A790, app::Task_1_System_Int32_ *, ReadAsync, (app::GZipStream * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0200A7C0, app::Task *, WriteAsync, (app::GZipStream * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0200A7F0, app::Task *, FlushAsync, (app::GZipStream * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0200A820, void, CheckDeflateStream, (app::GZipStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200A840, void, ThrowStreamClosedException, ())
    IL2CPP_REGISTER_METHODINFO(0x0472AF38, GZipStream_ThrowStreamClosedException__MethodInfo)
}
