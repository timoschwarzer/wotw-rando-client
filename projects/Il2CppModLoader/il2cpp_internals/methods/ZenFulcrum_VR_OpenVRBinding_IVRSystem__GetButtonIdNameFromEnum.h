#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetButtonIdNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::EVRButtonId__Enum e_button_id));
IL2CPP_REGISTER_METHOD(0x02CEAB80, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::EVRButtonId__Enum e_button_id, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRSystem_GetButtonIdNameFromEnum * this_ptr, app::IAsyncResult * result));
}
