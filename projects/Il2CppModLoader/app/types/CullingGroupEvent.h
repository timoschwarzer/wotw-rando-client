#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullingGroupEvent {
        inline app::CullingGroupEvent__Class** type_info = (app::CullingGroupEvent__Class**)(modloader::win::memory::resolve_rva(0x04740728));
        inline app::CullingGroupEvent__Class* get_class() {
            return il2cpp::get_class<app::CullingGroupEvent__Class>(type_info, "UnityEngine", "CullingGroupEvent");
        }
        inline app::CullingGroupEvent* create() {
            return il2cpp::create_object<app::CullingGroupEvent>(get_class());
        }
        inline app::CullingGroupEvent__Boxed* box(app::CullingGroupEvent value) {
            return il2cpp::box_value<app::CullingGroupEvent__Boxed>(get_class(), value);
        }
    } // namespace CullingGroupEvent
} // namespace app::classes::types
