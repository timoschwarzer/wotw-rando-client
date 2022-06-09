#include <interception_macros.h>

namespace app::methods::FishEnemy {
    IL2CPP_REGISTER_METHOD(0x012673D0, bool, CanBeOptimized, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01267410, float, get_BendValue, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012674D0, void, FixedUpdate, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01267950, bool, ShouldThrow, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01267AA0, void, OnBashed, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04731998, FishEnemy_OnBashed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01267C40, bool, WasBashed, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474CB70, FishEnemy_WasBashed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01267D90, bool, HitGround, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475C6C8, FishEnemy_HitGround__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01267FF0, void, Start, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A6A0, void, ApplyGravity, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A740, bool, PlayerIsTooFarFromStartPosition, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A7A0, bool, InSwimDistance, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A800, bool, InAttackDistance, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A860, bool, OutOfSwimDistance, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A8C0, bool, PlayerInWater, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126A9B0, bool, OutOfWater, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477A2E8, FishEnemy_OutOfWater__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00875720, bool, InWater, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04725EC8, FishEnemy_InWater__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126A9C0, void, UpdateSpriteRotation, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126ABF0, app::Vector2, get_AngleAsVector, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126AC00, void, ApplySoftSpeed, (app::FishEnemy * this_ptr, app::Vector2 speed));
    IL2CPP_REGISTER_METHOD(0x0126ADB0, void, OnExitWater, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126AEA0, void, OnEnterWater, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126AF90, void, __ctor, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126B0E0, bool, _Start_b__19_0, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473AA48, FishEnemy__Start_b__19_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B190, bool, _Start_b__19_1, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04748EE0, FishEnemy__Start_b__19_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B260, bool, _Start_b__19_2, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475A508, FishEnemy__Start_b__19_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B310, bool, _Start_b__19_3, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04764CB8, FishEnemy__Start_b__19_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B3B0, bool, _Start_b__19_4, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04741320, FishEnemy__Start_b__19_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B400, bool, _Start_b__19_5, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04768108, FishEnemy__Start_b__19_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B460, bool, _Start_b__19_6, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047148B8, FishEnemy__Start_b__19_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0126B4D0, bool, _Start_b__19_7, (app::FishEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04739A88, FishEnemy__Start_b__19_7__MethodInfo);
}
