#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::PlatformStorageWriteEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlatformStorageWriteEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, Task *, Invoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::String * key, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::String * key, app::Byte__Array * data, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Task *, EndInvoke, (app::PlatformStorageWriteEventHandler * this_ptr, app::IAsyncResult * result));
}
