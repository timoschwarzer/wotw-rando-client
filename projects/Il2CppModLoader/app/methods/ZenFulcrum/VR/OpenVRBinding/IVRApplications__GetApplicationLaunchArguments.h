#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationLaunchArguments {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationLaunchArguments * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (app::IVRApplications_GetApplicationLaunchArguments * this_ptr, uint32_t un_handle, app::String * pch_args, uint32_t un_args))
    IL2CPP_REGISTER_METHOD(0x02F3D480, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_GetApplicationLaunchArguments * this_ptr, uint32_t un_handle, app::String * pch_args, uint32_t un_args, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRApplications_GetApplicationLaunchArguments * this_ptr, app::IAsyncResult * result))
}
