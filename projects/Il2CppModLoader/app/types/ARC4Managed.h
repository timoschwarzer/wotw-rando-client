#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ARC4Managed {
        inline app::ARC4Managed__Class** type_info = (app::ARC4Managed__Class**)(modloader::win::memory::resolve_rva(0x04733378));
        inline app::ARC4Managed__Class* get_class() {
            return il2cpp::get_class<app::ARC4Managed__Class>(type_info, "Mono.Security.Cryptography", "ARC4Managed");
        }
        inline app::ARC4Managed* create() {
            return il2cpp::create_object<app::ARC4Managed>(get_class());
        }
    } // namespace ARC4Managed
} // namespace app::classes::types
