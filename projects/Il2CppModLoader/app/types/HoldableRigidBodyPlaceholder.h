#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HoldableRigidBodyPlaceholder {
        namespace {
            inline app::HoldableRigidBodyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::HoldableRigidBodyPlaceholder__Class** type_info = &type_info_ref;
        inline app::HoldableRigidBodyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::HoldableRigidBodyPlaceholder__Class>(type_info, "", "HoldableRigidBodyPlaceholder");
        }
        inline app::HoldableRigidBodyPlaceholder* create() {
            return il2cpp::create_object<app::HoldableRigidBodyPlaceholder>(get_class());
        }
    } // namespace HoldableRigidBodyPlaceholder
} // namespace app::classes::types
