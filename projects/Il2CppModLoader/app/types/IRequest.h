#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRequest {
        inline app::IRequest__Class** type_info = (app::IRequest__Class**)(modloader::win::memory::resolve_rva(0x04721A68));
        inline app::IRequest__Class* get_class() {
            return il2cpp::get_class<app::IRequest__Class>(type_info, "Moon.Network.Web", "IRequest");
        }
    } // namespace IRequest
} // namespace app::classes::types
