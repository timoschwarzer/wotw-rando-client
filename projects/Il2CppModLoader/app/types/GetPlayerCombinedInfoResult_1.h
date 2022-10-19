#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoResult_1 {
        inline app::GetPlayerCombinedInfoResult_1__Class** type_info = (app::GetPlayerCombinedInfoResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477DF40));
        inline app::GetPlayerCombinedInfoResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerCombinedInfoResult");
        }
        inline app::GetPlayerCombinedInfoResult_1* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoResult_1>(get_class());
        }
    } // namespace GetPlayerCombinedInfoResult_1
} // namespace app::classes::types
