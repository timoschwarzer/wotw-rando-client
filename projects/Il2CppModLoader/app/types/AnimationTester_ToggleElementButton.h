#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTester_ToggleElementButton {
        inline app::AnimationTester_ToggleElementButton__Class** type_info = (app::AnimationTester_ToggleElementButton__Class**)(modloader::win::memory::resolve_rva(0x04792B28));
        inline app::AnimationTester_ToggleElementButton__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_ToggleElementButton__Class>(type_info, "", "AnimationTester", "ToggleElementButton");
        }
        inline app::AnimationTester_ToggleElementButton* create() {
            return il2cpp::create_object<app::AnimationTester_ToggleElementButton>(get_class());
        }
    } // namespace AnimationTester_ToggleElementButton
} // namespace app::classes::types
