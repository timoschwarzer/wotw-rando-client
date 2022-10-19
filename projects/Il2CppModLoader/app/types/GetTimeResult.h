#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetTimeResult {
        inline app::GetTimeResult__Class** type_info = (app::GetTimeResult__Class**)(modloader::win::memory::resolve_rva(0x04712B20));
        inline app::GetTimeResult__Class* get_class() {
            return il2cpp::get_class<app::GetTimeResult__Class>(type_info, "PlayFab.ClientModels", "GetTimeResult");
        }
        inline app::GetTimeResult* create() {
            return il2cpp::create_object<app::GetTimeResult>(get_class());
        }
    } // namespace GetTimeResult
} // namespace app::classes::types
