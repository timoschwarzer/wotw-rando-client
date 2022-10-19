#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlElement {
        inline app::IXmlElement__Class** type_info = (app::IXmlElement__Class**)(modloader::win::memory::resolve_rva(0x0471E948));
        inline app::IXmlElement__Class* get_class() {
            return il2cpp::get_class<app::IXmlElement__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlElement");
        }
    } // namespace IXmlElement
} // namespace app::classes::types
