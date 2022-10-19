#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionalDecorator_c {
        inline app::ConditionalDecorator_c__Class** type_info = (app::ConditionalDecorator_c__Class**)(modloader::win::memory::resolve_rva(0x0472AF90));
        inline app::ConditionalDecorator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionalDecorator_c__Class>(type_info, "Moon.BehaviourSystem", "ConditionalDecorator", "<>c");
        }
        inline app::ConditionalDecorator_c* create() {
            return il2cpp::create_object<app::ConditionalDecorator_c>(get_class());
        }
    } // namespace ConditionalDecorator_c
} // namespace app::classes::types
