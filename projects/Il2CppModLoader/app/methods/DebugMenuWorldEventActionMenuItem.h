#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DebugMenuWorldEventActionMenuItem {
    IL2CPP_REGISTER_METHOD(0x00DF83C0, void, ctor, (app::DebugMenuWorldEventActionMenuItem * this_ptr, app::String * path, app::WorldEvents * world_event))
    IL2CPP_REGISTER_METHOD(0x00DF8530, bool, UpdateWorldEventValue, (app::DebugMenuWorldEventActionMenuItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728C40, DebugMenuWorldEventActionMenuItem_UpdateWorldEventValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DF86E0, void, UpdateText, (app::DebugMenuWorldEventActionMenuItem * this_ptr))
}
