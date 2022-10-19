#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroup__Array {
        inline app::AnimationPostprocessGroup__Array__Class** type_info = (app::AnimationPostprocessGroup__Array__Class**)(modloader::win::memory::resolve_rva(0x04759958));
        inline app::AnimationPostprocessGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroup__Array__Class>(type_info, "Moon", "AnimationPostprocessGroup[]");
        }
        inline app::AnimationPostprocessGroup__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroup__Array>(get_class());
        }
    } // namespace AnimationPostprocessGroup__Array
} // namespace app::classes::types
