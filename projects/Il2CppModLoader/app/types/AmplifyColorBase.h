#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmplifyColorBase {
        namespace {
            inline app::AmplifyColorBase__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorBase__Class** type_info = &type_info_ref;
        inline app::AmplifyColorBase__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorBase__Class>(type_info, "", "AmplifyColorBase");
        }
        inline app::AmplifyColorBase* create() {
            return il2cpp::create_object<app::AmplifyColorBase>(get_class());
        }
        inline app::AmplifyColorBase__Array* create_array(int size) {
            return il2cpp::array_new<app::AmplifyColorBase__Array>(get_class(), size);
        }
        inline app::AmplifyColorBase__Array* create_array(const std::vector<app::AmplifyColorBase*>& items) {
            return il2cpp::array_new<app::AmplifyColorBase__Array>(get_class(), items);
        }
    } // namespace AmplifyColorBase
} // namespace app::classes::types
