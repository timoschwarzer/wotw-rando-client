#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::WispTrigger {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MessageProvider *, get_Dialogue, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057D6E0, app::IUberState *, get_State, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057D770, void, OnEnable, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057DA70, void, OnDisable, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761380, WispTrigger_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0057DDB0, app::MoonAnimator *, get_Wisp, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057DE80, app::MoonTimeline *, get_Timeline, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057DF50, void, UpdateRootPosition, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057E410, void, Started, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707E40, WispTrigger_Started__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0057E5E0, void, OnFixedUpdate, (app::WispTrigger * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x0057E940, void, ctor, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_1, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_2, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_3, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_4, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_5, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_6, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_7, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_8, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_9, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_10, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_11, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_12, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_13, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_14, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_15, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_16, (app::WispTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IMoonTypeResolver *, GetResolverForType_17, (app::WispTrigger * this_ptr))
}
