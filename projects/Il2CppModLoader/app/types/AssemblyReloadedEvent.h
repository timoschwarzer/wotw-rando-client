#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyReloadedEvent {
        namespace {
            inline app::AssemblyReloadedEvent__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyReloadedEvent__Class** type_info = &type_info_ref;
        inline app::AssemblyReloadedEvent__Class* get_class() {
            return il2cpp::get_class<app::AssemblyReloadedEvent__Class>(type_info, "", "AssemblyReloadedEvent");
        }
        inline app::AssemblyReloadedEvent* create() {
            return il2cpp::create_object<app::AssemblyReloadedEvent>(get_class());
        }
    } // namespace AssemblyReloadedEvent
} // namespace app::classes::types
