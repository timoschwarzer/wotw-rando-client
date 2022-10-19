#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightDirectionNormalsModifier {
        namespace {
            inline app::LightDirectionNormalsModifier__Class* type_info_ref = nullptr;
        }
        inline app::LightDirectionNormalsModifier__Class** type_info = &type_info_ref;
        inline app::LightDirectionNormalsModifier__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionNormalsModifier__Class>(type_info, "", "LightDirectionNormalsModifier");
        }
        inline app::LightDirectionNormalsModifier* create() {
            return il2cpp::create_object<app::LightDirectionNormalsModifier>(get_class());
        }
    } // namespace LightDirectionNormalsModifier
} // namespace app::classes::types
