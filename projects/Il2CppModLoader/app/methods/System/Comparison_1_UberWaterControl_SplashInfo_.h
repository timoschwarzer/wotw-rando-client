#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Comparison_1_UberWaterControl_SplashInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UberWaterControl_SplashInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B892E0, int32_t, Invoke, (app::Comparison_1_UberWaterControl_SplashInfo_ * this_ptr, app::UberWaterControl_SplashInfo x, app::UberWaterControl_SplashInfo y))
    IL2CPP_REGISTER_METHOD(0x02C80EA0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UberWaterControl_SplashInfo_ * this_ptr, app::UberWaterControl_SplashInfo x, app::UberWaterControl_SplashInfo y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UberWaterControl_SplashInfo_ * this_ptr, app::IAsyncResult * result))
}
