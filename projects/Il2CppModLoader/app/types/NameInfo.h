#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameInfo {
        inline app::NameInfo__Class** type_info = (app::NameInfo__Class**)(modloader::win::memory::resolve_rva(0x04735F50));
        inline app::NameInfo__Class* get_class() {
            return il2cpp::get_class<app::NameInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");
        }
        inline app::NameInfo* create() {
            return il2cpp::create_object<app::NameInfo>(get_class());
        }
    } // namespace NameInfo
} // namespace app::classes::types
