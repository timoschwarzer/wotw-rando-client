#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalService_AsyncCompletionRoutine {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XalService_AsyncCompletionRoutine * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::XalService_AsyncCompletionRoutine * this_ptr, app::void * async_block));
IL2CPP_REGISTER_METHOD(0x0143D080, IAsyncResult *, BeginInvoke, (app::XalService_AsyncCompletionRoutine * this_ptr, app::void * async_block, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_AsyncCompletionRoutine * this_ptr, app::IAsyncResult * result));
}
