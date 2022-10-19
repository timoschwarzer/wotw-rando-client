#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarHideBehaviour {
        namespace {
            inline app::MortarHideBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MortarHideBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarHideBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarHideBehaviour__Class>(type_info, "", "MortarHideBehaviour");
        }
        inline app::MortarHideBehaviour* create() {
            return il2cpp::create_object<app::MortarHideBehaviour>(get_class());
        }
    } // namespace MortarHideBehaviour
} // namespace app::classes::types
