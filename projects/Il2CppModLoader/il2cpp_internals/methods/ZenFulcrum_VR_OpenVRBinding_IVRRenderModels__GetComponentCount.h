#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRRenderModels__GetComponentCount {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRRenderModels_GetComponentCount * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x020105B0, uint32_t, Invoke, (app::IVRRenderModels_GetComponentCount * this_ptr, app::String * pch_render_model_name));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::IVRRenderModels_GetComponentCount * this_ptr, app::String * pch_render_model_name, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRRenderModels_GetComponentCount * this_ptr, app::IAsyncResult * result));
}
