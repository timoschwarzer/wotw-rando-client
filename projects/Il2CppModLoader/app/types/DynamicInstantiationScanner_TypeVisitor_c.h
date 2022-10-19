#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_TypeVisitor_c {
        inline app::DynamicInstantiationScanner_TypeVisitor_c__Class** type_info = (app::DynamicInstantiationScanner_TypeVisitor_c__Class**)(modloader::win::memory::resolve_rva(0x04793178));
        inline app::DynamicInstantiationScanner_TypeVisitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_TypeVisitor_c__Class>(type_info, "", "DynamicInstantiationScanner+TypeVisitor", "<>c");
        }
        inline app::DynamicInstantiationScanner_TypeVisitor_c* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_TypeVisitor_c>(get_class());
        }
    } // namespace DynamicInstantiationScanner_TypeVisitor_c
} // namespace app::classes::types
