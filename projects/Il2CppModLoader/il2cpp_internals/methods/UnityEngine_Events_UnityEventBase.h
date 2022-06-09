#include <interception_macros.h>

namespace app::methods::UnityEngine_Events::UnityEventBase {
IL2CPP_REGISTER_METHOD(0x02431080, void, __ctor, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x024313C0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02431490, MethodInfo_1 *, FindMethod_1, (app::UnityEventBase * this_ptr, app::PersistentCall * call));
IL2CPP_REGISTER_METHOD(0x02431640, MethodInfo_1 *, FindMethod_2, (app::UnityEventBase * this_ptr, app::String * name, app::Object * listener, app::PersistentListenerMode__Enum mode, app::Type * argument_type));
IL2CPP_REGISTER_METHOD(0x024313C0, void, DirtyPersistentCalls, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x024319E0, void, RebuildPersistentCallsIfNeeded, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02431A20, void, AddCall, (app::UnityEventBase * this_ptr, app::BaseInvokableCall * call));
IL2CPP_REGISTER_METHOD(0x02431AD0, void, RemoveListener, (app::UnityEventBase * this_ptr, app::Object * target_obj, app::MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x02431AF0, List_1_UnityEngine_Events_BaseInvokableCall_ *, PrepareInvoke, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02431C60, String *, ToString, (app::UnityEventBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02431D50, MethodInfo_1 *, GetValidMethodInfo, (app::Object * obj, app::String * function_name, app::Type__Array * argument_types));
}
