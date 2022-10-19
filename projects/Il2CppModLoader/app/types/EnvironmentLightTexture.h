#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvironmentLightTexture {
        inline app::EnvironmentLightTexture__Class** type_info = (app::EnvironmentLightTexture__Class**)(modloader::win::memory::resolve_rva(0x0477D7F8));
        inline app::EnvironmentLightTexture__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightTexture__Class>(type_info, "", "EnvironmentLightTexture");
        }
        inline app::EnvironmentLightTexture* create() {
            return il2cpp::create_object<app::EnvironmentLightTexture>(get_class());
        }
    } // namespace EnvironmentLightTexture
} // namespace app::classes::types
