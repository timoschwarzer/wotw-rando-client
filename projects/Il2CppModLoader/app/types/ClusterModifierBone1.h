#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClusterModifierBone1 {
        namespace {
            inline app::ClusterModifierBone1__Class* type_info_ref = nullptr;
        }
        inline app::ClusterModifierBone1__Class** type_info = &type_info_ref;
        inline app::ClusterModifierBone1__Class* get_class() {
            return il2cpp::get_class<app::ClusterModifierBone1__Class>(type_info, "", "ClusterModifierBone1");
        }
        inline app::ClusterModifierBone1* create() {
            return il2cpp::create_object<app::ClusterModifierBone1>(get_class());
        }
    } // namespace ClusterModifierBone1
} // namespace app::classes::types
