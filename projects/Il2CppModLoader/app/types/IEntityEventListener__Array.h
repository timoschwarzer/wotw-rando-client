#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEntityEventListener__Array {
        namespace {
            inline app::IEntityEventListener__Array__Class* type_info_ref = nullptr;
        }
        inline app::IEntityEventListener__Array__Class** type_info = &type_info_ref;
        inline app::IEntityEventListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntityEventListener__Array__Class>(type_info, "Moon", "IEntityEventListener[]");
        }
        inline app::IEntityEventListener__Array* create() {
            return il2cpp::create_object<app::IEntityEventListener__Array>(get_class());
        }
    } // namespace IEntityEventListener__Array
} // namespace app::classes::types
