#include <interception_macros.h>

namespace app::methods::AreaMapNavigation {
IL2CPP_REGISTER_METHOD(0x0050F110, float, get_ZoomTime, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050F1C0, float, get_Zoom, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050F340, Vector2, get_ScrollPosition, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050F360, void, set_ScrollPosition, (AreaMapNavigation * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0050F390, bool, BoxIsInsideVisibleCanvas, (AreaMapNavigation * __this, Rect bound));
IL2CPP_REGISTER_METHOD(0x0050F6E0, void, ChangeState, (AreaMapNavigation * __this, AreaMapNavigation_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0050F6F0, void, Awake, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050F9D0, void, OnDestroy, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050FF00, void, SetTarget, (AreaMapNavigation * __this, Quest * quest));
IL2CPP_REGISTER_METHOD(0x005100A0, void, SetTargetPosition, (AreaMapNavigation * __this, Vector3 targetPos));
IL2CPP_REGISTER_METHOD(0x005100D0, Vector3, GetTargetPosition, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005100F0, void, ResetFlags, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHODINFO(0x04755678, AreaMapNavigation_ResetFlags__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00510100, void, SetFollowTransform, (AreaMapNavigation * __this, Transform * t));
IL2CPP_REGISTER_METHOD(0x00510110, void, OptionChangeCallback, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHODINFO(0x04700BB8, AreaMapNavigation_OptionChangeCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00510130, void, OnVisibilityChangedCallback, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D9F8, AreaMapNavigation_OnVisibilityChangedCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00510200, void, UpdateMapTarget, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510310, void, SetScrollPositionToPlayer, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510420, void, UpdateTargetPosition, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHODINFO(0x04708C18, AreaMapNavigation_UpdateTargetPosition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00510780, void, OnEnable, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005107C0, void, OnDisable, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510800, Bounds, get_Bounds, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510820, void, set_Bounds, (AreaMapNavigation * __this, Bounds value));
IL2CPP_REGISTER_METHOD(0x00510840, Vector2, get_MapPlanePosition, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510950, void, set_MapPlanePosition, (AreaMapNavigation * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00510A70, Vector2, get_MapPlaneSize, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510B80, void, set_MapPlaneSize, (AreaMapNavigation * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00510CA0, void, Advance, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510F40, Nullable_1_UnityEngine_Vector2_, get_RetainedPosition, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510F60, void, set_RetainedPosition, (AreaMapNavigation * __this, Nullable_1_UnityEngine_Vector2_ value));
IL2CPP_REGISTER_METHOD(0x00510F80, void, SetFocusTime, (AreaMapNavigation * __this, float time));
IL2CPP_REGISTER_METHOD(0x005100F0, void, FocusOnPlayerNextTime, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00510F90, void, HandleObjectiveFocus, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005111C0, void, SetLocationPlayer, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00511310, void, SetLocationToTarget, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00511580, void, SnapPositionNow, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005115B0, void, UpdatePlane, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x00511AC0, void, CenterMapOnWorldPosition, (AreaMapNavigation * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00511BA0, Vector3, WorldToMapPosition, (AreaMapNavigation * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00511CF0, Vector3, MapToWorldPosition, (AreaMapNavigation * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00511EF0, void, HandleMapScrolling, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005128E0, Vector3, ConstrainWorldPositionByBounds, (AreaMapNavigation * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x00512A90, void, UpdateScrollLimits, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005132A0, void, OnPostTimeSlicedEnable, (AreaMapNavigation * __this));
IL2CPP_REGISTER_METHOD(0x005135A0, void, __ctor, (AreaMapNavigation * __this));
}
