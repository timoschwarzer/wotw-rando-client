#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntegratedSubsystem {
        inline app::IntegratedSubsystem__Class** type_info = (app::IntegratedSubsystem__Class**)(modloader::win::memory::resolve_rva(0x0474CF90));
        inline app::IntegratedSubsystem__Class* get_class() {
            return il2cpp::get_class<app::IntegratedSubsystem__Class>(type_info, "UnityEngine.Experimental", "IntegratedSubsystem");
        }
        inline app::IntegratedSubsystem* create() {
            return il2cpp::create_object<app::IntegratedSubsystem>(get_class());
        }
    } // namespace IntegratedSubsystem
} // namespace app::classes::types
