#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolver_UpdateDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IKSolver_UpdateDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::IKSolver_UpdateDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IKSolver_UpdateDelegate * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IKSolver_UpdateDelegate * this_ptr, app::IAsyncResult * result))
}
