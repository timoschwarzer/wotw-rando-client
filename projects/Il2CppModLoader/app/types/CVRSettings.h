#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRSettings {
        inline app::CVRSettings__Class** type_info = (app::CVRSettings__Class**)(modloader::win::memory::resolve_rva(0x04727340));
        inline app::CVRSettings__Class* get_class() {
            return il2cpp::get_class<app::CVRSettings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSettings");
        }
        inline app::CVRSettings* create() {
            return il2cpp::create_object<app::CVRSettings>(get_class());
        }
    } // namespace CVRSettings
} // namespace app::classes::types
