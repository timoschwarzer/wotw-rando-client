#include <interception_macros.h>

namespace app::methods::JumperEnemy {
IL2CPP_REGISTER_METHOD(0x00E52DE0, JumperEnemyPuppet *, get_Puppet, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E52EA0, bool, CanBeOptimized, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E52EE0, void, ForceAttackPlayer, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E52F30, void, Start, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00A39740, void, OnTimedRespawn, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E56250, bool, OutOfJumpingZone, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04756D18, JumperEnemy_OutOfJumpingZone__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00728F70, bool, IsOnGround, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A900, JumperEnemy_IsOnGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E56510, bool, ShouldThrow, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04733B48, JumperEnemy_ShouldThrow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E56640, bool, ShouldStomped, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04704368, JumperEnemy_ShouldStomped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E56780, bool, ShouldFreeze, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E568C0, bool, IsSlashDamage, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04748158, JumperEnemy_IsSlashDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E56A00, void, OnThrow, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04717CC0, JumperEnemy_OnThrow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E56D80, void, OnStomped, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04726460, JumperEnemy_OnStomped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E570B0, void, DoJump, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0470FF10, JumperEnemy_DoJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E578A0, bool, PlayerInRange, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04729798, JumperEnemy_PlayerInRange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E57920, void, FixedUpdate, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E57ED0, void, UpdateRotation, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E581F0, bool, LandedOnGround, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E58260, void, OnLanded, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04772D80, JumperEnemy_OnLanded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E58A20, void, __ctor, (JumperEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00E58B70, void, _Start_b__16_0, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D0E8, JumperEnemy__Start_b__16_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E58BD0, bool, _Start_b__16_1, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x047091F0, JumperEnemy__Start_b__16_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E58C20, bool, _Start_b__16_2, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x04765C90, JumperEnemy__Start_b__16_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E58CA0, bool, _Start_b__16_3, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F598, JumperEnemy__Start_b__16_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E58D20, bool, _Start_b__16_4, (JumperEnemy * __this));
IL2CPP_REGISTER_METHODINFO(0x0470CFA0, JumperEnemy__Start_b__16_4__MethodInfo);
}
