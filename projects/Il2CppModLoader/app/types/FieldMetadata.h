#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FieldMetadata {
        inline app::FieldMetadata__Class** type_info = (app::FieldMetadata__Class**)(modloader::win::memory::resolve_rva(0x04746820));
        inline app::FieldMetadata__Class* get_class() {
            return il2cpp::get_class<app::FieldMetadata__Class>(type_info, "System.Diagnostics.Tracing", "FieldMetadata");
        }
        inline app::FieldMetadata* create() {
            return il2cpp::create_object<app::FieldMetadata>(get_class());
        }
        inline app::FieldMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::FieldMetadata__Array>(get_class(), size);
        }
        inline app::FieldMetadata__Array* create_array(const std::vector<app::FieldMetadata*>& items) {
            return il2cpp::array_new<app::FieldMetadata__Array>(get_class(), items);
        }
    } // namespace FieldMetadata
} // namespace app::classes::types
