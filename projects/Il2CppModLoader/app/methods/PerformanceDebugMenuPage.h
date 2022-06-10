#include <interception_macros.h>

namespace app::methods::PerformanceDebugMenuPage {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_Name, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044D820, void, Awake, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044D8C0, void, GetItems, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_List_1_IDebugMenuItem_ * items))
    IL2CPP_REGISTER_METHOD(0x0044E100, void, _initializeTweaksList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0044E4A0, void, _initializeTweaksList2, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0044E710, app::MoonRenderPipelineAsset *, get_srpAsset, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044E720, void, _initializeToggleBotList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0044F350, void, _initializeProfilingList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00452510, void, _addProfilingSettingToggle, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix, app::ProfilingSettings_SettingType__Enum type, app::String * name_override))
    IL2CPP_REGISTER_METHOD(0x00452A20, void, _initializeProfilingSettingsList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00452BD0, void, _initializeRenderingList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _initializeActionsList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004551A0, void, _initializeDisplayList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004569F0, void, _initializeHDRList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00459320, void, _initializeCleanupLogicTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0045AF90, void, _initializeMemoryTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0045F740, void, _initializePGOTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0045F8C0, bool, AllocateFakeMemory, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707258, PerformanceDebugMenuPage_AllocateFakeMemory__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0045FAD0, bool, DeallocateFakeMemory, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04714AC0, PerformanceDebugMenuPage_DeallocateFakeMemory__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0045FBF0, bool, DeallocateAllFakeMemory, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775188, PerformanceDebugMenuPage_DeallocateAllFakeMemory__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0045FD50, void, _initializeAnimationTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00461420, void, _initializeAudioTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00463220, void, _initializeAnimatorTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004648F0, void, _initializeInteractionTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00465800, void, _initializeMoonDriverTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00465C80, void, _initializeFakingTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00466510, void, _initializeSceneStreamingTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00469090, void, _initializeSRPQualityToggles, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0046B690, void, _initializeAITweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0046D390, void, _initializeRaycastTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0046EE00, void, _initializeParticleTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004704B0, void, _initializePickupTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00470CF0, void, _initializeSyncingTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004714D0, void, _initializeTimeTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00472470, void, _initializeWaterTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004730B0, void, _initializeThreadingTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004744F0, void, _initializeRenderingTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _initializeSwitchTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x004767F0, void, _initializeAbilityTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00477400, void, _initializeCharacterMovementTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00479C70, void, _initializeAutomationTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x00479D70, void, _initializeMiscTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0047B6A0, void, _initializePhysicsTweaks, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0047D140, void, _initializePhysicalSystemTweaksList, (app::PerformanceDebugMenuPage * this_ptr, app::List_1_IDebugMenuItem_ * items, app::String * path_prefix))
    IL2CPP_REGISTER_METHOD(0x0047E7D0, void, ctor, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0047E960, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0047EA10, bool, __initializeRenderingList_b__16_0, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AF20, PerformanceDebugMenuPage___initializeRenderingList_b__16_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EA40, void, __initializeRenderingList_b__16_1, (app::PerformanceDebugMenuPage * this_ptr, bool v))
    IL2CPP_REGISTER_METHODINFO(0x04764950, PerformanceDebugMenuPage___initializeRenderingList_b__16_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EAA0, float, __initializeRenderingList_b__16_2, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782EA8, PerformanceDebugMenuPage___initializeRenderingList_b__16_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EAD0, void, __initializeRenderingList_b__16_3, (app::PerformanceDebugMenuPage * this_ptr, float v))
    IL2CPP_REGISTER_METHODINFO(0x0472B8F0, PerformanceDebugMenuPage___initializeRenderingList_b__16_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EB00, float, __initializeRenderingList_b__16_4, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768978, PerformanceDebugMenuPage___initializeRenderingList_b__16_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EB30, void, __initializeRenderingList_b__16_5, (app::PerformanceDebugMenuPage * this_ptr, float v))
    IL2CPP_REGISTER_METHODINFO(0x04740308, PerformanceDebugMenuPage___initializeRenderingList_b__16_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EB60, bool, __initializeRenderingList_b__16_6, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B448, PerformanceDebugMenuPage___initializeRenderingList_b__16_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EB90, void, __initializeRenderingList_b__16_7, (app::PerformanceDebugMenuPage * this_ptr, bool v))
    IL2CPP_REGISTER_METHODINFO(0x0478A6F8, PerformanceDebugMenuPage___initializeRenderingList_b__16_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EBF0, int32_t, __initializeRenderingList_b__16_8, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785CE8, PerformanceDebugMenuPage___initializeRenderingList_b__16_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EC20, void, __initializeRenderingList_b__16_9, (app::PerformanceDebugMenuPage * this_ptr, int32_t v))
    IL2CPP_REGISTER_METHODINFO(0x047679D8, PerformanceDebugMenuPage___initializeRenderingList_b__16_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EC50, int32_t, __initializeRenderingList_b__16_10, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D7E8, PerformanceDebugMenuPage___initializeRenderingList_b__16_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EC80, void, __initializeRenderingList_b__16_11, (app::PerformanceDebugMenuPage * this_ptr, int32_t v))
    IL2CPP_REGISTER_METHODINFO(0x0478ABF0, PerformanceDebugMenuPage___initializeRenderingList_b__16_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047ECB0, int32_t, __initializeRenderingList_b__16_12, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757108, PerformanceDebugMenuPage___initializeRenderingList_b__16_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047ECE0, void, __initializeRenderingList_b__16_13, (app::PerformanceDebugMenuPage * this_ptr, int32_t v))
    IL2CPP_REGISTER_METHODINFO(0x0472AA38, PerformanceDebugMenuPage___initializeRenderingList_b__16_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047ED10, bool, __initializeRenderingList_b__16_14, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742EE8, PerformanceDebugMenuPage___initializeRenderingList_b__16_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047ED40, void, __initializeRenderingList_b__16_15, (app::PerformanceDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0478F170, PerformanceDebugMenuPage___initializeRenderingList_b__16_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EDA0, int32_t, __initializeRenderingList_b__16_16, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763698, PerformanceDebugMenuPage___initializeRenderingList_b__16_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EDD0, void, __initializeRenderingList_b__16_17, (app::PerformanceDebugMenuPage * this_ptr, int32_t b))
    IL2CPP_REGISTER_METHODINFO(0x04758900, PerformanceDebugMenuPage___initializeRenderingList_b__16_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EE00, int32_t, __initializeRenderingList_b__16_18, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E310, PerformanceDebugMenuPage___initializeRenderingList_b__16_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EE30, void, __initializeRenderingList_b__16_19, (app::PerformanceDebugMenuPage * this_ptr, int32_t b))
    IL2CPP_REGISTER_METHODINFO(0x0474D2A0, PerformanceDebugMenuPage___initializeRenderingList_b__16_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EE60, int32_t, __initializeRenderingList_b__16_20, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715288, PerformanceDebugMenuPage___initializeRenderingList_b__16_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EE90, void, __initializeRenderingList_b__16_21, (app::PerformanceDebugMenuPage * this_ptr, int32_t b))
    IL2CPP_REGISTER_METHODINFO(0x0472E788, PerformanceDebugMenuPage___initializeRenderingList_b__16_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EEC0, bool, __initializeHDRList_b__20_16, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765CC8, PerformanceDebugMenuPage___initializeHDRList_b__20_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EEF0, void, __initializeHDRList_b__20_17, (app::PerformanceDebugMenuPage * this_ptr, bool val))
    IL2CPP_REGISTER_METHODINFO(0x04798400, PerformanceDebugMenuPage___initializeHDRList_b__20_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EF40, bool, __initializeHDRList_b__20_18, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771FB8, PerformanceDebugMenuPage___initializeHDRList_b__20_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EF70, void, __initializeHDRList_b__20_19, (app::PerformanceDebugMenuPage * this_ptr, bool val))
    IL2CPP_REGISTER_METHODINFO(0x047797B0, PerformanceDebugMenuPage___initializeHDRList_b__20_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EFA0, bool, __initializeHDRList_b__20_20, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047846A8, PerformanceDebugMenuPage___initializeHDRList_b__20_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047EFD0, void, __initializeHDRList_b__20_21, (app::PerformanceDebugMenuPage * this_ptr, bool val))
    IL2CPP_REGISTER_METHODINFO(0x04738AB0, PerformanceDebugMenuPage___initializeHDRList_b__20_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F000, bool, __initializeWaterTweaks_b__43_0, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D3A8, PerformanceDebugMenuPage___initializeWaterTweaks_b__43_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F030, void, __initializeWaterTweaks_b__43_1, (app::PerformanceDebugMenuPage * this_ptr, bool b))
    IL2CPP_REGISTER_METHODINFO(0x04797890, PerformanceDebugMenuPage___initializeWaterTweaks_b__43_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F060, bool, __initializeWaterTweaks_b__43_2, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783598, PerformanceDebugMenuPage___initializeWaterTweaks_b__43_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F090, void, __initializeWaterTweaks_b__43_3, (app::PerformanceDebugMenuPage * this_ptr, bool b))
    IL2CPP_REGISTER_METHODINFO(0x0478E4A8, PerformanceDebugMenuPage___initializeWaterTweaks_b__43_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F0C0, app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum, __initializeWaterTweaks_b__43_6, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704040, PerformanceDebugMenuPage___initializeWaterTweaks_b__43_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F0F0, void, __initializeWaterTweaks_b__43_7, (app::PerformanceDebugMenuPage * this_ptr, app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04785398, PerformanceDebugMenuPage___initializeWaterTweaks_b__43_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F120, int32_t, __initializeRenderingTweaks_b__45_16, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E448, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F150, void, __initializeRenderingTweaks_b__45_17, (app::PerformanceDebugMenuPage * this_ptr, int32_t v))
    IL2CPP_REGISTER_METHODINFO(0x0472EE70, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F180, bool, __initializeRenderingTweaks_b__45_30, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F310, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_30__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F1B0, void, __initializeRenderingTweaks_b__45_31, (app::PerformanceDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04726468, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_31__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F210, bool, __initializeRenderingTweaks_b__45_32, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733A70, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_32__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F240, void, __initializeRenderingTweaks_b__45_33, (app::PerformanceDebugMenuPage * this_ptr, bool b))
    IL2CPP_REGISTER_METHODINFO(0x0472DBE8, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_33__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F270, int32_t, __initializeRenderingTweaks_b__45_34, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474CF28, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_34__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F2A0, void, __initializeRenderingTweaks_b__45_35, (app::PerformanceDebugMenuPage * this_ptr, int32_t b))
    IL2CPP_REGISTER_METHODINFO(0x04722840, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_35__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F2D0, bool, __initializeRenderingTweaks_b__45_38, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767E08, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_38__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F300, void, __initializeRenderingTweaks_b__45_39, (app::PerformanceDebugMenuPage * this_ptr, bool b))
    IL2CPP_REGISTER_METHODINFO(0x0475E470, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_39__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F330, bool, __initializeRenderingTweaks_b__45_40, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712428, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_40__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F360, void, __initializeRenderingTweaks_b__45_41, (app::PerformanceDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0478BC88, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_41__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F390, bool, __initializeRenderingTweaks_b__45_42, (app::PerformanceDebugMenuPage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B328, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_42__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0047F3C0, void, __initializeRenderingTweaks_b__45_43, (app::PerformanceDebugMenuPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04706D20, PerformanceDebugMenuPage___initializeRenderingTweaks_b__45_43__MethodInfo)
}
