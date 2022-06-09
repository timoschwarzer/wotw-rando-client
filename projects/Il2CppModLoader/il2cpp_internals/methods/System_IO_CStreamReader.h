#include <interception_macros.h>

namespace app::methods::System_IO::CStreamReader {
IL2CPP_REGISTER_METHOD(0x01E00E50, void, __ctor, (app::CStreamReader * this_ptr, app::Stream * stream, app::Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01E00F90, int32_t, Peek, (app::CStreamReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E01030, int32_t, Read_1, (app::CStreamReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E01170, int32_t, Read_2, (app::CStreamReader * this_ptr, app::Char__Array * dest, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04719148, CStreamReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E01340, String *, ReadLine, (app::CStreamReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E013F0, String *, ReadToEnd, (app::CStreamReader * this_ptr));
}
