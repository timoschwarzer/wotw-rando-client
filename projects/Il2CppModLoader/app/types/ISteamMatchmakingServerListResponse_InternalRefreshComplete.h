#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete {
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class** type_info = (app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class**)(modloader::win::memory::resolve_rva(0x0471D098));
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingServerListResponse_InternalRefreshComplete__Class>(type_info, "Steamworks", "ISteamMatchmakingServerListResponse", "InternalRefreshComplete");
        }
        inline app::ISteamMatchmakingServerListResponse_InternalRefreshComplete* create() {
            return il2cpp::create_object<app::ISteamMatchmakingServerListResponse_InternalRefreshComplete>(get_class());
        }
    } // namespace ISteamMatchmakingServerListResponse_InternalRefreshComplete
} // namespace app::classes::types
