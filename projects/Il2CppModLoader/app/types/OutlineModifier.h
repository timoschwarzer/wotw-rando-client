#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutlineModifier {
        namespace {
            inline app::OutlineModifier__Class* type_info_ref = nullptr;
        }
        inline app::OutlineModifier__Class** type_info = &type_info_ref;
        inline app::OutlineModifier__Class* get_class() {
            return il2cpp::get_class<app::OutlineModifier__Class>(type_info, "", "OutlineModifier");
        }
        inline app::OutlineModifier* create() {
            return il2cpp::create_object<app::OutlineModifier>(get_class());
        }
    } // namespace OutlineModifier
} // namespace app::classes::types
