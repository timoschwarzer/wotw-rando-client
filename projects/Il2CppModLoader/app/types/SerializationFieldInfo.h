#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationFieldInfo {
        inline app::SerializationFieldInfo__Class** type_info = (app::SerializationFieldInfo__Class**)(modloader::win::memory::resolve_rva(0x047483E0));
        inline app::SerializationFieldInfo__Class* get_class() {
            return il2cpp::get_class<app::SerializationFieldInfo__Class>(type_info, "System.Runtime.Serialization", "SerializationFieldInfo");
        }
        inline app::SerializationFieldInfo* create() {
            return il2cpp::create_object<app::SerializationFieldInfo>(get_class());
        }
        inline app::SerializationFieldInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializationFieldInfo__Array>(get_class(), size);
        }
        inline app::SerializationFieldInfo__Array* create_array(const std::vector<app::SerializationFieldInfo*>& items) {
            return il2cpp::array_new<app::SerializationFieldInfo__Array>(get_class(), items);
        }
    } // namespace SerializationFieldInfo
} // namespace app::classes::types
