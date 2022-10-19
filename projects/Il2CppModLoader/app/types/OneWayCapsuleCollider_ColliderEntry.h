#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneWayCapsuleCollider_ColliderEntry {
        inline app::OneWayCapsuleCollider_ColliderEntry__Class** type_info = (app::OneWayCapsuleCollider_ColliderEntry__Class**)(modloader::win::memory::resolve_rva(0x04717948));
        inline app::OneWayCapsuleCollider_ColliderEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::OneWayCapsuleCollider_ColliderEntry__Class>(type_info, "", "OneWayCapsuleCollider", "ColliderEntry");
        }
        inline app::OneWayCapsuleCollider_ColliderEntry* create() {
            return il2cpp::create_object<app::OneWayCapsuleCollider_ColliderEntry>(get_class());
        }
        inline app::OneWayCapsuleCollider_ColliderEntry__Boxed* box(app::OneWayCapsuleCollider_ColliderEntry value) {
            return il2cpp::box_value<app::OneWayCapsuleCollider_ColliderEntry__Boxed>(get_class(), value);
        }
        inline app::OneWayCapsuleCollider_ColliderEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::OneWayCapsuleCollider_ColliderEntry__Array>(get_class(), size);
        }
        inline app::OneWayCapsuleCollider_ColliderEntry__Array* create_array(const std::vector<app::OneWayCapsuleCollider_ColliderEntry>& items) {
            return il2cpp::array_new<app::OneWayCapsuleCollider_ColliderEntry__Array>(get_class(), items);
        }
    } // namespace OneWayCapsuleCollider_ColliderEntry
} // namespace app::classes::types
