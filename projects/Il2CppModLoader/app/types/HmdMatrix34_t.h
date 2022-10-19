#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HmdMatrix34_t {
        inline app::HmdMatrix34_t__Class** type_info = (app::HmdMatrix34_t__Class**)(modloader::win::memory::resolve_rva(0x04765138));
        inline app::HmdMatrix34_t__Class* get_class() {
            return il2cpp::get_class<app::HmdMatrix34_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdMatrix34_t");
        }
        inline app::HmdMatrix34_t* create() {
            return il2cpp::create_object<app::HmdMatrix34_t>(get_class());
        }
        inline app::HmdMatrix34_t__Boxed* box(app::HmdMatrix34_t value) {
            return il2cpp::box_value<app::HmdMatrix34_t__Boxed>(get_class(), value);
        }
    } // namespace HmdMatrix34_t
} // namespace app::classes::types
