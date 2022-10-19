#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicenseProvider {
        inline app::LicenseProvider__Class** type_info = (app::LicenseProvider__Class**)(modloader::win::memory::resolve_rva(0x04733738));
        inline app::LicenseProvider__Class* get_class() {
            return il2cpp::get_class<app::LicenseProvider__Class>(type_info, "System.ComponentModel", "LicenseProvider");
        }
        inline app::LicenseProvider* create() {
            return il2cpp::create_object<app::LicenseProvider>(get_class());
        }
    } // namespace LicenseProvider
} // namespace app::classes::types
