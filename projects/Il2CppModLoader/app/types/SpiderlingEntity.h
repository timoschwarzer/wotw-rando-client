#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderlingEntity {
        inline app::SpiderlingEntity__Class** type_info = (app::SpiderlingEntity__Class**)(modloader::win::memory::resolve_rva(0x04717F08));
        inline app::SpiderlingEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingEntity__Class>(type_info, "", "SpiderlingEntity");
        }
        inline app::SpiderlingEntity* create() {
            return il2cpp::create_object<app::SpiderlingEntity>(get_class());
        }
    } // namespace SpiderlingEntity
} // namespace app::classes::types
