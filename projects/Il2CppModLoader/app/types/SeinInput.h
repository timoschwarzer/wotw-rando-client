#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinInput {
        inline app::SeinInput__Class** type_info = (app::SeinInput__Class**)(modloader::win::memory::resolve_rva(0x04756380));
        inline app::SeinInput__Class* get_class() {
            return il2cpp::get_class<app::SeinInput__Class>(type_info, "", "SeinInput");
        }
        inline app::SeinInput* create() {
            return il2cpp::create_object<app::SeinInput>(get_class());
        }
    } // namespace SeinInput
} // namespace app::classes::types
