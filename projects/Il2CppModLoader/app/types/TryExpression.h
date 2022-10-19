#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TryExpression {
        inline app::TryExpression__Class** type_info = (app::TryExpression__Class**)(modloader::win::memory::resolve_rva(0x04742ED0));
        inline app::TryExpression__Class* get_class() {
            return il2cpp::get_class<app::TryExpression__Class>(type_info, "System.Linq.Expressions", "TryExpression");
        }
        inline app::TryExpression* create() {
            return il2cpp::create_object<app::TryExpression>(get_class());
        }
    } // namespace TryExpression
} // namespace app::classes::types
