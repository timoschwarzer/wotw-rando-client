#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICustomFormatter {
        inline app::ICustomFormatter__Class** type_info = (app::ICustomFormatter__Class**)(modloader::win::memory::resolve_rva(0x0472A798));
        inline app::ICustomFormatter__Class* get_class() {
            return il2cpp::get_class<app::ICustomFormatter__Class>(type_info, "System", "ICustomFormatter");
        }
    } // namespace ICustomFormatter
} // namespace app::classes::types
