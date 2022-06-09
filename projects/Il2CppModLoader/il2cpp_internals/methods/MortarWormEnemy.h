#include <interception_macros.h>

namespace app::methods::MortarWormEnemy {
    IL2CPP_REGISTER_METHOD(0x01480330, bool, CanBeOptimized, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01480370, bool, IgnoreDamage, (app::MortarWormEnemy * this_ptr, app::Damage * damage));
    IL2CPP_REGISTER_METHODINFO(0x04734E60, MortarWormEnemy_IgnoreDamage__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x014803E0, bool, ShouldHide, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04738CB0, MortarWormEnemy_ShouldHide__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01480470, bool, ShouldEmerge, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01480550, bool, ShouldCharge, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047421B8, MortarWormEnemy_ShouldCharge__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintDebugText, (app::MortarWormEnemy * this_ptr, app::String * param));
    IL2CPP_REGISTER_METHOD(0x01480330, bool, get_IsHidden, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014805E0, void, Start, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01481C80, void, ForceEmerge, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01481CD0, void, Awake, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01481E30, void, OnDestroy, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01481FF0, void, FixedUpdate, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01482210, void, UpdateMortarTrajectoryPeriodically, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x014822D0, void, __ctor, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01482420, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x014825B0, bool, _Start_b__28_0, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047146D0, MortarWormEnemy__Start_b__28_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x014825E0, bool, _Start_b__28_1, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04767220, MortarWormEnemy__Start_b__28_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01482630, bool, _Start_b__28_2, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047912B0, MortarWormEnemy__Start_b__28_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01482680, bool, _Start_b__28_3, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04721C60, MortarWormEnemy__Start_b__28_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x014827B0, void, _Start_b__28_4, (app::MortarWormEnemy * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04723638, MortarWormEnemy__Start_b__28_4__MethodInfo);
}
