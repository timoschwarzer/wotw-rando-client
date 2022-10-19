#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneRootRecruiter {
        namespace {
            inline app::SceneRootRecruiter__Class* type_info_ref = nullptr;
        }
        inline app::SceneRootRecruiter__Class** type_info = &type_info_ref;
        inline app::SceneRootRecruiter__Class* get_class() {
            return il2cpp::get_class<app::SceneRootRecruiter__Class>(type_info, "", "SceneRootRecruiter");
        }
        inline app::SceneRootRecruiter* create() {
            return il2cpp::create_object<app::SceneRootRecruiter>(get_class());
        }
    } // namespace SceneRootRecruiter
} // namespace app::classes::types
