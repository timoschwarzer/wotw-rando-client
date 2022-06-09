#include <interception_macros.h>

namespace app::methods::SpellUIEquipScreen {
IL2CPP_REGISTER_METHOD(0x009468B0, void, HideExistingHint, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x009469A0, void, ShowHint, (app::SpellUIEquipScreen * this_ptr, app::MessageProvider * message_provider));
IL2CPP_REGISTER_METHOD(0x00946BC0, bool, get_IsCurrentCategoryShards, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00946BD0, void, Awake, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00946CB0, void, Init, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x009482A0, void, OnDestroy, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00948890, void, OnGlobalShardsUpdated, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472AB10, SpellUIEquipScreen_OnGlobalShardsUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009489A0, void, OnBindingsUpdated, (app::SpellUIEquipScreen * this_ptr, app::SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHODINFO(0x0470BD70, SpellUIEquipScreen_OnBindingsUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00948AA0, void, OnNewItemHighlighted, (app::SpellUIEquipScreen * this_ptr, bool first_after_populating));
IL2CPP_REGISTER_METHODINFO(0x0472A018, SpellUIEquipScreen_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00948AC0, void, OnItemActivatedCallback, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477D650, SpellUIEquipScreen_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00948E40, void, OnSocketActivatedCallback, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471A990, SpellUIEquipScreen_OnSocketActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00948FD0, void, OnSocketAddedCallback, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0472CC88, SpellUIEquipScreen_OnSocketAddedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009492C0, void, OnShardOverlayClosing, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478EDD8, SpellUIEquipScreen_OnShardOverlayClosing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00949300, void, OnShardActivatedCallback, (app::SpellUIEquipScreen * this_ptr, app::SpiritShardUIItem * shard));
IL2CPP_REGISTER_METHODINFO(0x0471A210, SpellUIEquipScreen_OnShardActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00949460, void, OnConfirmationSelected, (app::SpellUIEquipScreen * this_ptr, app::SpellUIConfirmationOverlay_Selection__Enum selection));
IL2CPP_REGISTER_METHODINFO(0x0473A288, SpellUIEquipScreen_OnConfirmationSelected__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009496F0, void, OnShardInventoryUpdatedCallback, (app::SpellUIEquipScreen * this_ptr, app::PlayerUberStateShards_Shard * item));
IL2CPP_REGISTER_METHODINFO(0x0474D970, SpellUIEquipScreen_OnShardInventoryUpdatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00949710, void, OnSpellInventoryUpdatedCallback, (app::SpellUIEquipScreen * this_ptr, app::PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHODINFO(0x0475EAE0, SpellUIEquipScreen_OnSpellInventoryUpdatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00949730, void, DoSocketShard, (app::SpellUIEquipScreen * this_ptr, app::SpiritShardUIItem * item));
IL2CPP_REGISTER_METHOD(0x009497F0, void, ChangeState, (app::SpellUIEquipScreen * this_ptr, app::SpellUIEquipScreen_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00949870, SpellUIItem *, get_SelectedSpellUIItem, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949970, PlayerUberStateInventory_InventoryItem *, get_SelectedSpell, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949A40, SpiritShardUIItem *, get_SelectedSpiritShardUIItem, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949B40, PlayerUberStateShards_Shard *, get_SelectedSpiritShard, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949CF0, bool, get_IsSuspended, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949D00, void, set_IsSuspended, (app::SpellUIEquipScreen * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00949D10, SuspendableMask__Enum, get_Mask, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949D20, void, set_Mask, (app::SpellUIEquipScreen * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00949DE0, void, Hide, (app::SpellUIEquipScreen * this_ptr, bool change));
IL2CPP_REGISTER_METHOD(0x00949EB0, void, HideImmediate, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00949EF0, void, Show, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094A200, void, ShowImmediate, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094A270, void, FocusOnPreviousSelection, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094A310, void, FocusOnEquipment, (app::SpellUIEquipScreen * this_ptr, app::PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x0094A6F0, void, FocusOnShard, (app::SpellUIEquipScreen * this_ptr, app::PlayerUberStateShards_Shard * item));
IL2CPP_REGISTER_METHOD(0x0094AA60, void, FixedUpdate, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094AC60, void, UpdateCategory, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094AE60, void, OnCategoryChanged, (app::SpellUIEquipScreen * this_ptr, app::SpellUIEquipScreen_Category__Enum new_category, bool play_sounds));
IL2CPP_REGISTER_METHOD(0x0094B190, void, UpdateSocketing, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094B2F0, void, UpdateButtonBinding, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094B370, bool, BindButtonIfPressed, (app::SpellUIEquipScreen * this_ptr, app::PlayerUberStateInventory_InventoryItem * item, app::SpellInventory_Binding__Enum binding, app::Input_Command__Enum command));
IL2CPP_REGISTER_METHOD(0x0094B550, void, DoUpgradeShard, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00948AA0, void, UpdateContextCanvas, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094B730, void, UpdateContextCanvasSpells, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094B990, void, UpdateContextCanvasShards, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094C0E0, void, PopulateInventoryCanvas, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094C100, void, PopulateInventoryCanvasWithEquipment, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094C440, void, PopulateInventoryCanvasWithShards, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094C740, void, OnPostTimeSlicedEnable, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094C860, void, OnInstantiate, (app::SpellUIEquipScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0094CF90, void, __ctor, (app::SpellUIEquipScreen * this_ptr));
}
