#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HmdVector2_t {
        inline app::HmdVector2_t__Class** type_info = (app::HmdVector2_t__Class**)(modloader::win::memory::resolve_rva(0x0471A000));
        inline app::HmdVector2_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector2_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdVector2_t");
        }
        inline app::HmdVector2_t* create() {
            return il2cpp::create_object<app::HmdVector2_t>(get_class());
        }
        inline app::HmdVector2_t__Boxed* box(app::HmdVector2_t value) {
            return il2cpp::box_value<app::HmdVector2_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector2_t
} // namespace app::classes::types
