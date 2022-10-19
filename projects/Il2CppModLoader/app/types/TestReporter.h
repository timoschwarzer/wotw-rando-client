#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestReporter {
        inline app::TestReporter__Class** type_info = (app::TestReporter__Class**)(modloader::win::memory::resolve_rva(0x0472CCF8));
        inline app::TestReporter__Class* get_class() {
            return il2cpp::get_class<app::TestReporter__Class>(type_info, "", "TestReporter");
        }
        inline app::TestReporter* create() {
            return il2cpp::create_object<app::TestReporter>(get_class());
        }
    } // namespace TestReporter
} // namespace app::classes::types
