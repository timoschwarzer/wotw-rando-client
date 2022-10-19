#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionObject_InteractionEvent {
        namespace {
            inline app::InteractionObject_InteractionEvent__Class* type_info_ref = nullptr;
        }
        inline app::InteractionObject_InteractionEvent__Class** type_info = &type_info_ref;
        inline app::InteractionObject_InteractionEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_InteractionEvent__Class>(type_info, "RootMotion.FinalIK", "InteractionObject", "InteractionEvent");
        }
        inline app::InteractionObject_InteractionEvent* create() {
            return il2cpp::create_object<app::InteractionObject_InteractionEvent>(get_class());
        }
        inline app::InteractionObject_InteractionEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject_InteractionEvent__Array>(get_class(), size);
        }
        inline app::InteractionObject_InteractionEvent__Array* create_array(const std::vector<app::InteractionObject_InteractionEvent*>& items) {
            return il2cpp::array_new<app::InteractionObject_InteractionEvent__Array>(get_class(), items);
        }
    } // namespace InteractionObject_InteractionEvent
} // namespace app::classes::types
