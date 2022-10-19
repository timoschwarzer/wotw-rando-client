#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyValuePairConverter {
        inline app::KeyValuePairConverter__Class** type_info = (app::KeyValuePairConverter__Class**)(modloader::win::memory::resolve_rva(0x0472AF88));
        inline app::KeyValuePairConverter__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePairConverter__Class>(type_info, "Newtonsoft.Json.Converters", "KeyValuePairConverter");
        }
        inline app::KeyValuePairConverter* create() {
            return il2cpp::create_object<app::KeyValuePairConverter>(get_class());
        }
    } // namespace KeyValuePairConverter
} // namespace app::classes::types
