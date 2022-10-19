#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_WaterLineModifier {
        inline app::ShaderID_WaterLineModifier__Class** type_info = (app::ShaderID_WaterLineModifier__Class**)(modloader::win::memory::resolve_rva(0x04740030));
        inline app::ShaderID_WaterLineModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_WaterLineModifier__Class>(type_info, "", "ShaderID_WaterLineModifier");
        }
        inline app::ShaderID_WaterLineModifier* create() {
            return il2cpp::create_object<app::ShaderID_WaterLineModifier>(get_class());
        }
    } // namespace ShaderID_WaterLineModifier
} // namespace app::classes::types
