#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZDontSaveUtils {
        inline app::ZDontSaveUtils__Class** type_info = (app::ZDontSaveUtils__Class**)(modloader::win::memory::resolve_rva(0x047538C8));
        inline app::ZDontSaveUtils__Class* get_class() {
            return il2cpp::get_class<app::ZDontSaveUtils__Class>(type_info, "", "ZDontSaveUtils");
        }
        inline app::ZDontSaveUtils* create() {
            return il2cpp::create_object<app::ZDontSaveUtils>(get_class());
        }
    } // namespace ZDontSaveUtils
} // namespace app::classes::types
