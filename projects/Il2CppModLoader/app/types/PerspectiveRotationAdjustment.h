#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerspectiveRotationAdjustment {
        namespace {
            inline app::PerspectiveRotationAdjustment__Class* type_info_ref = nullptr;
        }
        inline app::PerspectiveRotationAdjustment__Class** type_info = &type_info_ref;
        inline app::PerspectiveRotationAdjustment__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationAdjustment__Class>(type_info, "", "PerspectiveRotationAdjustment");
        }
        inline app::PerspectiveRotationAdjustment* create() {
            return il2cpp::create_object<app::PerspectiveRotationAdjustment>(get_class());
        }
        inline app::PerspectiveRotationAdjustment__Array* create_array(int size) {
            return il2cpp::array_new<app::PerspectiveRotationAdjustment__Array>(get_class(), size);
        }
        inline app::PerspectiveRotationAdjustment__Array* create_array(const std::vector<app::PerspectiveRotationAdjustment*>& items) {
            return il2cpp::array_new<app::PerspectiveRotationAdjustment__Array>(get_class(), items);
        }
    } // namespace PerspectiveRotationAdjustment
} // namespace app::classes::types
