#include <interception_macros.h>

namespace app::methods::SpecialAbilityZone {
IL2CPP_REGISTER_METHOD(0x00EF7470, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00EF7540, bool, get_IsInside, ());
IL2CPP_REGISTER_METHOD(0x00EF7830, bool, get_IsInsideRainbowZone, ());
IL2CPP_REGISTER_METHOD(0x00EF7B20, void, Awake, (app::SpecialAbilityZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EF7CF0, void, OnEnable, (app::SpecialAbilityZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EF7DB0, void, OnDisable, (app::SpecialAbilityZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00886330, Rect, get_Bounds, (app::SpecialAbilityZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::SpecialAbilityZone * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EF7E90, void, __cctor, ());
}
