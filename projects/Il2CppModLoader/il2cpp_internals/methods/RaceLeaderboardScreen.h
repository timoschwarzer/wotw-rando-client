#include <interception_macros.h>

namespace app::methods::RaceLeaderboardScreen {
IL2CPP_REGISTER_METHOD(0x00E9FCC0, RaceLeaderboardEntry *, get_SelectedEntry, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065FBC0, Action_2_String_Boolean_ *, get_OnSelected, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_OnSelected, (app::RaceLeaderboardScreen * this_ptr, app::Action_2_String_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x0065FBE0, Action *, get_OnCancelDownload, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_OnCancelDownload, (app::RaceLeaderboardScreen * this_ptr, app::Action * value));
IL2CPP_REGISTER_METHOD(0x00E9FDE0, CleverMenuItemSelectionManager *, get_SelectionManager, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E9FEC0, void, Awake, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA01A0, void, OnDestroy, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA04E0, void, OnCancelDownloadPressed, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04701ED8, RaceLeaderboardScreen_OnCancelDownloadPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA05F0, void, SetSyncing, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA0600, void, Setup_1, (app::RaceLeaderboardScreen * this_ptr, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_ * leaderboard, app::RaceContentType__Enum race_content_type));
IL2CPP_REGISTER_METHOD(0x00EA08B0, void, Setup_2, (app::RaceLeaderboardScreen * this_ptr, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_ * leaderboard, app::RaceContentType__Enum race_content_type, app::int32_t * entries_count));
IL2CPP_REGISTER_METHOD(0x00EA0970, void, SetTitle, (app::RaceLeaderboardScreen * this_ptr, app::MessageProvider * message_provider));
IL2CPP_REGISTER_METHOD(0x00EA0A60, void, CreateEntries, (app::RaceLeaderboardScreen * this_ptr, int32_t amount));
IL2CPP_REGISTER_METHOD(0x00EA0E70, void, ClearEntries, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA11B0, void, SetDownloadingPopup, (app::RaceLeaderboardScreen * this_ptr, bool state));
IL2CPP_REGISTER_METHOD(0x00EA1320, void, OnPressed, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0476B8D0, RaceLeaderboardScreen_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA1470, void, OnSpectatePressed, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA15C0, void, OnViewCardPressed, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA16B0, void, SetupEntries, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA2260, void, RefreshLegendCaptions, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA2770, void, EnableGhostInputs, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA2AC0, void, DisableGhostInputs, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA2E10, MessageProvider *, GetLeaderboardToggleMessage, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA2F30, MessageProvider *, GetLeaderboardFocusMessage, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowScoreCard, (app::RaceLeaderboardScreen * this_ptr, app::String * user_i_d));
IL2CPP_REGISTER_METHOD(0x00EA3050, bool, CanShowScoreCard, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHOD(0x00EA3130, void, RefreshShowScoreCardLegend, (app::RaceLeaderboardScreen * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047638A0, RaceLeaderboardScreen_RefreshShowScoreCardLegend__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EA3310, void, __ctor, (app::RaceLeaderboardScreen * this_ptr));
}
