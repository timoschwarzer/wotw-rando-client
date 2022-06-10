#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x001FF3E0, app::Task_1_System_Object_ *, get_Task, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716E38, AsyncTaskMethodBuilder_1_System_Object__get_Task__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::AsyncTaskMethodBuilder_1_System_Object_, Create, ())
    IL2CPP_REGISTER_METHODINFO(0x047776A8, AsyncTaskMethodBuilder_1_System_Object__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D60, void, Start_1, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Object * * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x047983C8, AsyncTaskMethodBuilder_1_System_Object__Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0018ED60, void, SetStateMachine, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::IAsyncStateMachine * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0472F140, AsyncTaskMethodBuilder_1_System_Object__SetStateMachine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3C50, void, AwaitOnCompleted, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Object * * awaiter, app::Object * * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3C60, void, AwaitUnsafeOnCompleted_1, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Object * * awaiter, app::Object * * state_machine))
    IL2CPP_REGISTER_METHOD(0x001FF5A0, void, SetResult_1, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Object * result))
    IL2CPP_REGISTER_METHODINFO(0x0478EAB8, AsyncTaskMethodBuilder_1_System_Object__SetResult__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF5B0, void, SetResult_2, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Task_1_System_Object_ * completed_task))
    IL2CPP_REGISTER_METHOD(0x001FF610, void, SetException, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Exception * exception))
    IL2CPP_REGISTER_METHODINFO(0x0478DC18, AsyncTaskMethodBuilder_1_System_Object__SetException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FF620, app::Task_1_System_Object_ *, GetTaskForResult, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::Object * result))
    IL2CPP_REGISTER_METHOD(0x0276B430, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x001A3D80, void, Start_2, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::XmlUrlResolver_GetEntityAsync_d_15 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0475A580, AsyncTaskMethodBuilder_1_System_Object__Start_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3C90, void, AwaitUnsafeOnCompleted_2, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_IO_Stream_ * awaiter, app::XmlUrlResolver_GetEntityAsync_d_15 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0478E220, AsyncTaskMethodBuilder_1_System_Object__AwaitUnsafeOnCompleted_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3C70, void, AwaitUnsafeOnCompleted_3, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter * awaiter, app::AsyncProtocolRequest_StartOperation_d_23 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3C80, void, AwaitUnsafeOnCompleted_4, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_ * awaiter, app::XmlDownloadManager_GetNonFileStreamAsync_d_5 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3C90, void, AwaitUnsafeOnCompleted_5, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Object_ * awaiter, app::XmlUrlResolver_GetEntityAsync_d_15 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CA0, void, AwaitUnsafeOnCompleted_6, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter * awaiter, app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CB0, void, AwaitUnsafeOnCompleted_7, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter * awaiter, app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CC0, void, AwaitUnsafeOnCompleted_8, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter * awaiter, app::UberPoolPerfTest_LoadPrefabInfos_d_41 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CD0, void, AwaitUnsafeOnCompleted_9, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter_1_System_Object_ * awaiter, app::OneDSEventPipeline_IntakeEventAsync_d_24 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CE0, void, AwaitUnsafeOnCompleted_10, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter_1_System_Object_ * awaiter, app::PlayFabRaceServiceProvider_GetRaceData_d_10 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3CF0, void, AwaitUnsafeOnCompleted_11, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter_1_System_Object_ * awaiter, app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3D00, void, AwaitUnsafeOnCompleted_12, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::TaskAwaiter_1_System_Object_ * awaiter, app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3D10, void, AwaitUnsafeOnCompleted_13, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::YieldAwaitable_YieldAwaiter * awaiter, app::UberPoolPerfTest_LoadPrefabInfos_d_41 * state_machine))
    IL2CPP_REGISTER_METHOD(0x001A3D20, void, Start_3, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::AsyncProtocolRequest_StartOperation_d_23 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04749ED8, AsyncTaskMethodBuilder_1_System_Object__Start_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D30, void, Start_4, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476DD18, AsyncTaskMethodBuilder_1_System_Object__Start_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D40, void, Start_5, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0476C4E8, AsyncTaskMethodBuilder_1_System_Object__Start_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D50, void, Start_6, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::OneDSEventPipeline_IntakeEventAsync_d_24 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0478BCE0, AsyncTaskMethodBuilder_1_System_Object__Start_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D70, void, Start_7, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::XmlDownloadManager_GetNonFileStreamAsync_d_5 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0477E378, AsyncTaskMethodBuilder_1_System_Object__Start_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3D90, void, Start_8, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::PlayFabRaceServiceProvider_GetRaceData_d_10 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0473CED8, AsyncTaskMethodBuilder_1_System_Object__Start_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3DA0, void, Start_9, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::PlayFabRaceServiceProvider_GetRaceResultEntry_d_15 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x0472BCB8, AsyncTaskMethodBuilder_1_System_Object__Start_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3DB0, void, Start_10, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::PlayFabRaceServiceProvider_ProcessLeaderBoardList_d_13 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04734BB0, AsyncTaskMethodBuilder_1_System_Object__Start_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001A3DC0, void, Start_11, (app::AsyncTaskMethodBuilder_1_System_Object___Boxed * this_ptr, app::UberPoolPerfTest_LoadPrefabInfos_d_41 * state_machine))
    IL2CPP_REGISTER_METHODINFO(0x04729B38, AsyncTaskMethodBuilder_1_System_Object__Start_10__MethodInfo)
}
