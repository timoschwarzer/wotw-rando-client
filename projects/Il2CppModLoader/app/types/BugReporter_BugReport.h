#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugReporter_BugReport {
        inline app::BugReporter_BugReport__Class** type_info = (app::BugReporter_BugReport__Class**)(modloader::win::memory::resolve_rva(0x04713668));
        inline app::BugReporter_BugReport__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_BugReport__Class>(type_info, "", "BugReporter", "BugReport");
        }
        inline app::BugReporter_BugReport* create() {
            return il2cpp::create_object<app::BugReporter_BugReport>(get_class());
        }
    } // namespace BugReporter_BugReport
} // namespace app::classes::types
