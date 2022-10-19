#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MainThreadSleepTester {
        inline app::MainThreadSleepTester__Class** type_info = (app::MainThreadSleepTester__Class**)(modloader::win::memory::resolve_rva(0x0477F408));
        inline app::MainThreadSleepTester__Class* get_class() {
            return il2cpp::get_class<app::MainThreadSleepTester__Class>(type_info, "", "MainThreadSleepTester");
        }
        inline app::MainThreadSleepTester* create() {
            return il2cpp::create_object<app::MainThreadSleepTester>(get_class());
        }
    } // namespace MainThreadSleepTester
} // namespace app::classes::types
