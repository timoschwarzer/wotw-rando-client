#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_OnDefaultAttributeUseDelegate {
        inline app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class** type_info = (app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class**)(modloader::win::memory::resolve_rva(0x047015E8));
        inline app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "OnDefaultAttributeUseDelegate");
        }
        inline app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_OnDefaultAttributeUseDelegate>(get_class());
        }
    } // namespace XmlTextReaderImpl_OnDefaultAttributeUseDelegate
} // namespace app::classes::types
