#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MACTripleDES {
        inline app::MACTripleDES__Class** type_info = (app::MACTripleDES__Class**)(modloader::win::memory::resolve_rva(0x04742B90));
        inline app::MACTripleDES__Class* get_class() {
            return il2cpp::get_class<app::MACTripleDES__Class>(type_info, "System.Security.Cryptography", "MACTripleDES");
        }
        inline app::MACTripleDES* create() {
            return il2cpp::create_object<app::MACTripleDES>(get_class());
        }
    } // namespace MACTripleDES
} // namespace app::classes::types
