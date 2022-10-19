#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClusterModifier {
        namespace {
            inline app::ClusterModifier__Class* type_info_ref = nullptr;
        }
        inline app::ClusterModifier__Class** type_info = &type_info_ref;
        inline app::ClusterModifier__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifier__Class>(type_info, "", "ClusterModifier");
        }
        inline app::ClusterModifier* create() {
            return il2cpp::create_object<app::ClusterModifier>(get_class());
        }
    } // namespace ClusterModifier
} // namespace app::classes::types
