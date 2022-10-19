#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerBasedRubberBandingSet {
        namespace {
            inline app::TriggerBasedRubberBandingSet__Class* type_info_ref = nullptr;
        }
        inline app::TriggerBasedRubberBandingSet__Class** type_info = &type_info_ref;
        inline app::TriggerBasedRubberBandingSet__Class* get_class() {
            return il2cpp::get_class<app::TriggerBasedRubberBandingSet__Class>(type_info, "", "TriggerBasedRubberBandingSet");
        }
        inline app::TriggerBasedRubberBandingSet* create() {
            return il2cpp::create_object<app::TriggerBasedRubberBandingSet>(get_class());
        }
    } // namespace TriggerBasedRubberBandingSet
} // namespace app::classes::types
