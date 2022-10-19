#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpenTradeResponse {
        inline app::OpenTradeResponse__Class** type_info = (app::OpenTradeResponse__Class**)(modloader::win::memory::resolve_rva(0x04785DF8));
        inline app::OpenTradeResponse__Class* get_class() {
            return il2cpp::get_class<app::OpenTradeResponse__Class>(type_info, "PlayFab.ClientModels", "OpenTradeResponse");
        }
        inline app::OpenTradeResponse* create() {
            return il2cpp::create_object<app::OpenTradeResponse>(get_class());
        }
    } // namespace OpenTradeResponse
} // namespace app::classes::types
