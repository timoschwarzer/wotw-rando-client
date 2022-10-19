#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace State_1 {
        namespace {
            inline app::State_1__Class* type_info_ref = nullptr;
        }
        inline app::State_1__Class** type_info = &type_info_ref;
        inline app::State_1__Class* get_class() {
            return il2cpp::get_class<app::State_1__Class>(type_info, "Moon.InteractionGraph", "State");
        }
        inline app::State_1* create() {
            return il2cpp::create_object<app::State_1>(get_class());
        }
    } // namespace State_1
} // namespace app::classes::types
