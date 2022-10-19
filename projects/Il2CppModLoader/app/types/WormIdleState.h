#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormIdleState {
        namespace {
            inline app::WormIdleState__Class* type_info_ref = nullptr;
        }
        inline app::WormIdleState__Class** type_info = &type_info_ref;
        inline app::WormIdleState__Class* get_class() {
            return il2cpp::get_class<app::WormIdleState__Class>(type_info, "", "WormIdleState");
        }
        inline app::WormIdleState* create() {
            return il2cpp::create_object<app::WormIdleState>(get_class());
        }
    } // namespace WormIdleState
} // namespace app::classes::types
