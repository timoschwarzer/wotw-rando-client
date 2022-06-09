#include <interception_macros.h>

namespace app::methods::SeinRide {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowedNonZeroZPosition, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D17A0, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D1840, SeinRidePuppet*, get_Puppet, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D1900, SeinRide_RideState*, get_CurrentRideState, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D19C0, bool, get_PlayerLockedToAttachmentPoint, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBCE0, IRideable*, get_Rideable, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D1A10, bool, get_IsStatePerforming, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D1A20, void, OnSetReferenceToSein, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D1B00, void, Serialize, (app::SeinRide * this_ptr, app::Archive* ar));
    IL2CPP_REGISTER_METHOD(0x005D1D70, void, Apply, (app::SeinRide * this_ptr, app::UberStateApplyContext__Enum context));
    IL2CPP_REGISTER_METHOD(0x005D20E0, void, AfterLoadKu, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472B7E8, SeinRide_AfterLoadKu__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D23E0, IUberState__Array*, get_AffectingUberStates, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D2470, void, OnEnable, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D2510, void, OnDisable, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D25D0, void, Start, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D27F0, void, UpdateCharacterState, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D2850, void, LateUpdate, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D2BD0, void, StartRiding, (app::SeinRide * this_ptr, app::IRideable* rideable, bool skip_animation));
    IL2CPP_REGISTER_METHOD(0x005D2E50, bool, get_ReadyToStart, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D2E60, bool, IsRiding, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0478CC08, SeinRide_IsRiding__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x005D2E80, void, StopRiding, (app::SeinRide * this_ptr, app::Vector2 extra_force));
    IL2CPP_REGISTER_METHOD(0x005D3550, void, OnDrawGizmos, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D3A20, void, __ctor, (app::SeinRide * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
} // namespace app::methods::SeinRide
