#include <interception_macros.h>

namespace app::methods::CameraOffsetAnimationZone {
IL2CPP_REGISTER_METHOD(0x01693660, bool, get_IsActivated, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01693680, void, set_IsActivated, (CameraOffsetAnimationZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01693660, bool, get_IsInfluencingCamera, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01693690, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x016939C0, void, Awake, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01693BC0, void, CreateOffsetLayer, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01693E10, void, Init, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01693EA0, void, OnEnable, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694260, void, OnDisable, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694450, void, Register, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694580, void, Unregister, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694660, void, OnDestroy, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694690, void, Activate, (CameraOffsetAnimationZone * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x016949B0, void, Deactivate, (CameraOffsetAnimationZone * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x01694BF0, void, Remove, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694DD0, void, OnRestoreCheckpoint, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHODINFO(0x04719158, CameraOffsetAnimationZone_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005BDAA0, bool, Changed, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694DE0, Rect, get_Rect, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01694F40, bool, IsWithinRect, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01695260, void, OnCameraOffsetUpdate, (CameraOffsetAnimationZone * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x01695640, void, Blend, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01695C30, float, get_Radius, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01695D10, float, get_NormalizedPositionInsideZone, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01696060, void, OnFrustumEnter, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01696080, void, OnFrustumExit, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_InsideFrustum, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x008496A0, void, set_InsideFrustum, (CameraOffsetAnimationZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01696090, Bounds, IFrustumOptimizable_get_Bounds, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_AllowCacheBounds, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x016960B0, Rect, get_Bounds, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01696400, void, set_Bounds, (CameraOffsetAnimationZone * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x016966A0, void, OffsetUpdated, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x016966C0, void, OnValidate, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x00417920, SelectableCategory__Enum, get_Category, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x016966D0, String *, get_NameDisplayedOnClip, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01696750, void, Build, (CameraOffsetAnimationZone * __this, VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x016969A0, void, __ctor, (CameraOffsetAnimationZone * __this));
IL2CPP_REGISTER_METHOD(0x01696BA0, void, __cctor, ());
}
