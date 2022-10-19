#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_Visitor {
        namespace {
            inline app::DynamicInstantiationScanner_Visitor__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationScanner_Visitor__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationScanner_Visitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_Visitor__Class>(type_info, "", "DynamicInstantiationScanner", "Visitor");
        }
        inline app::DynamicInstantiationScanner_Visitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_Visitor>(get_class());
        }
        inline app::DynamicInstantiationScanner_Visitor__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicInstantiationScanner_Visitor__Array>(get_class(), size);
        }
        inline app::DynamicInstantiationScanner_Visitor__Array* create_array(const std::vector<app::DynamicInstantiationScanner_Visitor*>& items) {
            return il2cpp::array_new<app::DynamicInstantiationScanner_Visitor__Array>(get_class(), items);
        }
    } // namespace DynamicInstantiationScanner_Visitor
} // namespace app::classes::types
