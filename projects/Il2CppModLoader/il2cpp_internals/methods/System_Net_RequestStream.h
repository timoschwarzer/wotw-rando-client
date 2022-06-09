#include <interception_macros.h>

namespace app::methods::System_Net::RequestStream {
    IL2CPP_REGISTER_METHOD(0x01BCE410, void, __ctor_1, (app::RequestStream * this_ptr, app::Stream * stream, app::Byte__Array * buffer, int32_t offset, int32_t length));
    IL2CPP_REGISTER_METHOD(0x01BCE440, void, __ctor_2, (app::RequestStream * this_ptr, app::Stream * stream, app::Byte__Array * buffer, int32_t offset, int32_t length, int64_t contentlength));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanWrite, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BCE510, int64_t, get_Length, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04719E50, RequestStream_get_Length__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCE560, int64_t, get_Position, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0478D6C0, RequestStream_get_Position__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCE5B0, void, set_Position, (app::RequestStream * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x04723788, RequestStream_set_Position__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01132D30, void, Close, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::RequestStream * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BCE600, int32_t, FillFromBuffer, (app::RequestStream * this_ptr, app::Byte__Array * buffer, int32_t off, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04718220, RequestStream_FillFromBuffer__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCE8F0, int32_t, Read, (app::RequestStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0478AAC8, RequestStream_Read__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCEA80, app::IAsyncResult *, BeginRead, (app::RequestStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * cback, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x047733D8, RequestStream_BeginRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCED70, int32_t, EndRead, (app::RequestStream * this_ptr, app::IAsyncResult * ares));
    IL2CPP_REGISTER_METHODINFO(0x0471DA18, RequestStream_EndRead__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCEFC0, int64_t, Seek, (app::RequestStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin));
    IL2CPP_REGISTER_METHODINFO(0x04759E50, RequestStream_Seek__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCF010, void, SetLength, (app::RequestStream * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHODINFO(0x04731190, RequestStream_SetLength__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCF060, void, Write, (app::RequestStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04782368, RequestStream_Write__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCF0B0, app::IAsyncResult *, BeginWrite, (app::RequestStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * cback, app::Object * state));
    IL2CPP_REGISTER_METHODINFO(0x0476F430, RequestStream_BeginWrite__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCF100, void, EndWrite, (app::RequestStream * this_ptr, app::IAsyncResult * async_result));
    IL2CPP_REGISTER_METHODINFO(0x047142E8, RequestStream_EndWrite__MethodInfo);
}
