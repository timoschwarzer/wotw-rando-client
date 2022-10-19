#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedLizardMovementEffects__Array {
        inline app::MaterialBasedLizardMovementEffects__Array__Class** type_info = (app::MaterialBasedLizardMovementEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04745898));
        inline app::MaterialBasedLizardMovementEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardMovementEffects__Array__Class>(type_info, "", "MaterialBasedLizardMovementEffects[]");
        }
        inline app::MaterialBasedLizardMovementEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedLizardMovementEffects__Array>(get_class());
        }
    } // namespace MaterialBasedLizardMovementEffects__Array
} // namespace app::classes::types
