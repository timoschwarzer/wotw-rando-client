#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Reflection::MemberFilter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MemberFilter * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::MemberFilter * this_ptr, app::MemberInfo_1 * m, app::Object * filter_criteria))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::MemberFilter * this_ptr, app::MemberInfo_1 * m, app::Object * filter_criteria, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::MemberFilter * this_ptr, app::IAsyncResult * result))
}
