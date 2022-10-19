#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSchemaTotalDigitsFacet {
        inline app::XmlSchemaTotalDigitsFacet__Class** type_info = (app::XmlSchemaTotalDigitsFacet__Class**)(modloader::win::memory::resolve_rva(0x0474A3A8));
        inline app::XmlSchemaTotalDigitsFacet__Class* get_class() {
            return il2cpp::get_class<app::XmlSchemaTotalDigitsFacet__Class>(type_info, "System.Xml.Schema", "XmlSchemaTotalDigitsFacet");
        }
        inline app::XmlSchemaTotalDigitsFacet* create() {
            return il2cpp::create_object<app::XmlSchemaTotalDigitsFacet>(get_class());
        }
    } // namespace XmlSchemaTotalDigitsFacet
} // namespace app::classes::types
