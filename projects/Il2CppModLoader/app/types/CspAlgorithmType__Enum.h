#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CspAlgorithmType__Enum {
        namespace {
            inline app::CspAlgorithmType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CspAlgorithmType__Enum__Class** type_info = &type_info_ref;
        inline app::CspAlgorithmType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CspAlgorithmType__Enum__Class>(type_info, "System.Security.Cryptography", "CspAlgorithmType");
        }
        inline app::CspAlgorithmType__Enum* create() {
            return il2cpp::create_object<app::CspAlgorithmType__Enum>(get_class());
        }
    } // namespace CspAlgorithmType__Enum
} // namespace app::classes::types
