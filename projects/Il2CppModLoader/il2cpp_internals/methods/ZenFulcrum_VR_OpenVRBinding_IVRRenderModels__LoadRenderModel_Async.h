#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRRenderModels__LoadRenderModel_Async {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02AD6B00, EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::String * pch_render_model_name, app::void * * pp_render_model));
IL2CPP_REGISTER_METHOD(0x02CE4A90, IAsyncResult *, BeginInvoke, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::String * pch_render_model_name, app::void * * pp_render_model, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::void * * pp_render_model, app::IAsyncResult * result));
}
