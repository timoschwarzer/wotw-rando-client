#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardRequest {
        inline app::GetFriendLeaderboardRequest__Class** type_info = (app::GetFriendLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x047522C8));
        inline app::GetFriendLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardRequest__Class>(type_info, "PlayFab.ClientModels", "GetFriendLeaderboardRequest");
        }
        inline app::GetFriendLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardRequest>(get_class());
        }
    } // namespace GetFriendLeaderboardRequest
} // namespace app::classes::types
