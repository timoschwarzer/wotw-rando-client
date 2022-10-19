#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerStatisticVersionsRequest {
        inline app::GetPlayerStatisticVersionsRequest__Class** type_info = (app::GetPlayerStatisticVersionsRequest__Class**)(modloader::win::memory::resolve_rva(0x047741E0));
        inline app::GetPlayerStatisticVersionsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerStatisticVersionsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerStatisticVersionsRequest");
        }
        inline app::GetPlayerStatisticVersionsRequest* create() {
            return il2cpp::create_object<app::GetPlayerStatisticVersionsRequest>(get_class());
        }
    } // namespace GetPlayerStatisticVersionsRequest
} // namespace app::classes::types
