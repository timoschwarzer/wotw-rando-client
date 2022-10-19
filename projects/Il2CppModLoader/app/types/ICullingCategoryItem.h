#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICullingCategoryItem {
        inline app::ICullingCategoryItem__Class** type_info = (app::ICullingCategoryItem__Class**)(modloader::win::memory::resolve_rva(0x04715758));
        inline app::ICullingCategoryItem__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryItem__Class>(type_info, "Moon.Rendering", "ICullingCategoryItem");
        }
    } // namespace ICullingCategoryItem
} // namespace app::classes::types
