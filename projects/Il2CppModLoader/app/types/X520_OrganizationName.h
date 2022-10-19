#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_OrganizationName {
        inline app::X520_OrganizationName__Class** type_info = (app::X520_OrganizationName__Class**)(modloader::win::memory::resolve_rva(0x04757C10));
        inline app::X520_OrganizationName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_OrganizationName__Class>(type_info, "Mono.Security.X509", "X520", "OrganizationName");
        }
        inline app::X520_OrganizationName* create() {
            return il2cpp::create_object<app::X520_OrganizationName>(get_class());
        }
    } // namespace X520_OrganizationName
} // namespace app::classes::types
