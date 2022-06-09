#include <interception_macros.h>

namespace app::methods::BossRaceHandler {
IL2CPP_REGISTER_METHOD(0x00D3D980, RaceStateMachineContext *, get_Context, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3DA30, void, OnEnable, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3DA70, void, Update, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGhostFinished, (app::BossRaceHandler * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayerFinished, (app::BossRaceHandler * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00D3DBF0, void, OnRaceFinished, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3DCB0, void, OnRaceFailed, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3DE00, IEnumerator *, ChallengeFailedFade, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3DF50, void, Suspend, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3E210, void, SetRaceInProgressState, (app::BossRaceHandler * this_ptr, bool in_progress));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsInsideRaceArea, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3E3A0, void, StartMenuRace, (app::BossRaceHandler * this_ptr, app::Action * on_start));
IL2CPP_REGISTER_METHOD(0x00D3E490, IEnumerator *, StartMenuRaceNextFrame, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3E5E0, void, OnStart, (app::BossRaceHandler * this_ptr, bool spectate));
IL2CPP_REGISTER_METHOD(0x00D3E6F0, void, PlaceOriAtStart, (app::BossRaceHandler * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D3EB90, void, GetStartGroundPosition, (app::BossRaceHandler * this_ptr, app::Vector3 * pos, app::Vector3 target));
IL2CPP_REGISTER_METHOD(0x00D3EE90, void, __ctor, (app::BossRaceHandler * this_ptr));
}
