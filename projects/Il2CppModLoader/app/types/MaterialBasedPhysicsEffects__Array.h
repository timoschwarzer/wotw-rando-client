#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedPhysicsEffects__Array {
        inline app::MaterialBasedPhysicsEffects__Array__Class** type_info = (app::MaterialBasedPhysicsEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04777988));
        inline app::MaterialBasedPhysicsEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedPhysicsEffects__Array__Class>(type_info, "", "MaterialBasedPhysicsEffects[]");
        }
        inline app::MaterialBasedPhysicsEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedPhysicsEffects__Array>(get_class());
        }
    } // namespace MaterialBasedPhysicsEffects__Array
} // namespace app::classes::types
