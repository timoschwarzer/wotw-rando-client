#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PurchaseItemRequest {
        inline app::PurchaseItemRequest__Class** type_info = (app::PurchaseItemRequest__Class**)(modloader::win::memory::resolve_rva(0x047507B0));
        inline app::PurchaseItemRequest__Class* get_class() {
            return il2cpp::get_class<app::PurchaseItemRequest__Class>(type_info, "PlayFab.ClientModels", "PurchaseItemRequest");
        }
        inline app::PurchaseItemRequest* create() {
            return il2cpp::create_object<app::PurchaseItemRequest>(get_class());
        }
    } // namespace PurchaseItemRequest
} // namespace app::classes::types
