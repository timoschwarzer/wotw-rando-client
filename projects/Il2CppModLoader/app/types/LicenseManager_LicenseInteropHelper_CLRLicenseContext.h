#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicenseManager_LicenseInteropHelper_CLRLicenseContext {
        inline app::LicenseManager_LicenseInteropHelper_CLRLicenseContext__Class** type_info = (app::LicenseManager_LicenseInteropHelper_CLRLicenseContext__Class**)(modloader::win::memory::resolve_rva(0x04773A68));
        inline app::LicenseManager_LicenseInteropHelper_CLRLicenseContext__Class* get_class() {
            return il2cpp::get_nested_class<app::LicenseManager_LicenseInteropHelper_CLRLicenseContext__Class>(type_info, "System.ComponentModel", "LicenseManager+LicenseInteropHelper", "CLRLicenseContext");
        }
        inline app::LicenseManager_LicenseInteropHelper_CLRLicenseContext* create() {
            return il2cpp::create_object<app::LicenseManager_LicenseInteropHelper_CLRLicenseContext>(get_class());
        }
    } // namespace LicenseManager_LicenseInteropHelper_CLRLicenseContext
} // namespace app::classes::types
