#include <interception_macros.h>

namespace app::methods::UberGhostTrailMeshUpdate {
IL2CPP_REGISTER_METHOD(0x002FBC60, Mesh *, get_TrailMesh, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F1250, bool, get_HasMaterial, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F13A0, Renderer *, get_TargetRenderer, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F14C0, bool, get_IsDead, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_Visible, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x00A5B6A0, void, set_Visible, (UberGhostTrailMeshUpdate * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0124F970, void, OnBecameVisible, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x0124F960, void, OnBecameInvisible, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_TrailTime, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F16C0, void, Awake, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F1930, void, SetPos, (UberGhostTrailMeshUpdate * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F1EF0, void, ReallocateBuffers, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F2250, void, UpdateMaterialsBuf, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F23A0, void, SetSettings, (UberGhostTrailMeshUpdate * __this, UberGhostTrail * trail));
IL2CPP_REGISTER_METHOD(0x013F27F0, void, OnDestroy, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F2890, Vector2, RandomVec, (UberGhostTrailMeshUpdate * __this, Vector2 val));
IL2CPP_REGISTER_METHOD(0x013F2970, void, Update, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F29A0, void, SpawnSingleTrailSprite, (UberGhostTrailMeshUpdate * __this, float posx, float posy, Vector4 size, Vector3 euler, Quaternion rotate, Vector3 scale));
IL2CPP_REGISTER_METHOD(0x013F3780, void, UpdateQuads, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F4000, void, RemoveQuad, (UberGhostTrailMeshUpdate * __this, int32_t quad, int32_t texture));
IL2CPP_REGISTER_METHOD(0x013F4260, float, GetVertexX, (UberGhostTrailMeshUpdate * __this, float sizex, float sizey, float c, float s));
IL2CPP_REGISTER_METHOD(0x013F4280, float, GetVertexY, (UberGhostTrailMeshUpdate * __this, float sizex, float sizey, float c, float s));
IL2CPP_REGISTER_METHOD(0x013F42A0, void, UpdateTrailMesh, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F4E90, void, UpdateMeshVertPart, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x013F5960, void, SetPropertiesOnMaterial, (UberGhostTrailMeshUpdate * __this, Material * newMat));
IL2CPP_REGISTER_METHOD(0x013F5C00, void, __ctor, (UberGhostTrailMeshUpdate * __this));
IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate, (UberGhostTrailMeshUpdate * __this, Object__Array * * arr, int32_t size));
IL2CPP_REGISTER_METHOD(0x02FF59A0, Object__Array *, EnsureBuffer, (UberGhostTrailMeshUpdate * __this, Object__Array * arr, int32_t minSize));
IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate, (UberGhostTrailMeshUpdate * __this, Vector3__Array * * arr, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0473EDF0, UberGhostTrailMeshUpdate_ResizeOrCreate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate, (UberGhostTrailMeshUpdate * __this, Vector2__Array * * arr, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04708180, UberGhostTrailMeshUpdate_ResizeOrCreate_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate, (UberGhostTrailMeshUpdate * __this, Color32__Array * * arr, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04736938, UberGhostTrailMeshUpdate_ResizeOrCreate_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate, (UberGhostTrailMeshUpdate * __this, UberGhostTrailMeshUpdate_Quad__Array * * arr, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x047860F8, UberGhostTrailMeshUpdate_ResizeOrCreate_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate, (UberGhostTrailMeshUpdate * __this, Boolean__Array * * arr, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x0471AB10, UberGhostTrailMeshUpdate_ResizeOrCreate_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF5870, Int32__Array *, EnsureBuffer, (UberGhostTrailMeshUpdate * __this, Int32__Array * arr, int32_t minSize));
IL2CPP_REGISTER_METHODINFO(0x047386A8, UberGhostTrailMeshUpdate_EnsureBuffer_1__MethodInfo);
}
