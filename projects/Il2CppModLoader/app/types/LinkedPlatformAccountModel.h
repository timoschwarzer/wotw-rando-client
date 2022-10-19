#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkedPlatformAccountModel {
        inline app::LinkedPlatformAccountModel__Class** type_info = (app::LinkedPlatformAccountModel__Class**)(modloader::win::memory::resolve_rva(0x04771118));
        inline app::LinkedPlatformAccountModel__Class* get_class() {
            return il2cpp::get_class<app::LinkedPlatformAccountModel__Class>(type_info, "PlayFab.ClientModels", "LinkedPlatformAccountModel");
        }
        inline app::LinkedPlatformAccountModel* create() {
            return il2cpp::create_object<app::LinkedPlatformAccountModel>(get_class());
        }
        inline app::LinkedPlatformAccountModel__Array* create_array(int size) {
            return il2cpp::array_new<app::LinkedPlatformAccountModel__Array>(get_class(), size);
        }
        inline app::LinkedPlatformAccountModel__Array* create_array(const std::vector<app::LinkedPlatformAccountModel*>& items) {
            return il2cpp::array_new<app::LinkedPlatformAccountModel__Array>(get_class(), items);
        }
    } // namespace LinkedPlatformAccountModel
} // namespace app::classes::types
