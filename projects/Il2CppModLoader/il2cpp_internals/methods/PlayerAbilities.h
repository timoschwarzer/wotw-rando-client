#include <interception_macros.h>

namespace app::methods::PlayerAbilities {
IL2CPP_REGISTER_METHOD(0x0117BB70, PlayerUberStateAbilities *, get_Abilities, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x0117BBA0, int32_t, get_OriStrength, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x0117BC70, int32_t, get_SplitFlameTargets, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x0117BD00, void, SetReferenceToSein, (app::PlayerAbilities * this_ptr, app::SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x0117BD30, void, Awake, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x011808D0, void, OnGlobalShardsEquip, (app::PlayerAbilities * this_ptr, app::PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHODINFO(0x04748C48, PlayerAbilities_OnGlobalShardsEquip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01180920, void, OnGlobalShardsUnequip, (app::PlayerAbilities * this_ptr, app::PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHODINFO(0x0472E6A0, PlayerAbilities_OnGlobalShardsUnequip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01180970, void, OnDestroy, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x01180CD0, void, Apply, (app::PlayerAbilities * this_ptr, app::UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01180D10, IUberState__Array *, get_AffectingUberStates, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x01180DA0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x01180F60, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value));
IL2CPP_REGISTER_METHOD(0x011810C0, HashSet_1_AbilityType_ *, GetAbilities, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x01181100, uint32_t, GetAbilitiesHashCode, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x01181140, bool, HasAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011812D0, uint8_t, GetAbilityUnlockOrder, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x01181400, int32_t, GetAbilityLevel, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011814F0, void, SetAbilityLevel, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, int32_t level));
IL2CPP_REGISTER_METHOD(0x01181610, void, IncrementAbilityLevel, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x01181720, int32_t, GetMaxLevel, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011818A0, bool, IsAbilityMaxedOutLevel, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011819A0, void, ResetAbilitiesCache, (app::PlayerAbilities * this_ptr));
IL2CPP_REGISTER_METHOD(0x01181AB0, void, __ctor, (app::PlayerAbilities * this_ptr));
}
