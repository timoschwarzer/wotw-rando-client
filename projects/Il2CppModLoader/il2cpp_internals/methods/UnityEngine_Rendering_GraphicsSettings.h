#include <interception_macros.h>

namespace app::methods::UnityEngine_Rendering::GraphicsSettings {
IL2CPP_REGISTER_METHOD(0x02977C40, void, set_useScriptableRenderPipelineBatching, (bool value));
IL2CPP_REGISTER_METHOD(0x02977C90, ScriptableObject *, get_INTERNAL_renderPipelineAsset, ());
IL2CPP_REGISTER_METHOD(0x007A2FE0, void, set_INTERNAL_renderPipelineAsset, (app::ScriptableObject * value));
IL2CPP_REGISTER_METHOD(0x02977CE0, RenderPipelineAsset *, get_renderPipelineAsset, ());
IL2CPP_REGISTER_METHOD(0x007A2FE0, void, set_renderPipelineAsset, (app::RenderPipelineAsset * value));
}
