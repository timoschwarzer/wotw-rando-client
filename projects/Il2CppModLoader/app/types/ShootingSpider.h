#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShootingSpider {
        namespace {
            inline app::ShootingSpider__Class* type_info_ref = nullptr;
        }
        inline app::ShootingSpider__Class** type_info = &type_info_ref;
        inline app::ShootingSpider__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpider__Class>(type_info, "", "ShootingSpider");
        }
        inline app::ShootingSpider* create() {
            return il2cpp::create_object<app::ShootingSpider>(get_class());
        }
    } // namespace ShootingSpider
} // namespace app::classes::types
