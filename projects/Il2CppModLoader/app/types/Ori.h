#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ori {
        namespace {
            inline app::Ori__Class* type_info_ref = nullptr;
        }
        inline app::Ori__Class** type_info = &type_info_ref;
        inline app::Ori__Class* get_class() {
            return il2cpp::get_class<app::Ori__Class>(type_info, "", "Ori");
        }
        inline app::Ori* create() {
            return il2cpp::create_object<app::Ori>(get_class());
        }
    } // namespace Ori
} // namespace app::classes::types
