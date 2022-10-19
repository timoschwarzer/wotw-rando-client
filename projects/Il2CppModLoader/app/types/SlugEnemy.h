#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugEnemy {
        namespace {
            inline app::SlugEnemy__Class* type_info_ref = nullptr;
        }
        inline app::SlugEnemy__Class** type_info = &type_info_ref;
        inline app::SlugEnemy__Class* get_class() {
            return il2cpp::get_class<app::SlugEnemy__Class>(type_info, "", "SlugEnemy");
        }
        inline app::SlugEnemy* create() {
            return il2cpp::create_object<app::SlugEnemy>(get_class());
        }
    } // namespace SlugEnemy
} // namespace app::classes::types
