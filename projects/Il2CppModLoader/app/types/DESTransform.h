#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DESTransform {
        inline app::DESTransform__Class** type_info = (app::DESTransform__Class**)(modloader::win::memory::resolve_rva(0x04739EB0));
        inline app::DESTransform__Class* get_class() {
            return il2cpp::get_class<app::DESTransform__Class>(type_info, "System.Security.Cryptography", "DESTransform");
        }
        inline app::DESTransform* create() {
            return il2cpp::create_object<app::DESTransform>(get_class());
        }
    } // namespace DESTransform
} // namespace app::classes::types
