#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVROverlay__GetOverlayErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::EVROverlayError__Enum error));
IL2CPP_REGISTER_METHOD(0x02D7AA60, IAsyncResult *, BeginInvoke, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::EVROverlayError__Enum error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::IAsyncResult * result));
}
