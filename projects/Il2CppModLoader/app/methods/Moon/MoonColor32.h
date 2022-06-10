#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::MoonColor32 {
    IL2CPP_REGISTER_METHOD(0x02F92B30, bool, get_IsCrossSceneReference, (app::MoonColor32 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F92BF0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonColor32 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B478, MoonColor32_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F92D30, bool, get_IsStaticValue, (app::MoonColor32 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F92DD0, void, ctor, (app::MoonColor32 * this_ptr, app::Color32 static_value))
    IL2CPP_REGISTER_METHOD(0x02F92DF0, app::Color32, Resolve, (app::MoonColor32 * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04765400, MoonColor32_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F92FD0, app::Color32, SafeResolve, (app::MoonColor32 * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04708FC8, MoonColor32_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F932B0, bool, CanResolve, (app::MoonColor32 * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHOD(0x02F93470, bool, TryResolve, (app::MoonColor32 * this_ptr, app::Color32 * value, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHOD(0x02F934D0, void, SetStaticValue, (app::MoonColor32 * this_ptr, app::Color32 new_value))
    IL2CPP_REGISTER_METHOD(0x02F934E0, void, SetValueInResolver, (app::MoonColor32 * this_ptr, app::Color32 new_value, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0474F790, MoonColor32_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonColor32 * this_ptr))
}
