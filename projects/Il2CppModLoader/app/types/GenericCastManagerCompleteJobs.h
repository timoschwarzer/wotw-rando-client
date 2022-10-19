#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericCastManagerCompleteJobs {
        namespace {
            inline app::GenericCastManagerCompleteJobs__Class* type_info_ref = nullptr;
        }
        inline app::GenericCastManagerCompleteJobs__Class** type_info = &type_info_ref;
        inline app::GenericCastManagerCompleteJobs__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerCompleteJobs__Class>(type_info, "", "GenericCastManagerCompleteJobs");
        }
        inline app::GenericCastManagerCompleteJobs* create() {
            return il2cpp::create_object<app::GenericCastManagerCompleteJobs>(get_class());
        }
    } // namespace GenericCastManagerCompleteJobs
} // namespace app::classes::types
