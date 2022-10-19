#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RandomNumberGenerator {
        inline app::RandomNumberGenerator__Class** type_info = (app::RandomNumberGenerator__Class**)(modloader::win::memory::resolve_rva(0x0476FFC0));
        inline app::RandomNumberGenerator__Class* get_class() {
            return il2cpp::get_class<app::RandomNumberGenerator__Class>(type_info, "System.Security.Cryptography", "RandomNumberGenerator");
        }
        inline app::RandomNumberGenerator* create() {
            return il2cpp::create_object<app::RandomNumberGenerator>(get_class());
        }
    } // namespace RandomNumberGenerator
} // namespace app::classes::types
