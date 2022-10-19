#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationEntry {
        inline app::SerializationEntry__Class** type_info = (app::SerializationEntry__Class**)(modloader::win::memory::resolve_rva(0x0474ECE0));
        inline app::SerializationEntry__Class* get_class() {
            return il2cpp::get_class<app::SerializationEntry__Class>(type_info, "System.Runtime.Serialization", "SerializationEntry");
        }
        inline app::SerializationEntry* create() {
            return il2cpp::create_object<app::SerializationEntry>(get_class());
        }
        inline app::SerializationEntry__Boxed* box(app::SerializationEntry value) {
            return il2cpp::box_value<app::SerializationEntry__Boxed>(get_class(), value);
        }
    } // namespace SerializationEntry
} // namespace app::classes::types
