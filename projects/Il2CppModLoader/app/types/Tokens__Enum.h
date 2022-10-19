#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tokens__Enum {
        inline app::Tokens__Enum__Class** type_info = (app::Tokens__Enum__Class**)(modloader::win::memory::resolve_rva(0x04727858));
        inline app::Tokens__Enum__Class* get_class() {
            return il2cpp::get_class<app::Tokens__Enum__Class>(type_info, "System.Data", "Tokens");
        }
        inline app::Tokens__Enum* create() {
            return il2cpp::create_object<app::Tokens__Enum>(get_class());
        }
    } // namespace Tokens__Enum
} // namespace app::classes::types
