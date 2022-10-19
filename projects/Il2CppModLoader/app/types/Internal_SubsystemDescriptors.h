#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Internal_SubsystemDescriptors {
        inline app::Internal_SubsystemDescriptors__Class** type_info = (app::Internal_SubsystemDescriptors__Class**)(modloader::win::memory::resolve_rva(0x04727370));
        inline app::Internal_SubsystemDescriptors__Class* get_class() {
            return il2cpp::get_class<app::Internal_SubsystemDescriptors__Class>(type_info, "UnityEngine.Experimental", "Internal_SubsystemDescriptors");
        }
        inline app::Internal_SubsystemDescriptors* create() {
            return il2cpp::create_object<app::Internal_SubsystemDescriptors>(get_class());
        }
    } // namespace Internal_SubsystemDescriptors
} // namespace app::classes::types
