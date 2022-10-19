#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossHeadbuttBehaviour {
        namespace {
            inline app::KwolokBossHeadbuttBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossHeadbuttBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossHeadbuttBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossHeadbuttBehaviour__Class>(type_info, "", "KwolokBossHeadbuttBehaviour");
        }
        inline app::KwolokBossHeadbuttBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossHeadbuttBehaviour>(get_class());
        }
    } // namespace KwolokBossHeadbuttBehaviour
} // namespace app::classes::types
