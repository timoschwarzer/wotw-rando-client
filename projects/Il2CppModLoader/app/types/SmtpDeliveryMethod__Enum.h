#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmtpDeliveryMethod__Enum {
        namespace {
            inline app::SmtpDeliveryMethod__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SmtpDeliveryMethod__Enum__Class** type_info = &type_info_ref;
        inline app::SmtpDeliveryMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::SmtpDeliveryMethod__Enum__Class>(type_info, "System.Net.Mail", "SmtpDeliveryMethod");
        }
        inline app::SmtpDeliveryMethod__Enum* create() {
            return il2cpp::create_object<app::SmtpDeliveryMethod__Enum>(get_class());
        }
    } // namespace SmtpDeliveryMethod__Enum
} // namespace app::classes::types
