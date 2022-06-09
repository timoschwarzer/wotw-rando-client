#include <interception_macros.h>

namespace app::methods::Moon::MeleeComboMoveSwordCharge {
IL2CPP_REGISTER_METHOD(0x002FBC20, SeinCharacter *, get_Sein, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, ButtonInputType__Enum, get_ButtonInputType, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Restricted, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01116E10, bool, CanExecute, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01117010, bool, get_OnAttackButtonPressed, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x011170E0, void, Initialize, (app::MeleeComboMoveSwordCharge * this_ptr, app::SeinComboHandler * handler, app::MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x01117330, void, OnDamageReceived, (app::MeleeComboMoveSwordCharge * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0477F040, MeleeComboMoveSwordCharge_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01117450, void, OnDestroy, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01117670, void, EnterMove, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01117740, void, ExitMove, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01117810, void, OnUpdate, (app::MeleeComboMoveSwordCharge * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x01117AD0, void, ChangeState, (app::MeleeComboMoveSwordCharge * this_ptr, app::MeleeComboMoveSwordCharge_State__Enum state));
IL2CPP_REGISTER_METHOD(0x01117C40, float, get_EffectiveDamage, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01117C60, void, OnEnterCharging, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x011181E0, void, OnExitCharging, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01118480, void, OnEnterCharged, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01118A90, void, OnExitCharged, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01118D90, void, UpdateStates, (app::MeleeComboMoveSwordCharge * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x01118F10, void, UpdateNormal, (app::MeleeComboMoveSwordCharge * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x01119140, void, UpdateCharging, (app::MeleeComboMoveSwordCharge * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x011191E0, void, UpdateCharged, (app::MeleeComboMoveSwordCharge * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAttacking, (app::MeleeComboMoveSwordCharge * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldUpdateWhileDisabled, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x01119200, void, __ctor, (app::MeleeComboMoveSwordCharge * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
