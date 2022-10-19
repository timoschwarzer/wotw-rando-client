#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace _BinaryWriter {
        inline app::_BinaryWriter__Class** type_info = (app::_BinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x04760868));
        inline app::_BinaryWriter__Class* get_class() {
            return il2cpp::get_class<app::_BinaryWriter__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
        }
        inline app::_BinaryWriter* create() {
            return il2cpp::create_object<app::_BinaryWriter>(get_class());
        }
    } // namespace _BinaryWriter
} // namespace app::classes::types
