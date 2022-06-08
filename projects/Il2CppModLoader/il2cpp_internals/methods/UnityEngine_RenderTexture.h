#include <interception_macros.h>

namespace app::methods::UnityEngine::RenderTexture {
IL2CPP_REGISTER_METHOD(0x02970C30, void, __ctor, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02970C40, void, __ctor, (RenderTexture * __this, RenderTextureDescriptor desc));
IL2CPP_REGISTER_METHOD(0x02970D40, void, __ctor, (RenderTexture * __this, RenderTexture * textureToCopy));
IL2CPP_REGISTER_METHODINFO(0x047562F8, RenderTexture__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02970F40, void, __ctor, (RenderTexture * __this, int32_t width, int32_t height, int32_t depth, GraphicsFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02971140, void, __ctor, (RenderTexture * __this, int32_t width, int32_t height, int32_t depth, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite));
IL2CPP_REGISTER_METHOD(0x02971430, void, __ctor, (RenderTexture * __this, int32_t width, int32_t height, int32_t depth, RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02971460, void, __ctor, (RenderTexture * __this, int32_t width, int32_t height, int32_t depth));
IL2CPP_REGISTER_METHOD(0x02971490, int32_t, get_width, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x029714E0, void, set_width, (RenderTexture * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02971540, int32_t, get_height, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971590, void, set_height, (RenderTexture * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x029715F0, void, set_dimension, (RenderTexture * __this, TextureDimension__Enum value));
IL2CPP_REGISTER_METHOD(0x02971650, void, set_useMipMap, (RenderTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x029716B0, RenderTextureFormat__Enum, get_format, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971700, void, set_format, (RenderTexture * __this, RenderTextureFormat__Enum value));
IL2CPP_REGISTER_METHOD(0x02971760, void, set_autoGenerateMips, (RenderTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x029717C0, int32_t, get_volumeDepth, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971810, void, set_volumeDepth, (RenderTexture * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02971870, void, set_enableRandomWrite, (RenderTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_isPowerOfTwo, (RenderTexture * __this, bool value));
IL2CPP_REGISTER_METHOD(0x029718D0, RenderTexture *, GetActive, ());
IL2CPP_REGISTER_METHOD(0x02971920, void, SetActive, (RenderTexture * rt));
IL2CPP_REGISTER_METHOD(0x029718D0, RenderTexture *, get_active, ());
IL2CPP_REGISTER_METHOD(0x02971920, void, set_active, (RenderTexture * value));
IL2CPP_REGISTER_METHOD(0x02971970, RenderBuffer, GetColorBuffer, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x029719F0, RenderBuffer, GetDepthBuffer, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971970, RenderBuffer, get_colorBuffer, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x029719F0, RenderBuffer, get_depthBuffer, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971A70, void, DiscardContents, (RenderTexture * __this, bool discardColor, bool discardDepth));
IL2CPP_REGISTER_METHOD(0x02971AF0, void, MarkRestoreExpected, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971B40, void, DiscardContents, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971BA0, bool, Create, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971BF0, void, Release, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971C40, bool, IsCreated, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971C90, void, SetSRGBReadWrite, (RenderTexture * __this, bool srgb));
IL2CPP_REGISTER_METHOD(0x02971CF0, void, Internal_Create, (RenderTexture * rt));
IL2CPP_REGISTER_METHOD(0x02971D40, void, SetRenderTextureDescriptor, (RenderTexture * __this, RenderTextureDescriptor desc));
IL2CPP_REGISTER_METHOD(0x02971DA0, RenderTextureDescriptor, GetDescriptor, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971E50, RenderTexture *, GetTemporary_Internal, (RenderTextureDescriptor desc));
IL2CPP_REGISTER_METHOD(0x02971EA0, void, ReleaseTemporary, (RenderTexture * temp));
IL2CPP_REGISTER_METHOD(0x02971EF0, int32_t, get_depth, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971F40, void, set_depth, (RenderTexture * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02971DA0, RenderTextureDescriptor, get_descriptor, (RenderTexture * __this));
IL2CPP_REGISTER_METHOD(0x02971FA0, void, ValidateRenderTextureDesc, (RenderTextureDescriptor desc));
IL2CPP_REGISTER_METHODINFO(0x047047F0, RenderTexture_ValidateRenderTextureDesc__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02972190, RenderTexture *, GetTemporary, (RenderTextureDescriptor desc));
IL2CPP_REGISTER_METHOD(0x02972240, RenderTexture *, GetTemporaryImpl, (int32_t width, int32_t height, int32_t depthBuffer, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite, int32_t antiAliasing, RenderTextureMemoryless__Enum memorylessMode, VRTextureUsage__Enum vrUsage, bool useDynamicScale));
IL2CPP_REGISTER_METHOD(0x02972310, RenderTexture *, GetTemporary, (int32_t width, int32_t height, int32_t depthBuffer, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite));
IL2CPP_REGISTER_METHOD(0x029723C0, RenderTexture *, GetTemporary, (int32_t width, int32_t height, int32_t depthBuffer, RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02972460, RenderTexture *, GetTemporary, (int32_t width, int32_t height, int32_t depthBuffer));
IL2CPP_REGISTER_METHOD(0x02972500, RenderTexture *, GetTemporary, (int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x02972580, void, GetColorBuffer_Injected, (RenderTexture * __this, RenderBuffer * ret));
IL2CPP_REGISTER_METHOD(0x029725E0, void, GetDepthBuffer_Injected, (RenderTexture * __this, RenderBuffer * ret));
IL2CPP_REGISTER_METHOD(0x02972640, void, SetRenderTextureDescriptor_Injected, (RenderTexture * __this, RenderTextureDescriptor * desc));
IL2CPP_REGISTER_METHOD(0x029726A0, void, GetDescriptor_Injected, (RenderTexture * __this, RenderTextureDescriptor * ret));
IL2CPP_REGISTER_METHOD(0x02972700, RenderTexture *, GetTemporary_Internal_Injected, (RenderTextureDescriptor * desc));
}
