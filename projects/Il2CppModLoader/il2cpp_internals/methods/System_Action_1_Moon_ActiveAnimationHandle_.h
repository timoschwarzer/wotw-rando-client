#include <interception_macros.h>

namespace app::methods::System::Action_1_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_Moon_ActiveAnimationHandle_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_Moon_ActiveAnimationHandle_ * this_ptr, app::ActiveAnimationHandle obj));
    IL2CPP_REGISTER_METHOD(0x029FFA70, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_ActiveAnimationHandle_ * this_ptr, app::ActiveAnimationHandle obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_ActiveAnimationHandle_ * this_ptr, app::IAsyncResult * result));
}
