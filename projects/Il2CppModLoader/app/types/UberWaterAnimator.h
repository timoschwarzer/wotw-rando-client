#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterAnimator {
        namespace {
            inline app::UberWaterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterAnimator__Class** type_info = &type_info_ref;
        inline app::UberWaterAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberWaterAnimator__Class>(type_info, "", "UberWaterAnimator");
        }
        inline app::UberWaterAnimator* create() {
            return il2cpp::create_object<app::UberWaterAnimator>(get_class());
        }
    } // namespace UberWaterAnimator
} // namespace app::classes::types
