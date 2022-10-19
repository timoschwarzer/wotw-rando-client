#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumInfo {
        inline app::EnumInfo__Class** type_info = (app::EnumInfo__Class**)(modloader::win::memory::resolve_rva(0x047684C0));
        inline app::EnumInfo__Class* get_class() {
            return il2cpp::get_class<app::EnumInfo__Class>(type_info, "Newtonsoft.Json.Utilities", "EnumInfo");
        }
        inline app::EnumInfo* create() {
            return il2cpp::create_object<app::EnumInfo>(get_class());
        }
    } // namespace EnumInfo
} // namespace app::classes::types
