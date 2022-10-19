#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_DynamicLightSource {
        inline app::ShaderID_DynamicLightSource__Class** type_info = (app::ShaderID_DynamicLightSource__Class**)(modloader::win::memory::resolve_rva(0x04791BE0));
        inline app::ShaderID_DynamicLightSource__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DynamicLightSource__Class>(type_info, "", "ShaderID_DynamicLightSource");
        }
        inline app::ShaderID_DynamicLightSource* create() {
            return il2cpp::create_object<app::ShaderID_DynamicLightSource>(get_class());
        }
    } // namespace ShaderID_DynamicLightSource
} // namespace app::classes::types
