#include <interception_macros.h>

namespace app::methods::Moon::VisualDebug::DebugRenderer {
IL2CPP_REGISTER_METHOD(0x0118D920, void, Register, (IDebugRendererSubscriber * subscriber));
IL2CPP_REGISTER_METHOD(0x0118DA40, void, Unregister, (IDebugRendererSubscriber * subscriber));
IL2CPP_REGISTER_METHOD(0x0118DB60, void, RenderLine, (Vector3 start, Vector3 end, Color color, bool renderNow));
IL2CPP_REGISTER_METHOD(0x0118DF80, void, RenderRect, (Rect rect, Color color, float zPosition, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x04752F30, DebugRenderer_RenderRect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0118E210, void, RenderFilledRect, (Rect rect, Color color, float zPosition, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x047480D8, DebugRenderer_RenderFilledRect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0118E440, void, RenderBorder, (Rect rect, float border, Color fillColor, Color borderColor, float zPosition, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x047797D0, DebugRenderer_RenderBorder__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0118E9B0, void, RenderBounds, (Bounds bounds, Color color, bool renderNow));
IL2CPP_REGISTER_METHOD(0x0118EAF0, void, RenderBounds, (Bounds bounds, Vector3 rootPosition, Color color, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x04724690, DebugRenderer_RenderBounds_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0118EEA0, void, RenderQuad, (Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, Color color, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x0472D7C8, DebugRenderer_RenderQuad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0118F0D0, void, RenderMeshCollider, (MeshCollider * meshCollider, Color color, bool renderNow));
IL2CPP_REGISTER_METHOD(0x0118F2F0, void, RenderCapsuleCollider, (CapsuleCollider * capsuleCollider, Color color, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x04797DB0, DebugRenderer_RenderCapsuleCollider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0118FD10, void, RenderMesh, (Mesh * mesh, Matrix4x4 transformationMatrix, Color color, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x04759B58, DebugRenderer_RenderMesh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01190030, void, RenderSolidMesh, (Mesh * mesh, Matrix4x4 transformationMatrix, Color color, bool renderNow));
IL2CPP_REGISTER_METHODINFO(0x04741770, DebugRenderer_RenderSolidMesh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01190350, void, Render, (MoonRenderContext * context, Camera * camera));
IL2CPP_REGISTER_METHOD(0x011905C0, void, render, (DebugRenderer * __this, RenderingType__Enum renderingType, Camera * camera));
IL2CPP_REGISTER_METHOD(0x01190CC0, void, PrepareRendering, (RenderingType__Enum renderingType, Camera * camera));
IL2CPP_REGISTER_METHOD(0x01190FA0, void, FinishRendering, (RenderingType__Enum renderingType, Camera * camera));
IL2CPP_REGISTER_METHOD(0x01191100, void, SetGLMode, (int32_t mode));
IL2CPP_REGISTER_METHOD(0x01191310, Material *, get_GLMaterial, ());
IL2CPP_REGISTER_METHOD(0x01191570, void, set_GLMaterial, (Material * value));
IL2CPP_REGISTER_METHOD(0x01191620, Material *, get_WireframeMaterial, ());
IL2CPP_REGISTER_METHOD(0x01191880, void, set_WireframeMaterial, (Material * value));
IL2CPP_REGISTER_METHOD(0x01191930, Material *, get_TransparentColorMaterial, ());
IL2CPP_REGISTER_METHOD(0x01191B90, void, set_TransparentColorMaterial, (Material * value));
IL2CPP_REGISTER_METHOD(0x01191C40, DebugRenderer *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01191E30, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x01191ED0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x01191F80, void, __ctor, (DebugRenderer * __this));
IL2CPP_REGISTER_METHOD(0x011923F0, void, __cctor, ());
}
