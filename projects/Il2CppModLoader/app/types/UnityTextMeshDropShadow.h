#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTextMeshDropShadow {
        namespace {
            inline app::UnityTextMeshDropShadow__Class* type_info_ref = nullptr;
        }
        inline app::UnityTextMeshDropShadow__Class** type_info = &type_info_ref;
        inline app::UnityTextMeshDropShadow__Class* get_class() {
            return il2cpp::get_class<app::UnityTextMeshDropShadow__Class>(type_info, "", "UnityTextMeshDropShadow");
        }
        inline app::UnityTextMeshDropShadow* create() {
            return il2cpp::create_object<app::UnityTextMeshDropShadow>(get_class());
        }
    } // namespace UnityTextMeshDropShadow
} // namespace app::classes::types
