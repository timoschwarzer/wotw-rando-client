#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityId__Array {
        namespace {
            inline app::EntityId__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityId__Array__Class** type_info = &type_info_ref;
        inline app::EntityId__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityId__Array__Class>(type_info, "Moon.Timeline", "EntityId[]");
        }
        inline app::EntityId__Array* create() {
            return il2cpp::create_object<app::EntityId__Array>(get_class());
        }
    } // namespace EntityId__Array
} // namespace app::classes::types
