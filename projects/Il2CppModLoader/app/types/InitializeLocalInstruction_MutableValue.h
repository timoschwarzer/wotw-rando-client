#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_MutableValue {
        inline app::InitializeLocalInstruction_MutableValue__Class** type_info = (app::InitializeLocalInstruction_MutableValue__Class**)(modloader::win::memory::resolve_rva(0x0472E068));
        inline app::InitializeLocalInstruction_MutableValue__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_MutableValue__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "MutableValue");
        }
        inline app::InitializeLocalInstruction_MutableValue* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_MutableValue>(get_class());
        }
    } // namespace InitializeLocalInstruction_MutableValue
} // namespace app::classes::types
