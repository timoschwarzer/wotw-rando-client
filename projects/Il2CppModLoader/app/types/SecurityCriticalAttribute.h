#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityCriticalAttribute {
        namespace {
            inline app::SecurityCriticalAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SecurityCriticalAttribute__Class** type_info = &type_info_ref;
        inline app::SecurityCriticalAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityCriticalAttribute__Class>(type_info, "System.Security", "SecurityCriticalAttribute");
        }
        inline app::SecurityCriticalAttribute* create() {
            return il2cpp::create_object<app::SecurityCriticalAttribute>(get_class());
        }
    } // namespace SecurityCriticalAttribute
} // namespace app::classes::types
