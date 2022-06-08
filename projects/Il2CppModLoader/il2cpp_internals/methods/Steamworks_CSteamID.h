#include <interception_macros.h>

namespace app::methods::Steamworks::CSteamID {
IL2CPP_REGISTER_METHOD(0x0012F2F0, void, __ctor, (CSteamID__Boxed * __this, AccountID_t unAccountID, EUniverse__Enum eUniverse, EAccountType__Enum eAccountType));
IL2CPP_REGISTER_METHOD(0x0012F300, void, __ctor, (CSteamID__Boxed * __this, AccountID_t unAccountID, uint32_t unAccountInstance, EUniverse__Enum eUniverse, EAccountType__Enum eAccountType));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (CSteamID__Boxed * __this, uint64_t ulSteamID));
IL2CPP_REGISTER_METHOD(0x0012F330, void, Set, (CSteamID__Boxed * __this, AccountID_t unAccountID, EUniverse__Enum eUniverse, EAccountType__Enum eAccountType));
IL2CPP_REGISTER_METHOD(0x0012F300, void, InstancedSet, (CSteamID__Boxed * __this, AccountID_t unAccountID, uint32_t unInstance, EUniverse__Enum eUniverse, EAccountType__Enum eAccountType));
IL2CPP_REGISTER_METHOD(0x00120B90, void, Clear, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F340, void, CreateBlankAnonLogon, (CSteamID__Boxed * __this, EUniverse__Enum eUniverse));
IL2CPP_REGISTER_METHOD(0x0012F370, void, CreateBlankAnonUserLogon, (CSteamID__Boxed * __this, EUniverse__Enum eUniverse));
IL2CPP_REGISTER_METHOD(0x0012F3A0, bool, BBlankAnonAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F3D0, bool, BGameServerAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F3F0, bool, BPersistentGameServerAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F410, bool, BAnonGameServerAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F420, bool, BContentServerAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F440, bool, BClanAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F460, bool, BChatAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F470, bool, IsLobby, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F4A0, bool, BIndividualAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F4C0, bool, BAnonAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F4E0, bool, BAnonUserAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F500, bool, BConsoleUserAccount, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F520, void, SetAccountID, (CSteamID__Boxed * __this, AccountID_t other));
IL2CPP_REGISTER_METHOD(0x0012F540, void, SetAccountInstance, (CSteamID__Boxed * __this, uint32_t other));
IL2CPP_REGISTER_METHOD(0x0012F560, void, SetEAccountType, (CSteamID__Boxed * __this, EAccountType__Enum other));
IL2CPP_REGISTER_METHOD(0x0012F580, void, SetEUniverse, (CSteamID__Boxed * __this, EUniverse__Enum other));
IL2CPP_REGISTER_METHOD(0x0012F5A0, void, ClearIndividualInstance, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F5D0, bool, HasNoIndividualInstance, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010E170, AccountID_t, GetAccountID, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F600, uint32_t, GetUnAccountInstance, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F610, EAccountType__Enum, GetEAccountType, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F620, EUniverse__Enum, GetEUniverse, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F630, bool, IsValid, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F1B0, String *, ToString, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012F6A0, bool, Equals, (CSteamID__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (CSteamID__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, operator___, (CSteamID x, CSteamID y));
IL2CPP_REGISTER_METHOD(0x015FA5E0, bool, operator___, (CSteamID x, CSteamID y));
IL2CPP_REGISTER_METHOD(0x004C50A0, CSteamID, operator_, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, operator_, (CSteamID that));
IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals, (CSteamID__Boxed * __this, CSteamID other));
IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (CSteamID__Boxed * __this, CSteamID other));
IL2CPP_REGISTER_METHOD(0x015FA690, void, __cctor, ());
}
