#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlTextParser {
        inline app::IXmlTextParser__Class** type_info = (app::IXmlTextParser__Class**)(modloader::win::memory::resolve_rva(0x04726A80));
        inline app::IXmlTextParser__Class* get_class() {
            return il2cpp::get_class<app::IXmlTextParser__Class>(type_info, "System.Xml.Serialization", "IXmlTextParser");
        }
    } // namespace IXmlTextParser
} // namespace app::classes::types
