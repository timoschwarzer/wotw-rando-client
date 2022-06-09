#include <interception_macros.h>

namespace app::methods::StatsScreen {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD150, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x009BD1D0, CleverMenuItemSelectionManager*, get_Navigation, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD1F0, StatUISlot*, get_SelectedItem, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD2E0, void, Awake, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD410, void, OnDestroy, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD5D0, void, Hide, (app::StatsScreen * this_ptr, bool change));
    IL2CPP_REGISTER_METHOD(0x00950610, void, ShowImmediate, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009503F0, void, HideImmediate, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD610, void, Show, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BD770, void, OnBackPressed, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473A0E0, StatsScreen_OnBackPressed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x009BD940, void, PopulateItems_1, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BDA00, void, PopulateItems_2, (app::StatsScreen * this_ptr, app::List_1_StatSetting_* settings));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (app::StatsScreen * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BDC60, void, set_Mask, (app::StatsScreen * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x009BDD20, void, OnPostTimeSlicedEnable, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BDE30, void, OnInstantiate, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BE2F0, void, FixedUpdate, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BE3D0, void, UpdateLabel, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BE770, void, PreviousFilter, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BE790, void, NextFilter, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BE7B0, void, UpdateScreenFilter, (app::StatsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x009BEA80, StatSetting_StatDisplayCategory__Enum, GetPreviousFilter, (app::StatsScreen * this_ptr, app::StatSetting_StatDisplayCategory__Enum filter));
    IL2CPP_REGISTER_METHOD(0x009BEA90, StatSetting_StatDisplayCategory__Enum, GetNextFilter, (app::StatsScreen * this_ptr, app::StatSetting_StatDisplayCategory__Enum filter));
    IL2CPP_REGISTER_METHOD(0x009BEAA0, MessageProvider*, GetFilterMessageProvider, (app::StatsScreen * this_ptr, app::StatSetting_StatDisplayCategory__Enum filter));
    IL2CPP_REGISTER_METHOD(0x009BECA0, void, __ctor, (app::StatsScreen * this_ptr));
} // namespace app::methods::StatsScreen
