#include <interception_macros.h>

namespace app::methods::ControlsScreen {
    IL2CPP_REGISTER_METHOD(0x011F2DC0, bool, get_IsVisible, ())
    IL2CPP_REGISTER_METHOD(0x011F2EF0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011F2F70, void, Awake, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F2F80, void, Initialize, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F44D0, void, OnDestroy, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F45B0, void, OnEnable, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F4740, void, OnDisable, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F4750, void, SaveChanges, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F4B70, void, ApplyControlScheme, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796D30, ControlsScreen_ApplyControlScheme__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F4FC0, void, SetControlScheme, (app::ControlsScreen * this_ptr, app::ControlScheme__Enum scheme))
    IL2CPP_REGISTER_METHOD(0x011F50C0, void, ApplyCommandList, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749438, ControlsScreen_ApplyCommandList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F5420, void, FixedUpdate, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F5820, app::KeyCode__Enum__Array *, CommandToBinding, (app::ControlsScreen * this_ptr, app::KeybindingCommandMapAsset_CommandBindingEnum__Enum binding))
    IL2CPP_REGISTER_METHODINFO(0x04764FA0, ControlsScreen_CommandToBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011F2F70, void, OnBeforeFaderIsPlayed, (app::ControlsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControlsScreen * this_ptr))
}
