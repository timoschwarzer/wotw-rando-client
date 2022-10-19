#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeDetectorString {
        inline app::ChangeDetectorString__Class** type_info = (app::ChangeDetectorString__Class**)(modloader::win::memory::resolve_rva(0x0473E9B8));
        inline app::ChangeDetectorString__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorString__Class>(type_info, "", "ChangeDetectorString");
        }
        inline app::ChangeDetectorString* create() {
            return il2cpp::create_object<app::ChangeDetectorString>(get_class());
        }
    } // namespace ChangeDetectorString
} // namespace app::classes::types
