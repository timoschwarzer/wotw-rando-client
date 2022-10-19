#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnakeSolver {
        namespace {
            inline app::SnakeSolver__Class* type_info_ref = nullptr;
        }
        inline app::SnakeSolver__Class** type_info = &type_info_ref;
        inline app::SnakeSolver__Class* get_class() {
            return il2cpp::get_class<app::SnakeSolver__Class>(type_info, "", "SnakeSolver");
        }
        inline app::SnakeSolver* create() {
            return il2cpp::create_object<app::SnakeSolver>(get_class());
        }
    } // namespace SnakeSolver
} // namespace app::classes::types
