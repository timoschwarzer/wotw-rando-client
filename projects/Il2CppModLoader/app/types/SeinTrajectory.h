#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinTrajectory {
        namespace {
            inline app::SeinTrajectory__Class* type_info_ref = nullptr;
        }
        inline app::SeinTrajectory__Class** type_info = &type_info_ref;
        inline app::SeinTrajectory__Class* get_class() {
            return il2cpp::get_class<app::SeinTrajectory__Class>(type_info, "", "SeinTrajectory");
        }
        inline app::SeinTrajectory* create() {
            return il2cpp::create_object<app::SeinTrajectory>(get_class());
        }
    } // namespace SeinTrajectory
} // namespace app::classes::types
