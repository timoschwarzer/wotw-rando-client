#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossBaseBehaviour {
        namespace {
            inline app::KwolokBossBaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossBaseBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossBaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossBaseBehaviour__Class>(type_info, "", "KwolokBossBaseBehaviour");
        }
        inline app::KwolokBossBaseBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossBaseBehaviour>(get_class());
        }
        inline app::KwolokBossBaseBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossBaseBehaviour__Array>(get_class(), size);
        }
        inline app::KwolokBossBaseBehaviour__Array* create_array(const std::vector<app::KwolokBossBaseBehaviour*>& items) {
            return il2cpp::array_new<app::KwolokBossBaseBehaviour__Array>(get_class(), items);
        }
    } // namespace KwolokBossBaseBehaviour
} // namespace app::classes::types
