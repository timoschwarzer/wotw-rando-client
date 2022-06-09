#include <interception_macros.h>

namespace app::methods::UnityEngine_Playables::PlayableHandle {
IL2CPP_REGISTER_METHOD(0x02964F40, PlayableHandle, get_Null, ());
IL2CPP_REGISTER_METHOD(0x00216AB0, Playable, GetInput, (app::PlayableHandle__Boxed * this_ptr, int32_t input_port));
IL2CPP_REGISTER_METHOD(0x00216AE0, bool, SetInputWeight, (app::PlayableHandle__Boxed * this_ptr, int32_t input_index, float weight));
IL2CPP_REGISTER_METHOD(0x00216B40, float, GetInputWeight, (app::PlayableHandle__Boxed * this_ptr, int32_t input_index));
IL2CPP_REGISTER_METHOD(0x02964FF0, bool, operator___, (app::PlayableHandle x, app::PlayableHandle y));
IL2CPP_REGISTER_METHOD(0x00216B90, bool, Equals_1, (app::PlayableHandle__Boxed * this_ptr, app::Object * p));
IL2CPP_REGISTER_METHOD(0x00216C70, bool, Equals_2, (app::PlayableHandle__Boxed * this_ptr, app::PlayableHandle other));
IL2CPP_REGISTER_METHOD(0x00216C90, int32_t, GetHashCode, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x029651B0, bool, CompareVersion, (app::PlayableHandle lhs, app::PlayableHandle rhs));
IL2CPP_REGISTER_METHOD(0x00216CA0, bool, CheckInputBounds_1, (app::PlayableHandle__Boxed * this_ptr, int32_t input_index));
IL2CPP_REGISTER_METHOD(0x00216CB0, bool, CheckInputBounds_2, (app::PlayableHandle__Boxed * this_ptr, int32_t input_index, bool accept_any));
IL2CPP_REGISTER_METHODINFO(0x04746E98, PlayableHandle_CheckInputBounds_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00216CC0, bool, IsValid, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216CD0, Type *, GetPlayableType, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216CE0, Type *, GetJobType, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216CF0, double, GetSpeed, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216D00, void, SetSpeed, (app::PlayableHandle__Boxed * this_ptr, double value));
IL2CPP_REGISTER_METHOD(0x00216D10, double, GetTime, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216D20, void, SetTime, (app::PlayableHandle__Boxed * this_ptr, double value));
IL2CPP_REGISTER_METHOD(0x00216D30, bool, IsDone, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216D40, void, SetDone, (app::PlayableHandle__Boxed * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00216D50, double, GetDuration, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216D60, void, SetDuration, (app::PlayableHandle__Boxed * this_ptr, double value));
IL2CPP_REGISTER_METHOD(0x00216D70, PlayableGraph, GetGraph, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216DA0, int32_t, GetInputCount, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216DB0, void, SetInputCount, (app::PlayableHandle__Boxed * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x00216DC0, void *, GetAdditionalPayload, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x00216AB0, PlayableHandle, GetInputHandle, (app::PlayableHandle__Boxed * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00216DD0, void, SetInputWeightFromIndex, (app::PlayableHandle__Boxed * this_ptr, int32_t index, float weight));
IL2CPP_REGISTER_METHOD(0x00216DE0, float, GetInputWeightFromIndex, (app::PlayableHandle__Boxed * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x029663A0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02966430, bool, IsValid_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966480, Type *, GetPlayableType_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x029664D0, Type *, GetJobType_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966520, double, GetSpeed_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966570, void, SetSpeed_Injected, (app::PlayableHandle * _unity_self, double value));
IL2CPP_REGISTER_METHOD(0x029665D0, double, GetTime_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966620, void, SetTime_Injected, (app::PlayableHandle * _unity_self, double value));
IL2CPP_REGISTER_METHOD(0x02966680, bool, IsDone_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x029666D0, void, SetDone_Injected, (app::PlayableHandle * _unity_self, bool value));
IL2CPP_REGISTER_METHOD(0x02966730, double, GetDuration_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966780, void, SetDuration_Injected, (app::PlayableHandle * _unity_self, double value));
IL2CPP_REGISTER_METHOD(0x029667E0, void, GetGraph_Injected, (app::PlayableHandle * _unity_self, app::PlayableGraph * ret));
IL2CPP_REGISTER_METHOD(0x02966840, int32_t, GetInputCount_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966890, void, SetInputCount_Injected, (app::PlayableHandle * _unity_self, int32_t value));
IL2CPP_REGISTER_METHOD(0x029668F0, void *, GetAdditionalPayload_Injected, (app::PlayableHandle * _unity_self));
IL2CPP_REGISTER_METHOD(0x02966940, void, GetInputHandle_Injected, (app::PlayableHandle * _unity_self, int32_t index, app::PlayableHandle * ret));
IL2CPP_REGISTER_METHOD(0x029669B0, void, SetInputWeightFromIndex_Injected, (app::PlayableHandle * _unity_self, int32_t index, float weight));
IL2CPP_REGISTER_METHOD(0x02966A20, float, GetInputWeightFromIndex_Injected, (app::PlayableHandle * _unity_self, int32_t index));
IL2CPP_REGISTER_METHOD(0x0012CE70, bool, IsPlayableOfType_1, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012CF30, bool, IsPlayableOfType_2, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474DAC8, PlayableHandle_IsPlayableOfType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012CFF0, bool, IsPlayableOfType_3, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047362F8, PlayableHandle_IsPlayableOfType_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D0B0, bool, IsPlayableOfType_4, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04710CE8, PlayableHandle_IsPlayableOfType_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D170, bool, IsPlayableOfType_5, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478CAD0, PlayableHandle_IsPlayableOfType_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D230, bool, IsPlayableOfType_6, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04723FD0, PlayableHandle_IsPlayableOfType_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D2F0, bool, IsPlayableOfType_7, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473BEE8, PlayableHandle_IsPlayableOfType_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D3B0, bool, IsPlayableOfType_8, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047138E8, PlayableHandle_IsPlayableOfType_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D470, bool, IsPlayableOfType_9, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04722318, PlayableHandle_IsPlayableOfType_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012D530, bool, IsPlayableOfType_10, (app::PlayableHandle__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0477FE20, PlayableHandle_IsPlayableOfType_9__MethodInfo);
}
