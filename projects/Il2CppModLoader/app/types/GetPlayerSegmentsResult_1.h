#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsResult_1 {
        inline app::GetPlayerSegmentsResult_1__Class** type_info = (app::GetPlayerSegmentsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04763DB0));
        inline app::GetPlayerSegmentsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerSegmentsResult");
        }
        inline app::GetPlayerSegmentsResult_1* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsResult_1>(get_class());
        }
    } // namespace GetPlayerSegmentsResult_1
} // namespace app::classes::types
