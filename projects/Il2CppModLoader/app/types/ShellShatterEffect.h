#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShellShatterEffect {
        namespace {
            inline app::ShellShatterEffect__Class* type_info_ref = nullptr;
        }
        inline app::ShellShatterEffect__Class** type_info = &type_info_ref;
        inline app::ShellShatterEffect__Class* get_class() {
            return il2cpp::get_class<app::ShellShatterEffect__Class>(type_info, "", "ShellShatterEffect");
        }
        inline app::ShellShatterEffect* create() {
            return il2cpp::create_object<app::ShellShatterEffect>(get_class());
        }
    } // namespace ShellShatterEffect
} // namespace app::classes::types
