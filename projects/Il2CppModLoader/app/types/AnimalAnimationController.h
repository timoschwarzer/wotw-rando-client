#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimalAnimationController {
        namespace {
            inline app::AnimalAnimationController__Class* type_info_ref = nullptr;
        }
        inline app::AnimalAnimationController__Class** type_info = &type_info_ref;
        inline app::AnimalAnimationController__Class* get_class() {
            return il2cpp::get_class<app::AnimalAnimationController__Class>(type_info, "Moon", "AnimalAnimationController");
        }
        inline app::AnimalAnimationController* create() {
            return il2cpp::create_object<app::AnimalAnimationController>(get_class());
        }
    } // namespace AnimalAnimationController
} // namespace app::classes::types
