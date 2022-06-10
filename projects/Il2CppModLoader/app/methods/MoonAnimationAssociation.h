#include <interception_macros.h>

namespace app::methods::MoonAnimationAssociation {
    IL2CPP_REGISTER_METHOD(0x0212F010, void, Finalize, (app::MoonAnimationAssociation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsInitialized, (app::MoonAnimationAssociation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsInitialized, (app::MoonAnimationAssociation * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0212F0A0, void, OnAnimationPlayedOnSource, (app::MoonAnimationAssociation * this_ptr, app::IAnimation * animation, app::ActiveAnimationHandle active_animation, int32_t priority, app::Func_1_Boolean_ * continue_condition))
    IL2CPP_REGISTER_METHODINFO(0x0471B138, MoonAnimationAssociation_OnAnimationPlayedOnSource__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0212F260, void, OnAnimationStoppedOnSource, (app::MoonAnimationAssociation * this_ptr, app::IAnimation * animation, app::ActiveAnimationHandle active_animation))
    IL2CPP_REGISTER_METHODINFO(0x0478D3B0, MoonAnimationAssociation_OnAnimationStoppedOnSource__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0212F3F0, void, OnVectorSet, (app::MoonAnimationAssociation * this_ptr, app::VectorAnimationParameter * parameter, app::Vector3 value))
    IL2CPP_REGISTER_METHODINFO(0x04725980, MoonAnimationAssociation_OnVectorSet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0212F5A0, void, OnFloatSet, (app::MoonAnimationAssociation * this_ptr, app::FloatAnimationParameter * parameter, float value))
    IL2CPP_REGISTER_METHODINFO(0x04705D98, MoonAnimationAssociation_OnFloatSet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0212F690, void, Init, (app::MoonAnimationAssociation * this_ptr, app::MoonAnimator * source_animator, app::Action_4_Moon_MoonAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_ * associated_animation_returned, app::MoonAnimator * matching_animator, app::Action_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ * associated_animation_stopped))
    IL2CPP_REGISTER_METHOD(0x0212FCF0, void, Reset, (app::MoonAnimationAssociation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02130090, void, CreateDictionary, (app::MoonAnimationAssociation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021301E0, void, SyncAnimations, (app::ActiveAnimationHandle source, app::ActiveAnimationHandle slave))
    IL2CPP_REGISTER_METHOD(0x02130270, void, ctor, (app::MoonAnimationAssociation * this_ptr))
}
