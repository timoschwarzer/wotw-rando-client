#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIContext {
        inline app::UIContext__Class** type_info = (app::UIContext__Class**)(modloader::win::memory::resolve_rva(0x04735940));
        inline app::UIContext__Class* get_class() {
            return il2cpp::get_class<app::UIContext__Class>(type_info, "Moon.UI", "UIContext");
        }
        inline app::UIContext* create() {
            return il2cpp::create_object<app::UIContext>(get_class());
        }
    } // namespace UIContext
} // namespace app::classes::types
