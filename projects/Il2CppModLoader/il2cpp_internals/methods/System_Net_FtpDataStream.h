#include <interception_macros.h>

namespace app::methods::System::Net::FtpDataStream {
IL2CPP_REGISTER_METHOD(0x01D2CC90, void, __ctor, (FtpDataStream * __this, FtpWebRequest * request, Stream * stream, bool isRead));
IL2CPP_REGISTER_METHODINFO(0x0470F1B8, FtpDataStream__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_CanRead, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x01D2CD90, bool, get_CanWrite, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x01D2CDA0, int64_t, get_Length, (FtpDataStream * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C8C8, FtpDataStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CDF0, int64_t, get_Position, (FtpDataStream * __this));
IL2CPP_REGISTER_METHODINFO(0x047722E8, FtpDataStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CE40, void, set_Position, (FtpDataStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0471DD78, FtpDataStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CE90, Stream *, get_NetworkStream, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x01D2CEB0, void, Close, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x01D2CED0, int64_t, Seek, (FtpDataStream * __this, int64_t offset, SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x047128A8, FtpDataStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CF20, void, SetLength, (FtpDataStream * __this, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x047916F8, FtpDataStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2CF70, int32_t, ReadInternal, (FtpDataStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0475BA58, FtpDataStream_ReadInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D0F0, IAsyncResult *, BeginRead, (FtpDataStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHODINFO(0x047649A8, FtpDataStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D420, int32_t, EndRead, (FtpDataStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04741958, FtpDataStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D5F0, int32_t, Read, (FtpDataStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0477CC68, FtpDataStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D7A0, void, WriteInternal, (FtpDataStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x047581F8, FtpDataStream_WriteInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2D8C0, IAsyncResult *, BeginWrite, (FtpDataStream * __this, Byte__Array * buffer, int32_t offset, int32_t size, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04759060, FtpDataStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2DBF0, void, EndWrite, (FtpDataStream * __this, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x04774778, FtpDataStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2DDA0, void, Write, (FtpDataStream * __this, Byte__Array * buffer, int32_t offset, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0470C7C0, FtpDataStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2DF50, void, Finalize, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x01D2DFD0, void, IDisposable_Dispose, (FtpDataStream * __this));
IL2CPP_REGISTER_METHOD(0x01D2E080, void, Dispose, (FtpDataStream * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01D2E110, void, CheckDisposed, (FtpDataStream * __this));
IL2CPP_REGISTER_METHODINFO(0x04776318, FtpDataStream_CheckDisposed__MethodInfo);
}
