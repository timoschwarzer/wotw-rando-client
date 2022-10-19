#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequest {
        inline app::WebRequest__Class** type_info = (app::WebRequest__Class**)(modloader::win::memory::resolve_rva(0x047180E0));
        inline app::WebRequest__Class* get_class() {
            return il2cpp::get_class<app::WebRequest__Class>(type_info, "System.Net", "WebRequest");
        }
        inline app::WebRequest* create() {
            return il2cpp::create_object<app::WebRequest>(get_class());
        }
    } // namespace WebRequest
} // namespace app::classes::types
