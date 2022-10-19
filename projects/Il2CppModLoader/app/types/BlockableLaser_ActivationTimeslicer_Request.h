#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockableLaser_ActivationTimeslicer_Request {
        inline app::BlockableLaser_ActivationTimeslicer_Request__Class** type_info = (app::BlockableLaser_ActivationTimeslicer_Request__Class**)(modloader::win::memory::resolve_rva(0x04768F00));
        inline app::BlockableLaser_ActivationTimeslicer_Request__Class* get_class() {
            return il2cpp::get_nested_class<app::BlockableLaser_ActivationTimeslicer_Request__Class>(type_info, "", "BlockableLaser+ActivationTimeslicer", "Request");
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request* create() {
            return il2cpp::create_object<app::BlockableLaser_ActivationTimeslicer_Request>(get_class());
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Boxed* box(app::BlockableLaser_ActivationTimeslicer_Request value) {
            return il2cpp::box_value<app::BlockableLaser_ActivationTimeslicer_Request__Boxed>(get_class(), value);
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array* create_array(int size) {
            return il2cpp::array_new<app::BlockableLaser_ActivationTimeslicer_Request__Array>(get_class(), size);
        }
        inline app::BlockableLaser_ActivationTimeslicer_Request__Array* create_array(const std::vector<app::BlockableLaser_ActivationTimeslicer_Request>& items) {
            return il2cpp::array_new<app::BlockableLaser_ActivationTimeslicer_Request__Array>(get_class(), items);
        }
    } // namespace BlockableLaser_ActivationTimeslicer_Request
} // namespace app::classes::types
