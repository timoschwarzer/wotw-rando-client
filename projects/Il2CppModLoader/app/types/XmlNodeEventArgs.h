#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeEventArgs {
        inline app::XmlNodeEventArgs__Class** type_info = (app::XmlNodeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04792F48));
        inline app::XmlNodeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeEventArgs__Class>(type_info, "System.Xml.Serialization", "XmlNodeEventArgs");
        }
        inline app::XmlNodeEventArgs* create() {
            return il2cpp::create_object<app::XmlNodeEventArgs>(get_class());
        }
    } // namespace XmlNodeEventArgs
} // namespace app::classes::types
