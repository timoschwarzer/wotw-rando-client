#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StackGuard {
        inline app::StackGuard__Class** type_info = (app::StackGuard__Class**)(modloader::win::memory::resolve_rva(0x04752EE0));
        inline app::StackGuard__Class* get_class() {
            return il2cpp::get_class<app::StackGuard__Class>(type_info, "System.Threading.Tasks", "StackGuard");
        }
        inline app::StackGuard* create() {
            return il2cpp::create_object<app::StackGuard>(get_class());
        }
    } // namespace StackGuard
} // namespace app::classes::types
