#include <interception_macros.h>

namespace app::methods::System_Net::FtpDataStream {
IL2CPP_REGISTER_METHOD(0x01D2CC90, void, __ctor, (app::FtpDataStream * this_ptr, app::FtpWebRequest * request, app::Stream * stream, bool is_read));
IL2CPP_REGISTER_METHODINFO(0x0470F1B8, FtpDataStream__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_CanRead, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2CD90, bool, get_CanWrite, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2CDA0, int64_t, get_Length, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0470C8C8, FtpDataStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CDF0, int64_t, get_Position, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047722E8, FtpDataStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CE40, void, set_Position, (app::FtpDataStream * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0471DD78, FtpDataStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CE90, Stream *, get_NetworkStream, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2CEB0, void, Close, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2CED0, int64_t, Seek, (app::FtpDataStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x047128A8, FtpDataStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CF20, void, SetLength, (app::FtpDataStream * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047916F8, FtpDataStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CF70, int32_t, ReadInternal, (app::FtpDataStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0475BA58, FtpDataStream_ReadInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D0F0, IAsyncResult *, BeginRead, (app::FtpDataStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size, app::AsyncCallback * cb, app::Object * state));
IL2CPP_REGISTER_METHODINFO(0x047649A8, FtpDataStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D420, int32_t, EndRead, (app::FtpDataStream * this_ptr, app::IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x04741958, FtpDataStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D5F0, int32_t, Read, (app::FtpDataStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0477CC68, FtpDataStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D7A0, void, WriteInternal, (app::FtpDataStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x047581F8, FtpDataStream_WriteInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D8C0, IAsyncResult *, BeginWrite, (app::FtpDataStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size, app::AsyncCallback * cb, app::Object * state));
IL2CPP_REGISTER_METHODINFO(0x04759060, FtpDataStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2DBF0, void, EndWrite, (app::FtpDataStream * this_ptr, app::IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x04774778, FtpDataStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2DDA0, void, Write, (app::FtpDataStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0470C7C0, FtpDataStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2DF50, void, Finalize, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2DFD0, void, IDisposable_Dispose, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2E080, void, Dispose, (app::FtpDataStream * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x01D2E110, void, CheckDisposed, (app::FtpDataStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04776318, FtpDataStream_CheckDisposed__MethodInfo);
}
