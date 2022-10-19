#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachToPhysicsSystem {
        namespace {
            inline app::AttachToPhysicsSystem__Class* type_info_ref = nullptr;
        }
        inline app::AttachToPhysicsSystem__Class** type_info = &type_info_ref;
        inline app::AttachToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachToPhysicsSystem__Class>(type_info, "", "AttachToPhysicsSystem");
        }
        inline app::AttachToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachToPhysicsSystem>(get_class());
        }
    } // namespace AttachToPhysicsSystem
} // namespace app::classes::types
