#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldDamageReceiver_FollowingEffect {
        inline app::LaserShieldDamageReceiver_FollowingEffect__Class** type_info = (app::LaserShieldDamageReceiver_FollowingEffect__Class**)(modloader::win::memory::resolve_rva(0x047167E0));
        inline app::LaserShieldDamageReceiver_FollowingEffect__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShieldDamageReceiver_FollowingEffect__Class>(type_info, "", "LaserShieldDamageReceiver", "FollowingEffect");
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect* create() {
            return il2cpp::create_object<app::LaserShieldDamageReceiver_FollowingEffect>(get_class());
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Boxed* box(app::LaserShieldDamageReceiver_FollowingEffect value) {
            return il2cpp::box_value<app::LaserShieldDamageReceiver_FollowingEffect__Boxed>(get_class(), value);
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver_FollowingEffect__Array>(get_class(), size);
        }
        inline app::LaserShieldDamageReceiver_FollowingEffect__Array* create_array(const std::vector<app::LaserShieldDamageReceiver_FollowingEffect>& items) {
            return il2cpp::array_new<app::LaserShieldDamageReceiver_FollowingEffect__Array>(get_class(), items);
        }
    } // namespace LaserShieldDamageReceiver_FollowingEffect
} // namespace app::classes::types
