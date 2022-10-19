#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothAggroCondition {
        namespace {
            inline app::MothAggroCondition__Class* type_info_ref = nullptr;
        }
        inline app::MothAggroCondition__Class** type_info = &type_info_ref;
        inline app::MothAggroCondition__Class* get_class() {
            return il2cpp::get_class<app::MothAggroCondition__Class>(type_info, "Moon.Behaviour", "MothAggroCondition");
        }
        inline app::MothAggroCondition* create() {
            return il2cpp::create_object<app::MothAggroCondition>(get_class());
        }
    } // namespace MothAggroCondition
} // namespace app::classes::types
