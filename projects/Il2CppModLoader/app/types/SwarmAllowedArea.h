#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmAllowedArea {
        namespace {
            inline app::SwarmAllowedArea__Class* type_info_ref = nullptr;
        }
        inline app::SwarmAllowedArea__Class** type_info = &type_info_ref;
        inline app::SwarmAllowedArea__Class* get_class() {
            return il2cpp::get_class<app::SwarmAllowedArea__Class>(type_info, "", "SwarmAllowedArea");
        }
        inline app::SwarmAllowedArea* create() {
            return il2cpp::create_object<app::SwarmAllowedArea>(get_class());
        }
    } // namespace SwarmAllowedArea
} // namespace app::classes::types
