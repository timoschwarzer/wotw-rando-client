#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWhitespace {
        inline app::XmlWhitespace__Class** type_info = (app::XmlWhitespace__Class**)(modloader::win::memory::resolve_rva(0x04767058));
        inline app::XmlWhitespace__Class* get_class() {
            return il2cpp::get_class<app::XmlWhitespace__Class>(type_info, "System.Xml", "XmlWhitespace");
        }
        inline app::XmlWhitespace* create() {
            return il2cpp::create_object<app::XmlWhitespace>(get_class());
        }
    } // namespace XmlWhitespace
} // namespace app::classes::types
