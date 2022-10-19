#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bloom_BloomScreenBlendMode__Enum {
        namespace {
            inline app::Bloom_BloomScreenBlendMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Bloom_BloomScreenBlendMode__Enum__Class** type_info = &type_info_ref;
        inline app::Bloom_BloomScreenBlendMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Bloom_BloomScreenBlendMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "Bloom", "BloomScreenBlendMode");
        }
        inline app::Bloom_BloomScreenBlendMode__Enum* create() {
            return il2cpp::create_object<app::Bloom_BloomScreenBlendMode__Enum>(get_class());
        }
    } // namespace Bloom_BloomScreenBlendMode__Enum
} // namespace app::classes::types
