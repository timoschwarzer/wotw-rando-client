#include <interception_macros.h>

namespace app::methods::UnityEngineInternal_Input::NativeUpdateCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::NativeUpdateCallback * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::NativeUpdateCallback * this_ptr, app::NativeInputUpdateType__Enum update_type, app::NativeInputEventBuffer * buffer));
IL2CPP_REGISTER_METHOD(0x031C3640, IAsyncResult *, BeginInvoke, (app::NativeUpdateCallback * this_ptr, app::NativeInputUpdateType__Enum update_type, app::NativeInputEventBuffer * buffer, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::NativeUpdateCallback * this_ptr, app::IAsyncResult * result));
}
