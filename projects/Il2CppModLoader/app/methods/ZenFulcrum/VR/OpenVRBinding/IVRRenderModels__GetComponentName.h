#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentName {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetComponentName * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CE2D70, uint32_t, Invoke, (app::IVRRenderModels_GetComponentName * this_ptr, app::String * pch_render_model_name, uint32_t un_component_index, app::StringBuilder * pch_component_name, uint32_t un_component_name_len))
    IL2CPP_REGISTER_METHOD(0x02CE3380, app::IAsyncResult *, BeginInvoke, (app::IVRRenderModels_GetComponentName * this_ptr, app::String * pch_render_model_name, uint32_t un_component_index, app::StringBuilder * pch_component_name, uint32_t un_component_name_len, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRRenderModels_GetComponentName * this_ptr, app::IAsyncResult * result))
}
