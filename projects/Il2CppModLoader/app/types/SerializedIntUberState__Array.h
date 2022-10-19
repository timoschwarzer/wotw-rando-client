#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializedIntUberState__Array {
        namespace {
            inline app::SerializedIntUberState__Array__Class* type_info_ref = nullptr;
        }
        inline app::SerializedIntUberState__Array__Class** type_info = &type_info_ref;
        inline app::SerializedIntUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializedIntUberState__Array__Class>(type_info, "Moon", "SerializedIntUberState[]");
        }
        inline app::SerializedIntUberState__Array* create() {
            return il2cpp::create_object<app::SerializedIntUberState__Array>(get_class());
        }
    } // namespace SerializedIntUberState__Array
} // namespace app::classes::types
