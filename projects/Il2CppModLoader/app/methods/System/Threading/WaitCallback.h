#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::WaitCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::WaitCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::WaitCallback * this_ptr, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::WaitCallback * this_ptr, app::Object * state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::WaitCallback * this_ptr, app::IAsyncResult * result))
}
