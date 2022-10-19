#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetSeinWorldStateAction {
        namespace {
            inline app::SetSeinWorldStateAction__Class* type_info_ref = nullptr;
        }
        inline app::SetSeinWorldStateAction__Class** type_info = &type_info_ref;
        inline app::SetSeinWorldStateAction__Class* get_class() {
            return il2cpp::get_class<app::SetSeinWorldStateAction__Class>(type_info, "", "SetSeinWorldStateAction");
        }
        inline app::SetSeinWorldStateAction* create() {
            return il2cpp::create_object<app::SetSeinWorldStateAction>(get_class());
        }
    } // namespace SetSeinWorldStateAction
} // namespace app::classes::types
