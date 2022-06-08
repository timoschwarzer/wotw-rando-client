#include <interception_macros.h>

namespace app::methods::UnityEngine::Resources {
IL2CPP_REGISTER_METHOD(0x02542670, Object_1__Array *, FindObjectsOfTypeAll, (Type * type));
IL2CPP_REGISTER_METHOD(0x029788F0, Object_1 *, Load, (String * path));
IL2CPP_REGISTER_METHOD(0x029789F0, Object_1 *, Load, (String * path, Type * systemTypeInstance));
IL2CPP_REGISTER_METHOD(0x02978A50, Object_1__Array *, LoadAll, (String * path, Type * systemTypeInstance));
IL2CPP_REGISTER_METHOD(0x02978AB0, Object_1 *, GetBuiltinResource, (Type * type, String * path));
IL2CPP_REGISTER_METHOD(0x02978B10, void, UnloadAsset, (Object_1 * assetToUnload));
IL2CPP_REGISTER_METHOD(0x02978B60, AsyncOperation_1 *, UnloadUnusedAssets, ());
IL2CPP_REGISTER_METHOD(0x02978BB0, void, UnloadUnusedAssetsImmediate, (bool managedObjects));
IL2CPP_REGISTER_METHOD(0x02978C00, void, SetCleanupMarkedAssetsOperationPriority, (int32_t priority));
IL2CPP_REGISTER_METHOD(0x02978C50, void, IncrementRefCountersForObjects, (Object_1__Array * assets));
IL2CPP_REGISTER_METHOD(0x02978CA0, void, DecrementRefCountersForObjects, (Object_1__Array * assets));
IL2CPP_REGISTER_METHOD(0x02978CF0, int32_t, MarkedAssetsUnloadQueueSize, ());
IL2CPP_REGISTER_METHOD(0x02978D40, int32_t, MarkedAssetsPanicCount, ());
IL2CPP_REGISTER_METHOD(0x02978D90, int32_t, ReferenceCountCount, ());
IL2CPP_REGISTER_METHOD(0x02978DE0, int32_t, GetObjectsCount, ());
IL2CPP_REGISTER_METHOD(0x02978E30, int32_t, GetObjectMapUnusedLeft, ());
IL2CPP_REGISTER_METHOD(0x02FF5AD0, Object__Array *, ConvertObjects, (Object_1__Array * rawObjects));
IL2CPP_REGISTER_METHOD(0x02FF66B0, Object__Array *, FindObjectsOfTypeAll, ());
IL2CPP_REGISTER_METHOD(0x0157D850, Object *, Load, (String * path));
IL2CPP_REGISTER_METHOD(0x02FF67B0, Object__Array *, LoadAll, (String * path));
IL2CPP_REGISTER_METHOD(0x0157D700, Object *, GetBuiltinResource, (String * path));
IL2CPP_REGISTER_METHOD(0x0157D700, Font *, GetBuiltinResource, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04772EB0, Resources_GetBuiltinResource_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, UberStateCollection *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04753470, Resources_Load_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, Texture2D *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0474C7A8, Resources_Load_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, Material *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04774DC8, Resources_Load_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, ComputeShader *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04761070, Resources_Load_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF67B0, PlayFabSharedSettings__Array *, LoadAll, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0472B2D0, Resources_LoadAll_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, AkWwiseInitializationSettings *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x047705A8, Resources_Load_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, GameObject *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04732F60, Resources_Load_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, EntityWeightData *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0475B4C0, Resources_Load_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FF66B0, GameObject__Array *, FindObjectsOfTypeAll, ());
IL2CPP_REGISTER_METHODINFO(0x04737788, Resources_FindObjectsOfTypeAll_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, HitReactionSettings *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0473A2B0, Resources_Load_10__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, InstantiateDebugIgnore *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x0474A7A8, Resources_Load_11__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157D850, TextAsset *, Load, (String * path));
IL2CPP_REGISTER_METHODINFO(0x04712850, Resources_Load_12__MethodInfo);
}
