#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::HierarchyPerformanceTester_Old {
IL2CPP_REGISTER_METHOD(0x0149BDF0, void, add_OnTestComplete, (HierarchyPerformanceTester_Old * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0149BEE0, void, remove_OnTestComplete, (HierarchyPerformanceTester_Old * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0149BFD0, void, Scan, (HierarchyPerformanceTester_Old * __this, SceneRoot * sceneRoot, bool debugMode));
IL2CPP_REGISTER_METHOD(0x0149C210, void, AddGameObjectsRecursively, (HierarchyPerformanceTester_Old * __this, HierarchyDebugMenu_GameObjectItem * item));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsRunning, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149C340, int32_t, get_ObjectsLeft, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149C3D0, void, ChangeState, (HierarchyPerformanceTester_Old * __this, State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x04782308, HierarchyPerformanceTester_Old_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0149C830, void, Update, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149C8A0, void, UpdateState, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHODINFO(0x04705BF8, HierarchyPerformanceTester_Old_UpdateState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0149CAD0, void, SaveResultsIntoFile, (HierarchyPerformanceTester_Old * __this, String * fileName, String * fileExtension));
IL2CPP_REGISTER_METHOD(0x0149D370, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ *, SortResults, (HierarchyPerformanceTester_Old * __this, HashSet_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * results));
IL2CPP_REGISTER_METHOD(0x0149D4E0, void, AddResultsRecursively, (HierarchyPerformanceTester_Old * __this, GameObject * root, List_1_Moon_HierarchyPerformanceTest_HPerfTestResult_ * sortedResults));
IL2CPP_REGISTER_METHOD(0x0149DE00, void, StartTest, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149DE70, void, EndTest, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149DE90, void, OnEnterIdle, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149DF40, void, OnEnterMeasureBaseline, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149DFE0, void, OnEnterPrepare, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149E110, void, OnEnterProcess, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149E1B0, void, OnEnterPost, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitIdle, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149E680, void, OnExitMeasureBaseline, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPrepare, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149E870, void, OnExitProcess, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPost, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149E910, void, OnIdleUpdate, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EA20, void, OnMeasureBaselineUpdate, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EA40, void, OnPrepareUpdate, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EA60, void, OnProcessUpdate, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostUpdate, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EA80, double, GetCurrentCapturedCPUTime, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EB30, double, GetCurrentCapturedGPUTime, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EBE0, double, GetCurrentCapturedSRPGameViewTime, (HierarchyPerformanceTester_Old * __this));
IL2CPP_REGISTER_METHOD(0x0149EC90, String *, GetFullPath, (HierarchyPerformanceTester_Old * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x0149EEC0, GameObject *, GetArtGroupGameObject, (HierarchyPerformanceTester_Old * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHOD(0x0149F160, void, __ctor, (HierarchyPerformanceTester_Old * __this));
}
