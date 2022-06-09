#include <interception_macros.h>

namespace app::methods::UberStateModifierDataVirtualAnimator_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x002FC6D0, AnimatorPlayState__Enum, get_PlayState, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, PlaybackStatus *, get_PlaybackStatus, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x01700280, int32_t, get_Hash, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x022631B0, String *, get_Name, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, NewSetupStateController *, get_StateController, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A5A010, SetupControllerStateHolder *, get_StateHolder, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, SetupStateModifier *, get_Modifier, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02263300, SetupStateModifierData *, get_ModifierData, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_StateGuid, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02263790, Type *, get_ModifierType, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02263840, IEventReciever *, get_EventReciever, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04784E90, UberStateModifierDataVirtualAnimator_1_System_Object__get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02263890, void, set_EventReciever, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x04767690, UberStateModifierDataVirtualAnimator_1_System_Object__set_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02263230, void, Reset, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x02263330, void, __ctor_1, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::NewSetupStateController * state_controller, app::SetupStateModifier * modifier, int32_t state_guid));
IL2CPP_REGISTER_METHOD(0x022634C0, void, __ctor_2, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02263600, void, Init, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::NewSetupStateController * state_controller, app::SetupStateModifier * modifier, int32_t state_guid));
IL2CPP_REGISTER_METHOD(0x02263610, Object *, GetModifierData, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02263650, void, StartPlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04746800, UberStateModifierDataVirtualAnimator_1_System_Object__StartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022636A0, void, StopPlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04792878, UberStateModifierDataVirtualAnimator_1_System_Object__StopPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022636F0, void, PausePlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471C0B0, UberStateModifierDataVirtualAnimator_1_System_Object__PausePlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02263740, void, ResumePlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04717980, UberStateModifierDataVirtualAnimator_1_System_Object__ResumePlayback__MethodInfo);
}
