#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordableObject {
        namespace {
            inline app::RecordableObject__Class* type_info_ref = nullptr;
        }
        inline app::RecordableObject__Class** type_info = &type_info_ref;
        inline app::RecordableObject__Class* get_class() {
            return il2cpp::get_class<app::RecordableObject__Class>(type_info, "", "RecordableObject");
        }
        inline app::RecordableObject* create() {
            return il2cpp::create_object<app::RecordableObject>(get_class());
        }
        inline app::RecordableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordableObject__Array>(get_class(), size);
        }
        inline app::RecordableObject__Array* create_array(const std::vector<app::RecordableObject*>& items) {
            return il2cpp::array_new<app::RecordableObject__Array>(get_class(), items);
        }
    } // namespace RecordableObject
} // namespace app::classes::types
