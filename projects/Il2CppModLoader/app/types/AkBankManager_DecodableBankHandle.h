#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkBankManager_DecodableBankHandle {
        inline app::AkBankManager_DecodableBankHandle__Class** type_info = (app::AkBankManager_DecodableBankHandle__Class**)(modloader::win::memory::resolve_rva(0x04736030));
        inline app::AkBankManager_DecodableBankHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::AkBankManager_DecodableBankHandle__Class>(type_info, "", "AkBankManager", "DecodableBankHandle");
        }
        inline app::AkBankManager_DecodableBankHandle* create() {
            return il2cpp::create_object<app::AkBankManager_DecodableBankHandle>(get_class());
        }
    } // namespace AkBankManager_DecodableBankHandle
} // namespace app::classes::types
