#include <interception_macros.h>

namespace app::methods::SeinTurretSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA0410, void, SpawnSpiritTurret, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA06B0, void, OnSetReferenceToSein, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA06E0, void, Start, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (app::SeinTurretSpell * this_ptr, app::GravityPlatformMovementSettings * obj));
IL2CPP_REGISTER_METHODINFO(0x047789D0, SeinTurretSpell_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA0F20, void, StartRootMotion, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA10D0, void, OnRootMotion, (app::SeinTurretSpell * this_ptr, app::Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x047072E0, SeinTurretSpell_OnRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1250, void, EndRootMotion, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1400, void, OnDestroy, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA16F0, void, ModifyHorizontalPlatformMovementSettings, (app::SeinTurretSpell * this_ptr, app::HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04767278, SeinTurretSpell_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1910, void, OnExit, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1920, bool, get_IsStatePerforming, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1930, void, ChangeState, (app::SeinTurretSpell * this_ptr, app::SeinTurretSpell_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00AA1A10, void, EnterReleasing, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1A40, void, ExitReleasing, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1AA0, void, EnterStartReleasing, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1C90, void, ExitStartReleasing, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1CA0, void, StartReleasingTurrets, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04751D10, SeinTurretSpell_StartReleasingTurrets__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1910, void, StopReleasing, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04705528, SeinTurretSpell_StopReleasing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AA1CF0, void, UpdateCharacterState, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA1F90, IEnumerator *, HandleSpawningSentries, (app::SeinTurretSpell * this_ptr));
IL2CPP_REGISTER_METHOD(0x00AA20E0, void, __ctor, (app::SeinTurretSpell * this_ptr));
}
