#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Animator {
        namespace {
            inline app::Animator__Class* type_info_ref = nullptr;
        }
        inline app::Animator__Class** type_info = &type_info_ref;
        inline app::Animator__Class* get_class() {
            return il2cpp::get_class<app::Animator__Class>(type_info, "UnityEngine", "Animator");
        }
        inline app::Animator* create() {
            return il2cpp::create_object<app::Animator>(get_class());
        }
        inline app::Animator__Array* create_array(int size) {
            return il2cpp::array_new<app::Animator__Array>(get_class(), size);
        }
        inline app::Animator__Array* create_array(const std::vector<app::Animator*>& items) {
            return il2cpp::array_new<app::Animator__Array>(get_class(), items);
        }
    } // namespace Animator
} // namespace app::classes::types
