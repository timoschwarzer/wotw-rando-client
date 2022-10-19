#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugReporter_c {
        inline app::BugReporter_c__Class** type_info = (app::BugReporter_c__Class**)(modloader::win::memory::resolve_rva(0x04788AD8));
        inline app::BugReporter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_c__Class>(type_info, "", "BugReporter", "<>c");
        }
        inline app::BugReporter_c* create() {
            return il2cpp::create_object<app::BugReporter_c>(get_class());
        }
    } // namespace BugReporter_c
} // namespace app::classes::types
