#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__GetMirrorTextureD3D11 {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_GetMirrorTextureD3D11 * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C7A6D0, EVRCompositorError__Enum, Invoke, (app::IVRCompositor_GetMirrorTextureD3D11 * this_ptr, app::EVREye__Enum e_eye, app::void * p_d3_d11_device_or_resource, app::void * * pp_d3_d11_shader_resource_view));
IL2CPP_REGISTER_METHOD(0x02F42450, IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetMirrorTextureD3D11 * this_ptr, app::EVREye__Enum e_eye, app::void * p_d3_d11_device_or_resource, app::void * * pp_d3_d11_shader_resource_view, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_GetMirrorTextureD3D11 * this_ptr, app::void * * pp_d3_d11_shader_resource_view, app::IAsyncResult * result));
}
