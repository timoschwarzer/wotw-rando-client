#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorVariationRootGroup {
        namespace {
            inline app::ColorVariationRootGroup__Class* type_info_ref = nullptr;
        }
        inline app::ColorVariationRootGroup__Class** type_info = &type_info_ref;
        inline app::ColorVariationRootGroup__Class* get_class() {
            return il2cpp::get_class<app::ColorVariationRootGroup__Class>(type_info, "", "ColorVariationRootGroup");
        }
        inline app::ColorVariationRootGroup* create() {
            return il2cpp::create_object<app::ColorVariationRootGroup>(get_class());
        }
    } // namespace ColorVariationRootGroup
} // namespace app::classes::types
