#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompletionDelegate {
        inline app::CompletionDelegate__Class** type_info = (app::CompletionDelegate__Class**)(modloader::win::memory::resolve_rva(0x04718BF0));
        inline app::CompletionDelegate__Class* get_class() {
            return il2cpp::get_class<app::CompletionDelegate__Class>(type_info, "System.Net", "CompletionDelegate");
        }
        inline app::CompletionDelegate* create() {
            return il2cpp::create_object<app::CompletionDelegate>(get_class());
        }
    } // namespace CompletionDelegate
} // namespace app::classes::types
