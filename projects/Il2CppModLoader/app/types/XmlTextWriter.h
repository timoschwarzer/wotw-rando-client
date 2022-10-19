#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextWriter {
        inline app::XmlTextWriter__Class** type_info = (app::XmlTextWriter__Class**)(modloader::win::memory::resolve_rva(0x0477C980));
        inline app::XmlTextWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriter__Class>(type_info, "System.Xml", "XmlTextWriter");
        }
        inline app::XmlTextWriter* create() {
            return il2cpp::create_object<app::XmlTextWriter>(get_class());
        }
    } // namespace XmlTextWriter
} // namespace app::classes::types
