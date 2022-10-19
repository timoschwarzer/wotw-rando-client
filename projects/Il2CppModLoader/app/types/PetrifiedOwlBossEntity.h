#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity {
        namespace {
            inline app::PetrifiedOwlBossEntity__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossEntity__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEntity__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEntity__Class>(type_info, "", "PetrifiedOwlBossEntity");
        }
        inline app::PetrifiedOwlBossEntity* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity
} // namespace app::classes::types
