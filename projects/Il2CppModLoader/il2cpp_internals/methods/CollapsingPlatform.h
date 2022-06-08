#include <interception_macros.h>

namespace app::methods::CollapsingPlatform {
IL2CPP_REGISTER_METHOD(0x012C71C0, bool, get_IsCollapsed, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C7310, void, set_IsCollapsed, (CollapsingPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012C77A0, CageStructureTool *, get_CageStructure, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C7870, GameObject *, get_Platform, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C78A0, GameObject *, get_AnimatedObject, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C78D0, void, Awake, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C8070, void, DamageReceived, (CollapsingPlatform * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04767AC0, CollapsingPlatform_DamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C8380, void, GetDigZone, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C85A0, void, OnActivatePlatform, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x04752460, CollapsingPlatform_OnActivatePlatform__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C8670, void, OnDigStartedInZone, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x0471FDA0, CollapsingPlatform_OnDigStartedInZone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C86A0, void, OnDestroy, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C8C60, void, OnWallJumpPerformed, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x04790DB0, CollapsingPlatform_OnWallJumpPerformed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C8C90, void, OnCollisionEnter, (CollapsingPlatform * __this, Collision * other));
IL2CPP_REGISTER_METHOD(0x012C8C90, void, ReceivedOnCollisionEnter, (CollapsingPlatform * __this, Collision * other));
IL2CPP_REGISTER_METHOD(0x012C8D60, void, OnEnable, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C8ED0, void, OnDisable, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9010, void, FixedUpdate, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9300, void, PerformCollapse, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9470, void, PerformFastColapse, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9640, void, OnLandOnGround, (CollapsingPlatform * __this, Vector3 position, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04709990, CollapsingPlatform_OnLandOnGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012C9A30, void, Respawn, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9C10, String *, get_StressTestName, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9C90, void, StartStressTest, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (CollapsingPlatform * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x006DC050, StressTestStatus__Enum, get_StressTestStatus, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9CC0, void, set_StressTestStatus, (CollapsingPlatform * __this, StressTestStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x012C9CD0, bool, get_CanExecuteStressTest, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012C9E70, void, Apply, (CollapsingPlatform * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x012CA040, IUberState__Array *, get_AffectingUberStates, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CA0B0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CA270, bool, get_Value, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CA280, void, set_Value, (CollapsingPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_DefaultBooleanValue, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_DefaultBooleanValue, (CollapsingPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00420EE0, NamedValue_1_System_Boolean___Array *, get_Options, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CA330, IDesiredUberState *, GetRequirementsForTimeline, (CollapsingPlatform * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x012CA690, float, get_GenericValue, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CA6B0, void, set_GenericValue, (CollapsingPlatform * __this, float value));
IL2CPP_REGISTER_METHOD(0x00FC5390, Nullable_1_Single_, get_VolitileGenericOverrideValue, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00FC53A0, void, set_VolitileGenericOverrideValue, (CollapsingPlatform * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x012CA6D0, void, Validate, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CAB10, CollapsingPlatform *, GetCollapsingPlatformFromDigZone, (DigZone * digZone));
IL2CPP_REGISTER_METHOD(0x012CAC40, void, OnRestoreCheckpoint, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x04785D00, CollapsingPlatform_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CAC50, void, __ctor, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHOD(0x012CAD00, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x012CAE70, void, _DamageReceived_b__23_0, (CollapsingPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x047802D0, CollapsingPlatform__DamageReceived_b__23_0__MethodInfo);
}
