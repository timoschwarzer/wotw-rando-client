#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugState {
        namespace {
            inline app::DropSlugState__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugState__Class** type_info = &type_info_ref;
        inline app::DropSlugState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugState__Class>(type_info, "", "DropSlugState");
        }
        inline app::DropSlugState* create() {
            return il2cpp::create_object<app::DropSlugState>(get_class());
        }
    } // namespace DropSlugState
} // namespace app::classes::types
