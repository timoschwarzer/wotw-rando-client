#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleNewsItem_1__Array {
        namespace {
            inline app::TitleNewsItem_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::TitleNewsItem_1__Array__Class** type_info = &type_info_ref;
        inline app::TitleNewsItem_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsItem_1__Array__Class>(type_info, "PlayFab.ServerModels", "TitleNewsItem[]");
        }
        inline app::TitleNewsItem_1__Array* create() {
            return il2cpp::create_object<app::TitleNewsItem_1__Array>(get_class());
        }
    } // namespace TitleNewsItem_1__Array
} // namespace app::classes::types
