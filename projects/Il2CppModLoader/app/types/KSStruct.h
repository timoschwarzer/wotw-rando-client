#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KSStruct {
        inline app::KSStruct__Class** type_info = (app::KSStruct__Class**)(modloader::win::memory::resolve_rva(0x04767640));
        inline app::KSStruct__Class* get_class() {
            return il2cpp::get_class<app::KSStruct__Class>(type_info, "System.Xml.Schema", "KSStruct");
        }
        inline app::KSStruct* create() {
            return il2cpp::create_object<app::KSStruct>(get_class());
        }
    } // namespace KSStruct
} // namespace app::classes::types
