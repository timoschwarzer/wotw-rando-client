#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SnapTrapHookLogic {
        namespace {
            inline app::SnapTrapHookLogic__Class* type_info_ref = nullptr;
        }
        inline app::SnapTrapHookLogic__Class** type_info = &type_info_ref;
        inline app::SnapTrapHookLogic__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookLogic__Class>(type_info, "", "SnapTrapHookLogic");
        }
        inline app::SnapTrapHookLogic* create() {
            return il2cpp::create_object<app::SnapTrapHookLogic>(get_class());
        }
    } // namespace SnapTrapHookLogic
} // namespace app::classes::types
