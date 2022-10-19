#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDtdAttributeInfo {
        inline app::IDtdAttributeInfo__Class** type_info = (app::IDtdAttributeInfo__Class**)(modloader::win::memory::resolve_rva(0x0474FC28));
        inline app::IDtdAttributeInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeInfo__Class>(type_info, "System.Xml", "IDtdAttributeInfo");
        }
    } // namespace IDtdAttributeInfo
} // namespace app::classes::types
