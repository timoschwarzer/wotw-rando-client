#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalService_XalPlatformStorageReadEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XalService_XalPlatformStorageReadEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::XalService_XalPlatformStorageReadEventHandler * this_ptr, app::void * context, app::void * user_context, app::void * operation, app::String * key));
IL2CPP_REGISTER_METHOD(0x0143E530, IAsyncResult *, BeginInvoke, (app::XalService_XalPlatformStorageReadEventHandler * this_ptr, app::void * context, app::void * user_context, app::void * operation, app::String * key, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalPlatformStorageReadEventHandler * this_ptr, app::IAsyncResult * result));
}
