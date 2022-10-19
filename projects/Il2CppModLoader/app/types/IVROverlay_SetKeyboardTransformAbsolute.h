#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_SetKeyboardTransformAbsolute {
        inline app::IVROverlay_SetKeyboardTransformAbsolute__Class** type_info = (app::IVROverlay_SetKeyboardTransformAbsolute__Class**)(modloader::win::memory::resolve_rva(0x04772A98));
        inline app::IVROverlay_SetKeyboardTransformAbsolute__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetKeyboardTransformAbsolute__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetKeyboardTransformAbsolute");
        }
        inline app::IVROverlay_SetKeyboardTransformAbsolute* create() {
            return il2cpp::create_object<app::IVROverlay_SetKeyboardTransformAbsolute>(get_class());
        }
    } // namespace IVROverlay_SetKeyboardTransformAbsolute
} // namespace app::classes::types
