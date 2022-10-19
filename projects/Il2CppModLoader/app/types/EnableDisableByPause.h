#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableDisableByPause {
        namespace {
            inline app::EnableDisableByPause__Class* type_info_ref = nullptr;
        }
        inline app::EnableDisableByPause__Class** type_info = &type_info_ref;
        inline app::EnableDisableByPause__Class* get_class() {
            return il2cpp::get_class<app::EnableDisableByPause__Class>(type_info, "", "EnableDisableByPause");
        }
        inline app::EnableDisableByPause* create() {
            return il2cpp::create_object<app::EnableDisableByPause>(get_class());
        }
    } // namespace EnableDisableByPause
} // namespace app::classes::types
