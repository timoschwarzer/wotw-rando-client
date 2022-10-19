#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageStructureMetaDataGroup {
        namespace {
            inline app::CageStructureMetaDataGroup__Class* type_info_ref = nullptr;
        }
        inline app::CageStructureMetaDataGroup__Class** type_info = &type_info_ref;
        inline app::CageStructureMetaDataGroup__Class* get_class() {
            return il2cpp::get_class<app::CageStructureMetaDataGroup__Class>(type_info, "", "CageStructureMetaDataGroup");
        }
        inline app::CageStructureMetaDataGroup* create() {
            return il2cpp::create_object<app::CageStructureMetaDataGroup>(get_class());
        }
    } // namespace CageStructureMetaDataGroup
} // namespace app::classes::types
