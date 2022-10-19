#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabSettings {
        inline app::PlayFabSettings__Class** type_info = (app::PlayFabSettings__Class**)(modloader::win::memory::resolve_rva(0x04715CF0));
        inline app::PlayFabSettings__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSettings__Class>(type_info, "PlayFab", "PlayFabSettings");
        }
        inline app::PlayFabSettings* create() {
            return il2cpp::create_object<app::PlayFabSettings>(get_class());
        }
    } // namespace PlayFabSettings
} // namespace app::classes::types
