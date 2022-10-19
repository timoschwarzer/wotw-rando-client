#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateValueGroup__Array {
        namespace {
            inline app::UberStateValueGroup__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberStateValueGroup__Array__Class** type_info = &type_info_ref;
        inline app::UberStateValueGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroup__Array__Class>(type_info, "Moon", "UberStateValueGroup[]");
        }
        inline app::UberStateValueGroup__Array* create() {
            return il2cpp::create_object<app::UberStateValueGroup__Array>(get_class());
        }
    } // namespace UberStateValueGroup__Array
} // namespace app::classes::types
