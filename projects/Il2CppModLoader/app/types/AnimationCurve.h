#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationCurve {
        inline app::AnimationCurve__Class** type_info = (app::AnimationCurve__Class**)(modloader::win::memory::resolve_rva(0x047065A8));
        inline app::AnimationCurve__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve__Class>(type_info, "UnityEngine", "AnimationCurve");
        }
        inline app::AnimationCurve* create() {
            return il2cpp::create_object<app::AnimationCurve>(get_class());
        }
        inline app::AnimationCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationCurve__Array>(get_class(), size);
        }
        inline app::AnimationCurve__Array* create_array(const std::vector<app::AnimationCurve*>& items) {
            return il2cpp::array_new<app::AnimationCurve__Array>(get_class(), items);
        }
    } // namespace AnimationCurve
} // namespace app::classes::types
