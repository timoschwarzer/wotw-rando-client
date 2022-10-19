#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity_Phases__Enum__Array {
        namespace {
            inline app::PetrifiedOwlBossEntity_Phases__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEntity_Phases__Enum__Array__Class>(type_info, "", "PetrifiedOwlBossEntity+Phases[]");
        }
        inline app::PetrifiedOwlBossEntity_Phases__Enum__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity_Phases__Enum__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity_Phases__Enum__Array
} // namespace app::classes::types
