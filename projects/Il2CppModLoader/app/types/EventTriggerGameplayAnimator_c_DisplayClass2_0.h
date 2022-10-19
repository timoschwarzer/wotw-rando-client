#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventTriggerGameplayAnimator_c_DisplayClass2_0 {
        inline app::EventTriggerGameplayAnimator_c_DisplayClass2_0__Class** type_info = (app::EventTriggerGameplayAnimator_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04733FC0));
        inline app::EventTriggerGameplayAnimator_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTriggerGameplayAnimator_c_DisplayClass2_0__Class>(type_info, "Moon.Timeline", "EventTriggerGameplayAnimator", "<>c__DisplayClass2_0");
        }
        inline app::EventTriggerGameplayAnimator_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::EventTriggerGameplayAnimator_c_DisplayClass2_0>(get_class());
        }
    } // namespace EventTriggerGameplayAnimator_c_DisplayClass2_0
} // namespace app::classes::types
