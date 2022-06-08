#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRCompositor {
IL2CPP_REGISTER_METHOD(0x01677C10, void, __ctor, (CVRCompositor * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x01677DC0, void, SetTrackingSpace, (CVRCompositor * __this, ETrackingUniverseOrigin__Enum eOrigin));
IL2CPP_REGISTER_METHOD(0x01677DE0, ETrackingUniverseOrigin__Enum, GetTrackingSpace, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01677E00, EVRCompositorError__Enum, WaitGetPoses, (CVRCompositor * __this, TrackedDevicePose_t__Array * pRenderPoseArray, TrackedDevicePose_t__Array * pGamePoseArray));
IL2CPP_REGISTER_METHOD(0x01677E50, EVRCompositorError__Enum, GetLastPoses, (CVRCompositor * __this, TrackedDevicePose_t__Array * pRenderPoseArray, TrackedDevicePose_t__Array * pGamePoseArray));
IL2CPP_REGISTER_METHOD(0x01677EA0, EVRCompositorError__Enum, GetLastPoseForTrackedDeviceIndex, (CVRCompositor * __this, uint32_t unDeviceIndex, TrackedDevicePose_t * pOutputPose, TrackedDevicePose_t * pOutputGamePose));
IL2CPP_REGISTER_METHOD(0x01677ED0, EVRCompositorError__Enum, Submit, (CVRCompositor * __this, EVREye__Enum eEye, Texture_t * pTexture, VRTextureBounds_t * pBounds, EVRSubmitFlags__Enum nSubmitFlags));
IL2CPP_REGISTER_METHOD(0x01677F00, void, ClearLastSubmittedFrame, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x007FB020, void, PostPresentHandoff, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01677F20, bool, GetFrameTiming, (CVRCompositor * __this, Compositor_FrameTiming * pTiming, uint32_t unFramesAgo));
IL2CPP_REGISTER_METHOD(0x01677F40, uint32_t, GetFrameTimings, (CVRCompositor * __this, Compositor_FrameTiming * pTiming, uint32_t nFrames));
IL2CPP_REGISTER_METHOD(0x01677F60, float, GetFrameTimeRemaining, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01677F80, void, GetCumulativeStats, (CVRCompositor * __this, Compositor_CumulativeStats * pStats, uint32_t nStatsSizeInBytes));
IL2CPP_REGISTER_METHOD(0x01677FA0, void, FadeToColor, (CVRCompositor * __this, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground));
IL2CPP_REGISTER_METHOD(0x01677FE0, HmdColor_t, GetCurrentFadeColor, (CVRCompositor * __this, bool bBackground));
IL2CPP_REGISTER_METHOD(0x01678020, void, FadeGrid, (CVRCompositor * __this, float fSeconds, bool bFadeIn));
IL2CPP_REGISTER_METHOD(0x01678050, float, GetCurrentGridAlpha, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678080, EVRCompositorError__Enum, SetSkyboxOverride, (CVRCompositor * __this, Texture_t__Array * pTextures));
IL2CPP_REGISTER_METHOD(0x016780C0, void, ClearSkyboxOverride, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x016780F0, void, CompositorBringToFront, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678120, void, CompositorGoToBack, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678150, void, CompositorQuit, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678180, bool, IsFullscreen, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x016781B0, uint32_t, GetCurrentSceneFocusProcess, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x016781E0, uint32_t, GetLastFrameRenderer, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678210, bool, CanRenderScene, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678240, void, ShowMirrorWindow, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678270, void, HideMirrorWindow, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x016782A0, bool, IsMirrorWindowVisible, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x016782D0, void, CompositorDumpImages, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678300, bool, ShouldAppRenderWithLowResources, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678330, void, ForceInterleavedReprojectionOn, (CVRCompositor * __this, bool bOverride));
IL2CPP_REGISTER_METHOD(0x01678360, void, ForceReconnectProcess, (CVRCompositor * __this));
IL2CPP_REGISTER_METHOD(0x01678390, void, SuspendRendering, (CVRCompositor * __this, bool bSuspend));
IL2CPP_REGISTER_METHOD(0x016783C0, EVRCompositorError__Enum, GetMirrorTextureD3D11, (CVRCompositor * __this, EVREye__Enum eEye, void * pD3D11DeviceOrResource, void * * ppD3D11ShaderResourceView));
IL2CPP_REGISTER_METHOD(0x016783F0, void, ReleaseMirrorTextureD3D11, (CVRCompositor * __this, void * pD3D11ShaderResourceView));
IL2CPP_REGISTER_METHOD(0x01678420, EVRCompositorError__Enum, GetMirrorTextureGL, (CVRCompositor * __this, EVREye__Enum eEye, uint32_t * pglTextureId, void * pglSharedTextureHandle));
IL2CPP_REGISTER_METHOD(0x01678450, bool, ReleaseSharedGLTexture, (CVRCompositor * __this, uint32_t glTextureId, void * glSharedTextureHandle));
IL2CPP_REGISTER_METHOD(0x01678480, void, LockGLSharedTextureForAccess, (CVRCompositor * __this, void * glSharedTextureHandle));
IL2CPP_REGISTER_METHOD(0x016784B0, void, UnlockGLSharedTextureForAccess, (CVRCompositor * __this, void * glSharedTextureHandle));
IL2CPP_REGISTER_METHOD(0x016784E0, uint32_t, GetVulkanInstanceExtensionsRequired, (CVRCompositor * __this, StringBuilder * pchValue, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x01678510, uint32_t, GetVulkanDeviceExtensionsRequired, (CVRCompositor * __this, void * pPhysicalDevice, StringBuilder * pchValue, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x01678540, void, SetExplicitTimingMode, (CVRCompositor * __this, bool bExplicitTimingMode));
IL2CPP_REGISTER_METHOD(0x01678570, EVRCompositorError__Enum, SubmitExplicitTimingData, (CVRCompositor * __this));
}
