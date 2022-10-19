#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlAttackCategory__Enum {
        namespace {
            inline app::PetrifiedOwlAttackCategory__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlAttackCategory__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlAttackCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlAttackCategory__Enum__Class>(type_info, "", "PetrifiedOwlAttackCategory");
        }
        inline app::PetrifiedOwlAttackCategory__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlAttackCategory__Enum>(get_class());
        }
    } // namespace PetrifiedOwlAttackCategory__Enum
} // namespace app::classes::types
