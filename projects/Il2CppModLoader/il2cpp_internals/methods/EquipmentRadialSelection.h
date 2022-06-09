#include <interception_macros.h>

namespace app::methods::EquipmentRadialSelection {
IL2CPP_REGISTER_METHOD(0x00CAB820, CleverMenuItemSelectionManager *, get_NavigationManager, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsActive, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_IsActive, (app::EquipmentRadialSelection * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00CAB900, float, get_AngleStep, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAB920, bool, get_IsSpiral, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAB960, void, OnEnable, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CABC70, void, OnDisable, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CABF80, void, Awake, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAC010, void, FixedUpdate, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAC070, void, OnBindingUpdate, (app::EquipmentRadialSelection * this_ptr, app::SpellInventory_Binding__Enum obj));
IL2CPP_REGISTER_METHODINFO(0x0476ACE0, EquipmentRadialSelection_OnBindingUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CAC190, void, QueueRenderersRefresh, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAC1C0, void, Configure, (app::EquipmentRadialSelection * this_ptr, app::GameObject * item_prefab, app::GameObject * item_highlight_g_o, app::GameObject * placeholder_root));
IL2CPP_REGISTER_METHOD(0x00CAC560, void, SetIsActive, (app::EquipmentRadialSelection * this_ptr, bool active));
IL2CPP_REGISTER_METHOD(0x00CAC600, void, UpdateSelection, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAC700, void, UpdateItemHighlight, (app::EquipmentRadialSelection * this_ptr, app::EquipmentUIInventoryItem * item));
IL2CPP_REGISTER_METHOD(0x00CACAC0, int32_t, GetWheelIndex, (app::EquipmentType__Enum item));
IL2CPP_REGISTER_METHOD(0x00CACB90, void, Populate, (app::EquipmentRadialSelection * this_ptr, app::List_1_System_Object_ * inventory_items, app::Object * grid_context));
IL2CPP_REGISTER_METHOD(0x00CADBA0, void, UpdateSpiral, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CADE80, void, AdjustItemIndexForSpiral, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473AD00, EquipmentRadialSelection_AdjustItemIndexForSpiral__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CAE400, void, UpdateItemProperties, (app::EquipmentRadialSelection * this_ptr, app::Object * grid_context));
IL2CPP_REGISTER_METHOD(0x00CAE630, Vector3, DirectionToSelected, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAE760, float, SelectedAngle, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAE830, bool, get_IsSuspended, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAE840, void, set_IsSuspended, (app::EquipmentRadialSelection * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x008468B0, SuspendableMask__Enum, get_Mask, (app::EquipmentRadialSelection * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CAE850, void, set_Mask, (app::EquipmentRadialSelection * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00CAE910, void, __ctor, (app::EquipmentRadialSelection * this_ptr));
}
