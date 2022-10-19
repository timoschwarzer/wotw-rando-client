#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression3 {
        inline app::InstanceMethodCallExpression3__Class** type_info = (app::InstanceMethodCallExpression3__Class**)(modloader::win::memory::resolve_rva(0x0470F010));
        inline app::InstanceMethodCallExpression3__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression3__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression3");
        }
        inline app::InstanceMethodCallExpression3* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression3>(get_class());
        }
    } // namespace InstanceMethodCallExpression3
} // namespace app::classes::types
