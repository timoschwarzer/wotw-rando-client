#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveTowardsQuaternionTweenable {
        namespace {
            inline app::MoveTowardsQuaternionTweenable__Class* type_info_ref = nullptr;
        }
        inline app::MoveTowardsQuaternionTweenable__Class** type_info = &type_info_ref;
        inline app::MoveTowardsQuaternionTweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsQuaternionTweenable__Class>(type_info, "Moon", "MoveTowardsQuaternionTweenable");
        }
        inline app::MoveTowardsQuaternionTweenable* create() {
            return il2cpp::create_object<app::MoveTowardsQuaternionTweenable>(get_class());
        }
    } // namespace MoveTowardsQuaternionTweenable
} // namespace app::classes::types
