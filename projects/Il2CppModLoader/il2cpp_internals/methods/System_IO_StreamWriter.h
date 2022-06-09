#include <interception_macros.h>

namespace app::methods::System_IO::StreamWriter {
    IL2CPP_REGISTER_METHOD(0x02382180, void, CheckAsyncTaskInProgress, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470CDD0, StreamWriter_CheckAsyncTaskInProgress__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02382260, app::Encoding *, get_UTF8NoBOM, ());
    IL2CPP_REGISTER_METHOD(0x02382460, void, __ctor_1, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02382500, void, __ctor_2, (app::StreamWriter * this_ptr, app::Stream * stream));
    IL2CPP_REGISTER_METHOD(0x023825D0, void, __ctor_3, (app::StreamWriter * this_ptr, app::Stream * stream, app::Encoding * encoding));
    IL2CPP_REGISTER_METHOD(0x02382600, void, __ctor_4, (app::StreamWriter * this_ptr, app::Stream * stream, app::Encoding * encoding, int32_t buffer_size));
    IL2CPP_REGISTER_METHOD(0x02382620, void, __ctor_5, (app::StreamWriter * this_ptr, app::Stream * stream, app::Encoding * encoding, int32_t buffer_size, bool leave_open));
    IL2CPP_REGISTER_METHODINFO(0x0477C930, StreamWriter__ctor_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02382810, void, __ctor_6, (app::StreamWriter * this_ptr, app::String * path));
    IL2CPP_REGISTER_METHOD(0x023828E0, void, __ctor_7, (app::StreamWriter * this_ptr, app::String * path, bool append));
    IL2CPP_REGISTER_METHOD(0x023829C0, void, __ctor_8, (app::StreamWriter * this_ptr, app::String * path, bool append, app::Encoding * encoding));
    IL2CPP_REGISTER_METHOD(0x023829F0, void, __ctor_9, (app::StreamWriter * this_ptr, app::String * path, bool append, app::Encoding * encoding, int32_t buffer_size));
    IL2CPP_REGISTER_METHOD(0x02382A20, void, __ctor_10, (app::StreamWriter * this_ptr, app::String * path, bool append, app::Encoding * encoding, int32_t buffer_size, bool check_host));
    IL2CPP_REGISTER_METHODINFO(0x0471A460, StreamWriter__ctor_9__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02382C60, void, Init, (app::StreamWriter * this_ptr, app::Stream * stream_arg, app::Encoding * encoding_arg, int32_t buffer_size, bool should_leave_open));
    IL2CPP_REGISTER_METHOD(0x02382DD0, app::Stream *, CreateFile, (app::String * path, bool append, bool check_host));
    IL2CPP_REGISTER_METHOD(0x02382F90, void, Close, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02383040, void, Dispose, (app::StreamWriter * this_ptr, bool disposing));
    IL2CPP_REGISTER_METHOD(0x023831B0, void, Flush_1, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x023831E0, void, Flush_2, (app::StreamWriter * this_ptr, bool flush_stream, bool flush_encoder));
    IL2CPP_REGISTER_METHOD(0x023833F0, void, set_AutoFlush, (app::StreamWriter * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Stream *, get_BaseStream, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02383430, bool, get_LeaveOpen, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Encoding *, get_Encoding, (app::StreamWriter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02383440, void, Write_1, (app::StreamWriter * this_ptr, uint16_t value));
    IL2CPP_REGISTER_METHOD(0x023834D0, void, Write_2, (app::StreamWriter * this_ptr, app::Char__Array * buffer));
    IL2CPP_REGISTER_METHOD(0x023835A0, void, Write_3, (app::StreamWriter * this_ptr, app::Char__Array * buffer, int32_t index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04742720, StreamWriter_Write_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x023837F0, void, Write_4, (app::StreamWriter * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x023838C0, void, __cctor, ());
}
