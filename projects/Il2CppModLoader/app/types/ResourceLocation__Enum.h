#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceLocation__Enum {
        namespace {
            inline app::ResourceLocation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ResourceLocation__Enum__Class** type_info = &type_info_ref;
        inline app::ResourceLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResourceLocation__Enum__Class>(type_info, "System.Reflection", "ResourceLocation");
        }
        inline app::ResourceLocation__Enum* create() {
            return il2cpp::create_object<app::ResourceLocation__Enum>(get_class());
        }
    } // namespace ResourceLocation__Enum
} // namespace app::classes::types
