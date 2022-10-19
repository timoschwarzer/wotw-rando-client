#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FindObjectsWrapper {
        inline app::FindObjectsWrapper__Class** type_info = (app::FindObjectsWrapper__Class**)(modloader::win::memory::resolve_rva(0x04702C58));
        inline app::FindObjectsWrapper__Class* get_class() {
            return il2cpp::get_class<app::FindObjectsWrapper__Class>(type_info, "Moon", "FindObjectsWrapper");
        }
        inline app::FindObjectsWrapper* create() {
            return il2cpp::create_object<app::FindObjectsWrapper>(get_class());
        }
    } // namespace FindObjectsWrapper
} // namespace app::classes::types
