#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultContractResolver_c_DisplayClass45_2 {
        inline app::DefaultContractResolver_c_DisplayClass45_2__Class** type_info = (app::DefaultContractResolver_c_DisplayClass45_2__Class**)(modloader::win::memory::resolve_rva(0x0477DCC8));
        inline app::DefaultContractResolver_c_DisplayClass45_2__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultContractResolver_c_DisplayClass45_2__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultContractResolver", "<>c__DisplayClass45_2");
        }
        inline app::DefaultContractResolver_c_DisplayClass45_2* create() {
            return il2cpp::create_object<app::DefaultContractResolver_c_DisplayClass45_2>(get_class());
        }
    } // namespace DefaultContractResolver_c_DisplayClass45_2
} // namespace app::classes::types
