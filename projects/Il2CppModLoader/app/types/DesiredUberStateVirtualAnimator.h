#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DesiredUberStateVirtualAnimator {
        namespace {
            inline app::DesiredUberStateVirtualAnimator__Class* type_info_ref = nullptr;
        }
        inline app::DesiredUberStateVirtualAnimator__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateVirtualAnimator__Class>(type_info, "", "DesiredUberStateVirtualAnimator");
        }
        inline app::DesiredUberStateVirtualAnimator* create() {
            return il2cpp::create_object<app::DesiredUberStateVirtualAnimator>(get_class());
        }
    } // namespace DesiredUberStateVirtualAnimator
} // namespace app::classes::types
