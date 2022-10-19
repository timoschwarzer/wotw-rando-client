#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementWrapper {
        inline app::XElementWrapper__Class** type_info = (app::XElementWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473BBE8));
        inline app::XElementWrapper__Class* get_class() {
            return il2cpp::get_class<app::XElementWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XElementWrapper");
        }
        inline app::XElementWrapper* create() {
            return il2cpp::create_object<app::XElementWrapper>(get_class());
        }
    } // namespace XElementWrapper
} // namespace app::classes::types
