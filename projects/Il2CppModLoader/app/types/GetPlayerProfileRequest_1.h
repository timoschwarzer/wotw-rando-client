#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerProfileRequest_1 {
        inline app::GetPlayerProfileRequest_1__Class** type_info = (app::GetPlayerProfileRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04710A00));
        inline app::GetPlayerProfileRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerProfileRequest");
        }
        inline app::GetPlayerProfileRequest_1* create() {
            return il2cpp::create_object<app::GetPlayerProfileRequest_1>(get_class());
        }
    } // namespace GetPlayerProfileRequest_1
} // namespace app::classes::types
