#include <interception_macros.h>

namespace app::methods::CrabDeathReaction {
IL2CPP_REGISTER_METHOD(0x00DB1CF0, void, OnInitializeTask, (CrabDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB1FA0, void, StartTimeline, (CrabDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00DB1FD0, void, ResetTimeline, (CrabDeathReaction * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00DB21F0, void, HandleCollision, (CrabDeathReaction * __this, MoonControllerColliderHit hit));
IL2CPP_REGISTER_METHODINFO(0x0470C1C8, CrabDeathReaction_HandleCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DB2250, CrabDeathReaction_DeathState__Enum, GetNextOnHitGroundState, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB2280, void, OnEnterTask, (CrabDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB2720, BehaviourStatus__Enum, OnExecuteTask, (CrabDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB2740, void, OnExitTask, (CrabDeathReaction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00DB2780, void, SetState, (CrabDeathReaction * __this, CrabDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00DB2800, void, EnterState, (CrabDeathReaction * __this, CrabDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00DB2A30, void, ExitState, (CrabDeathReaction * __this, CrabDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00DB2A80, void, UpdateState, (CrabDeathReaction * __this, CrabDeathReaction_DeathState__Enum state));
IL2CPP_REGISTER_METHOD(0x00DB2DE0, void, EnterHit, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB2E20, void, EnterSpin, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB2EF0, void, EnterFall, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB2F20, void, EnterBounce, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB2FD0, void, EnterDeathEnd, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3170, void, EnterDrown, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitHit, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitSpin, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitFall, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitBounce, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitDeathEnd, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitDrown, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3450, void, UpdateHit, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSpin, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFall, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3530, void, UpdateBounce, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3610, void, UpdateDeathEnd, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB36F0, bool, InWater, (CrabDeathReaction * __this, float checkOffset));
IL2CPP_REGISTER_METHOD(0x00DB38E0, void, UpdateDrown, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3B20, void, PlayShake, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHOD(0x00DB3C10, void, EndReaction, (CrabDeathReaction * __this));
IL2CPP_REGISTER_METHODINFO(0x047658D0, CrabDeathReaction_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DB3C70, Vector3, ProcessRootMotion, (CrabDeathReaction * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04786578, CrabDeathReaction_ProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DB3CC0, void, __ctor, (CrabDeathReaction * __this));
}
