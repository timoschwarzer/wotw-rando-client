#include <interception_macros.h>

namespace app::methods::System_Net::CreateConnectionDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::CreateConnectionDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, PooledStream *, Invoke, (app::CreateConnectionDelegate * this_ptr, app::ConnectionPool * pool));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::CreateConnectionDelegate * this_ptr, app::ConnectionPool * pool, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, PooledStream *, EndInvoke, (app::CreateConnectionDelegate * this_ptr, app::IAsyncResult * result));
}
