#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingRulesResponse_RulesResponded {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::String * pch_rule, app::String * pch_value));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::String * pch_rule, app::String * pch_value, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingRulesResponse_RulesResponded * this_ptr, app::IAsyncResult * result));
}
