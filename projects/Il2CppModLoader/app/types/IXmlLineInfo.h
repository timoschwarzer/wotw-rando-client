#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlLineInfo {
        inline app::IXmlLineInfo__Class** type_info = (app::IXmlLineInfo__Class**)(modloader::win::memory::resolve_rva(0x0476E5C0));
        inline app::IXmlLineInfo__Class* get_class() {
            return il2cpp::get_class<app::IXmlLineInfo__Class>(type_info, "System.Xml", "IXmlLineInfo");
        }
    } // namespace IXmlLineInfo
} // namespace app::classes::types
