#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelTradeRequest {
        inline app::CancelTradeRequest__Class** type_info = (app::CancelTradeRequest__Class**)(modloader::win::memory::resolve_rva(0x0472E600));
        inline app::CancelTradeRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelTradeRequest__Class>(type_info, "PlayFab.ClientModels", "CancelTradeRequest");
        }
        inline app::CancelTradeRequest* create() {
            return il2cpp::create_object<app::CancelTradeRequest>(get_class());
        }
    } // namespace CancelTradeRequest
} // namespace app::classes::types
