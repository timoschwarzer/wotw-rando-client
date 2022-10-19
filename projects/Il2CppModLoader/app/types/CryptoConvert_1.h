#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CryptoConvert_1 {
        namespace {
            inline app::CryptoConvert_1__Class* type_info_ref = nullptr;
        }
        inline app::CryptoConvert_1__Class** type_info = &type_info_ref;
        inline app::CryptoConvert_1__Class* get_class() {
            return il2cpp::get_class<app::CryptoConvert_1__Class>(type_info, "Mono.Security.Cryptography", "CryptoConvert");
        }
        inline app::CryptoConvert_1* create() {
            return il2cpp::create_object<app::CryptoConvert_1>(get_class());
        }
    } // namespace CryptoConvert_1
} // namespace app::classes::types
