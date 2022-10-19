#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugDirectionalAnimationPicker {
        inline app::SlugDirectionalAnimationPicker__Class** type_info = (app::SlugDirectionalAnimationPicker__Class**)(modloader::win::memory::resolve_rva(0x0473B670));
        inline app::SlugDirectionalAnimationPicker__Class* get_class() {
            return il2cpp::get_class<app::SlugDirectionalAnimationPicker__Class>(type_info, "", "SlugDirectionalAnimationPicker");
        }
        inline app::SlugDirectionalAnimationPicker* create() {
            return il2cpp::create_object<app::SlugDirectionalAnimationPicker>(get_class());
        }
    } // namespace SlugDirectionalAnimationPicker
} // namespace app::classes::types
