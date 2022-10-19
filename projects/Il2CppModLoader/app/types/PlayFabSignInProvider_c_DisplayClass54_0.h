#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabSignInProvider_c_DisplayClass54_0 {
        inline app::PlayFabSignInProvider_c_DisplayClass54_0__Class** type_info = (app::PlayFabSignInProvider_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x0471E070));
        inline app::PlayFabSignInProvider_c_DisplayClass54_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabSignInProvider_c_DisplayClass54_0__Class>(type_info, "SystemIntegration", "PlayFabSignInProvider", "<>c__DisplayClass54_0");
        }
        inline app::PlayFabSignInProvider_c_DisplayClass54_0* create() {
            return il2cpp::create_object<app::PlayFabSignInProvider_c_DisplayClass54_0>(get_class());
        }
    } // namespace PlayFabSignInProvider_c_DisplayClass54_0
} // namespace app::classes::types
