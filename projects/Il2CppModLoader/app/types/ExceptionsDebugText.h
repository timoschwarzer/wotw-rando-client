#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExceptionsDebugText {
        inline app::ExceptionsDebugText__Class** type_info = (app::ExceptionsDebugText__Class**)(modloader::win::memory::resolve_rva(0x04757AB0));
        inline app::ExceptionsDebugText__Class* get_class() {
            return il2cpp::get_class<app::ExceptionsDebugText__Class>(type_info, "", "ExceptionsDebugText");
        }
        inline app::ExceptionsDebugText* create() {
            return il2cpp::create_object<app::ExceptionsDebugText>(get_class());
        }
    } // namespace ExceptionsDebugText
} // namespace app::classes::types
