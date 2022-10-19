#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaComment__Array {
        namespace {
            inline app::AreaComment__Array__Class* type_info_ref = nullptr;
        }
        inline app::AreaComment__Array__Class** type_info = &type_info_ref;
        inline app::AreaComment__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaComment__Array__Class>(type_info, "Moon.Telemetry.Performance", "AreaComment[]");
        }
        inline app::AreaComment__Array* create() {
            return il2cpp::create_object<app::AreaComment__Array>(get_class());
        }
    } // namespace AreaComment__Array
} // namespace app::classes::types
