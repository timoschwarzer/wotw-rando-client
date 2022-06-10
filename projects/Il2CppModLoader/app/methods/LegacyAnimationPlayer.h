#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LegacyAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x015CB490, void, Awake, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB5D0, app::MoonAnimator *, get_MoonAnimator, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB6F0, float, get_Duration, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB850, bool, get_IsLooping, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB940, void, RestoreToOriginalState, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CB960, void, SampleValue, (app::LegacyAnimationPlayer * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x015CBD90, void, ctor, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F60, bool, _SampleValue_b__19_0, (app::LegacyAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D460, LegacyAnimationPlayer__SampleValue_b__19_0__MethodInfo)
}
