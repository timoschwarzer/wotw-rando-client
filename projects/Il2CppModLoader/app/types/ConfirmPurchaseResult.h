#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfirmPurchaseResult {
        inline app::ConfirmPurchaseResult__Class** type_info = (app::ConfirmPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04748538));
        inline app::ConfirmPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::ConfirmPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "ConfirmPurchaseResult");
        }
        inline app::ConfirmPurchaseResult* create() {
            return il2cpp::create_object<app::ConfirmPurchaseResult>(get_class());
        }
    } // namespace ConfirmPurchaseResult
} // namespace app::classes::types
