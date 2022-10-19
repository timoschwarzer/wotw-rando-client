#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeDescriptor_AttributeProvider_AttributeTypeDescriptor {
        inline app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class** type_info = (app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0472A898));
        inline app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor__Class>(type_info, "System.ComponentModel", "TypeDescriptor+AttributeProvider", "AttributeTypeDescriptor");
        }
        inline app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor_AttributeProvider_AttributeTypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor_AttributeProvider_AttributeTypeDescriptor
} // namespace app::classes::types
