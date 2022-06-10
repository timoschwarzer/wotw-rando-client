#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::CrossSceneReferenceImportRegistry {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_Moon_CrossSceneReferenceImportData_ *, get_ImportedObjects, (app::CrossSceneReferenceImportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ImportedObjects, (app::CrossSceneReferenceImportRegistry * this_ptr, app::List_1_Moon_CrossSceneReferenceImportData_ * value))
    IL2CPP_REGISTER_METHOD(0x031BB080, void, Awake, (app::CrossSceneReferenceImportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BB120, void, RefreshImportedObjects, (app::CrossSceneReferenceImportRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CrossSceneReferenceImportRegistry * this_ptr))
}
