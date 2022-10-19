#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HDRShadowDetailSlider {
        namespace {
            inline app::HDRShadowDetailSlider__Class* type_info_ref = nullptr;
        }
        inline app::HDRShadowDetailSlider__Class** type_info = &type_info_ref;
        inline app::HDRShadowDetailSlider__Class* get_class() {
            return il2cpp::get_class<app::HDRShadowDetailSlider__Class>(type_info, "", "HDRShadowDetailSlider");
        }
        inline app::HDRShadowDetailSlider* create() {
            return il2cpp::create_object<app::HDRShadowDetailSlider>(get_class());
        }
    } // namespace HDRShadowDetailSlider
} // namespace app::classes::types
