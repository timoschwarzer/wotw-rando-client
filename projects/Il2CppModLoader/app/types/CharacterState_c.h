#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterState_c {
        inline app::CharacterState_c__Class** type_info = (app::CharacterState_c__Class**)(modloader::win::memory::resolve_rva(0x0472F1C8));
        inline app::CharacterState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterState_c__Class>(type_info, "", "CharacterState", "<>c");
        }
        inline app::CharacterState_c* create() {
            return il2cpp::create_object<app::CharacterState_c>(get_class());
        }
    } // namespace CharacterState_c
} // namespace app::classes::types
