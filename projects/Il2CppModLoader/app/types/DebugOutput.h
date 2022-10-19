#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugOutput {
        inline app::DebugOutput__Class** type_info = (app::DebugOutput__Class**)(modloader::win::memory::resolve_rva(0x0474FF20));
        inline app::DebugOutput__Class* get_class() {
            return il2cpp::get_class<app::DebugOutput__Class>(type_info, "", "DebugOutput");
        }
        inline app::DebugOutput* create() {
            return il2cpp::create_object<app::DebugOutput>(get_class());
        }
    } // namespace DebugOutput
} // namespace app::classes::types
