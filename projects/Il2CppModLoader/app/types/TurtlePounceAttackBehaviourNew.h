#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtlePounceAttackBehaviourNew {
        namespace {
            inline app::TurtlePounceAttackBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtlePounceAttackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtlePounceAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtlePounceAttackBehaviourNew__Class>(type_info, "Moon", "TurtlePounceAttackBehaviourNew");
        }
        inline app::TurtlePounceAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtlePounceAttackBehaviourNew>(get_class());
        }
    } // namespace TurtlePounceAttackBehaviourNew
} // namespace app::classes::types
