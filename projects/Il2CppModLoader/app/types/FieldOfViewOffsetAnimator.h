#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldOfViewOffsetAnimator {
        namespace {
            inline app::FieldOfViewOffsetAnimator__Class* type_info_ref = nullptr;
        }
        inline app::FieldOfViewOffsetAnimator__Class** type_info = &type_info_ref;
        inline app::FieldOfViewOffsetAnimator__Class* get_class() {
            return il2cpp::get_class<app::FieldOfViewOffsetAnimator__Class>(type_info, "", "FieldOfViewOffsetAnimator");
        }
        inline app::FieldOfViewOffsetAnimator* create() {
            return il2cpp::create_object<app::FieldOfViewOffsetAnimator>(get_class());
        }
    } // namespace FieldOfViewOffsetAnimator
} // namespace app::classes::types
