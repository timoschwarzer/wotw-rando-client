#include <interception_macros.h>

namespace app::methods::BombableSolidWall {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpointOnDestruction, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D37770, void, OnEnable, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D37960, void, OnDisable, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D37B50, void, OnRestoreCheckpoint, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04751F60, BombableSolidWall_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D37C50, void, OnRecieveDamage, (app::BombableSolidWall * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D37E50, Vector2, get_BabyWormAutoTargetPosition, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BabyWormAutoTargetPriority, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TargetActive, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D37FB0, void, Apply, (app::BombableSolidWall * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CBC5E0, IUberState__Array *, get_AffectingUberStates, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D380E0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D38200, IDesiredUberState *, GetRequirementsForTimeline, (app::BombableSolidWall * this_ptr, app::MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00D38420, void, Awake, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, IDamageReciever__Array *, get_AffectedReceivers, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D38610, void, __ctor, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (app::BombableSolidWall * this_ptr));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (app::BombableSolidWall * this_ptr));
}
