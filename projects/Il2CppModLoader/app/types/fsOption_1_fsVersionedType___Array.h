#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsOption_1_fsVersionedType___Array {
        namespace {
            inline app::fsOption_1_fsVersionedType___Array__Class* type_info_ref = nullptr;
        }
        inline app::fsOption_1_fsVersionedType___Array__Class** type_info = &type_info_ref;
        inline app::fsOption_1_fsVersionedType___Array__Class* get_class() {
            return il2cpp::get_class<app::fsOption_1_fsVersionedType___Array__Class>(type_info, "FullSerializer.Internal", "fsOption`1[fsVersionedType][]");
        }
        inline app::fsOption_1_fsVersionedType___Array* create() {
            return il2cpp::create_object<app::fsOption_1_fsVersionedType___Array>(get_class());
        }
    } // namespace fsOption_1_fsVersionedType___Array
} // namespace app::classes::types
