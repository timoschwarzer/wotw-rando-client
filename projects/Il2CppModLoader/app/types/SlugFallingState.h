#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SlugFallingState {
        namespace {
            inline app::SlugFallingState__Class* type_info_ref = nullptr;
        }
        inline app::SlugFallingState__Class** type_info = &type_info_ref;
        inline app::SlugFallingState__Class* get_class() {
            return il2cpp::get_class<app::SlugFallingState__Class>(type_info, "", "SlugFallingState");
        }
        inline app::SlugFallingState* create() {
            return il2cpp::create_object<app::SlugFallingState>(get_class());
        }
    } // namespace SlugFallingState
} // namespace app::classes::types
