#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColumnTypeConverter {
        inline app::ColumnTypeConverter__Class** type_info = (app::ColumnTypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04718D38));
        inline app::ColumnTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::ColumnTypeConverter__Class>(type_info, "System.Data", "ColumnTypeConverter");
        }
        inline app::ColumnTypeConverter* create() {
            return il2cpp::create_object<app::ColumnTypeConverter>(get_class());
        }
    } // namespace ColumnTypeConverter
} // namespace app::classes::types
