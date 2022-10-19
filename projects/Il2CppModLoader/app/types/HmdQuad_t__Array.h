#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HmdQuad_t__Array {
        inline app::HmdQuad_t__Array__Class** type_info = (app::HmdQuad_t__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DD70));
        inline app::HmdQuad_t__Array__Class* get_class() {
            return il2cpp::get_class<app::HmdQuad_t__Array__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdQuad_t[]");
        }
        inline app::HmdQuad_t__Array* create() {
            return il2cpp::create_object<app::HmdQuad_t__Array>(get_class());
        }
    } // namespace HmdQuad_t__Array
} // namespace app::classes::types
