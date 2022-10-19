#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrashContext {
        inline app::CrashContext__Class** type_info = (app::CrashContext__Class**)(modloader::win::memory::resolve_rva(0x04709B70));
        inline app::CrashContext__Class* get_class() {
            return il2cpp::get_class<app::CrashContext__Class>(type_info, "Moon", "CrashContext");
        }
        inline app::CrashContext* create() {
            return il2cpp::create_object<app::CrashContext>(get_class());
        }
    } // namespace CrashContext
} // namespace app::classes::types
