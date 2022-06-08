#include <interception_macros.h>

namespace app::methods::EquipmentScreen {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009731B0, void, HideExistingHint, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009732A0, void, ShowHint, (EquipmentScreen * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x009734C0, void, Awake, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009735A0, void, Init, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00973CB0, void, OnDestroy, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00974020, void, InitializeGrids, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00974380, void, OnBindingsUpdated, (EquipmentScreen * __this, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHODINFO(0x04790CD0, EquipmentScreen_OnBindingsUpdated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00974470, void, OnNewItemHighlighted, (EquipmentScreen * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x0475E660, EquipmentScreen_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00974480, void, OnItemActivatedCallback, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A120, EquipmentScreen_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00974620, void, AssignmentPressedCallback, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F6A0, EquipmentScreen_AssignmentPressedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008760C0, void, OnSpellInventoryUpdatedCallback, (EquipmentScreen * __this, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHODINFO(0x0478FA78, EquipmentScreen_OnSpellInventoryUpdatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00974720, void, ChangeState, (EquipmentScreen * __this, EquipmentScreen_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04727A98, EquipmentScreen_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009748F0, SpellUIItem *, get_SelectedSpellUIItem, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009749F0, PlayerUberStateInventory_InventoryItem *, get_SelectedSpell, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00974AC0, bool, get_IsSuspended, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00974AD0, void, set_IsSuspended, (EquipmentScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00974AE0, SuspendableMask__Enum, get_Mask, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00974AF0, void, set_Mask, (EquipmentScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00974BB0, void, Hide, (EquipmentScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x00974D50, void, HideImmediate, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00974D90, void, Show, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00975090, void, ShowImmediate, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00975110, void, FocusOnPreviousSelection, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00975450, void, FocusOnEquipment, (EquipmentScreen * __this, PlayerUberStateInventory_InventoryItem * item));
IL2CPP_REGISTER_METHOD(0x009756F0, void, FixedUpdate, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009759B0, void, UpdateAssigning, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00975AB0, void, UpdateBinding, (EquipmentScreen * __this, PlayerUberStateInventory_InventoryItem * item, SpellInventory_Binding__Enum binding));
IL2CPP_REGISTER_METHOD(0x00975BB0, void, UpdateContextCanvasSpells, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00975CD0, void, PopulateInventoryCanvasWithEquipment, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009761B0, void, OnPostTimeSlicedEnable, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x009762D0, void, OnInstantiate, (EquipmentScreen * __this));
IL2CPP_REGISTER_METHOD(0x00976770, void, __ctor, (EquipmentScreen * __this));
}
