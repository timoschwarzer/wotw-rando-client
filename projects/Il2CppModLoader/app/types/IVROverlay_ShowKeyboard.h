#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVROverlay_ShowKeyboard {
        inline app::IVROverlay_ShowKeyboard__Class** type_info = (app::IVROverlay_ShowKeyboard__Class**)(modloader::win::memory::resolve_rva(0x0476FA00));
        inline app::IVROverlay_ShowKeyboard__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_ShowKeyboard__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_ShowKeyboard");
        }
        inline app::IVROverlay_ShowKeyboard* create() {
            return il2cpp::create_object<app::IVROverlay_ShowKeyboard>(get_class());
        }
    } // namespace IVROverlay_ShowKeyboard
} // namespace app::classes::types
