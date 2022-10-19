#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChannelSwapper_Channel__Enum {
        namespace {
            inline app::ChannelSwapper_Channel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ChannelSwapper_Channel__Enum__Class** type_info = &type_info_ref;
        inline app::ChannelSwapper_Channel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChannelSwapper_Channel__Enum__Class>(type_info, "Colorful", "ChannelSwapper", "Channel");
        }
        inline app::ChannelSwapper_Channel__Enum* create() {
            return il2cpp::create_object<app::ChannelSwapper_Channel__Enum>(get_class());
        }
    } // namespace ChannelSwapper_Channel__Enum
} // namespace app::classes::types
