#include <interception_macros.h>

namespace app::methods::System::Action_1_SByte_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_SByte_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::Action_1_SByte_ * this_ptr, int8_t obj));
    IL2CPP_REGISTER_METHOD(0x02C07CA0, app::IAsyncResult *, BeginInvoke, (app::Action_1_SByte_ * this_ptr, int8_t obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_SByte_ * this_ptr, app::IAsyncResult * result));
}
