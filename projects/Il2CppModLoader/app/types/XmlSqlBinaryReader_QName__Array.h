#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_QName__Array {
        inline app::XmlSqlBinaryReader_QName__Array__Class** type_info = (app::XmlSqlBinaryReader_QName__Array__Class**)(modloader::win::memory::resolve_rva(0x047879F0));
        inline app::XmlSqlBinaryReader_QName__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSqlBinaryReader_QName__Array__Class>(type_info, "System.Xml", "XmlSqlBinaryReader+QName[]");
        }
        inline app::XmlSqlBinaryReader_QName__Array* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_QName__Array>(get_class());
        }
    } // namespace XmlSqlBinaryReader_QName__Array
} // namespace app::classes::types
