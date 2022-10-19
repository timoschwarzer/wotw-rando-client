#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeStateSetupData {
        namespace {
            inline app::ChangeStateSetupData__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateSetupData__Class** type_info = &type_info_ref;
        inline app::ChangeStateSetupData__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupData__Class>(type_info, "Moon.Setups", "ChangeStateSetupData");
        }
        inline app::ChangeStateSetupData* create() {
            return il2cpp::create_object<app::ChangeStateSetupData>(get_class());
        }
        inline app::ChangeStateSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateSetupData__Array>(get_class(), size);
        }
        inline app::ChangeStateSetupData__Array* create_array(const std::vector<app::ChangeStateSetupData*>& items) {
            return il2cpp::array_new<app::ChangeStateSetupData__Array>(get_class(), items);
        }
    } // namespace ChangeStateSetupData
} // namespace app::classes::types
