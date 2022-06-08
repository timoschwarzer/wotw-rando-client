#include <interception_macros.h>

namespace app::methods::Steamworks::SteamItemInstanceID_t {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (SteamItemInstanceID_t__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (SteamItemInstanceID_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FFE80, bool, Equals, (SteamItemInstanceID_t__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (SteamItemInstanceID_t__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (SteamItemInstanceID_t x, SteamItemInstanceID_t y));
IL2CPP_REGISTER_METHOD(0x02786730, bool, operator___, (SteamItemInstanceID_t x, SteamItemInstanceID_t y));
IL2CPP_REGISTER_METHOD(0x004C50A0, SteamItemInstanceID_t, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (SteamItemInstanceID_t that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (SteamItemInstanceID_t__Boxed * __this, SteamItemInstanceID_t other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (SteamItemInstanceID_t__Boxed * __this, SteamItemInstanceID_t other));
IL2CPP_REGISTER_METHOD(0x027867E0, void, __cctor, ());
}
