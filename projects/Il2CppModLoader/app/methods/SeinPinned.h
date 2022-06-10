#include <interception_macros.h>

namespace app::methods::SeinPinned {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B8250, void, OnSetReferenceToSein, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B8330, void, OnEnter, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B87A0, void, OnExit, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B88C0, void, OnDestroy, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B88D0, void, Serialize, (app::SeinPinned * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x008B88E0, void, UpdateCharacterState, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B8F30, bool, ShouldPlayPinnedAnimation, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FF90, SeinPinned_ShouldPlayPinnedAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008B8F50, bool, ShouldPlayRavageAnimation, (app::SeinPinned * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047879C8, SeinPinned_ShouldPlayRavageAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinPinned * this_ptr))
}
