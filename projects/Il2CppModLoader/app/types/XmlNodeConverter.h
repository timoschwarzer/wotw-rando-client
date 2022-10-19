#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeConverter {
        inline app::XmlNodeConverter__Class** type_info = (app::XmlNodeConverter__Class**)(modloader::win::memory::resolve_rva(0x047270A8));
        inline app::XmlNodeConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeConverter__Class>(type_info, "Newtonsoft.Json.Converters", "XmlNodeConverter");
        }
        inline app::XmlNodeConverter* create() {
            return il2cpp::create_object<app::XmlNodeConverter>(get_class());
        }
    } // namespace XmlNodeConverter
} // namespace app::classes::types
