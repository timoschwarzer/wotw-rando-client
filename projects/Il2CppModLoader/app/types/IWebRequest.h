#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWebRequest {
        inline app::IWebRequest__Class** type_info = (app::IWebRequest__Class**)(modloader::win::memory::resolve_rva(0x0478F128));
        inline app::IWebRequest__Class* get_class() {
            return il2cpp::get_class<app::IWebRequest__Class>(type_info, "Moon.Network.Web", "IWebRequest");
        }
    } // namespace IWebRequest
} // namespace app::classes::types
