#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_VisitorCtx {
        inline app::DynamicInstantiationScanner_VisitorCtx__Class** type_info = (app::DynamicInstantiationScanner_VisitorCtx__Class**)(modloader::win::memory::resolve_rva(0x04748018));
        inline app::DynamicInstantiationScanner_VisitorCtx__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_VisitorCtx__Class>(type_info, "", "DynamicInstantiationScanner", "VisitorCtx");
        }
        inline app::DynamicInstantiationScanner_VisitorCtx* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_VisitorCtx>(get_class());
        }
    } // namespace DynamicInstantiationScanner_VisitorCtx
} // namespace app::classes::types
