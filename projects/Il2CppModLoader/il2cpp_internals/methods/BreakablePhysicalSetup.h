#include <interception_macros.h>

namespace app::methods::BreakablePhysicalSetup {
IL2CPP_REGISTER_METHOD(0x00D4C460, bool, get_IsBridgeBroken, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4C600, void, Awake, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4CC50, void, OnDestroy, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4CCF0, void, OnEnable, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4CDB0, void, OnDisable, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4CE70, void, Start, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4D0C0, void, OnUpdate, (app::BreakablePhysicalSetup * this_ptr, float delta));
IL2CPP_REGISTER_METHOD(0x00D4D400, void, StartBreaking, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4D530, void, BreakJoints, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471ED90, BreakablePhysicalSetup_BreakJoints__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D4D840, void, DisableManager, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04778090, BreakablePhysicalSetup_DisableManager__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D4D860, void, StopTransitions, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4DA20, void, Apply, (app::BreakablePhysicalSetup * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00D4DA30, IUberState__Array *, get_AffectingUberStates, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_AllTargets, (app::BreakablePhysicalSetup * this_ptr, app::List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (app::BreakablePhysicalSetup * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x003FFCE0, SuspendableMask__Enum, get_Mask, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4DBA0, void, set_Mask, (app::BreakablePhysicalSetup * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4DBB0, void, ResetToOriginalState, (app::BreakablePhysicalSetup * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4DE80, void, __ctor, (app::BreakablePhysicalSetup * this_ptr));
}
