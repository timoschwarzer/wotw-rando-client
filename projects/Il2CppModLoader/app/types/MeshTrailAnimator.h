#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshTrailAnimator {
        namespace {
            inline app::MeshTrailAnimator__Class* type_info_ref = nullptr;
        }
        inline app::MeshTrailAnimator__Class** type_info = &type_info_ref;
        inline app::MeshTrailAnimator__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailAnimator__Class>(type_info, "", "MeshTrailAnimator");
        }
        inline app::MeshTrailAnimator* create() {
            return il2cpp::create_object<app::MeshTrailAnimator>(get_class());
        }
    } // namespace MeshTrailAnimator
} // namespace app::classes::types
