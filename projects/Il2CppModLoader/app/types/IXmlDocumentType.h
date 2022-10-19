#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlDocumentType {
        inline app::IXmlDocumentType__Class** type_info = (app::IXmlDocumentType__Class**)(modloader::win::memory::resolve_rva(0x0478F510));
        inline app::IXmlDocumentType__Class* get_class() {
            return il2cpp::get_class<app::IXmlDocumentType__Class>(type_info, "Newtonsoft.Json.Converters", "IXmlDocumentType");
        }
    } // namespace IXmlDocumentType
} // namespace app::classes::types
