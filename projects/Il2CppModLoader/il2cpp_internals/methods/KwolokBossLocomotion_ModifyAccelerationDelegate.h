#include <interception_macros.h>

namespace app::methods::KwolokBossLocomotion_ModifyAccelerationDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x012E7480, void, Invoke, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, app::float * a, app::float * b));
IL2CPP_REGISTER_METHOD(0x012E77F0, IAsyncResult *, BeginInvoke, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, app::float * a, app::float * b, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x012E78E0, void, EndInvoke, (app::KwolokBossLocomotion_ModifyAccelerationDelegate * this_ptr, app::float * a, app::float * b, app::IAsyncResult * result));
}
