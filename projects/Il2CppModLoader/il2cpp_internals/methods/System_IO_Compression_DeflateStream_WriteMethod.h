#include <interception_macros.h>

namespace app::methods::System_IO_Compression::DeflateStream_WriteMethod {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DeflateStream_WriteMethod * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01D2E820, void, Invoke, (app::DeflateStream_WriteMethod * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x020083D0, IAsyncResult *, BeginInvoke, (app::DeflateStream_WriteMethod * this_ptr, app::Byte__Array * array, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DeflateStream_WriteMethod * this_ptr, app::IAsyncResult * result));
}
