#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelMatchmakingTicketRequest {
        inline app::CancelMatchmakingTicketRequest__Class** type_info = (app::CancelMatchmakingTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04725FB0));
        inline app::CancelMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CancelMatchmakingTicketRequest");
        }
        inline app::CancelMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CancelMatchmakingTicketRequest>(get_class());
        }
    } // namespace CancelMatchmakingTicketRequest
} // namespace app::classes::types
