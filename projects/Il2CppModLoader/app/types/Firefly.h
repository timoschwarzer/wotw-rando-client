#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Firefly {
        namespace {
            inline app::Firefly__Class* type_info_ref = nullptr;
        }
        inline app::Firefly__Class** type_info = &type_info_ref;
        inline app::Firefly__Class* get_class() {
            return il2cpp::get_class<app::Firefly__Class>(type_info, "", "Firefly");
        }
        inline app::Firefly* create() {
            return il2cpp::create_object<app::Firefly>(get_class());
        }
    } // namespace Firefly
} // namespace app::classes::types
