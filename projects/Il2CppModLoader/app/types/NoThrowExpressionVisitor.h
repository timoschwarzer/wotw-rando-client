#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NoThrowExpressionVisitor {
        inline app::NoThrowExpressionVisitor__Class** type_info = (app::NoThrowExpressionVisitor__Class**)(modloader::win::memory::resolve_rva(0x04704820));
        inline app::NoThrowExpressionVisitor__Class* get_class() {
            return il2cpp::get_class<app::NoThrowExpressionVisitor__Class>(type_info, "Newtonsoft.Json.Utilities", "NoThrowExpressionVisitor");
        }
        inline app::NoThrowExpressionVisitor* create() {
            return il2cpp::create_object<app::NoThrowExpressionVisitor>(get_class());
        }
    } // namespace NoThrowExpressionVisitor
} // namespace app::classes::types
