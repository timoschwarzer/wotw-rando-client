#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalTurbulenceMaskAnimator {
        namespace {
            inline app::GlobalTurbulenceMaskAnimator__Class* type_info_ref = nullptr;
        }
        inline app::GlobalTurbulenceMaskAnimator__Class** type_info = &type_info_ref;
        inline app::GlobalTurbulenceMaskAnimator__Class* get_class() {
            return il2cpp::get_class<app::GlobalTurbulenceMaskAnimator__Class>(type_info, "", "GlobalTurbulenceMaskAnimator");
        }
        inline app::GlobalTurbulenceMaskAnimator* create() {
            return il2cpp::create_object<app::GlobalTurbulenceMaskAnimator>(get_class());
        }
    } // namespace GlobalTurbulenceMaskAnimator
} // namespace app::classes::types
