#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMediaPlugin {
        namespace {
            inline app::AVProWindowsMediaPlugin__Class* type_info_ref = nullptr;
        }
        inline app::AVProWindowsMediaPlugin__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaPlugin__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaPlugin__Class>(type_info, "", "AVProWindowsMediaPlugin");
        }
        inline app::AVProWindowsMediaPlugin* create() {
            return il2cpp::create_object<app::AVProWindowsMediaPlugin>(get_class());
        }
    } // namespace AVProWindowsMediaPlugin
} // namespace app::classes::types
