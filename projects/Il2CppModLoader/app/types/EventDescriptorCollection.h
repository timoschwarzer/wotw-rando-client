#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventDescriptorCollection {
        inline app::EventDescriptorCollection__Class** type_info = (app::EventDescriptorCollection__Class**)(modloader::win::memory::resolve_rva(0x04774590));
        inline app::EventDescriptorCollection__Class* get_class() {
            return il2cpp::get_class<app::EventDescriptorCollection__Class>(type_info, "System.ComponentModel", "EventDescriptorCollection");
        }
        inline app::EventDescriptorCollection* create() {
            return il2cpp::create_object<app::EventDescriptorCollection>(get_class());
        }
    } // namespace EventDescriptorCollection
} // namespace app::classes::types
