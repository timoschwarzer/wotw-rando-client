#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateStream_1 {
        inline app::DeflateStream_1__Class** type_info = (app::DeflateStream_1__Class**)(modloader::win::memory::resolve_rva(0x04796D28));
        inline app::DeflateStream_1__Class* get_class() {
            return il2cpp::get_class<app::DeflateStream_1__Class>(type_info, "Unity.IO.Compression", "DeflateStream");
        }
        inline app::DeflateStream_1* create() {
            return il2cpp::create_object<app::DeflateStream_1>(get_class());
        }
    } // namespace DeflateStream_1
} // namespace app::classes::types
