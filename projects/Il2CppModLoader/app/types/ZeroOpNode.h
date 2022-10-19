#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZeroOpNode {
        inline app::ZeroOpNode__Class** type_info = (app::ZeroOpNode__Class**)(modloader::win::memory::resolve_rva(0x04746D58));
        inline app::ZeroOpNode__Class* get_class() {
            return il2cpp::get_class<app::ZeroOpNode__Class>(type_info, "System.Data", "ZeroOpNode");
        }
        inline app::ZeroOpNode* create() {
            return il2cpp::create_object<app::ZeroOpNode>(get_class());
        }
    } // namespace ZeroOpNode
} // namespace app::classes::types
