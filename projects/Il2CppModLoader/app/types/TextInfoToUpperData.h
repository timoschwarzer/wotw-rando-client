#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextInfoToUpperData {
        inline app::TextInfoToUpperData__Class** type_info = (app::TextInfoToUpperData__Class**)(modloader::win::memory::resolve_rva(0x04753B50));
        inline app::TextInfoToUpperData__Class* get_class() {
            return il2cpp::get_class<app::TextInfoToUpperData__Class>(type_info, "System.Globalization", "TextInfoToUpperData");
        }
        inline app::TextInfoToUpperData* create() {
            return il2cpp::create_object<app::TextInfoToUpperData>(get_class());
        }
    } // namespace TextInfoToUpperData
} // namespace app::classes::types
