#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotificationChecker_c {
        inline app::NotificationChecker_c__Class** type_info = (app::NotificationChecker_c__Class**)(modloader::win::memory::resolve_rva(0x0473E690));
        inline app::NotificationChecker_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NotificationChecker_c__Class>(type_info, "", "NotificationChecker", "<>c");
        }
        inline app::NotificationChecker_c* create() {
            return il2cpp::create_object<app::NotificationChecker_c>(get_class());
        }
    } // namespace NotificationChecker_c
} // namespace app::classes::types
