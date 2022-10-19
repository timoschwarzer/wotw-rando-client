#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisJumpAttackDamageDealer {
        namespace {
            inline app::MantisJumpAttackDamageDealer__Class* type_info_ref = nullptr;
        }
        inline app::MantisJumpAttackDamageDealer__Class** type_info = &type_info_ref;
        inline app::MantisJumpAttackDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::MantisJumpAttackDamageDealer__Class>(type_info, "", "MantisJumpAttackDamageDealer");
        }
        inline app::MantisJumpAttackDamageDealer* create() {
            return il2cpp::create_object<app::MantisJumpAttackDamageDealer>(get_class());
        }
    } // namespace MantisJumpAttackDamageDealer
} // namespace app::classes::types
