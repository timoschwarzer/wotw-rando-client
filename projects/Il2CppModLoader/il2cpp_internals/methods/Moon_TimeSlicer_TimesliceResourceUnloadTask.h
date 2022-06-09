#include <interception_macros.h>

namespace app::methods::Moon_TimeSlicer::TimesliceResourceUnloadTask {
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_SceneName, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_SceneName, (app::TimesliceResourceUnloadTask * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x010C5500, void, __ctor, (app::TimesliceResourceUnloadTask * this_ptr, app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x010C5540, void, ProcessAllObjects, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x010C5600, IEnumerator *, TimeslicedUnload, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x010C5750, void, ProcessObject, (app::TimesliceResourceUnloadTask * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x010C5870, void, Reset, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x010C58A0, String *, get_JobName, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_TimesliceJobOwnerName, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ContextualDebugData, (app::TimesliceResourceUnloadTask * this_ptr));
IL2CPP_REGISTER_METHOD(0x010C5970, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01552880, void, Config, (app::TimesliceResourceUnloadTask * this_ptr, app::List_1_System_Object_ * target_objects, app::Action_1_Boolean_ * on_job_completed));
}
