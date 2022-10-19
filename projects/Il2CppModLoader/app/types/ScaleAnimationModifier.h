#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScaleAnimationModifier {
        namespace {
            inline app::ScaleAnimationModifier__Class* type_info_ref = nullptr;
        }
        inline app::ScaleAnimationModifier__Class** type_info = &type_info_ref;
        inline app::ScaleAnimationModifier__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimationModifier__Class>(type_info, "", "ScaleAnimationModifier");
        }
        inline app::ScaleAnimationModifier* create() {
            return il2cpp::create_object<app::ScaleAnimationModifier>(get_class());
        }
    } // namespace ScaleAnimationModifier
} // namespace app::classes::types
