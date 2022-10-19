#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKLimbTargeted {
        namespace {
            inline app::IKLimbTargeted__Class* type_info_ref = nullptr;
        }
        inline app::IKLimbTargeted__Class** type_info = &type_info_ref;
        inline app::IKLimbTargeted__Class* get_class() {
            return il2cpp::get_class<app::IKLimbTargeted__Class>(type_info, "Moon", "IKLimbTargeted");
        }
        inline app::IKLimbTargeted* create() {
            return il2cpp::create_object<app::IKLimbTargeted>(get_class());
        }
    } // namespace IKLimbTargeted
} // namespace app::classes::types
