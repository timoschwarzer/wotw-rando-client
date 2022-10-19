#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotsManager_c {
        inline app::SaveSlotsManager_c__Class** type_info = (app::SaveSlotsManager_c__Class**)(modloader::win::memory::resolve_rva(0x04715310));
        inline app::SaveSlotsManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsManager_c__Class>(type_info, "", "SaveSlotsManager", "<>c");
        }
        inline app::SaveSlotsManager_c* create() {
            return il2cpp::create_object<app::SaveSlotsManager_c>(get_class());
        }
    } // namespace SaveSlotsManager_c
} // namespace app::classes::types
