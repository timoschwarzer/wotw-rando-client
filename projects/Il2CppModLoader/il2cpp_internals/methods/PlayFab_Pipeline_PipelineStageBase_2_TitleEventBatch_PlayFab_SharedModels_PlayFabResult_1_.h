#include <interception_macros.h>

namespace app::methods::PlayFab::Pipeline::PipelineStageBase_2_TitleEventBatch_PlayFab::SharedModels::PlayFabResult_1_ {
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476A7D0, PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * __this, BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ * input, BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_ * output, CancellationTokenSource * cts));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * __this));
IL2CPP_REGISTER_METHOD(0x01D16470, IEnumerable_1_PlayFab_Pipeline_TitleEventBatch_ *, GetInputConsumingEnumerable, (PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * __this));
IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ * __this, PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_ * outputItem));
}
