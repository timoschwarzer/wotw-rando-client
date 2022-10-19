#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISteamMatchmakingPingResponse_ServerFailedToRespond {
        namespace {
            inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class* type_info_ref = nullptr;
        }
        inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class** type_info = &type_info_ref;
        inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class* get_class() {
            return il2cpp::get_nested_class<app::ISteamMatchmakingPingResponse_ServerFailedToRespond__Class>(type_info, "Steamworks", "ISteamMatchmakingPingResponse", "ServerFailedToRespond");
        }
        inline app::ISteamMatchmakingPingResponse_ServerFailedToRespond* create() {
            return il2cpp::create_object<app::ISteamMatchmakingPingResponse_ServerFailedToRespond>(get_class());
        }
    } // namespace ISteamMatchmakingPingResponse_ServerFailedToRespond
} // namespace app::classes::types
