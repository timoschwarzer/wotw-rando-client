#include <interception_macros.h>

namespace app::methods::MapmakerScreen {
IL2CPP_REGISTER_METHOD(0x00A0B3F0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x006B8940, CleverMenuItemSelectionManager *, get_NavigationManager, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_PurchasedSkillUpgrade, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B8970, void, set_PurchasedSkillUpgrade, (MapmakerScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417920, MenuTabBackground__Enum, get_BackgroundMode, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_NeedsExperienceUI, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0B470, void, HideExistingHint, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0B560, void, ShowHint, (MapmakerScreen * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x00A0B780, void, Awake, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0B850, void, OnDestroy, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0B8F0, void, OnNewItemHighlighted, (MapmakerScreen * __this, bool firstAfterPopulating));
IL2CPP_REGISTER_METHODINFO(0x0475F2A0, MapmakerScreen_OnNewItemHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A0B900, void, OnItemActivatedCallback, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F518, MapmakerScreen_OnItemActivatedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A0B9B0, MapmakerUIItem *, get_SelectedItem, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0BAB0, MapmakerItem *, get_SelectedUpgradeItem, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9090, bool, get_IsSuspended, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B90A0, void, set_IsSuspended, (MapmakerScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006B90B0, SuspendableMask__Enum, get_Mask, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0BB80, void, set_Mask, (MapmakerScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00A0BC40, void, Hide, (MapmakerScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x006B93E0, void, HideImmediate, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0BEA0, void, Show, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x006B9600, void, ShowImmediate, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0C140, void, FocusOnPreviousSelection, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0C3A0, void, FixedUpdate, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0C560, void, OnCategoryChanged, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0C7F0, void, UpdateContextCanvasShards, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0C970, void, PopulateInventoryCanvasWithUpgrades, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0CD80, void, OnPostTimeSlicedEnable, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0CE90, void, Init, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0D180, void, OnInstantiate, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0D7E0, void, UpgradeItemsBasedOnHandToHandQuestCompletion, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, GameObject *, get_EffectTarget, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x005BFFC0, Event_1 *, get_PurchaseCompleteSound, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x005BFFE0, Event_1 *, get_PurchaseBeginSound, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x005C0000, RTPC *, get_PurchaseRTPC, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0D8A0, void, PurchaseUpdate, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0DB20, bool, CanPurchase, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0DE40, void, CompletePurchase, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x00A0E030, float, GetAllMapmakerUpgradesProgress, (MapmakerScreen * __this));
IL2CPP_REGISTER_METHOD(0x006BBAB0, void, __ctor, (MapmakerScreen * __this));
}
