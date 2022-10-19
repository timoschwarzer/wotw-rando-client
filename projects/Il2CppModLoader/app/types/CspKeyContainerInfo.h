#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CspKeyContainerInfo {
        inline app::CspKeyContainerInfo__Class** type_info = (app::CspKeyContainerInfo__Class**)(modloader::win::memory::resolve_rva(0x04760BD8));
        inline app::CspKeyContainerInfo__Class* get_class() {
            return il2cpp::get_class<app::CspKeyContainerInfo__Class>(type_info, "System.Security.Cryptography", "CspKeyContainerInfo");
        }
        inline app::CspKeyContainerInfo* create() {
            return il2cpp::create_object<app::CspKeyContainerInfo>(get_class());
        }
    } // namespace CspKeyContainerInfo
} // namespace app::classes::types
