#include <interception_macros.h>

namespace app::methods::AdvancedDebugMenuPage {
IL2CPP_REGISTER_METHOD(0x004CB040, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004CB0E0, void, Awake, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004CB180, void, GetItems, (AdvancedDebugMenuPage * __this, List_1_List_1_IDebugMenuItem_ * items));
IL2CPP_REGISTER_METHOD(0x004DC7F0, bool, DisablePlayFabPush, ());
IL2CPP_REGISTER_METHODINFO(0x04789AE0, AdvancedDebugMenuPage_DisablePlayFabPush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DC890, bool, DisableSteamPush, ());
IL2CPP_REGISTER_METHODINFO(0x0478C2F0, AdvancedDebugMenuPage_DisableSteamPush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DC930, bool, DisableLivePush, ());
IL2CPP_REGISTER_METHODINFO(0x047783F0, AdvancedDebugMenuPage_DisableLivePush__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DCB20, void, OnGUI, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DCBF0, bool, CopyLogFile, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04708F50, AdvancedDebugMenuPage_CopyLogFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DCD50, void, DebugControlsSetter, (AdvancedDebugMenuPage * __this, bool arg));
IL2CPP_REGISTER_METHODINFO(0x0475E930, AdvancedDebugMenuPage_DebugControlsSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DCE00, bool, DebugControlsGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04769638, AdvancedDebugMenuPage_DebugControlsGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DCEA0, bool, UnlockDifficulties, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A698, AdvancedDebugMenuPage_UnlockDifficulties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DCF80, bool, VisitCurrentArea, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04780E70, AdvancedDebugMenuPage_VisitCurrentArea__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DCFD0, bool, VisitAllAreas, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04706D18, AdvancedDebugMenuPage_VisitAllAreas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD150, bool, LogAreaCollectables, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04720C70, AdvancedDebugMenuPage_LogAreaCollectables__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ResetSteamStats, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047766F0, AdvancedDebugMenuPage_ResetSteamStats__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD180, bool, CameraEnabledGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04727BC8, AdvancedDebugMenuPage_CameraEnabledGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD290, void, CameraEnabledSetter, (AdvancedDebugMenuPage * __this, bool obj));
IL2CPP_REGISTER_METHODINFO(0x0479A160, AdvancedDebugMenuPage_CameraEnabledSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD550, bool, FrustumOptimizeEnabledGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04773F70, AdvancedDebugMenuPage_FrustumOptimizeEnabledGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD5E0, void, FrustumOptimizeEnabledSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x0472B200, AdvancedDebugMenuPage_FrustumOptimizeEnabledSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD680, bool, FrustumLockGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0473BEB0, AdvancedDebugMenuPage_FrustumLockGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD740, void, FrustumLockSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x0476BBA8, AdvancedDebugMenuPage_FrustumLockSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DD9B0, bool, ResetLayerCollision, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047059A0, AdvancedDebugMenuPage_ResetLayerCollision__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DDB30, bool, CorruptSave, (AdvancedDebugMenuPage * __this, int32_t slotID, int32_t backupID));
IL2CPP_REGISTER_METHOD(0x004DDCC0, bool, FixedUpdateSyncGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047085E8, AdvancedDebugMenuPage_FixedUpdateSyncGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DDD60, void, FixedUpdateSyncSetter, (AdvancedDebugMenuPage * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x047624E0, AdvancedDebugMenuPage_FixedUpdateSyncSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DDE10, bool, StartFPSTest0, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E258, AdvancedDebugMenuPage_StartFPSTest0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DDEB0, bool, StartFPSTest60, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DDF60, bool, StartFPSTest120, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DE010, bool, StartFPSTest180, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DE0C0, bool, StartFPSTest240, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DE170, bool, StartHierarchyPerformanceTest, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0471BE08, AdvancedDebugMenuPage_StartHierarchyPerformanceTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DE380, bool, StartHierarchyPerformanceBulkTest, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04760568, AdvancedDebugMenuPage_StartHierarchyPerformanceBulkTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DE460, bool, StartHierarchyPerformanceBulkTestFull, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0474EE78, AdvancedDebugMenuPage_StartHierarchyPerformanceBulkTestFull__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DE550, bool, StartHierarchyPerformanceBulkTestFullDebug, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E958, AdvancedDebugMenuPage_StartHierarchyPerformanceBulkTestFullDebug__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DE630, bool, StartHierarchyPerformanceBulkTestFull, (AdvancedDebugMenuPage * __this, int32_t startSceneIndex));
IL2CPP_REGISTER_METHOD(0x004DE720, bool, StopHierarchyPerformanceTest, ());
IL2CPP_REGISTER_METHODINFO(0x0471F340, AdvancedDebugMenuPage_StopHierarchyPerformanceTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DE910, String *, get_StressTestStartSceneName, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DEA30, void, StartStressTest, (AdvancedDebugMenuPage * __this, int32_t isolatedTestSceneIdx));
IL2CPP_REGISTER_METHOD(0x004DEB50, bool, PrintReadableTextures, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04724388, AdvancedDebugMenuPage_PrintReadableTextures__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DEE60, bool, TelemetryTest, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047425F8, AdvancedDebugMenuPage_TelemetryTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DEFE0, bool, ToggleVerlet, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004DF090, bool, LogUberstate, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0474BCA8, AdvancedDebugMenuPage_LogUberstate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004DF820, void, WriteGroupData, (AdvancedDebugMenuPage * __this, UberStateValueGroup * group, StreamWriter * writer));
IL2CPP_REGISTER_METHOD(0x004E1C40, bool, AchievementHintGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0472F038, AdvancedDebugMenuPage_AchievementHintGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E1CE0, void, AchievementHintSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x04772480, AdvancedDebugMenuPage_AchievementHintSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E1D90, bool, AchievementDebugGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04788F78, AdvancedDebugMenuPage_AchievementDebugGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E1E30, void, AchievementDebugSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x04753A30, AdvancedDebugMenuPage_AchievementDebugSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E1EE0, bool, AwardTestAchievement, ());
IL2CPP_REGISTER_METHODINFO(0x0475E900, AdvancedDebugMenuPage_AwardTestAchievement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E1FC0, bool, AwardFirstRealAchievement, ());
IL2CPP_REGISTER_METHODINFO(0x047687A8, AdvancedDebugMenuPage_AwardFirstRealAchievement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E20A0, bool, AwardRandomAchievement, ());
IL2CPP_REGISTER_METHODINFO(0x0474A2B0, AdvancedDebugMenuPage_AwardRandomAchievement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E25B0, bool, AdvanceFirstAchievement, ());
IL2CPP_REGISTER_METHODINFO(0x0478FDF0, AdvancedDebugMenuPage_AdvanceFirstAchievement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E3E90, bool, ClearLocalAchievement, ());
IL2CPP_REGISTER_METHODINFO(0x047969A8, AdvancedDebugMenuPage_ClearLocalAchievement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E3F60, bool, PostBadLeaderBoardStats, ());
IL2CPP_REGISTER_METHODINFO(0x047740B8, AdvancedDebugMenuPage_PostBadLeaderBoardStats__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E42F0, bool, PostGoodLeaderBoardStats, ());
IL2CPP_REGISTER_METHODINFO(0x0478A170, AdvancedDebugMenuPage_PostGoodLeaderBoardStats__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4680, bool, ClearLeaderBoardStats, ());
IL2CPP_REGISTER_METHODINFO(0x0471A1B8, AdvancedDebugMenuPage_ClearLeaderBoardStats__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4900, DebugPlayerTeleporter *, get_DebugPlayerTeleporter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x004E49D0, bool, TestEnemyLocomotionGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04707368, AdvancedDebugMenuPage_TestEnemyLocomotionGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4AB0, void, TestEnemyLocomotionSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x0474D3E0, AdvancedDebugMenuPage_TestEnemyLocomotionSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4BD0, bool, ReplayEngineActiveGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F450, AdvancedDebugMenuPage_ReplayEngineActiveGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4CF0, void, ReplayEngineActiveSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x04750468, AdvancedDebugMenuPage_ReplayEngineActiveSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4E10, bool, ReplayEngineCorrectionGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04746A68, AdvancedDebugMenuPage_ReplayEngineCorrectionGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E4F30, void, ReplayEngineCorrectionSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x04759330, AdvancedDebugMenuPage_ReplayEngineCorrectionSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5050, bool, HttpsGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0473C390, AdvancedDebugMenuPage_HttpsGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E50F0, void, HttpsSetter, (AdvancedDebugMenuPage * __this, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x0473AAE0, AdvancedDebugMenuPage_HttpsSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E51A0, bool, StreamingInstallDebugGetter, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C4C8, AdvancedDebugMenuPage_StreamingInstallDebugGetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5240, void, StreamingInstallDebugSetter, (AdvancedDebugMenuPage * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0475A3F8, AdvancedDebugMenuPage_StreamingInstallDebugSetter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E52F0, bool, SendLeaderboard, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04779EC0, AdvancedDebugMenuPage_SendLeaderboard__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5390, bool, OpenStatisticsScreen, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04705B48, AdvancedDebugMenuPage_OpenStatisticsScreen__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5470, void, __ctor, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x004E5500, bool, _GetItems_b__15_30, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A188, AdvancedDebugMenuPage__GetItems_b__15_30__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5680, bool, _GetItems_b__15_32, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047152B8, AdvancedDebugMenuPage__GetItems_b__15_32__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, _GetItems_b__15_33, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A520, AdvancedDebugMenuPage__GetItems_b__15_33__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57B0, void, _GetItems_b__15_34, (AdvancedDebugMenuPage * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x0472C3C0, AdvancedDebugMenuPage__GetItems_b__15_34__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57C0, String *, _GetItems_b__15_35, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047762D0, AdvancedDebugMenuPage__GetItems_b__15_35__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57D0, bool, _GetItems_b__15_51, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047927D0, AdvancedDebugMenuPage__GetItems_b__15_51__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57E0, void, _GetItems_b__15_52, (AdvancedDebugMenuPage * __this, bool b));
IL2CPP_REGISTER_METHODINFO(0x04723DF8, AdvancedDebugMenuPage__GetItems_b__15_52__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57F0, bool, _GetItems_b__15_53, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04777938, AdvancedDebugMenuPage__GetItems_b__15_53__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5800, void, _GetItems_b__15_54, (AdvancedDebugMenuPage * __this, bool b));
IL2CPP_REGISTER_METHODINFO(0x0472F7A8, AdvancedDebugMenuPage__GetItems_b__15_54__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004379E0, bool, _GetItems_b__15_66, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04745190, AdvancedDebugMenuPage__GetItems_b__15_66__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5810, void, _GetItems_b__15_67, (AdvancedDebugMenuPage * __this, bool val));
IL2CPP_REGISTER_METHODINFO(0x047101B0, AdvancedDebugMenuPage__GetItems_b__15_67__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5910, bool, _GetItems_b__15_162, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04760AE8, AdvancedDebugMenuPage__GetItems_b__15_162__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5920, bool, _GetItems_b__15_163, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04790960, AdvancedDebugMenuPage__GetItems_b__15_163__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5930, bool, _GetItems_b__15_164, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047503E0, AdvancedDebugMenuPage__GetItems_b__15_164__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5940, bool, _GetItems_b__15_165, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04778600, AdvancedDebugMenuPage__GetItems_b__15_165__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5950, bool, _GetItems_b__15_166, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0477DA38, AdvancedDebugMenuPage__GetItems_b__15_166__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5960, bool, _GetItems_b__15_167, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04776118, AdvancedDebugMenuPage__GetItems_b__15_167__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5970, bool, _GetItems_b__15_168, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047791D8, AdvancedDebugMenuPage__GetItems_b__15_168__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5980, bool, _GetItems_b__15_169, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04728500, AdvancedDebugMenuPage__GetItems_b__15_169__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5990, bool, _GetItems_b__15_170, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047971F8, AdvancedDebugMenuPage__GetItems_b__15_170__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E59A0, bool, _GetItems_b__15_171, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F350, AdvancedDebugMenuPage__GetItems_b__15_171__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E59B0, bool, _GetItems_b__15_172, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0477CB48, AdvancedDebugMenuPage__GetItems_b__15_172__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E59C0, bool, _GetItems_b__15_173, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0473CDA8, AdvancedDebugMenuPage__GetItems_b__15_173__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E59D0, bool, _GetItems_b__15_174, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04750B90, AdvancedDebugMenuPage__GetItems_b__15_174__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E59E0, bool, _GetItems_b__15_175, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04710CC8, AdvancedDebugMenuPage__GetItems_b__15_175__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E59F0, bool, _GetItems_b__15_176, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x04787450, AdvancedDebugMenuPage__GetItems_b__15_176__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5A00, bool, _GetItems_b__15_199, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047475A0, AdvancedDebugMenuPage__GetItems_b__15_199__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5A10, void, _GetItems_b__15_200, (AdvancedDebugMenuPage * __this, bool b));
IL2CPP_REGISTER_METHODINFO(0x04774070, AdvancedDebugMenuPage__GetItems_b__15_200__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5A20, bool, _GetItems_b__15_230, (AdvancedDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F948, AdvancedDebugMenuPage__GetItems_b__15_230__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E5A30, void, _GetItems_b__15_231, (AdvancedDebugMenuPage * __this, bool b));
IL2CPP_REGISTER_METHODINFO(0x04777F70, AdvancedDebugMenuPage__GetItems_b__15_231__MethodInfo);
}
