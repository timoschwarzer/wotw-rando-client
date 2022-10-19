#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugMenuPage__Array {
        namespace {
            inline app::DebugMenuPage__Array__Class* type_info_ref = nullptr;
        }
        inline app::DebugMenuPage__Array__Class** type_info = &type_info_ref;
        inline app::DebugMenuPage__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuPage__Array__Class>(type_info, "", "DebugMenuPage[]");
        }
        inline app::DebugMenuPage__Array* create() {
            return il2cpp::create_object<app::DebugMenuPage__Array>(get_class());
        }
    } // namespace DebugMenuPage__Array
} // namespace app::classes::types
