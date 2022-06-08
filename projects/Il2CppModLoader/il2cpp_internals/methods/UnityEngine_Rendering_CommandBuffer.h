#include <interception_macros.h>

namespace app::methods::UnityEngine::Rendering::CommandBuffer {
IL2CPP_REGISTER_METHOD(0x02973C90, void, __ctor, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02973CF0, void, SetInvertCulling, (CommandBuffer * __this, bool invertCulling));
IL2CPP_REGISTER_METHOD(0x02973D50, void *, InitBuffer, ());
IL2CPP_REGISTER_METHOD(0x02973DA0, void, ReleaseBuffer, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02973DF0, void, SetComputeFloatParam, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, float val));
IL2CPP_REGISTER_METHOD(0x02973E70, void, SetComputeVectorParam, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, Vector4 val));
IL2CPP_REGISTER_METHOD(0x02973EF0, void, SetComputeMatrixParam, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, Matrix4x4 val));
IL2CPP_REGISTER_METHOD(0x02973F70, void, Internal_SetComputeFloats, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, Single__Array * values));
IL2CPP_REGISTER_METHOD(0x02973FF0, void, Internal_SetComputeTextureParam, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, int32_t nameID, RenderTargetIdentifier * rt, int32_t mipLevel));
IL2CPP_REGISTER_METHOD(0x02974080, void, SetComputeBufferParam, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, int32_t nameID, ComputeBuffer * buffer));
IL2CPP_REGISTER_METHOD(0x02974110, void, SetSkinPoseBuffer, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, int32_t nameID, SkinnedMeshRenderer * skm));
IL2CPP_REGISTER_METHOD(0x029741A0, void, Internal_DispatchCompute, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ));
IL2CPP_REGISTER_METHOD(0x02974230, void, Internal_DispatchComputeIndirect, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, ComputeBuffer * indirectBuffer, uint32_t argsOffset));
IL2CPP_REGISTER_METHOD(0x029742C0, void, Internal_ResolveAntiAliasedSurface, (CommandBuffer * __this, RenderTexture * rt, RenderTexture * target));
IL2CPP_REGISTER_METHOD(0x02974330, void, set_name, (CommandBuffer * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02974390, int32_t, get_sizeInBytes, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x029743E0, void, Clear, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02974430, void, Internal_DrawMesh, (CommandBuffer * __this, Mesh * mesh, Matrix4x4 matrix, Material * material, int32_t submeshIndex, int32_t shaderPass, MaterialPropertyBlock * properties));
IL2CPP_REGISTER_METHOD(0x029744D0, void, Internal_DrawRenderer, (CommandBuffer * __this, Renderer * renderer, Material * material, int32_t submeshIndex, int32_t shaderPass));
IL2CPP_REGISTER_METHOD(0x02974560, void, Internal_DrawProcedural, (CommandBuffer * __this, Matrix4x4 matrix, Material * material, int32_t shaderPass, MeshTopology__Enum topology, int32_t vertexCount, int32_t instanceCount, MaterialPropertyBlock * properties));
IL2CPP_REGISTER_METHOD(0x02974610, void, SetViewport, (CommandBuffer * __this, Rect pixelRect));
IL2CPP_REGISTER_METHOD(0x02974670, void, CopyTexture_Internal, (CommandBuffer * __this, RenderTargetIdentifier * src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, RenderTargetIdentifier * dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode));
IL2CPP_REGISTER_METHOD(0x02974700, void, Blit_Texture, (CommandBuffer * __this, Texture * source, RenderTargetIdentifier * dest, Material * mat, int32_t pass, Vector2 scale, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x029747B0, void, Blit_Identifier, (CommandBuffer * __this, RenderTargetIdentifier * source, RenderTargetIdentifier * dest, Material * mat, int32_t pass, Vector2 scale, Vector2 offset));
IL2CPP_REGISTER_METHOD(0x02974860, void, SwitchIntoFastMemory, (CommandBuffer * __this, RenderTargetIdentifier * rt, SurfaceType__Enum surfaceType, SurfaceUsage__Enum surfaceUsage, FastMemoryFlags__Enum fastMemoryFlags, bool copyContents, float spillPercentage));
IL2CPP_REGISTER_METHOD(0x029748F0, void, SwitchOutOfFastMemory, (CommandBuffer * __this, RenderTargetIdentifier * rt, bool copyContents));
IL2CPP_REGISTER_METHOD(0x02974970, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, FilterMode__Enum filter, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite, int32_t antiAliasing, bool enableRandomWrite, RenderTextureMemoryless__Enum memorylessMode, bool useDynamicScale));
IL2CPP_REGISTER_METHOD(0x02974A20, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, FilterMode__Enum filter, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite, int32_t antiAliasing, bool enableRandomWrite, RenderTextureMemoryless__Enum memorylessMode));
IL2CPP_REGISTER_METHOD(0x02974AC0, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, FilterMode__Enum filter, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite, int32_t antiAliasing, bool enableRandomWrite));
IL2CPP_REGISTER_METHOD(0x02974BA0, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, FilterMode__Enum filter, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite, int32_t antiAliasing));
IL2CPP_REGISTER_METHOD(0x02974C70, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, FilterMode__Enum filter, RenderTextureFormat__Enum format, RenderTextureReadWrite__Enum readWrite));
IL2CPP_REGISTER_METHOD(0x02974D40, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, FilterMode__Enum filter, RenderTextureFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x02974D80, void, GetTemporaryRTWithDescriptor, (CommandBuffer * __this, int32_t nameID, RenderTextureDescriptor desc, FilterMode__Enum filter));
IL2CPP_REGISTER_METHOD(0x02974E00, void, GetTemporaryRT, (CommandBuffer * __this, int32_t nameID, RenderTextureDescriptor desc, FilterMode__Enum filter));
IL2CPP_REGISTER_METHOD(0x02974EA0, void, ReleaseTemporaryRT, (CommandBuffer * __this, int32_t nameID));
IL2CPP_REGISTER_METHOD(0x02974F00, void, ClearRenderTarget, (CommandBuffer * __this, ClearFlags__Enum flags, Color backgroundColor, float depth));
IL2CPP_REGISTER_METHOD(0x02974F80, void, ClearRenderTarget, (CommandBuffer * __this, bool clearDepth, bool clearColor, Color backgroundColor, float depth));
IL2CPP_REGISTER_METHOD(0x02975000, void, ClearRenderTarget, (CommandBuffer * __this, bool clearDepth, bool clearColor, Color backgroundColor));
IL2CPP_REGISTER_METHOD(0x02975080, void, SetGlobalFloat, (CommandBuffer * __this, int32_t nameID, float value));
IL2CPP_REGISTER_METHOD(0x029750F0, void, SetGlobalInt, (CommandBuffer * __this, int32_t nameID, int32_t value));
IL2CPP_REGISTER_METHOD(0x02975160, void, SetGlobalVector, (CommandBuffer * __this, int32_t nameID, Vector4 value));
IL2CPP_REGISTER_METHOD(0x029751D0, void, SetGlobalColor, (CommandBuffer * __this, int32_t nameID, Color value));
IL2CPP_REGISTER_METHOD(0x02975240, void, SetGlobalMatrix, (CommandBuffer * __this, int32_t nameID, Matrix4x4 value));
IL2CPP_REGISTER_METHOD(0x029752B0, void, EnableShaderKeyword, (CommandBuffer * __this, int32_t keywordID));
IL2CPP_REGISTER_METHOD(0x02975310, void, DisableShaderKeyword, (CommandBuffer * __this, int32_t keywordID));
IL2CPP_REGISTER_METHOD(0x02975370, void, SetViewProjectionMatrices, (CommandBuffer * __this, Matrix4x4 view, Matrix4x4 proj));
IL2CPP_REGISTER_METHOD(0x029753E0, void, SetGlobalVectorArray, (CommandBuffer * __this, int32_t nameID, Vector4__Array * values));
IL2CPP_REGISTER_METHOD(0x02975450, void, SetGlobalVectorArrayEx, (CommandBuffer * __this, int32_t nameID, int32_t count, Vector4__Array * values));
IL2CPP_REGISTER_METHOD(0x029754D0, void, SetGlobalTexture_Impl, (CommandBuffer * __this, int32_t nameID, RenderTargetIdentifier * rt));
IL2CPP_REGISTER_METHOD(0x02975540, void, SetGlobalBuffer, (CommandBuffer * __this, int32_t nameID, ComputeBuffer * value));
IL2CPP_REGISTER_METHOD(0x029755B0, void, LoadGlobalProperties, (CommandBuffer * __this, Int32__Array * nameID));
IL2CPP_REGISTER_METHOD(0x02975610, void, SuspendJobsThreshold, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02975660, void, WakeupRenderThread, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x029756B0, void, BeginSample, (CommandBuffer * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02975710, void, EndSample, (CommandBuffer * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02975770, void, BeginSample, (CommandBuffer * __this, CustomSampler * sampler));
IL2CPP_REGISTER_METHOD(0x029757E0, void, EndSample, (CommandBuffer * __this, CustomSampler * sampler));
IL2CPP_REGISTER_METHOD(0x02975850, void, BeginSampleInternal, (CommandBuffer * __this, void * sampler));
IL2CPP_REGISTER_METHOD(0x029758B0, void, EndSampleInternal, (CommandBuffer * __this, void * sampler));
IL2CPP_REGISTER_METHOD(0x02975910, void, SetRenderTarget, (CommandBuffer * __this, RenderTargetIdentifier rt));
IL2CPP_REGISTER_METHOD(0x029759A0, void, SetRenderTarget, (CommandBuffer * __this, RenderTargetIdentifier rt, int32_t mipLevel, CubemapFace__Enum cubemapFace, int32_t depthSlice));
IL2CPP_REGISTER_METHODINFO(0x047233F8, CommandBuffer_SetRenderTarget_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02975BC0, void, SetRenderTarget, (CommandBuffer * __this, RenderTargetIdentifier color, RenderTargetIdentifier depth));
IL2CPP_REGISTER_METHOD(0x02975C70, void, SetRenderTarget, (CommandBuffer * __this, RenderTargetIdentifier__Array * colors, RenderTargetIdentifier depth));
IL2CPP_REGISTER_METHODINFO(0x0470B130, CommandBuffer_SetRenderTarget_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02975EE0, void, SetRenderTargetSingle_Internal, (CommandBuffer * __this, RenderTargetIdentifier rt, RenderBufferLoadAction__Enum colorLoadAction, RenderBufferStoreAction__Enum colorStoreAction, RenderBufferLoadAction__Enum depthLoadAction, RenderBufferStoreAction__Enum depthStoreAction));
IL2CPP_REGISTER_METHOD(0x02975F80, void, SetRenderTargetColorDepth_Internal, (CommandBuffer * __this, RenderTargetIdentifier color, RenderTargetIdentifier depth, RenderBufferLoadAction__Enum colorLoadAction, RenderBufferStoreAction__Enum colorStoreAction, RenderBufferLoadAction__Enum depthLoadAction, RenderBufferStoreAction__Enum depthStoreAction));
IL2CPP_REGISTER_METHOD(0x02976020, void, SetRenderTargetMulti_Internal, (CommandBuffer * __this, RenderTargetIdentifier__Array * colors, RenderTargetIdentifier depth, RenderBufferLoadAction__Enum__Array * colorLoadActions, RenderBufferStoreAction__Enum__Array * colorStoreActions, RenderBufferLoadAction__Enum depthLoadAction, RenderBufferStoreAction__Enum depthStoreAction));
IL2CPP_REGISTER_METHOD(0x029760C0, void, Finalize, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02976150, void, Dispose, (CommandBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02976200, void, Dispose, (CommandBuffer * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02973F70, void, SetComputeFloatParams, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, Single__Array * values));
IL2CPP_REGISTER_METHOD(0x029762C0, void, SetComputeTextureParam, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, int32_t nameID, RenderTargetIdentifier rt));
IL2CPP_REGISTER_METHOD(0x029741A0, void, DispatchCompute, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ));
IL2CPP_REGISTER_METHOD(0x02974230, void, DispatchCompute, (CommandBuffer * __this, ComputeShader * computeShader, int32_t kernelIndex, ComputeBuffer * indirectBuffer, uint32_t argsOffset));
IL2CPP_REGISTER_METHOD(0x02976360, void, ResolveAntiAliasedSurface, (CommandBuffer * __this, RenderTexture * rt, RenderTexture * target));
IL2CPP_REGISTER_METHODINFO(0x04701318, CommandBuffer_ResolveAntiAliasedSurface__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02976490, void, DrawMesh, (CommandBuffer * __this, Mesh * mesh, Matrix4x4 matrix, Material * material, int32_t submeshIndex, int32_t shaderPass, MaterialPropertyBlock * properties));
IL2CPP_REGISTER_METHODINFO(0x04782A88, CommandBuffer_DrawMesh__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02976830, void, DrawMesh, (CommandBuffer * __this, Mesh * mesh, Matrix4x4 matrix, Material * material, int32_t submeshIndex, int32_t shaderPass));
IL2CPP_REGISTER_METHOD(0x029768A0, void, DrawMesh, (CommandBuffer * __this, Mesh * mesh, Matrix4x4 matrix, Material * material, int32_t submeshIndex));
IL2CPP_REGISTER_METHOD(0x02976900, void, DrawRenderer, (CommandBuffer * __this, Renderer * renderer, Material * material, int32_t submeshIndex, int32_t shaderPass));
IL2CPP_REGISTER_METHODINFO(0x0476CD78, CommandBuffer_DrawRenderer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02976B20, void, DrawProcedural, (CommandBuffer * __this, Matrix4x4 matrix, Material * material, int32_t shaderPass, MeshTopology__Enum topology, int32_t vertexCount, int32_t instanceCount, MaterialPropertyBlock * properties));
IL2CPP_REGISTER_METHODINFO(0x04775760, CommandBuffer_DrawProcedural__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02976CD0, void, DrawProcedural, (CommandBuffer * __this, Matrix4x4 matrix, Material * material, int32_t shaderPass, MeshTopology__Enum topology, int32_t vertexCount, int32_t instanceCount));
IL2CPP_REGISTER_METHOD(0x02976E80, void, DrawProcedural, (CommandBuffer * __this, Matrix4x4 matrix, Material * material, int32_t shaderPass, MeshTopology__Enum topology, int32_t vertexCount));
IL2CPP_REGISTER_METHOD(0x02977030, void, CopyTexture, (CommandBuffer * __this, RenderTargetIdentifier src, RenderTargetIdentifier dst));
IL2CPP_REGISTER_METHOD(0x02977100, void, Blit, (CommandBuffer * __this, Texture * source, RenderTargetIdentifier dest, Material * mat));
IL2CPP_REGISTER_METHOD(0x02977150, void, Blit, (CommandBuffer * __this, Texture * source, RenderTargetIdentifier dest, Material * mat, int32_t pass));
IL2CPP_REGISTER_METHOD(0x029771A0, void, Blit, (CommandBuffer * __this, RenderTargetIdentifier source, RenderTargetIdentifier dest));
IL2CPP_REGISTER_METHOD(0x029771F0, void, Blit, (CommandBuffer * __this, RenderTargetIdentifier source, RenderTargetIdentifier dest, Material * mat));
IL2CPP_REGISTER_METHOD(0x02977240, void, Blit, (CommandBuffer * __this, RenderTargetIdentifier source, RenderTargetIdentifier dest, Material * mat, int32_t pass));
IL2CPP_REGISTER_METHOD(0x02977290, void, SwitchIntoFastMemory, (CommandBuffer * __this, RenderTargetIdentifier rt, SurfaceType__Enum surfaceType, SurfaceUsage__Enum surfaceUsage, FastMemoryFlags__Enum fastMemoryFlags, bool copyContents, float spillPercentage));
IL2CPP_REGISTER_METHOD(0x02977340, void, SwitchOutOfFastMemory, (CommandBuffer * __this, RenderTargetIdentifier rt, bool copyContents));
IL2CPP_REGISTER_METHOD(0x029773C0, void, SetGlobalTexture, (CommandBuffer * __this, int32_t nameID, RenderTargetIdentifier value));
IL2CPP_REGISTER_METHOD(0x02977430, void, SetComputeVectorParam_Injected, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, Vector4 * val));
IL2CPP_REGISTER_METHOD(0x029774B0, void, SetComputeMatrixParam_Injected, (CommandBuffer * __this, ComputeShader * computeShader, int32_t nameID, Matrix4x4 * val));
IL2CPP_REGISTER_METHOD(0x02977530, void, Internal_DrawMesh_Injected, (CommandBuffer * __this, Mesh * mesh, Matrix4x4 * matrix, Material * material, int32_t submeshIndex, int32_t shaderPass, MaterialPropertyBlock * properties));
IL2CPP_REGISTER_METHOD(0x029775C0, void, Internal_DrawProcedural_Injected, (CommandBuffer * __this, Matrix4x4 * matrix, Material * material, int32_t shaderPass, MeshTopology__Enum topology, int32_t vertexCount, int32_t instanceCount, MaterialPropertyBlock * properties));
IL2CPP_REGISTER_METHOD(0x02977650, void, SetViewport_Injected, (CommandBuffer * __this, Rect * pixelRect));
IL2CPP_REGISTER_METHOD(0x029776B0, void, Blit_Texture_Injected, (CommandBuffer * __this, Texture * source, RenderTargetIdentifier * dest, Material * mat, int32_t pass, Vector2 * scale, Vector2 * offset));
IL2CPP_REGISTER_METHOD(0x02977740, void, Blit_Identifier_Injected, (CommandBuffer * __this, RenderTargetIdentifier * source, RenderTargetIdentifier * dest, Material * mat, int32_t pass, Vector2 * scale, Vector2 * offset));
IL2CPP_REGISTER_METHOD(0x029777D0, void, GetTemporaryRTWithDescriptor_Injected, (CommandBuffer * __this, int32_t nameID, RenderTextureDescriptor * desc, FilterMode__Enum filter));
IL2CPP_REGISTER_METHOD(0x02977850, void, ClearRenderTarget_Injected, (CommandBuffer * __this, ClearFlags__Enum flags, Color * backgroundColor, float depth));
IL2CPP_REGISTER_METHOD(0x029778D0, void, SetGlobalVector_Injected, (CommandBuffer * __this, int32_t nameID, Vector4 * value));
IL2CPP_REGISTER_METHOD(0x02977940, void, SetGlobalColor_Injected, (CommandBuffer * __this, int32_t nameID, Color * value));
IL2CPP_REGISTER_METHOD(0x029779B0, void, SetGlobalMatrix_Injected, (CommandBuffer * __this, int32_t nameID, Matrix4x4 * value));
IL2CPP_REGISTER_METHOD(0x02977A20, void, SetViewProjectionMatrices_Injected, (CommandBuffer * __this, Matrix4x4 * view, Matrix4x4 * proj));
IL2CPP_REGISTER_METHOD(0x02977A90, void, SetRenderTargetSingle_Internal_Injected, (CommandBuffer * __this, RenderTargetIdentifier * rt, RenderBufferLoadAction__Enum colorLoadAction, RenderBufferStoreAction__Enum colorStoreAction, RenderBufferLoadAction__Enum depthLoadAction, RenderBufferStoreAction__Enum depthStoreAction));
IL2CPP_REGISTER_METHOD(0x02977B20, void, SetRenderTargetColorDepth_Internal_Injected, (CommandBuffer * __this, RenderTargetIdentifier * color, RenderTargetIdentifier * depth, RenderBufferLoadAction__Enum colorLoadAction, RenderBufferStoreAction__Enum colorStoreAction, RenderBufferLoadAction__Enum depthLoadAction, RenderBufferStoreAction__Enum depthStoreAction));
IL2CPP_REGISTER_METHOD(0x02977BB0, void, SetRenderTargetMulti_Internal_Injected, (CommandBuffer * __this, RenderTargetIdentifier__Array * colors, RenderTargetIdentifier * depth, RenderBufferLoadAction__Enum__Array * colorLoadActions, RenderBufferStoreAction__Enum__Array * colorStoreActions, RenderBufferLoadAction__Enum depthLoadAction, RenderBufferStoreAction__Enum depthStoreAction));
}
