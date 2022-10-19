#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubtractUserVirtualCurrencyRequest_1 {
        inline app::SubtractUserVirtualCurrencyRequest_1__Class** type_info = (app::SubtractUserVirtualCurrencyRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047732F0));
        inline app::SubtractUserVirtualCurrencyRequest_1__Class* get_class() {
            return il2cpp::get_class<app::SubtractUserVirtualCurrencyRequest_1__Class>(type_info, "PlayFab.ServerModels", "SubtractUserVirtualCurrencyRequest");
        }
        inline app::SubtractUserVirtualCurrencyRequest_1* create() {
            return il2cpp::create_object<app::SubtractUserVirtualCurrencyRequest_1>(get_class());
        }
    } // namespace SubtractUserVirtualCurrencyRequest_1
} // namespace app::classes::types
