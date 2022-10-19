#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomAttributeTypedArgument {
        inline app::CustomAttributeTypedArgument__Class** type_info = (app::CustomAttributeTypedArgument__Class**)(modloader::win::memory::resolve_rva(0x04766388));
        inline app::CustomAttributeTypedArgument__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeTypedArgument__Class>(type_info, "System.Reflection", "CustomAttributeTypedArgument");
        }
        inline app::CustomAttributeTypedArgument* create() {
            return il2cpp::create_object<app::CustomAttributeTypedArgument>(get_class());
        }
        inline app::CustomAttributeTypedArgument__Boxed* box(app::CustomAttributeTypedArgument value) {
            return il2cpp::box_value<app::CustomAttributeTypedArgument__Boxed>(get_class(), value);
        }
        inline app::CustomAttributeTypedArgument__Array* create_array(int size) {
            return il2cpp::array_new<app::CustomAttributeTypedArgument__Array>(get_class(), size);
        }
        inline app::CustomAttributeTypedArgument__Array* create_array(const std::vector<app::CustomAttributeTypedArgument>& items) {
            return il2cpp::array_new<app::CustomAttributeTypedArgument__Array>(get_class(), items);
        }
    } // namespace CustomAttributeTypedArgument
} // namespace app::classes::types
