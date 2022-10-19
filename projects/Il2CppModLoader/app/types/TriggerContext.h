#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerContext {
        inline app::TriggerContext__Class** type_info = (app::TriggerContext__Class**)(modloader::win::memory::resolve_rva(0x0477EFC0));
        inline app::TriggerContext__Class* get_class() {
            return il2cpp::get_class<app::TriggerContext__Class>(type_info, "", "TriggerContext");
        }
        inline app::TriggerContext* create() {
            return il2cpp::create_object<app::TriggerContext>(get_class());
        }
    } // namespace TriggerContext
} // namespace app::classes::types
