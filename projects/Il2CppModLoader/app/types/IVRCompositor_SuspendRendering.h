#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_SuspendRendering {
        inline app::IVRCompositor_SuspendRendering__Class** type_info = (app::IVRCompositor_SuspendRendering__Class**)(modloader::win::memory::resolve_rva(0x047008E8));
        inline app::IVRCompositor_SuspendRendering__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SuspendRendering__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SuspendRendering");
        }
        inline app::IVRCompositor_SuspendRendering* create() {
            return il2cpp::create_object<app::IVRCompositor_SuspendRendering>(get_class());
        }
    } // namespace IVRCompositor_SuspendRendering
} // namespace app::classes::types
