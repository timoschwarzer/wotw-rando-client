#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CaseInsensitiveAscii {
        inline app::CaseInsensitiveAscii__Class** type_info = (app::CaseInsensitiveAscii__Class**)(modloader::win::memory::resolve_rva(0x04782BF8));
        inline app::CaseInsensitiveAscii__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveAscii__Class>(type_info, "System.Net", "CaseInsensitiveAscii");
        }
        inline app::CaseInsensitiveAscii* create() {
            return il2cpp::create_object<app::CaseInsensitiveAscii>(get_class());
        }
    } // namespace CaseInsensitiveAscii
} // namespace app::classes::types
