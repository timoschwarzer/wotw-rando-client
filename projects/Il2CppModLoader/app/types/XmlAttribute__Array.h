#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttribute__Array {
        inline app::XmlAttribute__Array__Class** type_info = (app::XmlAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x04790B70));
        inline app::XmlAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlAttribute__Array__Class>(type_info, "System.Xml", "XmlAttribute[]");
        }
        inline app::XmlAttribute__Array* create() {
            return il2cpp::create_object<app::XmlAttribute__Array>(get_class());
        }
    } // namespace XmlAttribute__Array
} // namespace app::classes::types
