#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlushType__Enum {
        inline app::FlushType__Enum__Class** type_info = (app::FlushType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04711EB0));
        inline app::FlushType__Enum__Class* get_class() {
            return il2cpp::get_class<app::FlushType__Enum__Class>(type_info, "Ionic.Zlib", "FlushType");
        }
        inline app::FlushType__Enum* create() {
            return il2cpp::create_object<app::FlushType__Enum>(get_class());
        }
    } // namespace FlushType__Enum
} // namespace app::classes::types
