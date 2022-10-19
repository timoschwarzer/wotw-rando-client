#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DirectionalLightModifier {
        namespace {
            inline app::DirectionalLightModifier__Class* type_info_ref = nullptr;
        }
        inline app::DirectionalLightModifier__Class** type_info = &type_info_ref;
        inline app::DirectionalLightModifier__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightModifier__Class>(type_info, "", "DirectionalLightModifier");
        }
        inline app::DirectionalLightModifier* create() {
            return il2cpp::create_object<app::DirectionalLightModifier>(get_class());
        }
    } // namespace DirectionalLightModifier
} // namespace app::classes::types
