#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotSupportedException {
        inline app::NotSupportedException__Class** type_info = (app::NotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x047603B0));
        inline app::NotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::NotSupportedException__Class>(type_info, "System", "NotSupportedException");
        }
        inline app::NotSupportedException* create() {
            return il2cpp::create_object<app::NotSupportedException>(get_class());
        }
    } // namespace NotSupportedException
} // namespace app::classes::types
