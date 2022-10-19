#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationAnimatorB {
        namespace {
            inline app::RotationAnimatorB__Class* type_info_ref = nullptr;
        }
        inline app::RotationAnimatorB__Class** type_info = &type_info_ref;
        inline app::RotationAnimatorB__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimatorB__Class>(type_info, "", "RotationAnimatorB");
        }
        inline app::RotationAnimatorB* create() {
            return il2cpp::create_object<app::RotationAnimatorB>(get_class());
        }
    } // namespace RotationAnimatorB
} // namespace app::classes::types
