#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundBankEntry__Array {
        namespace {
            inline app::SoundBankEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::SoundBankEntry__Array__Class** type_info = &type_info_ref;
        inline app::SoundBankEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundBankEntry__Array__Class>(type_info, "Moon.Wwise", "SoundBankEntry[]");
        }
        inline app::SoundBankEntry__Array* create() {
            return il2cpp::create_object<app::SoundBankEntry__Array>(get_class());
        }
    } // namespace SoundBankEntry__Array
} // namespace app::classes::types
