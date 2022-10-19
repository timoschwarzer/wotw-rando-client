#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSpanTypeInfo {
        inline app::TimeSpanTypeInfo__Class** type_info = (app::TimeSpanTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0478CD90));
        inline app::TimeSpanTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "TimeSpanTypeInfo");
        }
        inline app::TimeSpanTypeInfo* create() {
            return il2cpp::create_object<app::TimeSpanTypeInfo>(get_class());
        }
    } // namespace TimeSpanTypeInfo
} // namespace app::classes::types
