#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Action_1_UberWaterControl_SplashInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UberWaterControl_SplashInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::Action_1_UberWaterControl_SplashInfo_ * this_ptr, app::UberWaterControl_SplashInfo obj))
    IL2CPP_REGISTER_METHOD(0x02C08F10, app::IAsyncResult *, BeginInvoke, (app::Action_1_UberWaterControl_SplashInfo_ * this_ptr, app::UberWaterControl_SplashInfo obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UberWaterControl_SplashInfo_ * this_ptr, app::IAsyncResult * result))
}
