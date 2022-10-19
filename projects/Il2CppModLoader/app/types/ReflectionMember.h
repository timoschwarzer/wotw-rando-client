#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionMember {
        inline app::ReflectionMember__Class** type_info = (app::ReflectionMember__Class**)(modloader::win::memory::resolve_rva(0x0474A640));
        inline app::ReflectionMember__Class* get_class() {
            return il2cpp::get_class<app::ReflectionMember__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionMember");
        }
        inline app::ReflectionMember* create() {
            return il2cpp::create_object<app::ReflectionMember>(get_class());
        }
        inline app::ReflectionMember__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectionMember__Array>(get_class(), size);
        }
        inline app::ReflectionMember__Array* create_array(const std::vector<app::ReflectionMember*>& items) {
            return il2cpp::array_new<app::ReflectionMember__Array>(get_class(), items);
        }
    } // namespace ReflectionMember
} // namespace app::classes::types
