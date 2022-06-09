#include <interception_macros.h>

namespace app::methods::SeinSoulFlame {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DB4F0, void, add_OnSoulFlameCast, (app::Action * value));
    IL2CPP_REGISTER_METHOD(0x005DB630, void, remove_OnSoulFlameCast, (app::Action * value));
    IL2CPP_REGISTER_METHOD(0x005DB770, bool, get_SoulFlameExists, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DB810, Vector3, get_SoulFlamePosition, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DB900, void, OnAwake, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DBBB0, void, OnGameReset, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047372B8, SeinSoulFlame_OnGameReset__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x005DBBC0, void, OnRestoreCheckpoint, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04710640, SeinSoulFlame_OnRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x005DBC20, void, OnDestroy, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DBF60, void, FillSoulFlameBar, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DBF70, bool, get_InsideCheckpointMarker, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC0A0, SeinSoulFlame_SoulFlamePlacementSafety__Enum, get_IsSafeToCastSoulFlame, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC3F0, float, get_BarValue, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC410, float, get_CooldownRemaining, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC420, bool, get_ShowFlameOnUI, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_SoulFlameCost, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC4F0, bool, get_CanAffordSoulFlame, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC530, bool, get_AllowedToAccessSkillTree, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC580, bool, get_PlayerCouldSoulFlame, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DC790, void, HandleNagging, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DCEA0, void, HandleDelayOnGround, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DD010, void, UpdateCharacterState, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DDB40, void, CastSoulFlame, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DE230, void, HandleCharging, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DE800, void, HandleCooldown, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DE960, void, HandleCheckpointMarkerVisibility, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DEC70, void, HandleSkillTreeHint, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DEF60, void, HideOtherMessages, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DF080, void, OnSetReferenceToSein, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DF0A0, void, Serialize, (app::SeinSoulFlame * this_ptr, app::Archive* ar));
    IL2CPP_REGISTER_METHOD(0x005DF590, void, SpawnSoulFlame, (app::SeinSoulFlame * this_ptr, app::Vector3 position));
    IL2CPP_REGISTER_METHOD(0x005DF6E0, void, DestroySoulFlame, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DF7F0, void, __ctor, (app::SeinSoulFlame * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005DF970, void, __cctor, ());
} // namespace app::methods::SeinSoulFlame
