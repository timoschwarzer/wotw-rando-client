#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebConnectionStream {
        inline app::WebConnectionStream__Class** type_info = (app::WebConnectionStream__Class**)(modloader::win::memory::resolve_rva(0x0471B1C8));
        inline app::WebConnectionStream__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionStream__Class>(type_info, "System.Net", "WebConnectionStream");
        }
        inline app::WebConnectionStream* create() {
            return il2cpp::create_object<app::WebConnectionStream>(get_class());
        }
    } // namespace WebConnectionStream
} // namespace app::classes::types
