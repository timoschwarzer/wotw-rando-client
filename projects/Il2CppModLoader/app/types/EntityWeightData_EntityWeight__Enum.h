#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityWeightData_EntityWeight__Enum {
        namespace {
            inline app::EntityWeightData_EntityWeight__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EntityWeightData_EntityWeight__Enum__Class** type_info = &type_info_ref;
        inline app::EntityWeightData_EntityWeight__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityWeightData_EntityWeight__Enum__Class>(type_info, "", "EntityWeightData", "EntityWeight");
        }
        inline app::EntityWeightData_EntityWeight__Enum* create() {
            return il2cpp::create_object<app::EntityWeightData_EntityWeight__Enum>(get_class());
        }
        inline app::EntityWeightData_EntityWeight__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeight__Enum__Array>(get_class(), size);
        }
        inline app::EntityWeightData_EntityWeight__Enum__Array* create_array(const std::vector<app::EntityWeightData_EntityWeight__Enum*>& items) {
            return il2cpp::array_new<app::EntityWeightData_EntityWeight__Enum__Array>(get_class(), items);
        }
    } // namespace EntityWeightData_EntityWeight__Enum
} // namespace app::classes::types
