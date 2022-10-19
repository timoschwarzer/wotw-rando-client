#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugDirectionalAnimation {
        namespace {
            inline app::SlugDirectionalAnimation__Class* type_info_ref = nullptr;
        }
        inline app::SlugDirectionalAnimation__Class** type_info = &type_info_ref;
        inline app::SlugDirectionalAnimation__Class* get_class() {
            return il2cpp::get_class<app::SlugDirectionalAnimation__Class>(type_info, "", "SlugDirectionalAnimation");
        }
        inline app::SlugDirectionalAnimation* create() {
            return il2cpp::create_object<app::SlugDirectionalAnimation>(get_class());
        }
    } // namespace SlugDirectionalAnimation
} // namespace app::classes::types
