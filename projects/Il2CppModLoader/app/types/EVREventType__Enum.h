#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVREventType__Enum {
        inline app::EVREventType__Enum__Class** type_info = (app::EVREventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472C640));
        inline app::EVREventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVREventType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVREventType");
        }
        inline app::EVREventType__Enum* create() {
            return il2cpp::create_object<app::EVREventType__Enum>(get_class());
        }
    } // namespace EVREventType__Enum
} // namespace app::classes::types
