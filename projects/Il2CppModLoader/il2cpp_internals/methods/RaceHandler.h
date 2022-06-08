#include <interception_macros.h>

namespace app::methods::RaceHandler {
IL2CPP_REGISTER_METHOD(0x00E99590, RaceStateMachineContext *, get_Context, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E99630, void, Awake, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E99820, void, Start, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9A210, IEnumerator *, CreateGhostFolder, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9A350, void, OnDestroy, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9ADA0, void, OnEnable, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9ADE0, void, Update, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9B030, void, FixedUpdate, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9B6E0, void, CheckStartAreaInput, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9BB20, void, CheckEndAreaInput, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9BD30, void, ActivateRace, (RaceHandler * __this, bool inGameActivation));
IL2CPP_REGISTER_METHOD(0x00E9C000, void, OnEnterStartArea, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9C440, void, ForceInstantFrustumUpdate, (RaceHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04788460, RaceHandler_ForceInstantFrustumUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E9C4E0, void, OnExitStartArea, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9C650, void, OnEnterEndArea, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9C890, void, OnExitEndArea, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9C8F0, void, OnEnterEndTrigger, (RaceHandler * __this, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x04723368, RaceHandler_OnEnterEndTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E9CB30, void, OnFinished, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9CC40, void, OnStart, (RaceHandler * __this, bool spectate));
IL2CPP_REGISTER_METHOD(0x00E9CD50, void, OnLeaderboard, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9CE10, void, OnGhostFinished, (RaceHandler * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00E9CF60, void, OnPlayerFinished, (RaceHandler * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRaceFinished, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRaceFailed, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9D110, void, SetRaceInProgressState, (RaceHandler * __this, bool inProgress));
IL2CPP_REGISTER_METHOD(0x00E9D2F0, void, SpawnReward, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9D750, void, HideReward, (RaceHandler * __this, bool spawnFX));
IL2CPP_REGISTER_METHOD(0x00E9D890, void, ApplyReward, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9DAC0, bool, IsInsideRaceArea, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9DBD0, void, StartMenuRace, (RaceHandler * __this, Action * onStart));
IL2CPP_REGISTER_METHOD(0x00E9DCC0, IEnumerator *, StartMenuRaceNextFrame, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9DE10, void, PlaceOriAtStart, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9E060, void, GetStartGroundPosition, (RaceHandler * __this, Vector3 * pos, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00E9E360, void, OnDevGhostBeaten, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9E460, void, ShowChallengeUi, (RaceHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x0476DBD8, RaceHandler_ShowChallengeUi__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E9E4C0, void, HideChallengeUi, (RaceHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04725B78, RaceHandler_HideChallengeUi__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E9E510, void, OnStateChanged, (RaceHandler * __this, StateMachine_2 * stateMachine));
IL2CPP_REGISTER_METHODINFO(0x04772018, RaceHandler_OnStateChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E9E7C0, void, CheckNetworkStatus, (RaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00E9EA90, void, __ctor, (RaceHandler * __this));
}
