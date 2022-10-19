#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Extension {
        inline app::X509Extension__Class** type_info = (app::X509Extension__Class**)(modloader::win::memory::resolve_rva(0x04744498));
        inline app::X509Extension__Class* get_class() {
            return il2cpp::get_class<app::X509Extension__Class>(type_info, "Mono.Security.X509", "X509Extension");
        }
        inline app::X509Extension* create() {
            return il2cpp::create_object<app::X509Extension>(get_class());
        }
    } // namespace X509Extension
} // namespace app::classes::types
