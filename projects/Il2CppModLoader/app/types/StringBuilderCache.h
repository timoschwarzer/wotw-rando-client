#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringBuilderCache {
        inline app::StringBuilderCache__Class** type_info = (app::StringBuilderCache__Class**)(modloader::win::memory::resolve_rva(0x04753E88));
        inline app::StringBuilderCache__Class* get_class() {
            return il2cpp::get_class<app::StringBuilderCache__Class>(type_info, "System.Text", "StringBuilderCache");
        }
        inline app::StringBuilderCache* create() {
            return il2cpp::create_object<app::StringBuilderCache>(get_class());
        }
    } // namespace StringBuilderCache
} // namespace app::classes::types
