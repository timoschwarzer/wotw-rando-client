#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerJoinedResponse {
        inline app::PlayerJoinedResponse__Class** type_info = (app::PlayerJoinedResponse__Class**)(modloader::win::memory::resolve_rva(0x04743490));
        inline app::PlayerJoinedResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedResponse__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerJoinedResponse");
        }
        inline app::PlayerJoinedResponse* create() {
            return il2cpp::create_object<app::PlayerJoinedResponse>(get_class());
        }
    } // namespace PlayerJoinedResponse
} // namespace app::classes::types
