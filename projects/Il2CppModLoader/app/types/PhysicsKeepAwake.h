#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsKeepAwake {
        namespace {
            inline app::PhysicsKeepAwake__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsKeepAwake__Class** type_info = &type_info_ref;
        inline app::PhysicsKeepAwake__Class* get_class() {
            return il2cpp::get_class<app::PhysicsKeepAwake__Class>(type_info, "", "PhysicsKeepAwake");
        }
        inline app::PhysicsKeepAwake* create() {
            return il2cpp::create_object<app::PhysicsKeepAwake>(get_class());
        }
    } // namespace PhysicsKeepAwake
} // namespace app::classes::types
