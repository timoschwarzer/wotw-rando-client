#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderEntity {
        inline app::BuilderEntity__Class** type_info = (app::BuilderEntity__Class**)(modloader::win::memory::resolve_rva(0x04761AB0));
        inline app::BuilderEntity__Class* get_class() {
            return il2cpp::get_class<app::BuilderEntity__Class>(type_info, "", "BuilderEntity");
        }
        inline app::BuilderEntity* create() {
            return il2cpp::create_object<app::BuilderEntity>(get_class());
        }
    } // namespace BuilderEntity
} // namespace app::classes::types
