#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompatibleComparer_1 {
        inline app::CompatibleComparer_1__Class** type_info = (app::CompatibleComparer_1__Class**)(modloader::win::memory::resolve_rva(0x04715C58));
        inline app::CompatibleComparer_1__Class* get_class() {
            return il2cpp::get_class<app::CompatibleComparer_1__Class>(type_info, "System.Collections.Specialized", "CompatibleComparer");
        }
        inline app::CompatibleComparer_1* create() {
            return il2cpp::create_object<app::CompatibleComparer_1>(get_class());
        }
    } // namespace CompatibleComparer_1
} // namespace app::classes::types
