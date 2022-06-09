#include <interception_macros.h>

namespace app::methods::Steamworks::SteamGameSearch {
IL2CPP_REGISTER_METHOD(0x027EF190, EGameSearchErrorCode_t__Enum, AddGameSearchParams, (app::String * pch_key_to_find, app::String * pch_values_to_find));
IL2CPP_REGISTER_METHOD(0x027EF5E0, EGameSearchErrorCode_t__Enum, SearchForGameWithLobby, (app::CSteamID steam_i_d_lobby, int32_t n_player_min, int32_t n_player_max));
IL2CPP_REGISTER_METHOD(0x027EF6C0, EGameSearchErrorCode_t__Enum, SearchForGameSolo, (int32_t n_player_min, int32_t n_player_max));
IL2CPP_REGISTER_METHOD(0x027EF780, EGameSearchErrorCode_t__Enum, AcceptGame, ());
IL2CPP_REGISTER_METHOD(0x027EF830, EGameSearchErrorCode_t__Enum, DeclineGame, ());
IL2CPP_REGISTER_METHOD(0x027EF8E0, EGameSearchErrorCode_t__Enum, RetrieveConnectionDetails, (app::CSteamID steam_i_d_host, app::String * * pch_connection_details, int32_t cub_connection_details));
IL2CPP_REGISTER_METHOD(0x027EFA80, EGameSearchErrorCode_t__Enum, EndGameSearch, ());
IL2CPP_REGISTER_METHOD(0x027EFB30, EGameSearchErrorCode_t__Enum, SetGameHostParams, (app::String * pch_key, app::String * pch_value));
IL2CPP_REGISTER_METHOD(0x027EFF80, EGameSearchErrorCode_t__Enum, SetConnectionDetails, (app::String * pch_connection_details, int32_t cub_connection_details));
IL2CPP_REGISTER_METHOD(0x027F0270, EGameSearchErrorCode_t__Enum, RequestPlayersForGame, (int32_t n_player_min, int32_t n_player_max, int32_t n_max_team_size));
IL2CPP_REGISTER_METHOD(0x027F0340, EGameSearchErrorCode_t__Enum, HostConfirmGameStart, (uint64_t ull_unique_game_i_d));
IL2CPP_REGISTER_METHOD(0x027F0400, EGameSearchErrorCode_t__Enum, CancelRequestPlayersForGame, ());
IL2CPP_REGISTER_METHOD(0x027F04B0, EGameSearchErrorCode_t__Enum, SubmitPlayerResult, (uint64_t ull_unique_game_i_d, app::CSteamID steam_i_d_player, app::EPlayerResult_t__Enum e_player_result));
IL2CPP_REGISTER_METHOD(0x027F0590, EGameSearchErrorCode_t__Enum, EndGame, (uint64_t ull_unique_game_i_d));
}
