#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberExplosionAnimator {
        namespace {
            inline app::UberExplosionAnimator__Class* type_info_ref = nullptr;
        }
        inline app::UberExplosionAnimator__Class** type_info = &type_info_ref;
        inline app::UberExplosionAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberExplosionAnimator__Class>(type_info, "", "UberExplosionAnimator");
        }
        inline app::UberExplosionAnimator* create() {
            return il2cpp::create_object<app::UberExplosionAnimator>(get_class());
        }
    } // namespace UberExplosionAnimator
} // namespace app::classes::types
