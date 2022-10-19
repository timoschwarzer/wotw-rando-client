#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutputFolder_1 {
        inline app::OutputFolder_1__Class** type_info = (app::OutputFolder_1__Class**)(modloader::win::memory::resolve_rva(0x047410E8));
        inline app::OutputFolder_1__Class* get_class() {
            return il2cpp::get_class<app::OutputFolder_1__Class>(type_info, "", "OutputFolder");
        }
        inline app::OutputFolder_1* create() {
            return il2cpp::create_object<app::OutputFolder_1>(get_class());
        }
    } // namespace OutputFolder_1
} // namespace app::classes::types
