#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPlayersResponse {
IL2CPP_REGISTER_METHOD(0x015FC610, void, __ctor, (app::ISteamMatchmakingPlayersResponse * this_ptr, app::ISteamMatchmakingPlayersResponse_AddPlayerToList * on_add_player_to_list, app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond * on_players_failed_to_respond, app::ISteamMatchmakingPlayersResponse_PlayersRefreshComplete * on_players_refresh_complete));
IL2CPP_REGISTER_METHODINFO(0x0471F0A0, ISteamMatchmakingPlayersResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FCBD0, void, Finalize, (app::ISteamMatchmakingPlayersResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x015FCCE0, void, InternalOnAddPlayerToList, (app::ISteamMatchmakingPlayersResponse * this_ptr, app::void * thisptr, app::void * pch_name, int32_t n_score, float fl_time_played));
IL2CPP_REGISTER_METHODINFO(0x0472CD90, ISteamMatchmakingPlayersResponse_InternalOnAddPlayerToList__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnPlayersFailedToRespond, (app::ISteamMatchmakingPlayersResponse * this_ptr, app::void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x047778A8, ISteamMatchmakingPlayersResponse_InternalOnPlayersFailedToRespond__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CB380, void, InternalOnPlayersRefreshComplete, (app::ISteamMatchmakingPlayersResponse * this_ptr, app::void * thisptr));
IL2CPP_REGISTER_METHODINFO(0x04773980, ISteamMatchmakingPlayersResponse_InternalOnPlayersRefreshComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015FC460, void *, operator_, (app::ISteamMatchmakingPlayersResponse * that));
}
