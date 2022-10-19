#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChunkedInputStream {
        inline app::ChunkedInputStream__Class** type_info = (app::ChunkedInputStream__Class**)(modloader::win::memory::resolve_rva(0x04738590));
        inline app::ChunkedInputStream__Class* get_class() {
            return il2cpp::get_class<app::ChunkedInputStream__Class>(type_info, "System.Net", "ChunkedInputStream");
        }
        inline app::ChunkedInputStream* create() {
            return il2cpp::create_object<app::ChunkedInputStream>(get_class());
        }
    } // namespace ChunkedInputStream
} // namespace app::classes::types
