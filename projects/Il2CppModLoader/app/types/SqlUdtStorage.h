#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlUdtStorage {
        inline app::SqlUdtStorage__Class** type_info = (app::SqlUdtStorage__Class**)(modloader::win::memory::resolve_rva(0x04753FA8));
        inline app::SqlUdtStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlUdtStorage__Class>(type_info, "System.Data.Common", "SqlUdtStorage");
        }
        inline app::SqlUdtStorage* create() {
            return il2cpp::create_object<app::SqlUdtStorage>(get_class());
        }
    } // namespace SqlUdtStorage
} // namespace app::classes::types
