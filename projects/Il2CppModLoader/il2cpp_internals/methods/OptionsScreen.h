#include <interception_macros.h>

namespace app::methods::OptionsScreen {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanInterruptTab, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsDarkBackground, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FC7F0, MenuTabBackground__Enum, get_BackgroundMode, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_BackgroundMode, (app::OptionsScreen * this_ptr, app::MenuTabBackground__Enum value));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00617D50, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x00617DD0, void, Awake, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00617EA0, void, OnDestroy, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00617EB0, void, SetDirty, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00617EC0, void, FixedUpdate, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00617ED0, void, Hide, (app::OptionsScreen * this_ptr, bool change));
    IL2CPP_REGISTER_METHOD(0x00618120, void, ShowImmediate, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618170, void, PreWarmMenu, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006181B0, void, HideImmediate, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006181E0, void, RegisterCallbacks, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618420, void, DeregisterCallbacks, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618690, void, Show, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x006187D0, void, Refresh, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618990, void, OnBackPressed, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04715AE8, OptionsScreen_OnBackPressed__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (app::OptionsScreen * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x003FF2B0, SuspendableMask__Enum, get_Mask, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618B00, void, set_Mask, (app::OptionsScreen * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x00618BB0, void, OnPostTimeSlicedEnable, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618CC0, void, OnInstantiate, (app::OptionsScreen * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00618EF0, void, __ctor, (app::OptionsScreen * this_ptr));
} // namespace app::methods::OptionsScreen
