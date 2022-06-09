#include <interception_macros.h>

namespace app::methods::HierarchyPerfTest::Tests {
IL2CPP_REGISTER_METHOD(0x019776A0, IEnumerator *, RunTests, (app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x019777F0, List_1_UnityEngine_GameObject_ *, GetAllLeafNodes, (app::List_1_UnityEngine_GameObject_ * allnodes));
IL2CPP_REGISTER_METHOD(0x01977A10, List_1_UnityEngine_Transform_ *, GetAllChildTransforms, (app::List_1_UnityEngine_Transform_ * transforms));
IL2CPP_REGISTER_METHOD(0x01977C20, void, PopulateLeafNodesRecursive, (app::Transform * current, app::List_1_UnityEngine_GameObject_ * leaf_nodes_list));
IL2CPP_REGISTER_METHOD(0x01977E40, float, GetRandomPosAwayFromZero, ());
IL2CPP_REGISTER_METHOD(0x01977F10, IEnumerator *, DoLevelLoadUnloadTestTests, (app::String * scene_name));
IL2CPP_REGISTER_METHOD(0x01978060, IEnumerator *, DoBasicFrameTimeTests, (app::List_1_UnityEngine_GameObject_ * root_objects));
IL2CPP_REGISTER_METHOD(0x019781B0, IEnumerator *, DoComponentUpdateTests, ());
IL2CPP_REGISTER_METHOD(0x019782F0, IEnumerator *, DoEnableDisableTest, (app::String * base_test_name, app::List_1_UnityEngine_GameObject_ * objects_shuffled));
IL2CPP_REGISTER_METHOD(0x01978450, IEnumerator *, DoMovementTests, (app::String * base_test_name, app::List_1_UnityEngine_Transform_ * transforms_to_move, app::List_1_UnityEngine_Vector3_ * positions, app::List_1_UnityEngine_Quaternion_ * rotations, app::List_1_UnityEngine_Vector3_ * scales));
IL2CPP_REGISTER_METHOD(0x019785D0, IEnumerator *, SetupPosition, (app::List_1_UnityEngine_Transform_ * transforms_to_move, app::List_1_UnityEngine_Vector3_ * positions, app::List_1_UnityEngine_Quaternion_ * rotations, app::List_1_UnityEngine_Vector3_ * scales));
IL2CPP_REGISTER_METHOD(0x01978740, IEnumerator *, DoReparentTest, (app::String * base_test_name, app::List_1_UnityEngine_Transform_ * transforms_to_reparent, app::List_1_UnityEngine_Transform_ * new_parents));
IL2CPP_REGISTER_METHOD(0x019788B0, IEnumerator *, DoReparentAndTransformTest, (app::String * base_test_name, app::List_1_UnityEngine_Transform_ * transforms_to_reparent, app::List_1_UnityEngine_Transform_ * new_parents, app::List_1_UnityEngine_Vector3_ * positions, app::List_1_UnityEngine_Quaternion_ * rotations, app::List_1_UnityEngine_Vector3_ * scales));
IL2CPP_REGISTER_METHOD(0x01978A40, IEnumerator *, WaitForNSeconds, (float seconds));
IL2CPP_REGISTER_METHOD(0x01978BA0, void, OnFirstLastRunnerFunctionCalled, (app::Tests_CompoentRunnerID__Enum runner_i_d, app::Tests_UnityFunctionID__Enum function));
IL2CPP_REGISTER_METHODINFO(0x047352D0, Tests_OnFirstLastRunnerFunctionCalled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01978D10, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList_1, (app::List_1_System_Object_ * list));
IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList_2, (app::List_1_UnityEngine_GameObject_ * list));
IL2CPP_REGISTER_METHODINFO(0x0478E588, Tests_ShuffleList_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01549CA0, void, ShuffleList_3, (app::List_1_UnityEngine_Transform_ * list));
IL2CPP_REGISTER_METHODINFO(0x047017E8, Tests_ShuffleList_2__MethodInfo);
}
