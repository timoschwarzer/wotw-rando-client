#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Steamworks::CallResult_1_T__APIDispatchDelegate_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CallResult_1_T_APIDispatchDelegate_System_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D19FD0, void, Invoke, (app::CallResult_1_T_APIDispatchDelegate_System_Object_ * this_ptr, app::Object * param, bool b_i_o_failure))
    IL2CPP_REGISTER_METHOD(0x01D1A500, app::IAsyncResult *, BeginInvoke, (app::CallResult_1_T_APIDispatchDelegate_System_Object_ * this_ptr, app::Object * param, bool b_i_o_failure, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CallResult_1_T_APIDispatchDelegate_System_Object_ * this_ptr, app::IAsyncResult * result))
}
