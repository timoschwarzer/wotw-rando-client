#include <interception_macros.h>

namespace app::methods::UnityEngine_Events::UnityEvent {
IL2CPP_REGISTER_METHOD(0x01F2C230, void, __ctor, (app::UnityEvent * this_ptr));
IL2CPP_REGISTER_METHOD(0x02430A40, void, AddListener, (app::UnityEvent * this_ptr, app::UnityAction * call));
IL2CPP_REGISTER_METHOD(0x02430BA0, MethodInfo_1 *, FindMethod_Impl, (app::UnityEvent * this_ptr, app::String * name, app::Object * target_obj));
IL2CPP_REGISTER_METHOD(0x02430C40, BaseInvokableCall *, GetDelegate_1, (app::UnityEvent * this_ptr, app::Object * target, app::MethodInfo_1 * the_function));
IL2CPP_REGISTER_METHOD(0x02430D90, BaseInvokableCall *, GetDelegate_2, (app::UnityAction * action));
IL2CPP_REGISTER_METHOD(0x02430EE0, void, Invoke, (app::UnityEvent * this_ptr));
}
