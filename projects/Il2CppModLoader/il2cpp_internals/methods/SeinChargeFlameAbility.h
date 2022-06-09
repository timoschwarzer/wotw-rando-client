#include <interception_macros.h>

namespace app::methods::SeinChargeFlameAbility {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A44730, float, get_ChargeDuration, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A44750, bool, get_HasEnoughEnergy, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A44800, app::Input_InputButtonProcessor *, get_ChargeFlameButton, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A448A0, bool, get_IsStatePerforming, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A448A0, bool, get_IsCharging, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A448E0, void, OnSetReferenceToSein, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A449C0, void, SpendEnergy, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A44A70, void, RestoreEnergy, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A44B20, void, OnAwake, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A456A0, void, OnDestroy, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A45850, void, OnRestoreCheckpoint, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04728280, SeinChargeFlameAbility_OnRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00A45A10, void, OnEnterStartState, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04752F90, SeinChargeFlameAbility_OnEnterStartState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00A45AF0, void, UpdateStartState, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476DEB8, SeinChargeFlameAbility_UpdateStartState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00A45DA0, void, UpdatePrechargingState, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04777C30, SeinChargeFlameAbility_UpdatePrechargingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00A46450, void, UpdateChargingState, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04706788, SeinChargeFlameAbility_UpdateChargingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00A46A90, void, ReleaseChargeBurst, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A46F60, void, UpdateChargedState, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0478EDE8, SeinChargeFlameAbility_UpdateChargedState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00A47290, void, UpdateCharacterState, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A47300, void, OnExit, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A47530, app::SoundSource *, CurrentChargingSound, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A47620, void, __ctor, (app::SeinChargeFlameAbility * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A47840, void, __cctor, ());
}
