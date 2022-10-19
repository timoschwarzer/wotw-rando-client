#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRNotificationType__Enum {
        inline app::EVRNotificationType__Enum__Class** type_info = (app::EVRNotificationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474D980));
        inline app::EVRNotificationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationType");
        }
        inline app::EVRNotificationType__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationType__Enum>(get_class());
        }
    } // namespace EVRNotificationType__Enum
} // namespace app::classes::types
