#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BindingRestrictions_MergedRestriction {
        inline app::BindingRestrictions_MergedRestriction__Class** type_info = (app::BindingRestrictions_MergedRestriction__Class**)(modloader::win::memory::resolve_rva(0x0476A228));
        inline app::BindingRestrictions_MergedRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_MergedRestriction__Class>(type_info, "System.Dynamic", "BindingRestrictions", "MergedRestriction");
        }
        inline app::BindingRestrictions_MergedRestriction* create() {
            return il2cpp::create_object<app::BindingRestrictions_MergedRestriction>(get_class());
        }
    } // namespace BindingRestrictions_MergedRestriction
} // namespace app::classes::types
