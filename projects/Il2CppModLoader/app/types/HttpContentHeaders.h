#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpContentHeaders {
        inline app::HttpContentHeaders__Class** type_info = (app::HttpContentHeaders__Class**)(modloader::win::memory::resolve_rva(0x04793B68));
        inline app::HttpContentHeaders__Class* get_class() {
            return il2cpp::get_class<app::HttpContentHeaders__Class>(type_info, "System.Net.Http.Headers", "HttpContentHeaders");
        }
        inline app::HttpContentHeaders* create() {
            return il2cpp::create_object<app::HttpContentHeaders>(get_class());
        }
    } // namespace HttpContentHeaders
} // namespace app::classes::types
