#include <interception_macros.h>

namespace app::methods::System_Net_Sockets::SocketAsyncResult {
    IL2CPP_REGISTER_METHOD(0x020A1D60, void *, get_Handle, (app::SocketAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::SocketAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020A1E00, void, Init, (app::SocketAsyncResult * this_ptr, app::Socket * socket, app::AsyncCallback * callback, app::Object * state, app::SocketOperation__Enum operation));
    IL2CPP_REGISTER_METHOD(0x020A1E90, void, __ctor_2, (app::SocketAsyncResult * this_ptr, app::Socket * socket, app::AsyncCallback * callback, app::Object * state, app::SocketOperation__Enum operation));
    IL2CPP_REGISTER_METHOD(0x020A1EB0, app::SocketError__Enum, get_ErrorCode, (app::SocketAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020A1F90, void, CheckIfThrowDelayedException, (app::SocketAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477F350, SocketAsyncResult_CheckIfThrowDelayedException__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x020A20B0, void, CompleteDisposed, (app::SocketAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020A20C0, void, Complete_1, (app::SocketAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020A2480, void, Complete_2, (app::SocketAsyncResult * this_ptr, bool synch));
    IL2CPP_REGISTER_METHOD(0x020A2490, void, Complete_3, (app::SocketAsyncResult * this_ptr, int32_t total));
    IL2CPP_REGISTER_METHOD(0x020A24A0, void, Complete_4, (app::SocketAsyncResult * this_ptr, app::Exception * e, bool synch));
    IL2CPP_REGISTER_METHOD(0x020A24B0, void, Complete_5, (app::SocketAsyncResult * this_ptr, app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x020A24C0, void, Complete_6, (app::SocketAsyncResult * this_ptr, app::Socket * s));
    IL2CPP_REGISTER_METHOD(0x020A24D0, void, Complete_7, (app::SocketAsyncResult * this_ptr, app::Socket * s, int32_t total));
}
