#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Keyframe__Array {
        inline app::Keyframe__Array__Class** type_info = (app::Keyframe__Array__Class**)(modloader::win::memory::resolve_rva(0x0473C8E8));
        inline app::Keyframe__Array__Class* get_class() {
            return il2cpp::get_class<app::Keyframe__Array__Class>(type_info, "UnityEngine", "Keyframe[]");
        }
        inline app::Keyframe__Array* create() {
            return il2cpp::create_object<app::Keyframe__Array>(get_class());
        }
    } // namespace Keyframe__Array
} // namespace app::classes::types
