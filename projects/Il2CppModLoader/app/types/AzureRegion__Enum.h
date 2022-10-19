#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AzureRegion__Enum {
        namespace {
            inline app::AzureRegion__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AzureRegion__Enum__Class** type_info = &type_info_ref;
        inline app::AzureRegion__Enum__Class* get_class() {
            return il2cpp::get_class<app::AzureRegion__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "AzureRegion");
        }
        inline app::AzureRegion__Enum* create() {
            return il2cpp::create_object<app::AzureRegion__Enum>(get_class());
        }
        inline app::AzureRegion__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AzureRegion__Enum__Array>(get_class(), size);
        }
        inline app::AzureRegion__Enum__Array* create_array(const std::vector<app::AzureRegion__Enum*>& items) {
            return il2cpp::array_new<app::AzureRegion__Enum__Array>(get_class(), items);
        }
    } // namespace AzureRegion__Enum
} // namespace app::classes::types
