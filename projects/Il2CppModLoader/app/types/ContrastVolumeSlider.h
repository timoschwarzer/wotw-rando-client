#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContrastVolumeSlider {
        namespace {
            inline app::ContrastVolumeSlider__Class* type_info_ref = nullptr;
        }
        inline app::ContrastVolumeSlider__Class** type_info = &type_info_ref;
        inline app::ContrastVolumeSlider__Class* get_class() {
            return il2cpp::get_class<app::ContrastVolumeSlider__Class>(type_info, "", "ContrastVolumeSlider");
        }
        inline app::ContrastVolumeSlider* create() {
            return il2cpp::create_object<app::ContrastVolumeSlider>(get_class());
        }
    } // namespace ContrastVolumeSlider
} // namespace app::classes::types
