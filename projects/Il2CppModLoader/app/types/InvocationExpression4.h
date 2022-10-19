#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvocationExpression4 {
        inline app::InvocationExpression4__Class** type_info = (app::InvocationExpression4__Class**)(modloader::win::memory::resolve_rva(0x04742198));
        inline app::InvocationExpression4__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression4__Class>(type_info, "System.Linq.Expressions", "InvocationExpression4");
        }
        inline app::InvocationExpression4* create() {
            return il2cpp::create_object<app::InvocationExpression4>(get_class());
        }
    } // namespace InvocationExpression4
} // namespace app::classes::types
