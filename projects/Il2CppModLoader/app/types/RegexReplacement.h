#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexReplacement {
        inline app::RegexReplacement__Class** type_info = (app::RegexReplacement__Class**)(modloader::win::memory::resolve_rva(0x04719790));
        inline app::RegexReplacement__Class* get_class() {
            return il2cpp::get_class<app::RegexReplacement__Class>(type_info, "System.Text.RegularExpressions", "RegexReplacement");
        }
        inline app::RegexReplacement* create() {
            return il2cpp::create_object<app::RegexReplacement>(get_class());
        }
    } // namespace RegexReplacement
} // namespace app::classes::types
