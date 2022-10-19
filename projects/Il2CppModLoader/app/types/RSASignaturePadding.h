#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSASignaturePadding {
        inline app::RSASignaturePadding__Class** type_info = (app::RSASignaturePadding__Class**)(modloader::win::memory::resolve_rva(0x04765E40));
        inline app::RSASignaturePadding__Class* get_class() {
            return il2cpp::get_class<app::RSASignaturePadding__Class>(type_info, "System.Security.Cryptography", "RSASignaturePadding");
        }
        inline app::RSASignaturePadding* create() {
            return il2cpp::create_object<app::RSASignaturePadding>(get_class());
        }
    } // namespace RSASignaturePadding
} // namespace app::classes::types
