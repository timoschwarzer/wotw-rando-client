#include <interception_macros.h>

namespace app::methods::StressTester {
IL2CPP_REGISTER_METHOD(0x0065F850, bool, get_StartingTest, ());
IL2CPP_REGISTER_METHOD(0x0065F8F0, void, set_StartingTest, (bool value));
IL2CPP_REGISTER_METHOD(0x0065F9A0, bool, get_AlwaysDrawDebugInfo, ());
IL2CPP_REGISTER_METHOD(0x0065FA40, void, set_AlwaysDrawDebugInfo, (bool value));
IL2CPP_REGISTER_METHOD(0x0065FBA0, String *, get_Message, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_Message, (StressTester * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0065FBC0, String *, get_ScreenshotFilename, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_ScreenshotFilename, (StressTester * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0065FBE0, String *, get_ScreenshotFilenameTemplate, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_ScreenshotFilenameTemplate, (StressTester * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0065FC00, bool, IsRunning, ());
IL2CPP_REGISTER_METHOD(0x0065FD90, String *, get_TestID, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, List_1_StressTester_StressTestPoint_ *, get_OrderedPoints, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_OrderedPoints, (StressTester * __this, List_1_StressTester_StressTestPoint_ * value));
IL2CPP_REGISTER_METHOD(0x0065FDF0, void, UpdateTestID, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0065FE30, int32_t, get_IsolatedTestSceneIdx, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_IsolatedTestSceneIdx, (StressTester * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0065FF00, StressTester_SceneIdentifier *, get_SceneToStartTestFrom, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0065FFD0, bool, get_TestModeOn, ());
IL2CPP_REGISTER_METHOD(0x00660070, void, set_TestModeOn, (bool value));
IL2CPP_REGISTER_METHOD(0x00660120, IStressTest *, get_CurrentTest, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660200, int32_t, get_TestIndex, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660210, void, set_TestIndex, (StressTester * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBD40, Action *, get_OnTestSetupBegin, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_OnTestSetupBegin, (StressTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBD60, Action *, get_OnTestStarted, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_OnTestStarted, (StressTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x006602E0, Action *, get_OnConsecutiveTestsFinished, ());
IL2CPP_REGISTER_METHOD(0x00660380, void, set_OnConsecutiveTestsFinished, (Action * value));
IL2CPP_REGISTER_METHOD(0x00660430, Action *, get_OnTestFinished, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660440, void, set_OnTestFinished, (StressTester * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0065FD90, String *, GetTestID, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660450, Vector2, get_CurrentWaypoint, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660510, Vector2, get_PreviousWaypoint, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006605D0, Vector2, get_CurentPathDirection, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006606A0, CageStructureTool *, get_Cage, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, List_1_StressTester_SceneIdentifier_ *, get_OverlapingScenes, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660770, void, TerminateEarly, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660780, void, OnEnable, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660900, void, OnDisable, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006609E0, void, Update, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660AE0, IEnumerator *, StartTestFromScene, (String * sceneNames));
IL2CPP_REGISTER_METHOD(0x00660C30, void, StartTest, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterTester, (IStressTest * test, bool verifyEveryFrame));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UnregisterTester, (IStressTest * test));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshOrderedPoints, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00660C40, List_1_SceneMetaData_ *, GetAllScenesThatIntersectsWithBounds, (StressTester * __this, Rect pathBounds));
IL2CPP_REGISTER_METHOD(0x00660D90, void, CalculatePathBounds, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildOrderedPointsVector, (StressTester * __this, CageStructureTool_Vertex * currentVertex, HashSet_1_CageStructureTool_Vertex_ * * analyzedVertices, List_1_SceneMetaData_ * overlapingScenes));
IL2CPP_REGISTER_METHOD(0x006610B0, SceneMetaData *, GetSceneAt, (StressTester * __this, Vector3 point, List_1_SceneMetaData_ * overlapingScenes));
IL2CPP_REGISTER_METHOD(0x006611C0, void, FlipPathDirection, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00661380, void, ToogleFlipDirection, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006613A0, void, SetUpTest, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00662130, void, DoTeleport, (StressTester * __this, DebugTeleportSettings * setting));
IL2CPP_REGISTER_METHOD(0x006623B0, bool, LoadSave, (StressTester * __this, String * path));
IL2CPP_REGISTER_METHOD(0x00662740, void, ChangeState, (StressTester * __this, StressTester_TesterState__Enum newState));
IL2CPP_REGISTER_METHOD(0x00662970, void, OnEnterRunningConfigTests, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00662980, void, OnEnterTakingScreenshot, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00662B80, void, OnExitTakingScreenshot, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00662CC0, void, SetScreenshotOverlays, (StressTester * __this, bool enable, bool complicated));
IL2CPP_REGISTER_METHOD(0x00662EC0, void, OnEnterGettingReady, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00663020, void, OnEnterDone, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00663A10, void, OnEnterMoving, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006640E0, void, ThrowAndWait, (StressTester * __this, float time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterResting, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006645C0, void, OnEnterLoadingNextPath, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006609E0, void, UpdateState, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00664620, void, UpdateRunningConfigTests, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006647F0, String *, GetCurrentSceneFromSceneManager, ());
IL2CPP_REGISTER_METHOD(0x00664B70, void, UpdateScreenshotFilenameTemplate, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00665410, void, TakeScreenshot, (StressTester * __this, String * identifier));
IL2CPP_REGISTER_METHOD(0x00665740, void, CaptureScreenshot, (StressTester * __this, String * path, StressTester_ScreenshotMethod__Enum method_1));
IL2CPP_REGISTER_METHOD(0x00665980, IEnumerator *, RecordScreenshot, (StressTester * __this, String * path));
IL2CPP_REGISTER_METHOD(0x00665AD0, void, UpdateTakingScreenshot, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00665FF0, void, UpdateGettingReady, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006661A0, void, UpdateLoadingNextPath, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00666440, void, SetupPlayer, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006670A0, void, UpdateDone, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00667460, void, UpdateMoving, (StressTester * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00668250, float, GetPauseTime, ());
IL2CPP_REGISTER_METHOD(0x00668330, void, HandleMoving, (StressTester * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00668670, void, HandleStressTests, (StressTester * __this, float deltaTime));
IL2CPP_REGISTER_METHODINFO(0x0470B228, StressTester_HandleStressTests__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006689D0, void, SearchForNextTest, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateResting, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00668BA0, void, CreateFile, (StressTester * __this, String * path, String * text));
IL2CPP_REGISTER_METHOD(0x00668BC0, void, MovePlayerTo, (StressTester * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00668E10, void, SetNextWaypoint, (StressTester * __this, bool keepalive));
IL2CPP_REGISTER_METHOD(0x00669460, void, UpdateKeepalive, (StressTester * __this, bool force));
IL2CPP_REGISTER_METHOD(0x00669600, void, SkipWaypoint, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x006699E0, void, OutputPointPositions, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00669F40, IStressTest *, GetValidInteractionTester, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0066A1B0, void, ModifyGravityPlatformMovementSettings, (StressTester * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x0066A1F0, void, ModifyHorizontalPlatformMovementSettings, (StressTester * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHOD(0x0066A240, void, SetSingleFixedUpdate, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0066A290, void, OnGUI, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0066B1A0, String *, GetInputFilePath, ());
IL2CPP_REGISTER_METHOD(0x0066B270, String *, GetDoneFilePath, ());
IL2CPP_REGISTER_METHOD(0x0066B340, String *, GetKeepaliveFilePath, ());
IL2CPP_REGISTER_METHOD(0x0066B410, String *, GetPlatformIdentifier, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldDisable, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldEnable, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldChildrenEnable, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSetMoonReady, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0066B490, void, SuspendGameplay, ());
IL2CPP_REGISTER_METHOD(0x0066B520, void, ResumeGameplay, ());
IL2CPP_REGISTER_METHOD(0x0066B5B0, void, __ctor, (StressTester * __this));
IL2CPP_REGISTER_METHOD(0x0066BCE0, void, __cctor, ());
}
