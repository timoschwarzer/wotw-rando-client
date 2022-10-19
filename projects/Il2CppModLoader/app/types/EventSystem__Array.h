#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSystem__Array {
        namespace {
            inline app::EventSystem__Array__Class* type_info_ref = nullptr;
        }
        inline app::EventSystem__Array__Class** type_info = &type_info_ref;
        inline app::EventSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::EventSystem__Array__Class>(type_info, "UnityEngine.EventSystems", "EventSystem[]");
        }
        inline app::EventSystem__Array* create() {
            return il2cpp::create_object<app::EventSystem__Array>(get_class());
        }
    } // namespace EventSystem__Array
} // namespace app::classes::types
