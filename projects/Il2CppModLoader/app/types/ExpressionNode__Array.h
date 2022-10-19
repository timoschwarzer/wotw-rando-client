#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpressionNode__Array {
        inline app::ExpressionNode__Array__Class** type_info = (app::ExpressionNode__Array__Class**)(modloader::win::memory::resolve_rva(0x04719E58));
        inline app::ExpressionNode__Array__Class* get_class() {
            return il2cpp::get_class<app::ExpressionNode__Array__Class>(type_info, "System.Data", "ExpressionNode[]");
        }
        inline app::ExpressionNode__Array* create() {
            return il2cpp::create_object<app::ExpressionNode__Array>(get_class());
        }
    } // namespace ExpressionNode__Array
} // namespace app::classes::types
