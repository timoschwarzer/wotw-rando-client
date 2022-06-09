#include <interception_macros.h>

namespace app::methods::UberPoolPerfTest {
IL2CPP_REGISTER_METHOD(0x00FDFC80, UberPoolPerfTest *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00FDFD20, bool, get_IsRunning, ());
IL2CPP_REGISTER_METHOD(0x00FDFDF0, void, StartTest_1, (app::UberPoolPerfTest_TestMode__Enum mode, bool is_automated_test));
IL2CPP_REGISTER_METHOD(0x00FE0160, void, StartTest_2, (app::UberPoolPerfTest_TestMode__Enum mode, bool is_automated_test, app::UberPoolPerfTest_Settings * settings));
IL2CPP_REGISTER_METHODINFO(0x04720C10, UberPoolPerfTest_StartTest_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FE03F0, void, StopTest, ());
IL2CPP_REGISTER_METHOD(0x00FE0540, void, OnEnable, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE07B0, void, OnDisable, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE0860, void, CheckInstantiation, (app::UberPoolPerfTest * this_ptr, app::GameObject * new_object));
IL2CPP_REGISTER_METHOD(0x00FE0930, Task *, RunTest, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE0A30, Task *, SetupAutomatedTest, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE0B30, void, SeinInvincibilitySetter, (bool new_value));
IL2CPP_REGISTER_METHOD(0x00FE0C30, void, StoreAdditionalAllocationsToPrefabInfo, (app::UberPoolPerfTest * this_ptr, app::UberPoolPerfTest_PrefabInfo * info));
IL2CPP_REGISTER_METHOD(0x00FE0E70, void, DestroyAdditionalInstantiations, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE1070, Task *, ForcePrefabPrewarmed, (app::UberPoolPerfTest * this_ptr, int32_t count, app::List_1_UnityEngine_GameObject_ * instances, app::GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x00FE11B0, Task *, BenchmarkSinglePrefabInstantiation, (app::UberPoolPerfTest * this_ptr, app::CsvWriter * output_writer, app::UberPoolPerfTest_PrefabInfo * info, app::Vector3 position, app::Stopwatch * stopwatch, app::List_1_UnityEngine_GameObject_ * instances, app::List_1_System_Int64__1 * instantiate_timings, app::List_1_System_Int64__1 * destruction_timings));
IL2CPP_REGISTER_METHOD(0x00FE1310, Task *, BenchmarkSinglePrefabProfiler, (app::UberPoolPerfTest * this_ptr, app::CsvWriter * output_writer, app::UberPoolPerfTest_PrefabInfo * info, app::List_1_UnityEngine_GameObject_ * instances, app::Vector3__Array * spawn_positions, app::IProfilingDataProvider * data_provider));
IL2CPP_REGISTER_METHOD(0x00FE1450, Task *, BenchmarkSinglePrefabPrewarm, (app::UberPoolPerfTest * this_ptr, app::CsvWriter * output_writer, app::UberPoolPerfTest_PrefabInfo * info, app::Stopwatch * stopwatch, app::List_1_UnityEngine_GameObject_ * instances, app::List_1_System_Int64__1 * instantiation_timings, app::List_1_System_Int64__1 * prewarm_timings));
IL2CPP_REGISTER_METHOD(0x00FE15A0, Task *, BenchmarkPrefabInfos, (app::UberPoolPerfTest * this_ptr, app::UberPoolPerfTest_LogCatcher * log_catcher, app::CsvWriter * output_writer, app::Vector3 position, app::List_1_UberPoolPerfTest_PrefabInfo_ * prefab_infos));
IL2CPP_REGISTER_METHOD(0x00FE1700, Task_1_System_Collections_Generic_List_1_ *, LoadPrefabInfos, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE1820, Task *, LoadPoolPrewarmScene, ());
IL2CPP_REGISTER_METHOD(0x00FE1910, Task *, FinishPendingTasks, ());
IL2CPP_REGISTER_METHOD(0x00FE19F0, GameObject *, InstantiateNoThrow, (app::UberPoolPerfTest * this_ptr, app::GameObject * prefab, app::Vector3 position, app::Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x00FE1B70, GameObject *, InstantiateDirectNoThrow, (app::UberPoolPerfTest * this_ptr, app::GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x00FE1CB0, UberPoolPerfTest_Timings, ComputeTimings, (app::List_1_System_Int64__1 * data));
IL2CPP_REGISTER_METHOD(0x00FE20B0, int64_t, ComputeMedian, (app::List_1_System_Int64__1 * data));
IL2CPP_REGISTER_METHOD(0x00FE21A0, UberPoolPerfTest_ProfileTimings, ComputeProfileTimings, (app::Double__Array * data, int32_t data_length));
IL2CPP_REGISTER_METHOD(0x00FE25B0, double, ComputeProfileMedian, (app::Double__Array * data, int32_t data_length));
IL2CPP_REGISTER_METHOD(0x00FE2660, CsvWriter *, OpenOutputWriter, (app::UberPoolPerfTest_TestMode__Enum mode, bool use_static_output_file_name, int32_t iteration));
IL2CPP_REGISTER_METHOD(0x00FE29A0, String *, GetOutputPath, (app::UberPoolPerfTest_TestMode__Enum mode, bool use_static_output_file_name));
IL2CPP_REGISTER_METHOD(0x00FE2C20, void, CreateDoneFile, ());
IL2CPP_REGISTER_METHOD(0x00FE2D30, void, WriteCsvHeaderTimings, (app::CsvWriter * writer, app::String * timing_name));
IL2CPP_REGISTER_METHOD(0x00FE2F10, void, WriteCsvHeader, (app::UberPoolPerfTest_TestMode__Enum mode, app::CsvWriter * writer, app::UberPoolPerfTest_Settings * settings));
IL2CPP_REGISTER_METHOD(0x00FE32D0, void, WriteCsvPrefabInfoProfiling, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo * info, app::Double__Array__Array * data, int32_t data_length));
IL2CPP_REGISTER_METHOD(0x00FE3500, void, WriteCsvPrefabInfoInstantiations, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo * info, app::UberPoolPerfTest_Timings * instantiation_timings, app::UberPoolPerfTest_Timings * destruction_timings));
IL2CPP_REGISTER_METHOD(0x00FE3690, void, WriteCsvPrefabInfoPrewarm, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo * info, app::UberPoolPerfTest_Timings * instantiation_timings, app::UberPoolPerfTest_Timings * prewarm_timings));
IL2CPP_REGISTER_METHOD(0x00FE3820, void, WriteCsvPrefabInfo, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo * info));
IL2CPP_REGISTER_METHOD(0x00FE3C90, void, WriteCsvPrefabInfoDiagnostics, (app::CsvWriter * writer, app::UberPoolPerfTest_PrefabInfo * info));
IL2CPP_REGISTER_METHOD(0x00FE40C0, List_1_System_ValueTuple_2__2 *, DeduplicateStrings, (app::IEnumerable_1_System_String_ * strings));
IL2CPP_REGISTER_METHOD(0x00FE4840, String *, NormalizeDiagnostic, (app::String * value));
IL2CPP_REGISTER_METHODINFO(0x047175F8, UberPoolPerfTest_NormalizeDiagnostic__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00FE49D0, void, WriteCsvTimings, (app::CsvWriter * writer, app::UberPoolPerfTest_Timings timings));
IL2CPP_REGISTER_METHOD(0x00FE4B00, void, WriteCsvProfileTimings, (app::CsvWriter * writer, app::UberPoolPerfTest_ProfileTimings timings));
IL2CPP_REGISTER_METHOD(0x00FE4D60, void, WriteCsvTicks, (app::CsvWriter * writer, int64_t value));
IL2CPP_REGISTER_METHOD(0x00FE4F90, void, __ctor, (app::UberPoolPerfTest * this_ptr));
IL2CPP_REGISTER_METHOD(0x00FE5110, void, __cctor, ());
}
