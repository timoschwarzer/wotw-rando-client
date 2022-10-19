#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XProgressState__Enum {
        inline app::XProgressState__Enum__Class** type_info = (app::XProgressState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477E990));
        inline app::XProgressState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XProgressState__Enum__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XProgressState");
        }
        inline app::XProgressState__Enum* create() {
            return il2cpp::create_object<app::XProgressState__Enum>(get_class());
        }
    } // namespace XProgressState__Enum
} // namespace app::classes::types
