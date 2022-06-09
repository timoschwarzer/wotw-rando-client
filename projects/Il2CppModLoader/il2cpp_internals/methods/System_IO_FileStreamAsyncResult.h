#include <interception_macros.h>

namespace app::methods::System_IO::FileStreamAsyncResult {
IL2CPP_REGISTER_METHOD(0x0236F0A0, void, __ctor, (app::FileStreamAsyncResult * this_ptr, app::AsyncCallback * cb, app::Object * state));
IL2CPP_REGISTER_METHOD(0x0236F2E0, void, CBWrapper, (app::IAsyncResult * ares));
IL2CPP_REGISTER_METHODINFO(0x047115B0, FileStreamAsyncResult_CBWrapper__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_AsyncState, (app::FileStreamAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_CompletedSynchronously, (app::FileStreamAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, WaitHandle *, get_AsyncWaitHandle, (app::FileStreamAsyncResult * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsCompleted, (app::FileStreamAsyncResult * this_ptr));
}
