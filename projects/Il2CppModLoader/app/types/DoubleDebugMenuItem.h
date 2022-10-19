#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoubleDebugMenuItem {
        inline app::DoubleDebugMenuItem__Class** type_info = (app::DoubleDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04764590));
        inline app::DoubleDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DoubleDebugMenuItem__Class>(type_info, "", "DoubleDebugMenuItem");
        }
        inline app::DoubleDebugMenuItem* create() {
            return il2cpp::create_object<app::DoubleDebugMenuItem>(get_class());
        }
    } // namespace DoubleDebugMenuItem
} // namespace app::classes::types
