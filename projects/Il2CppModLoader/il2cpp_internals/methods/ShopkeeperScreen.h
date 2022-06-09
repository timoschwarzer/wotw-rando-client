#include <interception_macros.h>

namespace app::methods::ShopkeeperScreen {
IL2CPP_REGISTER_METHOD(0x002FBBC0, ShopkeeperScreen *, get_ShopInstance, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_ShopInstance, (app::ShopkeeperScreen * this_ptr, app::ShopkeeperScreen * value));
IL2CPP_REGISTER_METHOD(0x005BDA00, ShopkeeperItem__Array *, get_Items, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDA80, CleverMenuItemSelectionManager *, get_NavigationManager, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDAA0, bool, get_PurchasedItem, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDAB0, void, set_PurchasedItem, (app::ShopkeeperScreen * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00417920, MenuTabBackground__Enum, get_BackgroundMode, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDAC0, void, HideExistingHint, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDBB0, void, ShowHint, (app::ShopkeeperScreen * this_ptr, app::MessageProvider * message_provider));
IL2CPP_REGISTER_METHODINFO(0x0475E650, ShopkeeperScreen_ShowHint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005BDDF0, void, Awake, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDEC0, void, OnDestroy, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BDF60, void, OnNewItemHighlighted, (app::ShopkeeperScreen * this_ptr, bool first_after_populating));
IL2CPP_REGISTER_METHODINFO(0x04753250, ShopkeeperScreen_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005BDF70, void, OnItemActivatedCallback, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04759710, ShopkeeperScreen_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005BDF80, ShopkeeperUIItem *, get_SelectedItem, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BE080, ShopkeeperItem *, get_SelectedUpgradeItem, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FBE70, bool, get_IsSuspended, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FBE80, void, set_IsSuspended, (app::ShopkeeperScreen * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x003FBE90, SuspendableMask__Enum, get_Mask, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BE150, void, set_Mask, (app::ShopkeeperScreen * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x005BE210, void, Hide, (app::ShopkeeperScreen * this_ptr, bool change));
IL2CPP_REGISTER_METHOD(0x005BE500, void, HideImmediate, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BE540, void, Show, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BE740, void, ShowImmediate, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BE7B0, void, FocusOnPreviousSelection, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BEA10, void, FixedUpdate, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, AdditionalUpdate, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BEBF0, void, OnCategoryChanged, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BEED0, void, UpdateContextCanvasShards, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BF0B0, void, PopulateInventoryCanvasWithUpgrades, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BF500, void, OnPostTimeSlicedEnable, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BF610, void, Init, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BF900, void, OnInstantiate, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCC0, GameObject *, get_EffectTarget, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BFFC0, Event_1 *, get_PurchaseCompleteSound, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005BFFE0, Event_1 *, get_PurchaseBeginSound, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C0000, RTPC *, get_PurchaseRTPC, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C0020, void, PurchaseUpdate, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C02A0, bool, CanPurchase, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C04A0, void, CompletePurchase, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x005C0680, float, GetPurchaseProgress, (app::ShopkeeperScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00418B30, void, __ctor, (app::ShopkeeperScreen * this_ptr));
}
