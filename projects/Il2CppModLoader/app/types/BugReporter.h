#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugReporter {
        inline app::BugReporter__Class** type_info = (app::BugReporter__Class**)(modloader::win::memory::resolve_rva(0x0478DFA0));
        inline app::BugReporter__Class* get_class() {
            return il2cpp::get_class<app::BugReporter__Class>(type_info, "", "BugReporter");
        }
        inline app::BugReporter* create() {
            return il2cpp::create_object<app::BugReporter>(get_class());
        }
    } // namespace BugReporter
} // namespace app::classes::types
