#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RockyEnemy {
    IL2CPP_REGISTER_METHOD(0x0135B560, app::Vector2, get_ThrownDirection, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135B580, void, set_ThrownDirection, (app::RockyEnemy * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0135B5B0, bool, CanBeOptimized, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135B610, void, OnEnable, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135B8F0, void, OnDisable, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135BBD0, void, OnDestroy, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135BC70, void, Start, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135F040, void, OnStateChanged, (app::RockyEnemy * this_ptr, app::StateMachine_2 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0477D360, RockyEnemy_OnStateChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0135F110, void, OnModifyDamage, (app::RockyEnemy * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x04724198, RockyEnemy_OnModifyDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00728F70, bool, IsOnGround, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E0F0, bool, HasHitWall, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767198, RockyEnemy_HasHitWall__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0135F280, void, TurnAround, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047984C8, RockyEnemy_TurnAround__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0135F300, bool, CanSeePlayer, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135F380, bool, CanOpenUp, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135F3E0, bool, ShouldCharge, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740078, RockyEnemy_ShouldCharge__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0135F490, bool, CloserThanMinChargeDistance, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135F4F0, void, FixedUpdate, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135F990, void, UpdateRotation, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldThrow, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E628, RockyEnemy_ShouldThrow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0135FB70, bool, ShouldStomped, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135FCB0, bool, IsSlashDamage, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135FDF0, bool, IsAlmostStill, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135FEE0, bool, TimeSinceLaserHitPassed, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0135FEF0, bool, IsSeinInCloseRange, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793CB8, RockyEnemy_IsSeinInCloseRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360010, void, OnPressed, (app::RockyEnemy * this_ptr, app::IPressurePlate * plate))
    IL2CPP_REGISTER_METHOD(0x01360020, void, OnReleased, (app::RockyEnemy * this_ptr, app::IPressurePlate * plate))
    IL2CPP_REGISTER_METHOD(0x00C24D60, float, GetCapsuleColliderOriginalHeight, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360030, void, ctor, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01360190, bool, _Start_b__25_0, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724D98, RockyEnemy__Start_b__25_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013601E0, bool, _Start_b__25_1, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781928, RockyEnemy__Start_b__25_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360230, bool, _Start_b__25_2, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D538, RockyEnemy__Start_b__25_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360280, bool, _Start_b__25_3, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F950, RockyEnemy__Start_b__25_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360360, bool, _Start_b__25_4, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729D60, RockyEnemy__Start_b__25_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360410, bool, _Start_b__25_5, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764D38, RockyEnemy__Start_b__25_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013604B0, bool, _Start_b__25_6, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784018, RockyEnemy__Start_b__25_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360500, bool, _Start_b__25_7, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477EEC8, RockyEnemy__Start_b__25_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013605F0, bool, _Start_b__25_8, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755388, RockyEnemy__Start_b__25_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360640, bool, _Start_b__25_9, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768128, RockyEnemy__Start_b__25_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01360690, bool, _Start_b__25_10, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743820, RockyEnemy__Start_b__25_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013608F0, bool, _Start_b__25_11, (app::RockyEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755690, RockyEnemy__Start_b__25_11__MethodInfo)
}
