#include <interception_macros.h>

namespace app::methods::MoonDoorWithSlots {
IL2CPP_REGISTER_METHOD(0x00F4A720, int32_t, get_NumberOfOrbsUsed, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4A810, void, set_NumberOfOrbsUsed, (app::MoonDoorWithSlots * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F4A910, int32_t, get_NumberOfOrbsPlacedAtSlots, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A1B030, void, OnValidate, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4AA30, void, Awake, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4ABD0, void, Highlight, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4B1E0, void, Unhighlight, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4B540, void, RestoreOrbs, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4B780, void, OnEnable, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4B840, void, OnDisable, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4B9B0, void, Apply, (app::MoonDoorWithSlots * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00F4BB80, IUberState__Array *, get_AffectingUberStates, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4BC20, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4BDE0, void, StopTransitions, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4BE00, float, get_DistanceToSein, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4BFB0, bool, get_OriHasTargets, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4C0D0, bool, get_SeinInRange, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4C340, void, FixedUpdate, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4D480, void, FinishThrow, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474A608, MoonDoorWithSlots_FinishThrow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F4D610, void, OpenDoor, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4DDA0, void, MakeSureItsAtEnd, (app::MoonDoorWithSlots * this_ptr, app::Transform * c));
IL2CPP_REGISTER_METHOD(0x00F4DE90, void, StartStressTest, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::MoonDoorWithSlots * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x0070BB00, StressTestStatus__Enum, get_StressTestStatus, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A3F600, void, set_StressTestStatus, (app::MoonDoorWithSlots * this_ptr, app::StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x00F4DEC0, bool, get_CanExecuteStressTest, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4E060, String *, get_StressTestName, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4E0E0, IDesiredUberState *, GetRequirementsForTimeline, (app::MoonDoorWithSlots * this_ptr, app::MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00F4E1C0, void, __ctor, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHOD(0x00F4E290, void, _OpenDoor_b__53_1, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04746DE0, MoonDoorWithSlots__OpenDoor_b__53_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007F3820, void, _OpenDoor_b__53_0, (app::MoonDoorWithSlots * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04729268, MoonDoorWithSlots__OpenDoor_b__53_0__MethodInfo);
}
