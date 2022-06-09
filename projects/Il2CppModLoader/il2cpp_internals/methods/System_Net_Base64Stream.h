#include <interception_macros.h>

namespace app::methods::System_Net::Base64Stream {
IL2CPP_REGISTER_METHOD(0x02010F00, void, __ctor_1, (app::Base64Stream * this_ptr, app::Stream * stream, app::Base64WriteStateInfo * write_state_info));
IL2CPP_REGISTER_METHOD(0x02011110, void, __ctor_2, (app::Base64Stream * this_ptr, app::Stream * stream, int32_t line_length));
IL2CPP_REGISTER_METHOD(0x02011300, void, __ctor_3, (app::Base64Stream * this_ptr, app::Base64WriteStateInfo * write_state_info));
IL2CPP_REGISTER_METHOD(0x01706DA0, bool, get_CanWrite, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x020113C0, Base64Stream_ReadStateInfo *, get_ReadState, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Base64WriteStateInfo *, get_WriteState, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x02011510, IAsyncResult *, BeginRead, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * state));
IL2CPP_REGISTER_METHODINFO(0x047156D8, Base64Stream_BeginRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02011760, IAsyncResult *, BeginWrite, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * state));
IL2CPP_REGISTER_METHODINFO(0x0472D028, Base64Stream_BeginWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020119B0, void, Close, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x02011D60, int32_t, DecodeBytes, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04747080, Base64Stream_DecodeBytes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02012090, int32_t, EncodeBytes_1, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x020120C0, int32_t, EncodeBytes_2, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, bool dont_defer_final_bytes, bool should_append_space_to_c_r_l_f));
IL2CPP_REGISTER_METHOD(0x004C50A0, Stream *, GetStream, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x02012F90, String *, GetEncodedString, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x02012FF0, int32_t, EndRead, (app::Base64Stream * this_ptr, app::IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x0470B9F8, Base64Stream_EndRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013180, void, EndWrite, (app::Base64Stream * this_ptr, app::IAsyncResult * async_result));
IL2CPP_REGISTER_METHODINFO(0x04742C28, Base64Stream_EndWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013340, void, Flush, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x02013390, void, FlushInternal, (app::Base64Stream * this_ptr));
IL2CPP_REGISTER_METHOD(0x020134D0, int32_t, Read, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x047304A8, Base64Stream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013740, void, Write, (app::Base64Stream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477F918, Base64Stream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02013900, void, __cctor, ());
}
