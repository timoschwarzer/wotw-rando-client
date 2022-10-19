#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationModifierSampleTask {
        inline app::AnimationModifierSampleTask__Class** type_info = (app::AnimationModifierSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0471AA00));
        inline app::AnimationModifierSampleTask__Class* get_class() {
            return il2cpp::get_class<app::AnimationModifierSampleTask__Class>(type_info, "Moon.ArtOptimization", "AnimationModifierSampleTask");
        }
        inline app::AnimationModifierSampleTask* create() {
            return il2cpp::create_object<app::AnimationModifierSampleTask>(get_class());
        }
    } // namespace AnimationModifierSampleTask
} // namespace app::classes::types
