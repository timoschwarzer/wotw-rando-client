#include <interception_macros.h>

namespace app::methods::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundsGameplayController {
IL2CPP_REGISTER_METHOD(0x014DF990, bool, get_IsSuspended, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014DF9A0, void, set_IsSuspended, (PetrifiedOwlFeedingGroundsGameplayController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006D6510, SuspendableMask__Enum, get_Mask, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x00C1EF30, void, set_Mask, (PetrifiedOwlFeedingGroundsGameplayController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x014DF9C0, void, Awake, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014DFA60, void, OnEnable, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014DFB00, void, OnDisable, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014DFBA0, IUberState__Array *, get_AffectingUberStates, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014DFC30, List_1_UnityEngine_GameObject_ *, IUberStateApplier_get_AllTargets, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014DFDF0, void, Start, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E0880, void, FixedUpdate, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E0ED0, void, SetState, (PetrifiedOwlFeedingGroundsGameplayController * __this, PetrifiedOwlFeedingGroundsGameplayController_PetrifiedOwlFeedingGroundsGameplayState__Enum newState));
IL2CPP_REGISTER_METHOD(0x014E13A0, void, OnSuspended, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E13C0, void, OnRevealStart, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x0477EA30, PetrifiedOwlFeedingGroundsGameplayController_OnRevealStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E1440, void, OnEatStart, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x047653D0, PetrifiedOwlFeedingGroundsGameplayController_OnEatStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E1550, void, OnEatEnd, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x04706300, PetrifiedOwlFeedingGroundsGameplayController_OnEatEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E15D0, void, OnOwlInTheAir, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x047168F8, PetrifiedOwlFeedingGroundsGameplayController_OnOwlInTheAir__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E1870, void, OnOwlLanded, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x04797268, PetrifiedOwlFeedingGroundsGameplayController_OnOwlLanded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E1940, void, OnKillPlayer, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x0475FE18, PetrifiedOwlFeedingGroundsGameplayController_OnKillPlayer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E1980, void, OnRockTriggered, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x0476C5E8, PetrifiedOwlFeedingGroundsGameplayController_OnRockTriggered__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E19B0, void, KillPlayer, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E1D50, void, DebugSetBoxColor, (PetrifiedOwlFeedingGroundsGameplayController * __this, Color color));
IL2CPP_REGISTER_METHOD(0x014E1EB0, void, SetDebugBoxSize, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E22D0, void, OnDestroy, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E2370, void, SetUberState, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E2440, void, OnEscapeSequenceEnd, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x047715F0, PetrifiedOwlFeedingGroundsGameplayController_OnEscapeSequenceEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014E2460, void, OnOwlDefeated, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D798, PetrifiedOwlFeedingGroundsGameplayController_OnOwlDefeated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (PetrifiedOwlFeedingGroundsGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x014E2480, void, Apply, (PetrifiedOwlFeedingGroundsGameplayController * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x014E2BD0, void, __ctor, (PetrifiedOwlFeedingGroundsGameplayController * __this));
}
