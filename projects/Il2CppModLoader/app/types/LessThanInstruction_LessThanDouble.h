#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanDouble {
        inline app::LessThanInstruction_LessThanDouble__Class** type_info = (app::LessThanInstruction_LessThanDouble__Class**)(modloader::win::memory::resolve_rva(0x0472DE68));
        inline app::LessThanInstruction_LessThanDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanDouble");
        }
        inline app::LessThanInstruction_LessThanDouble* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanDouble>(get_class());
        }
    } // namespace LessThanInstruction_LessThanDouble
} // namespace app::classes::types
