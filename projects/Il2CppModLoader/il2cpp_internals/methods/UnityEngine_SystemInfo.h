#include <interception_macros.h>

namespace app::methods::UnityEngine::SystemInfo {
IL2CPP_REGISTER_METHOD(0x02C648F0, String *, get_operatingSystem, ());
IL2CPP_REGISTER_METHOD(0x02C64940, OperatingSystemFamily__Enum, get_operatingSystemFamily, ());
IL2CPP_REGISTER_METHOD(0x02C64990, String *, get_processorType, ());
IL2CPP_REGISTER_METHOD(0x02C649E0, int32_t, get_processorFrequency, ());
IL2CPP_REGISTER_METHOD(0x02C64A30, int32_t, get_processorCount, ());
IL2CPP_REGISTER_METHOD(0x02C64A80, int32_t, get_systemMemorySize, ());
IL2CPP_REGISTER_METHOD(0x02C64AD0, int32_t, get_executableSize, ());
IL2CPP_REGISTER_METHOD(0x02C64B20, uint64_t, get_allocatableSize, ());
IL2CPP_REGISTER_METHOD(0x02C64B70, uint64_t, get_totalFreeSize, ());
IL2CPP_REGISTER_METHOD(0x02C64BC0, uint64_t, get_totalAllocatedMemory, ());
IL2CPP_REGISTER_METHOD(0x02C64C10, uint64_t, get_firmwareFreeSize, ());
IL2CPP_REGISTER_METHOD(0x02C64C60, uint64_t, get_firmwareFreeSizeMinimum, ());
IL2CPP_REGISTER_METHOD(0x02C64CB0, uint64_t, get_totalReservedMemory, ());
IL2CPP_REGISTER_METHOD(0x02C64D00, uint64_t, get_gcUsedSize, ());
IL2CPP_REGISTER_METHOD(0x02C64D50, uint64_t, get_gcHeapSize, ());
IL2CPP_REGISTER_METHOD(0x02C64DA0, void, set_gcHeapSize, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x02C64DF0, void, set_gcReservedHeapSize, (uint64_t value));
IL2CPP_REGISTER_METHOD(0x02C64E40, void, set_gcFreeSpaceDivisor, (int32_t value));
IL2CPP_REGISTER_METHOD(0x01A45C50, String *, get_deviceUniqueIdentifier, ());
IL2CPP_REGISTER_METHOD(0x02C64E90, String *, get_deviceName, ());
IL2CPP_REGISTER_METHOD(0x02C64EE0, String *, get_deviceModel, ());
IL2CPP_REGISTER_METHOD(0x02C64F30, bool, get_supportsAccelerometer, ());
IL2CPP_REGISTER_METHOD(0x02C64F80, bool, get_supportsGyroscope, ());
IL2CPP_REGISTER_METHOD(0x02C64FD0, bool, get_supportsLocationService, ());
IL2CPP_REGISTER_METHOD(0x02C65020, DeviceType__Enum, get_deviceType, ());
IL2CPP_REGISTER_METHOD(0x02C65070, int32_t, get_graphicsMemorySize, ());
IL2CPP_REGISTER_METHOD(0x02C650C0, String *, get_graphicsDeviceName, ());
IL2CPP_REGISTER_METHOD(0x02C65110, String *, get_graphicsDeviceVendor, ());
IL2CPP_REGISTER_METHOD(0x02C65160, int32_t, get_graphicsDeviceID, ());
IL2CPP_REGISTER_METHOD(0x02C651B0, int32_t, get_graphicsDeviceVendorID, ());
IL2CPP_REGISTER_METHOD(0x02C65200, GraphicsDeviceType__Enum, get_graphicsDeviceType, ());
IL2CPP_REGISTER_METHOD(0x02C65250, String *, get_graphicsDeviceVersion, ());
IL2CPP_REGISTER_METHOD(0x02C652A0, int32_t, get_graphicsShaderLevel, ());
IL2CPP_REGISTER_METHOD(0x02C652F0, bool, get_graphicsMultiThreaded, ());
IL2CPP_REGISTER_METHOD(0x01F1B650, bool, get_supportsRenderTextures, ());
IL2CPP_REGISTER_METHOD(0x02C65340, bool, get_supportsImageEffects, ());
IL2CPP_REGISTER_METHOD(0x02C65390, bool, get_supports3DTextures, ());
IL2CPP_REGISTER_METHOD(0x02C653E0, CopyTextureSupport__Enum, get_copyTextureSupport, ());
IL2CPP_REGISTER_METHOD(0x02C65430, bool, get_supportsComputeShaders, ());
IL2CPP_REGISTER_METHOD(0x02C65480, int32_t, get_supportedRenderTargetCount, ());
IL2CPP_REGISTER_METHOD(0x02C654D0, int32_t, get_supportedRandomWriteTargetCount, ());
IL2CPP_REGISTER_METHOD(0x02C65520, uint8_t *, GetDyingMessagePointer, (int32_t size));
IL2CPP_REGISTER_METHOD(0x02C65580, bool, IsValidEnumValue, (Enum value));
IL2CPP_REGISTER_METHOD(0x02C65650, bool, SupportsRenderTextureFormat, (RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHODINFO(0x04771D00, SystemInfo_SupportsRenderTextureFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C65760, bool, SupportsBlendingOnRenderTextureFormat, (RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHODINFO(0x04772C08, SystemInfo_SupportsBlendingOnRenderTextureFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C65870, bool, SupportsTextureFormat, (TextureFormat__Enum format));
IL2CPP_REGISTER_METHODINFO(0x04746420, SystemInfo_SupportsTextureFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C65980, NPOTSupport__Enum, get_npotSupport, ());
IL2CPP_REGISTER_METHOD(0x02C648F0, String *, GetOperatingSystem, ());
IL2CPP_REGISTER_METHOD(0x02C64940, OperatingSystemFamily__Enum, GetOperatingSystemFamily, ());
IL2CPP_REGISTER_METHOD(0x02C64990, String *, GetProcessorType, ());
IL2CPP_REGISTER_METHOD(0x02C649E0, int32_t, GetProcessorFrequencyMHz, ());
IL2CPP_REGISTER_METHOD(0x02C64A30, int32_t, GetProcessorCount, ());
IL2CPP_REGISTER_METHOD(0x02C64A80, int32_t, GetPhysicalMemoryMB, ());
IL2CPP_REGISTER_METHOD(0x02C64C10, uint64_t, GetFirmwareFreeSize, ());
IL2CPP_REGISTER_METHOD(0x02C64C60, uint64_t, GetFirmwareFreeSizeMinimum, ());
IL2CPP_REGISTER_METHOD(0x02C64AD0, int32_t, GetExecutableSizeMB, ());
IL2CPP_REGISTER_METHOD(0x02C64B20, uint64_t, GetAllocatableSize, ());
IL2CPP_REGISTER_METHOD(0x02C64B70, uint64_t, GetTotalFreeSize, ());
IL2CPP_REGISTER_METHOD(0x02C64BC0, uint64_t, GetTotalAllocatedMemory, ());
IL2CPP_REGISTER_METHOD(0x02C64CB0, uint64_t, GetTotalReservedMemory, ());
IL2CPP_REGISTER_METHOD(0x02C64D00, uint64_t, GetGCUsedSize, ());
IL2CPP_REGISTER_METHOD(0x02C64D50, uint64_t, GetGCHeapSize, ());
IL2CPP_REGISTER_METHOD(0x02C64DA0, void, SetGCHeapSize, (uint64_t newSize));
IL2CPP_REGISTER_METHOD(0x02C64DF0, void, SetGCReservedHeapSize, (uint64_t newSize));
IL2CPP_REGISTER_METHOD(0x02C659D0, int32_t, GCCollectALittle, ());
IL2CPP_REGISTER_METHOD(0x02C64E40, void, SetGCFreeSpaceDivisor, (int32_t newSize));
IL2CPP_REGISTER_METHOD(0x02C65A20, int64_t, GetDyingMessagePointerNative, (int32_t size));
IL2CPP_REGISTER_METHOD(0x01A45C50, String *, GetDeviceUniqueIdentifier, ());
IL2CPP_REGISTER_METHOD(0x02C64E90, String *, GetDeviceName, ());
IL2CPP_REGISTER_METHOD(0x02C64EE0, String *, GetDeviceModel, ());
IL2CPP_REGISTER_METHOD(0x02C64F30, bool, SupportsAccelerometer, ());
IL2CPP_REGISTER_METHOD(0x02C64F80, bool, IsGyroAvailable, ());
IL2CPP_REGISTER_METHOD(0x02C64FD0, bool, SupportsLocationService, ());
IL2CPP_REGISTER_METHOD(0x02C65020, DeviceType__Enum, GetDeviceType, ());
IL2CPP_REGISTER_METHOD(0x02C65070, int32_t, GetGraphicsMemorySize, ());
IL2CPP_REGISTER_METHOD(0x02C650C0, String *, GetGraphicsDeviceName, ());
IL2CPP_REGISTER_METHOD(0x02C65110, String *, GetGraphicsDeviceVendor, ());
IL2CPP_REGISTER_METHOD(0x02C65160, int32_t, GetGraphicsDeviceID, ());
IL2CPP_REGISTER_METHOD(0x02C651B0, int32_t, GetGraphicsDeviceVendorID, ());
IL2CPP_REGISTER_METHOD(0x02C65200, GraphicsDeviceType__Enum, GetGraphicsDeviceType, ());
IL2CPP_REGISTER_METHOD(0x02C65250, String *, GetGraphicsDeviceVersion, ());
IL2CPP_REGISTER_METHOD(0x02C652A0, int32_t, GetGraphicsShaderLevel, ());
IL2CPP_REGISTER_METHOD(0x02C652F0, bool, GetGraphicsMultiThreaded, ());
IL2CPP_REGISTER_METHOD(0x02C65340, bool, SupportsImageEffects, ());
IL2CPP_REGISTER_METHOD(0x02C65390, bool, Supports3DTextures, ());
IL2CPP_REGISTER_METHOD(0x02C653E0, CopyTextureSupport__Enum, GetCopyTextureSupport, ());
IL2CPP_REGISTER_METHOD(0x02C65430, bool, SupportsComputeShaders, ());
IL2CPP_REGISTER_METHOD(0x02C65480, int32_t, SupportedRenderTargetCount, ());
IL2CPP_REGISTER_METHOD(0x02C654D0, int32_t, SupportedRandomWriteTargetCount, ());
IL2CPP_REGISTER_METHOD(0x02C65A70, bool, HasRenderTextureNative, (RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02C65AC0, bool, SupportsBlendingOnRenderTextureFormatNative, (RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02C65B10, bool, SupportsTextureFormatNative, (TextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02C65980, NPOTSupport__Enum, GetNPOTSupport, ());
IL2CPP_REGISTER_METHOD(0x02C65B60, void, SetGlobalMipBias, (float bias));
IL2CPP_REGISTER_METHOD(0x0048D990, float, GetGlobalMipBias, ());
IL2CPP_REGISTER_METHOD(0x02C65BC0, void, SetGlobalTexFilter, (int32_t state));
IL2CPP_REGISTER_METHOD(0x02C65C10, bool, IsFormatSupported, (GraphicsFormat__Enum format, FormatUsage__Enum usage));
}
