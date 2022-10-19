#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossSceneReferenceImportData {
        inline app::CrossSceneReferenceImportData__Class** type_info = (app::CrossSceneReferenceImportData__Class**)(modloader::win::memory::resolve_rva(0x04719D70));
        inline app::CrossSceneReferenceImportData__Class* get_class() {
            return il2cpp::get_class<app::CrossSceneReferenceImportData__Class>(type_info, "Moon", "CrossSceneReferenceImportData");
        }
        inline app::CrossSceneReferenceImportData* create() {
            return il2cpp::create_object<app::CrossSceneReferenceImportData>(get_class());
        }
        inline app::CrossSceneReferenceImportData__Array* create_array(int size) {
            return il2cpp::array_new<app::CrossSceneReferenceImportData__Array>(get_class(), size);
        }
        inline app::CrossSceneReferenceImportData__Array* create_array(const std::vector<app::CrossSceneReferenceImportData*>& items) {
            return il2cpp::array_new<app::CrossSceneReferenceImportData__Array>(get_class(), items);
        }
    } // namespace CrossSceneReferenceImportData
} // namespace app::classes::types
