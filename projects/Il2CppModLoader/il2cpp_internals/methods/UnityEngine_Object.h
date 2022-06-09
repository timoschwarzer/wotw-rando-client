#include <interception_macros.h>

namespace app::methods::UnityEngine::Object {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02540E60, int32_t, GetInstanceID, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02540FC0, int32_t, GetHashCode, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02540FD0, bool, Equals, (app::Object_1 * this_ptr, app::Object * other));
    IL2CPP_REGISTER_METHOD(0x02541140, bool, operator_, (app::Object_1 * exists));
    IL2CPP_REGISTER_METHOD(0x025411F0, bool, CompareBaseObjects, (app::Object_1 * lhs, app::Object_1 * rhs));
    IL2CPP_REGISTER_METHOD(0x025412F0, void, EnsureRunningOnMainThread, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471C950, Object_1_EnsureRunningOnMainThread__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025413F0, bool, IsNativeObjectAlive, (app::Object_1 * o));
    IL2CPP_REGISTER_METHOD(0x01F2AB40, void *, GetCachedPtr, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02541480, app::String *, get_name, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02541550, void, set_name, (app::Object_1 * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x02541640, app::Object_1 *, Instantiate_1, (app::Object_1 * original, app::Vector3 position, app::Quaternion rotation));
    IL2CPP_REGISTER_METHODINFO(0x04772478, Object_1_Instantiate__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x025418D0, app::Object_1 *, Instantiate_2, (app::Object_1 * original, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
    IL2CPP_REGISTER_METHODINFO(0x04723418, Object_1_Instantiate_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02541B50, app::Object_1 *, Instantiate_3, (app::Object_1 * original));
    IL2CPP_REGISTER_METHODINFO(0x04780688, Object_1_Instantiate_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02541C80, app::Object_1 *, Instantiate_4, (app::Object_1 * original, app::Transform * parent));
    IL2CPP_REGISTER_METHOD(0x02541D30, app::Object_1 *, Instantiate_5, (app::Object_1 * original, app::Transform * parent, bool instantiate_in_world_space));
    IL2CPP_REGISTER_METHODINFO(0x04737920, Object_1_Instantiate_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02541FF0, void, Destroy_1, (app::Object_1 * obj, float t));
    IL2CPP_REGISTER_METHOD(0x02542050, void, Destroy_2, (app::Object_1 * obj));
    IL2CPP_REGISTER_METHOD(0x02542130, void, DestroyImmediate_1, (app::Object_1 * obj, bool allow_destroying_assets));
    IL2CPP_REGISTER_METHOD(0x02542190, void, DestroyImmediate_2, (app::Object_1 * obj));
    IL2CPP_REGISTER_METHOD(0x02542270, void, BatchDestroy, (app::Int32__Array * instance_i_ds));
    IL2CPP_REGISTER_METHOD(0x025422C0, app::Object_1__Array *, FindObjectsOfType_1, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x02542310, void, DontDestroyOnLoad, (app::Object_1 * target));
    IL2CPP_REGISTER_METHOD(0x02542360, app::HideFlags__Enum, get_hideFlags, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x025423B0, void, set_hideFlags, (app::Object_1 * this_ptr, app::HideFlags__Enum value));
    IL2CPP_REGISTER_METHOD(0x02542410, void, DestroyObject_1, (app::Object_1 * obj, float t));
    IL2CPP_REGISTER_METHOD(0x025424F0, void, DestroyObject_2, (app::Object_1 * obj));
    IL2CPP_REGISTER_METHOD(0x025425D0, app::Object_1__Array *, FindSceneObjectsOfType, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x02542620, app::Object_1__Array *, FindObjectsOfTypeIncludingAssets, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x02542670, app::Object_1__Array *, FindObjectsOfTypeAll, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x025426C0, void, CheckNullArgument, (app::Object * arg, app::String * message));
    IL2CPP_REGISTER_METHODINFO(0x0477E018, Object_1_CheckNullArgument__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02542780, app::Object_1 *, FindObjectOfType_1, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x02542890, app::String *, ToString_1, (app::Object_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02542960, bool, operator____1, (app::Object_1 * x, app::Object_1 * y));
    IL2CPP_REGISTER_METHOD(0x02542A10, bool, operator____2, (app::Object_1 * x, app::Object_1 * y));
    IL2CPP_REGISTER_METHOD(0x02542AC0, int32_t, GetOffsetOfInstanceIDInCPlusPlusObject, ());
    IL2CPP_REGISTER_METHOD(0x02542B10, bool, CurrentThreadIsMainThread, ());
    IL2CPP_REGISTER_METHOD(0x02542B60, app::Object_1 *, Internal_CloneSingle, (app::Object_1 * data));
    IL2CPP_REGISTER_METHOD(0x02542BB0, app::Object_1 *, Internal_CloneSingleWithParent, (app::Object_1 * data, app::Transform * parent, bool world_position_stays));
    IL2CPP_REGISTER_METHOD(0x02542C30, app::Object_1 *, Internal_InstantiateSingle, (app::Object_1 * data, app::Vector3 pos, app::Quaternion rot));
    IL2CPP_REGISTER_METHOD(0x02542D20, app::Object_1 *, Internal_InstantiateSingleWithParent, (app::Object_1 * data, app::Transform * parent, app::Vector3 pos, app::Quaternion rot));
    IL2CPP_REGISTER_METHOD(0x02542E20, app::String *, ToString_2, (app::Object_1 * obj));
    IL2CPP_REGISTER_METHOD(0x02542E70, app::String *, GetName, (app::Object_1 * obj));
    IL2CPP_REGISTER_METHOD(0x02542EC0, void, SetName, (app::Object_1 * obj, app::String * name));
    IL2CPP_REGISTER_METHOD(0x02542F20, bool, DoesObjectWithInstanceIDExist, (int32_t instance_i_d));
    IL2CPP_REGISTER_METHOD(0x02542F70, app::Object_1 *, FindObjectFromInstanceID, (int32_t instance_i_d));
    IL2CPP_REGISTER_METHOD(0x02542FC0, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x02543040, app::Object_1 *, Internal_InstantiateSingle_Injected, (app::Object_1 * data, app::Vector3 * pos, app::Quaternion * rot));
    IL2CPP_REGISTER_METHOD(0x025430B0, app::Object_1 *, Internal_InstantiateSingleWithParent_Injected, (app::Object_1 * data, app::Transform * parent, app::Vector3 * pos, app::Quaternion * rot));
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Object *, Instantiate_6, (app::Object * original));
    IL2CPP_REGISTER_METHODINFO(0x0472F260, Object_1_Instantiate_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D490, app::Object *, Instantiate_7, (app::Object * original, app::Vector3 position, app::Quaternion rotation));
    IL2CPP_REGISTER_METHOD(0x0157D5C0, app::Object *, Instantiate_8, (app::Object * original, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
    IL2CPP_REGISTER_METHOD(0x0157D2C0, app::Object *, Instantiate_9, (app::Object * original, app::Transform * parent));
    IL2CPP_REGISTER_METHOD(0x0157D380, app::Object *, Instantiate_10, (app::Object * original, app::Transform * parent, bool world_position_stays));
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::Object__Array *, FindObjectsOfType_2, ());
    IL2CPP_REGISTER_METHOD(0x0157D000, app::Object *, FindObjectOfType_2, ());
    IL2CPP_REGISTER_METHOD(0x0157D490, app::GameObject *, Instantiate_11, (app::GameObject * original, app::Vector3 position, app::Quaternion rotation));
    IL2CPP_REGISTER_METHODINFO(0x047468A0, Object_1_Instantiate_10__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::GameObject *, Instantiate_12, (app::GameObject * original));
    IL2CPP_REGISTER_METHODINFO(0x04750F48, Object_1_Instantiate_11__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Dropdown_DropdownItem *, Instantiate_13, (app::Dropdown_DropdownItem * original));
    IL2CPP_REGISTER_METHODINFO(0x04789E08, Object_1_Instantiate_12__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D490, app::Transform *, Instantiate_14, (app::Transform * original, app::Vector3 position, app::Quaternion rotation));
    IL2CPP_REGISTER_METHODINFO(0x0472CB30, Object_1_Instantiate_13__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Material *, Instantiate_15, (app::Material * original));
    IL2CPP_REGISTER_METHODINFO(0x0470BA10, Object_1_Instantiate_14__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::MainThreadDispatcherPlaymode *, FindObjectOfType_3, ());
    IL2CPP_REGISTER_METHODINFO(0x0478BB78, Object_1_FindObjectOfType_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::PlaymodeUpdateDelegate *, FindObjectOfType_4, ());
    IL2CPP_REGISTER_METHODINFO(0x04747FB8, Object_1_FindObjectOfType_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::WwiseBootstrap *, FindObjectOfType_5, ());
    IL2CPP_REGISTER_METHODINFO(0x04763708, Object_1_FindObjectOfType_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::SoundHost__Array *, FindObjectsOfType_3, ());
    IL2CPP_REGISTER_METHODINFO(0x04712250, Object_1_FindObjectsOfType_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::AudioListenerZone__Array *, FindObjectsOfType_4, ());
    IL2CPP_REGISTER_METHODINFO(0x04765318, Object_1_FindObjectsOfType_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::AchievementsUI *, FindObjectOfType_6, ());
    IL2CPP_REGISTER_METHODINFO(0x04720B38, Object_1_FindObjectOfType_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D2C0, app::GameObject *, Instantiate_16, (app::GameObject * original, app::Transform * parent));
    IL2CPP_REGISTER_METHODINFO(0x0472BC10, Object_1_Instantiate_15__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::SkinnedMeshLod__Array *, FindObjectsOfType_5, ());
    IL2CPP_REGISTER_METHODINFO(0x04731BF0, Object_1_FindObjectsOfType_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::BossHealthbar2 *, FindObjectOfType_7, ());
    IL2CPP_REGISTER_METHODINFO(0x047353C8, Object_1_FindObjectOfType_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::CameraManager *, FindObjectOfType_8, ());
    IL2CPP_REGISTER_METHODINFO(0x04719FE8, Object_1_FindObjectOfType_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::ChallengesUI *, FindObjectOfType_9, ());
    IL2CPP_REGISTER_METHODINFO(0x0470C188, Object_1_FindObjectOfType_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::DamageReceiver__Array *, FindObjectsOfType_6, ());
    IL2CPP_REGISTER_METHODINFO(0x0472F1A8, Object_1_FindObjectsOfType_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::EnemyEntity__Array *, FindObjectsOfType_7, ());
    IL2CPP_REGISTER_METHODINFO(0x04739A80, Object_1_FindObjectsOfType_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::EscapeRaceHandler *, FindObjectOfType_10, ());
    IL2CPP_REGISTER_METHODINFO(0x04777D60, Object_1_FindObjectOfType_9__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D5C0, app::BlockableLaser *, Instantiate_17, (app::BlockableLaser * original, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
    IL2CPP_REGISTER_METHODINFO(0x04711710, Object_1_Instantiate_16__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::LeaderboardsController *, FindObjectOfType_11, ());
    IL2CPP_REGISTER_METHODINFO(0x047757F8, Object_1_FindObjectOfType_10__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::SceneRoot__Array *, FindObjectsOfType_8, ());
    IL2CPP_REGISTER_METHODINFO(0x04775A48, Object_1_FindObjectsOfType_7__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::ColorVariation__Array *, FindObjectsOfType_9, ());
    IL2CPP_REGISTER_METHODINFO(0x04751578, Object_1_FindObjectsOfType_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::SeinPlaceholder *, FindObjectOfType_12, ());
    IL2CPP_REGISTER_METHODINFO(0x04707168, Object_1_FindObjectOfType_11__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::LayeredRenderSettings *, Instantiate_18, (app::LayeredRenderSettings * original));
    IL2CPP_REGISTER_METHODINFO(0x0477F7D8, Object_1_Instantiate_17__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Transform *, Instantiate_19, (app::Transform * original));
    IL2CPP_REGISTER_METHODINFO(0x04799F40, Object_1_Instantiate_18__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::TextRenderer_1 *, Instantiate_20, (app::TextRenderer_1 * original));
    IL2CPP_REGISTER_METHODINFO(0x04753C80, Object_1_Instantiate_19__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::MoonRenderPipelineAsset *, Instantiate_21, (app::MoonRenderPipelineAsset * original));
    IL2CPP_REGISTER_METHODINFO(0x04752788, Object_1_Instantiate_20__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::ReEngageUI *, FindObjectOfType_13, ());
    IL2CPP_REGISTER_METHODINFO(0x04743680, Object_1_FindObjectOfType_12__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::AsyncRenderCapture__Array *, FindObjectsOfType_10, ());
    IL2CPP_REGISTER_METHODINFO(0x04781328, Object_1_FindObjectsOfType_9__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::GhostServerRecorder *, FindObjectOfType_14, ());
    IL2CPP_REGISTER_METHODINFO(0x0471B108, Object_1_FindObjectOfType_13__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D130, app::Rigidbody *, Instantiate_22, (app::Rigidbody * original));
    IL2CPP_REGISTER_METHODINFO(0x04741E08, Object_1_Instantiate_21__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D5C0, app::Rope *, Instantiate_23, (app::Rope * original, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
    IL2CPP_REGISTER_METHODINFO(0x047796F0, Object_1_Instantiate_22__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::RunActionCondition__Array *, FindObjectsOfType_11, ());
    IL2CPP_REGISTER_METHODINFO(0x04759DF8, Object_1_FindObjectsOfType_10__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::TurbulenceManager *, FindObjectOfType_15, ());
    IL2CPP_REGISTER_METHODINFO(0x0475DF80, Object_1_FindObjectOfType_14__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::UberPoolGroupWarmer__Array *, FindObjectsOfType_12, ());
    IL2CPP_REGISTER_METHODINFO(0x0474C9A0, Object_1_FindObjectsOfType_11__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::UberPoolPerfTestSettings__Array *, FindObjectsOfType_13, ());
    IL2CPP_REGISTER_METHODINFO(0x0478E138, Object_1_FindObjectsOfType_12__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::VisualLog *, FindObjectOfType_16, ());
    IL2CPP_REGISTER_METHODINFO(0x047279C0, Object_1_FindObjectOfType_15__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02FF6590, app::Browser__Array *, FindObjectsOfType_14, ());
    IL2CPP_REGISTER_METHODINFO(0x04761978, Object_1_FindObjectsOfType_13__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::FPSCursorRenderer *, FindObjectOfType_17, ());
    IL2CPP_REGISTER_METHODINFO(0x04702B28, Object_1_FindObjectOfType_16__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D000, app::MonoManager *, FindObjectOfType_18, ());
    IL2CPP_REGISTER_METHODINFO(0x0476F678, Object_1_FindObjectOfType_17__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0157D5C0, app::GameObject *, Instantiate_24, (app::GameObject * original, app::Vector3 position, app::Quaternion rotation, app::Transform * parent));
    IL2CPP_REGISTER_METHODINFO(0x0474F678, Object_1_Instantiate_23__MethodInfo);
}
