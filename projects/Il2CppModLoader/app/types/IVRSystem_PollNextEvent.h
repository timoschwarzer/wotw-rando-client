#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_PollNextEvent {
        inline app::IVRSystem_PollNextEvent__Class** type_info = (app::IVRSystem_PollNextEvent__Class**)(modloader::win::memory::resolve_rva(0x0478C138));
        inline app::IVRSystem_PollNextEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_PollNextEvent__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_PollNextEvent");
        }
        inline app::IVRSystem_PollNextEvent* create() {
            return il2cpp::create_object<app::IVRSystem_PollNextEvent>(get_class());
        }
    } // namespace IVRSystem_PollNextEvent
} // namespace app::classes::types
