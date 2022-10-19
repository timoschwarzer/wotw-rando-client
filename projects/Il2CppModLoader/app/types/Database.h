#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Database {
        inline app::Database__Class** type_info = (app::Database__Class**)(modloader::win::memory::resolve_rva(0x04779A90));
        inline app::Database__Class* get_class() {
            return il2cpp::get_class<app::Database__Class>(type_info, "Moon.Race", "Database");
        }
        inline app::Database* create() {
            return il2cpp::create_object<app::Database>(get_class());
        }
    } // namespace Database
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataBase {
        namespace {
            inline app::DataBase__Class* type_info_ref = nullptr;
        }
        inline app::DataBase__Class** type_info = &type_info_ref;
        inline app::DataBase__Class* get_class() {
            return il2cpp::get_class<app::DataBase__Class>(type_info, "Moon.Telemetry", "DataBase");
        }
        inline app::DataBase* create() {
            return il2cpp::create_object<app::DataBase>(get_class());
        }
    } // namespace DataBase
} // namespace app::classes::types
