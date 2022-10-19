#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugReportMenuItem {
        namespace {
            inline app::BugReportMenuItem__Class* type_info_ref = nullptr;
        }
        inline app::BugReportMenuItem__Class** type_info = &type_info_ref;
        inline app::BugReportMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BugReportMenuItem__Class>(type_info, "", "BugReportMenuItem");
        }
        inline app::BugReportMenuItem* create() {
            return il2cpp::create_object<app::BugReportMenuItem>(get_class());
        }
    } // namespace BugReportMenuItem
} // namespace app::classes::types
