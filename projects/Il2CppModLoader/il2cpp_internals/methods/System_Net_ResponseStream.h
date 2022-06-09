#include <interception_macros.h>

namespace app::methods::System_Net::ResponseStream {
IL2CPP_REGISTER_METHOD(0x01BCF150, void, __ctor, (app::ResponseStream * this_ptr, app::Stream * stream, app::HttpListenerResponse * response, bool ignore_errors));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanRead, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BCF210, int64_t, get_Length, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04794B30, ResponseStream_get_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF260, int64_t, get_Position, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04791688, ResponseStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF2B0, void, set_Position, (app::ResponseStream * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04769F68, ResponseStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCF300, void, Close, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BCF5A0, MemoryStream *, GetHeaders, (app::ResponseStream * this_ptr, bool closing));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::ResponseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BCF840, Byte__Array *, GetChunkSizeBytes, (int32_t size, bool final_1));
IL2CPP_REGISTER_METHOD(0x01BCF970, void, InternalWrite, (app::ResponseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x01BCFA80, void, Write, (app::ResponseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477CA70, ResponseStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCFDF0, IAsyncResult *, BeginWrite, (app::ResponseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * cback, app::Object * state));
IL2CPP_REGISTER_METHODINFO(0x0477D8D0, ResponseStream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD00B0, void, EndWrite, (app::ResponseStream * this_ptr, app::IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x04778778, ResponseStream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0310, int32_t, Read, (app::ResponseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04784DF8, ResponseStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0360, IAsyncResult *, BeginRead, (app::ResponseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * cback, app::Object * state));
IL2CPP_REGISTER_METHODINFO(0x0478CB80, ResponseStream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD03B0, int32_t, EndRead, (app::ResponseStream * this_ptr, app::IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x047187C0, ResponseStream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0400, int64_t, Seek, (app::ResponseStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x0471A730, ResponseStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD0450, void, SetLength, (app::ResponseStream * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x04711C58, ResponseStream_SetLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BD04A0, void, __cctor, ());
}
