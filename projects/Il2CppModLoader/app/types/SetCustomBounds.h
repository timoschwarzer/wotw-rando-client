#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetCustomBounds {
        namespace {
            inline app::SetCustomBounds__Class* type_info_ref = nullptr;
        }
        inline app::SetCustomBounds__Class** type_info = &type_info_ref;
        inline app::SetCustomBounds__Class* get_class() {
            return il2cpp::get_class<app::SetCustomBounds__Class>(type_info, "", "SetCustomBounds");
        }
        inline app::SetCustomBounds* create() {
            return il2cpp::create_object<app::SetCustomBounds>(get_class());
        }
    } // namespace SetCustomBounds
} // namespace app::classes::types
