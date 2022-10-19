#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IConstrainedEntityWithChildren {
        inline app::IConstrainedEntityWithChildren__Class** type_info = (app::IConstrainedEntityWithChildren__Class**)(modloader::win::memory::resolve_rva(0x047729A8));
        inline app::IConstrainedEntityWithChildren__Class* get_class() {
            return il2cpp::get_class<app::IConstrainedEntityWithChildren__Class>(type_info, "Moon.Timeline.Constraints", "IConstrainedEntityWithChildren");
        }
    } // namespace IConstrainedEntityWithChildren
} // namespace app::classes::types
