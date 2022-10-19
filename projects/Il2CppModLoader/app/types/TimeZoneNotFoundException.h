#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZoneNotFoundException {
        inline app::TimeZoneNotFoundException__Class** type_info = (app::TimeZoneNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x0472C3D0));
        inline app::TimeZoneNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneNotFoundException__Class>(type_info, "System", "TimeZoneNotFoundException");
        }
        inline app::TimeZoneNotFoundException* create() {
            return il2cpp::create_object<app::TimeZoneNotFoundException>(get_class());
        }
    } // namespace TimeZoneNotFoundException
} // namespace app::classes::types
